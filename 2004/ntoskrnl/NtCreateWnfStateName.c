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

__int64 __fastcall NtCreateWnfStateName(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct _EX_RUNDOWN_REF *a7)
{
  char v7; // bl
  _QWORD *v10; // r13
  __int64 v11; // rdx
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  struct _KPROCESS *Process; // rdi
  int StateName; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-A0h] BYREF
  int v21[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 *v22; // [rsp+58h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v23[4]; // [rsp+60h] [rbp-88h] BYREF
  _DWORD v24[2]; // [rsp+80h] [rbp-68h] BYREF
  __int128 *v25; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v26; // [rsp+90h] [rbp-58h]
  __int128 v27; // [rsp+98h] [rbp-50h] BYREF

  v7 = a4;
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
    LOBYTE(a4) = 1;
    StateName = SeCaptureSecurityDescriptor((_DWORD)a7, 0, 1, a4, (__int64)&SecurityDescriptor);
    if ( StateName < 0 )
      goto LABEL_18;
LABEL_3:
    ExpWnfSpecializeSecurityDescriptor(SecurityDescriptor);
    if ( a2 > 3
      || !a2
      || a3 > 5
      || v7 && ((a3 & 0xFFFFFFFB) != 0 || a2 != 1)
      || a6 > 0x1000
      || a3 == 3 && a2 == 3
      || a3 == 5 )
    {
      StateName = -1073741811;
    }
    else if ( a2 == 3 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    {
      StateName = ExpWnfGenerateStateName((__int64 *)&v20, a2, a3, v7);
      if ( StateName >= 0 )
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
            v15 = v20;
          }
          else
          {
            Process = PsInitialSystemProcess;
          }
          StateName = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v21, (__int64)Process, 0LL, a3, 0LL);
          if ( StateName >= 0 )
          {
            StateName = ExpWnfCreateNameInstance(*(unsigned __int64 *)v21, v15, (__int64)v24, Process, v23);
            if ( StateName >= 0 )
              ExReleaseRundownProtection_0(v23[0] + 1);
          }
        }
        else
        {
          StateName = ExpWnfRegisterPermanentName(v15, v24);
        }
      }
    }
    else
    {
      StateName = -1073741727;
    }
    goto LABEL_18;
  }
  v14 = 0x7FFFFFFF0000LL;
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
    StateName = -1073741819;
    goto LABEL_18;
  }
  LOBYTE(a4) = 1;
  LOBYTE(v11) = PreviousMode;
  StateName = SeCaptureSecurityDescriptor((_DWORD)a7, v11, 1, a4, (__int64)&SecurityDescriptor);
  if ( StateName >= 0 )
    goto LABEL_3;
LABEL_18:
  if ( *(_QWORD *)v21 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v21 + 8LL));
  if ( SecurityDescriptor && SecurityDescriptor != a7 )
  {
    LOBYTE(v14) = 1;
    LOBYTE(v11) = PreviousMode;
    SeReleaseSecurityDescriptor(SecurityDescriptor, v11, v14, a4);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)StateName;
}
