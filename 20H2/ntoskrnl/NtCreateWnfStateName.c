/*
 * XREFs of NtCreateWnfStateName @ 0x140652140
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     SeCaptureSecurityDescriptor @ 0x140605830 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14061F930 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     ExpWnfGenerateStateName @ 0x1406524A4 (ExpWnfGenerateStateName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1406525B4 (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x14065282C (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140654854 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfRegisterPermanentName @ 0x1406E1C10 (ExpWnfRegisterPermanentName.c)
 */

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
  __int64 v14; // r9
  __int64 v15; // rbx
  _KPROCESS *Process; // rdi
  NTSTATUS NameInstance; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR v19; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-A0h] BYREF
  int v21[2]; // [rsp+50h] [rbp-98h] BYREF
  PCWNF_TYPE_ID v22; // [rsp+58h] [rbp-90h]
  _QWORD v23[4]; // [rsp+60h] [rbp-88h] BYREF
  _DWORD v24[2]; // [rsp+80h] [rbp-68h] BYREF
  PCWNF_TYPE_ID v25; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v26; // [rsp+90h] [rbp-58h]
  __int128 v27; // [rsp+98h] [rbp-50h] BYREF

  v10 = StateName;
  v11 = (__int64)TypeId;
  v23[1] = SecurityDescriptor;
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
    NameInstance = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v19);
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
      LOBYTE(v14) = PersistData;
      NameInstance = ExpWnfGenerateStateName(&v20, (unsigned int)NameLifetime, (unsigned int)DataScope, v14);
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
            LODWORD(v15) = v20;
          }
          else
          {
            LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
          }
          NameInstance = ExpWnfResolveScopeInstance((int)v21, (int)Process, 0, DataScope, 0LL);
          if ( NameInstance >= 0 )
          {
            NameInstance = ExpWnfCreateNameInstance(v21[0], v15, (unsigned int)v24, (_DWORD)Process, (__int64)v23);
            if ( NameInstance >= 0 )
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v23[0] + 8LL));
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
  NameInstance = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, PagedPool, 1, &v19);
  if ( NameInstance >= 0 )
    goto LABEL_3;
LABEL_18:
  if ( *(_QWORD *)v21 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v21 + 8LL));
  if ( v19 && v19 != SecurityDescriptor )
    SeReleaseSecurityDescriptor(v19, PreviousMode, 1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return NameInstance;
}
