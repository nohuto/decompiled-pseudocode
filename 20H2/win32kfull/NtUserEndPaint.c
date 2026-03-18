/*
 * XREFs of NtUserEndPaint @ 0x1C00F4E30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxEndPaint @ 0x1C00F4F60 (xxxEndPaint.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall NtUserEndPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+30h] [rbp-78h] BYREF
  __int64 v12; // [rsp+40h] [rbp-68h]
  _OWORD v13[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v13, 0, 0x48uLL);
  v11 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  v6 = 0;
  if ( v5 )
  {
    *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v11;
    *((_QWORD *)&v11 + 1) = v5;
    HMLockObject(v5);
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v13[0] = *(_OWORD *)a2;
    v13[1] = *(_OWORD *)(a2 + 16);
    v13[2] = *(_OWORD *)(a2 + 32);
    v13[3] = *(_OWORD *)(a2 + 48);
    *(_QWORD *)&v13[4] = *(_QWORD *)(a2 + 64);
    v6 = xxxEndPaint(v5);
    ThreadUnlock1(v8, v7, v9);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
