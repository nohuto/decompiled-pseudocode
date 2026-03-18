/*
 * XREFs of NtUserRegisterBSDRWindow @ 0x1C0128820
 * Callers:
 *     <none>
 * Callees:
 *     IsPrivileged @ 0x1C0039594 (IsPrivileged.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall NtUserRegisterBSDRWindow(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_8;
  }
  else
  {
    v7 = 0LL;
  }
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogonUI || !gpidLogonUI && (unsigned int)IsPrivileged(psTcb) )
  {
    if ( v7 )
    {
      v10[1] = v7;
      v10[0] = &gspwndBSDR;
      HMAssignmentLock(v10);
    }
    if ( (_DWORD)v2 )
    {
      v6 = gptiShutdownWaiter;
      if ( gptiShutdownWaiter )
        PostEventMessageEx(
          gptiShutdownWaiter,
          *(struct tagQ **)(gptiShutdownWaiter + 424LL),
          0x13u,
          0LL,
          0x329u,
          v2,
          0xFFFFFFFFLL,
          0LL);
    }
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(5LL, v5, v8);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v5, v8);
  return v4;
}
