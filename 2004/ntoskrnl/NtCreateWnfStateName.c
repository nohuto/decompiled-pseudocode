/*
 * XREFs of NtCreateWnfStateName @ 0x140626360
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ExpWnfCreateNameInstance @ 0x140621678 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406236A4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x140626250 (ExpWnfGenerateStateName.c)
 *     SeReleaseSecurityDescriptor @ 0x140628670 (SeReleaseSecurityDescriptor.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14063D80C (ExpWnfSpecializeSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSecurityDescriptor @ 0x14067DCA0 (SeCaptureSecurityDescriptor.c)
 *     ExpWnfRegisterPermanentName @ 0x14070F3F4 (ExpWnfRegisterPermanentName.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtCreateWnfStateName(
        PWNF_STATE_NAME StateName,
        WNF_STATE_NAME_LIFETIME NameLifetime,
        WNF_DATA_SCOPE DataScope,
        BOOLEAN PersistData,
        PCWNF_TYPE_ID TypeId,
        ULONG MaximumStateSize,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  PWNF_STATE_NAME v10; // r13
  __int64 v11; // rdx
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  struct _KPROCESS *Process; // rdi
  NTSTATUS NameInstance; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR v19; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-A0h] BYREF
  int v21[2]; // [rsp+50h] [rbp-98h] BYREF
  PCWNF_TYPE_ID v22; // [rsp+58h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v23[4]; // [rsp+60h] [rbp-88h] BYREF
  _DWORD v24[2]; // [rsp+80h] [rbp-68h] BYREF
  PCWNF_TYPE_ID v25; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v26; // [rsp+90h] [rbp-58h]
  __int128 v27; // [rsp+98h] [rbp-50h] BYREF

  v10 = StateName;
  v11 = (__int64)TypeId;
  v23[1] = (struct _EX_RUNDOWN_REF *)SecurityDescriptor;
  v27 = 0LL;
  v20 = 0LL;
  v23[0] = 0LL;
  v24[1] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v21 = 0LL;
  v19 = 0LL;
  v22 = TypeId;
  if ( !PreviousMode )
  {
    NameInstance = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, 0, 1, 1, (__int64)&v19);
    if ( NameInstance < 0 )
      goto LABEL_18;
LABEL_3:
    ExpWnfSpecializeSecurityDescriptor(v19);
    if ( (unsigned int)NameLifetime > WnfTemporaryStateName
      || NameLifetime == WnfWellKnownStateName
      || (unsigned int)DataScope > WnfDataScopePhysicalMachine
      || PersistData && ((DataScope & 0xFFFFFFFB) != 0 || NameLifetime != WnfPermanentStateName)
      || MaximumStateSize > 0x1000
      || DataScope == WnfDataScopeProcess && NameLifetime == WnfTemporaryStateName
      || DataScope == WnfDataScopePhysicalMachine )
    {
      NameInstance = -1073741811;
    }
    else if ( NameLifetime == WnfTemporaryStateName || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    {
      NameInstance = ExpWnfGenerateStateName((__int64 *)&v20, NameLifetime, DataScope, PersistData);
      if ( NameInstance >= 0 )
      {
        v15 = v20;
        *v10 = (_WNF_STATE_NAME)(v20 ^ 0x41C64E6DA3BC0074LL);
        v24[0] = MaximumStateSize;
        v25 = v22;
        v26 = v19;
        if ( NameLifetime == WnfTemporaryStateName )
        {
          if ( PreviousMode )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v15 = v20;
          }
          else
          {
            Process = PsInitialSystemProcess;
          }
          NameInstance = ExpWnfResolveScopeInstance(
                           (struct _EX_RUNDOWN_REF **)v21,
                           (__int64)Process,
                           0LL,
                           DataScope,
                           0LL);
          if ( NameInstance >= 0 )
          {
            NameInstance = ExpWnfCreateNameInstance(*(unsigned __int64 *)v21, v15, (__int64)v24, Process, v23);
            if ( NameInstance >= 0 )
              ExReleaseRundownProtection_0(v23[0] + 1);
          }
        }
        else
        {
          NameInstance = ExpWnfRegisterPermanentName(v15, v24);
        }
      }
    }
    else
    {
      NameInstance = -1073741727;
    }
    goto LABEL_18;
  }
  v14 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)StateName >= 0x7FFFFFFF0000LL )
    StateName = (PWNF_STATE_NAME)0x7FFFFFFF0000LL;
  LOBYTE(StateName->Data[0]) = StateName->Data[0];
  HIBYTE(StateName->Data[1]) = HIBYTE(StateName->Data[1]);
  if ( TypeId )
  {
    if ( (unsigned __int64)TypeId >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v27 = *(_OWORD *)v11;
    v22 = (PCWNF_TYPE_ID)&v27;
  }
  if ( !SecurityDescriptor )
  {
    NameInstance = -1073741819;
    goto LABEL_18;
  }
  LOBYTE(v11) = PreviousMode;
  NameInstance = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, v11, 1, 1, (__int64)&v19);
  if ( NameInstance >= 0 )
    goto LABEL_3;
LABEL_18:
  if ( *(_QWORD *)v21 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v21 + 8LL));
  if ( v19 && v19 != SecurityDescriptor )
  {
    LOBYTE(v14) = 1;
    LOBYTE(v11) = PreviousMode;
    SeReleaseSecurityDescriptor(v19, v11, v14, PersistData);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return NameInstance;
}
