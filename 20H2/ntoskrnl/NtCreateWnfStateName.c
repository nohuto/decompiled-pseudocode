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

__int64 __fastcall NtCreateWnfStateName(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int64 a5,
        unsigned int a6,
        PSECURITY_DESCRIPTOR a7)
{
  _QWORD *v10; // r13
  __int64 v11; // rdx
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v14; // r9
  __int64 v15; // rbx
  _KPROCESS *Process; // rdi
  int NameInstance; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-A0h] BYREF
  int v21[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 *v22; // [rsp+58h] [rbp-90h]
  _QWORD v23[4]; // [rsp+60h] [rbp-88h] BYREF
  _DWORD v24[2]; // [rsp+80h] [rbp-68h] BYREF
  __int128 *v25; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v26; // [rsp+90h] [rbp-58h]
  __int128 v27; // [rsp+98h] [rbp-50h] BYREF

  v10 = (_QWORD *)a1;
  v11 = a5;
  v23[1] = a7;
  v27 = 0LL;
  v20 = 0LL;
  v23[0] = 0LL;
  v24[1] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v21 = 0LL;
  SecurityDescriptor = 0LL;
  v22 = (__int128 *)a5;
  if ( !PreviousMode )
  {
    NameInstance = SeCaptureSecurityDescriptor((__int64)a7, 0, PagedPool, 1, &SecurityDescriptor);
    if ( NameInstance < 0 )
      goto LABEL_18;
LABEL_3:
    ExpWnfSpecializeSecurityDescriptor(SecurityDescriptor);
    if ( a2 > 3
      || !a2
      || a3 > 5
      || a4 && ((a3 & 0xFFFFFFFB) != 0 || a2 != 1)
      || a6 > 0x1000
      || a3 == 3 && a2 == 3
      || a3 == 5 )
    {
      NameInstance = -1073741811;
    }
    else if ( a2 == 3 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    {
      LOBYTE(v14) = a4;
      NameInstance = ExpWnfGenerateStateName(&v20, a2, a3, v14);
      if ( NameInstance >= 0 )
      {
        v15 = v20;
        *v10 = v20 ^ 0x41C64E6DA3BC0074LL;
        v24[0] = a6;
        v25 = v22;
        v26 = SecurityDescriptor;
        if ( a2 == 3 )
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
          NameInstance = ExpWnfResolveScopeInstance((int)v21, (int)Process, 0, a3, 0LL);
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
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_BYTE *)a1 = *(_BYTE *)a1;
  *(_BYTE *)(a1 + 7) = *(_BYTE *)(a1 + 7);
  if ( a5 )
  {
    if ( a5 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v27 = *(_OWORD *)v11;
    v22 = &v27;
  }
  if ( !a7 )
  {
    NameInstance = -1073741819;
    goto LABEL_18;
  }
  NameInstance = SeCaptureSecurityDescriptor((__int64)a7, PreviousMode, PagedPool, 1, &SecurityDescriptor);
  if ( NameInstance >= 0 )
    goto LABEL_3;
LABEL_18:
  if ( *(_QWORD *)v21 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v21 + 8LL));
  if ( SecurityDescriptor && SecurityDescriptor != a7 )
    SeReleaseSecurityDescriptor(SecurityDescriptor, PreviousMode, 1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)NameInstance;
}
