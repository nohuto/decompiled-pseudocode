/*
 * XREFs of NtCreateWnfStateName @ 0x14066F980
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExpWnfGenerateStateName @ 0x14066FCE4 (ExpWnfGenerateStateName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14066FDE8 (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x14066FED4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfRegisterPermanentName @ 0x1406E5CB0 (ExpWnfRegisterPermanentName.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ExpWnfResolveScopeInstance @ 0x140798334 (ExpWnfResolveScopeInstance.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 */

__int64 __fastcall NtCreateWnfStateName(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        PSECURITY_DESCRIPTOR a7)
{
  char v7; // bl
  unsigned __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v14; // rdx
  __int64 v15; // rbx
  _KPROCESS *Process; // rdi
  __int64 v18; // rcx
  int NameInstance; // [rsp+34h] [rbp-B4h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-A0h] BYREF
  int v22[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 *v23; // [rsp+58h] [rbp-90h]
  _QWORD v24[2]; // [rsp+60h] [rbp-88h] BYREF
  _DWORD v25[2]; // [rsp+70h] [rbp-78h] BYREF
  __int128 *v26; // [rsp+78h] [rbp-70h]
  PSECURITY_DESCRIPTOR v27; // [rsp+80h] [rbp-68h]
  __int128 v28; // [rsp+98h] [rbp-50h] BYREF

  v7 = a4;
  v11 = a5;
  v24[1] = a7;
  v28 = 0LL;
  v21 = 0LL;
  v24[0] = 0LL;
  v25[1] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v22 = 0LL;
  SecurityDescriptor = 0LL;
  v23 = (__int128 *)a5;
  if ( !PreviousMode )
  {
    LOBYTE(a4) = 1;
    NameInstance = SeCaptureSecurityDescriptor((_DWORD)a7, 0, 1, a4, (__int64)&SecurityDescriptor);
    if ( NameInstance < 0 )
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
      NameInstance = -1073741811;
    }
    else if ( a2 == 3 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    {
      LOBYTE(a4) = v7;
      NameInstance = ExpWnfGenerateStateName(&v21, a2, a3, a4);
      if ( NameInstance >= 0 )
      {
        v15 = v21;
        *a1 = v21 ^ 0x41C64E6DA3BC0074LL;
        v25[0] = a6;
        v26 = v23;
        v27 = SecurityDescriptor;
        if ( a2 == 3 )
        {
          if ( PreviousMode )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            LODWORD(v15) = v21;
          }
          else
          {
            LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
          }
          NameInstance = ExpWnfResolveScopeInstance((int)v22, (int)Process, 0, a3, 0LL);
          if ( NameInstance >= 0 )
          {
            NameInstance = ExpWnfCreateNameInstance(v22[0], v15, (unsigned int)v25, (_DWORD)Process, (__int64)v24);
            if ( NameInstance >= 0 )
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v24[0] + 8LL));
          }
        }
        else
        {
          NameInstance = ExpWnfRegisterPermanentName(v15, v25);
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
  v18 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v18 = (__int64)a1;
  *(_BYTE *)v18 = *(_BYTE *)v18;
  *(_BYTE *)(v18 + 7) = *(_BYTE *)(v18 + 7);
  if ( a5 )
  {
    if ( a5 < 0x7FFFFFFF0000LL )
      v14 = a5;
    v28 = *(_OWORD *)v14;
    v23 = &v28;
  }
  if ( !a7 )
  {
    NameInstance = -1073741819;
    goto LABEL_18;
  }
  LOBYTE(a4) = 1;
  LOBYTE(v14) = PreviousMode;
  NameInstance = SeCaptureSecurityDescriptor((_DWORD)a7, v14, 1, a4, (__int64)&SecurityDescriptor);
  if ( NameInstance >= 0 )
    goto LABEL_3;
LABEL_18:
  if ( *(_QWORD *)v22 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v22 + 8LL));
  if ( SecurityDescriptor && SecurityDescriptor != a7 )
  {
    LOBYTE(v11) = 1;
    LOBYTE(v14) = PreviousMode;
    SeReleaseSecurityDescriptor(SecurityDescriptor, v14, v11, a4);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)NameInstance;
}
