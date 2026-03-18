/*
 * XREFs of zzzInternalDestroyCaret @ 0x1C005FD5C
 * Callers:
 *     zzzDestroyCaret @ 0x1C005DB20 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C005DC34 (xxxCreateCaret.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 * Callees:
 *     zzzInternalHideCaret @ 0x1C005FE40 (zzzInternalHideCaret.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 */

__int64 zzzInternalDestroyCaret()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  v7[2] = 0LL;
  result = zzzInternalHideCaret();
  v1 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v1 + 344) )
  {
    result = FindTimer(*(_QWORD *)(v1 + 296), 0xFFFF, 2, 1, 0LL);
    *(_QWORD *)(v1 + 344) = 0LL;
  }
  v2 = v1 + 296;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_DWORD *)(v1 + 308) = 0;
  v3 = *(_QWORD *)(v1 + 296);
  if ( v3 )
  {
    v7[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v7;
    v7[1] = v3;
    HMLockObject(v3);
    HMAssignmentUnlock(v2);
    xxxWindowEvent(0x8001u, gdwDeferWinEvent != 0 ? 2 : 0);
    return ThreadUnlock1(v5, v4, v6);
  }
  return result;
}
