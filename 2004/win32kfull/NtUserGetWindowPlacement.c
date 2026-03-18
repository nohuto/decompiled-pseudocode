/*
 * XREFs of NtUserGetWindowPlacement @ 0x1C0027BD0
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowPlacement @ 0x1C00278AC (_GetWindowPlacement.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int WindowPlacement; // ebx
  __int128 v10; // [rsp+48h] [rbp-40h] BYREF
  __int128 v11; // [rsp+58h] [rbp-30h]
  __int64 v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+70h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    if ( a2 >= MmUserProbeAddress )
      *(_DWORD *)MmUserProbeAddress = 0;
    *(_OWORD *)a2 = *(_OWORD *)a2;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a2 + 40);
    LODWORD(v10) = *(_DWORD *)a2;
    WindowPlacement = GetWindowPlacement(v7, (__int64)&v10, 1);
    if ( WindowPlacement )
    {
      *(_OWORD *)a2 = v10;
      *(_OWORD *)(a2 + 16) = v11;
      *(_QWORD *)(a2 + 32) = v12;
      *(_DWORD *)(a2 + 40) = v13;
    }
  }
  else
  {
    WindowPlacement = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return WindowPlacement;
}
