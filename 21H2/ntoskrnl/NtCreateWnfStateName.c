/*
 * XREFs of NtCreateWnfStateName @ 0x14069D180
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExpWnfRegisterPermanentName @ 0x140620B14 (ExpWnfRegisterPermanentName.c)
 *     SeCaptureSecurityDescriptor @ 0x140650980 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140651570 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ExpWnfCreateNameInstance @ 0x14069D4E4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfGenerateStateName @ 0x14069D860 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x14069EF64 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1406A0788 (ExpWnfSpecializeSecurityDescriptor.c)
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
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  _KPROCESS *Process; // rdi
  NTSTATUS NameInstance; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR v20; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-A0h] BYREF
  int v22[2]; // [rsp+50h] [rbp-98h] BYREF
  PCWNF_TYPE_ID v23; // [rsp+58h] [rbp-90h]
  _QWORD v24[4]; // [rsp+60h] [rbp-88h] BYREF
  _DWORD v25[2]; // [rsp+80h] [rbp-68h] BYREF
  PCWNF_TYPE_ID v26; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v27; // [rsp+90h] [rbp-58h]
  __int128 v28; // [rsp+98h] [rbp-50h] BYREF

  v10 = StateName;
  v11 = (__int64)TypeId;
  v24[1] = SecurityDescriptor;
  v28 = 0LL;
  v21 = 0LL;
  v24[0] = 0LL;
  v25[1] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v22 = 0LL;
  v20 = 0LL;
  v23 = TypeId;
  if ( !PreviousMode )
  {
    NameInstance = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v20);
    if ( NameInstance < 0 )
      goto LABEL_18;
LABEL_3:
    ExpWnfSpecializeSecurityDescriptor(v20);
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
      LOBYTE(v15) = PersistData;
      NameInstance = ExpWnfGenerateStateName(&v21, (unsigned int)NameLifetime, (unsigned int)DataScope, v15);
      if ( NameInstance >= 0 )
      {
        v16 = v21;
        *v10 = (_WNF_STATE_NAME)(v21 ^ 0x41C64E6DA3BC0074LL);
        v25[0] = MaximumStateSize;
        v26 = v23;
        v27 = v20;
        if ( NameLifetime == WnfTemporaryStateName )
        {
          if ( PreviousMode )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            LODWORD(v16) = v21;
          }
          else
          {
            LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
          }
          NameInstance = ExpWnfResolveScopeInstance((int)v22, (int)Process, 0, DataScope, 0LL);
          if ( NameInstance >= 0 )
          {
            NameInstance = ExpWnfCreateNameInstance(v22[0], v16, (unsigned int)v25, (_DWORD)Process, (__int64)v24);
            if ( NameInstance >= 0 )
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v24[0] + 8LL));
          }
        }
        else
        {
          NameInstance = ExpWnfRegisterPermanentName(v16, (__int64)v25);
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
    v28 = *(_OWORD *)v11;
    v23 = (PCWNF_TYPE_ID)&v28;
  }
  if ( !SecurityDescriptor )
  {
    NameInstance = -1073741819;
    goto LABEL_18;
  }
  NameInstance = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, PagedPool, 1, &v20);
  if ( NameInstance >= 0 )
    goto LABEL_3;
LABEL_18:
  if ( *(_QWORD *)v22 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v22 + 8LL));
  if ( v20 && v20 != SecurityDescriptor )
    SeReleaseSecurityDescriptor(v20, PreviousMode, 1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v14, PersistData);
  return NameInstance;
}
