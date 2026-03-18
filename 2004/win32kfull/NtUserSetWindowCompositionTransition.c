/*
 * XREFs of NtUserSetWindowCompositionTransition @ 0x1C0119500
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C004AC8C (UserSetLastStatus.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     DwmAsyncSetTransition @ 0x1C0119778 (DwmAsyncSetTransition.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserSetWindowCompositionTransition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        ULONG64 a5,
        ULONG64 a6,
        ULONG64 a7)
{
  __int128 *v10; // r15
  __int128 *v11; // r12
  __int128 *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  NTSTATUS v17; // edi
  void *v18; // rax
  BOOL v19; // ebx
  __int128 v21; // [rsp+98h] [rbp-80h] BYREF
  __int128 v22; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v23; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v24; // [rsp+C8h] [rbp-50h] BYREF

  v10 = (__int128 *)a5;
  v11 = (__int128 *)a6;
  v12 = (__int128 *)a7;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 1LL);
  v15 = ValidateHwnd(a1);
  if ( v15 )
  {
    v17 = 0;
    if ( (!a4 || a3) && (!a6 || a5) )
    {
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (__int128 *)MmUserProbeAddress;
        v21 = *a4;
        a4 = &v21;
      }
      if ( a5 )
      {
        if ( a5 >= MmUserProbeAddress )
          v10 = (__int128 *)MmUserProbeAddress;
        v22 = *v10;
        v10 = &v22;
      }
      if ( a6 )
      {
        if ( a6 >= MmUserProbeAddress )
          v11 = (__int128 *)MmUserProbeAddress;
        v23 = *v11;
        v11 = &v23;
      }
      if ( a7 )
      {
        if ( a7 >= MmUserProbeAddress )
          v12 = (__int128 *)MmUserProbeAddress;
        v24 = *v12;
        v12 = &v24;
      }
      if ( (unsigned int)IsTopLevelWindow(v15) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v15) )
        {
          v18 = (void *)ReferenceDwmApiPort(v14);
          v17 = DwmAsyncSetTransition(v18, (__int64)a4, (__int64)v10, (__int64)v11, (__int64)v12);
        }
      }
      else
      {
        v17 = -1073741816;
      }
    }
    else
    {
      v17 = -1073741811;
    }
    v19 = v17 >= 0;
    if ( v17 < 0 )
    {
      v19 = 0;
      UserSetLastStatus(v17, 1);
    }
  }
  else
  {
    v19 = 0;
  }
  UserSessionSwitchLeaveCrit(v14, v13, v16);
  return v19;
}
