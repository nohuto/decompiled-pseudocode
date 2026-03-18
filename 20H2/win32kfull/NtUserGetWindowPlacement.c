/*
 * XREFs of NtUserGetWindowPlacement @ 0x1C003A520
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowPlacement @ 0x1C003A648 (_GetWindowPlacement.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned int WindowPlacement; // ebx
  __int128 v8; // [rsp+48h] [rbp-40h] BYREF
  __int128 v9; // [rsp+58h] [rbp-30h]
  __int64 v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+70h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( a2 >= MmUserProbeAddress )
      *(_DWORD *)MmUserProbeAddress = 0;
    *(_OWORD *)a2 = *(_OWORD *)a2;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a2 + 40);
    LODWORD(v8) = *(_DWORD *)a2;
    WindowPlacement = GetWindowPlacement(v5, &v8, 1LL);
    if ( WindowPlacement )
    {
      *(_OWORD *)a2 = v8;
      *(_OWORD *)(a2 + 16) = v9;
      *(_QWORD *)(a2 + 32) = v10;
      *(_DWORD *)(a2 + 40) = v11;
    }
  }
  else
  {
    WindowPlacement = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return WindowPlacement;
}
