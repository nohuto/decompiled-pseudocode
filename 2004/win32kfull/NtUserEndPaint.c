/*
 * XREFs of NtUserEndPaint @ 0x1C005D590
 * Callers:
 *     <none>
 * Callees:
 *     xxxEndPaint @ 0x1C005D6C0 (xxxEndPaint.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall NtUserEndPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagWND *v6; // rsi
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  __int64 v14; // [rsp+40h] [rbp-68h]
  _OWORD v15[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v15, 0, 0x48uLL);
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = (struct tagWND *)ValidateHwnd(a1);
  v8 = 0;
  if ( v6 )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v13;
    *((_QWORD *)&v13 + 1) = v6;
    HMLockObject(v6);
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v15[0] = *(_OWORD *)a2;
    v15[1] = *(_OWORD *)(a2 + 16);
    v15[2] = *(_OWORD *)(a2 + 32);
    v15[3] = *(_OWORD *)(a2 + 48);
    *(_QWORD *)&v15[4] = *(_QWORD *)(a2 + 64);
    v8 = xxxEndPaint(v6);
    ThreadUnlock1(v10, v9, v11);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7);
  return v8;
}
