/*
 * XREFs of NtUserBeginPaint @ 0x1C008EDF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEndPaint @ 0x1C005D6C0 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C008B1A8 (xxxBeginPaint.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall NtUserBeginPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagWND *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // r8
  __int128 v11; // [rsp+38h] [rbp-90h] BYREF
  __int64 v12; // [rsp+48h] [rbp-80h]
  _OWORD v13[5]; // [rsp+60h] [rbp-68h] BYREF

  memset(v13, 0, 0x48uLL);
  v11 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = (struct tagWND *)ValidateHwnd(a1);
  v8 = 0LL;
  if ( v6 )
  {
    *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v11;
    *((_QWORD *)&v11 + 1) = v6;
    HMLockObject(v6);
    v8 = xxxBeginPaint(v6, (__int64)v13);
    DWORD1(v13[4]) = 0;
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    *(_OWORD *)a2 = v13[0];
    *(_OWORD *)(a2 + 16) = v13[1];
    *(_OWORD *)(a2 + 32) = v13[2];
    *(_OWORD *)(a2 + 48) = v13[3];
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v13[4];
    ThreadUnlock1(MmUserProbeAddress, MmUserProbeAddress, v9);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7);
  return v8;
}
