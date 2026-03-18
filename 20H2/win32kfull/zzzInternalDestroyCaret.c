/*
 * XREFs of zzzInternalDestroyCaret @ 0x1C010A9B0
 * Callers:
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     zzzDestroyCaret @ 0x1C010A730 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C010A844 (xxxCreateCaret.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     zzzInternalHideCaret @ 0x1C00D68F0 (zzzInternalHideCaret.c)
 */

void zzzInternalDestroyCaret()
{
  __int64 v0; // rbx
  __int64 v1; // rsi
  struct tagWND *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  v6[2] = 0LL;
  zzzInternalHideCaret();
  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v0 + 344) )
  {
    FindTimer(*(_QWORD *)(v0 + 296), 0xFFFFLL, 2u, 1, 0LL);
    *(_QWORD *)(v0 + 344) = 0LL;
  }
  v1 = v0 + 296;
  *(_QWORD *)(v0 + 336) = 0LL;
  *(_DWORD *)(v0 + 308) = 0;
  v2 = *(struct tagWND **)(v0 + 296);
  if ( v2 )
  {
    v6[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v6;
    v6[1] = v2;
    HMLockObject(v2);
    HMAssignmentUnlock(v1);
    xxxWindowEvent(0x8001u, v2, -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    ThreadUnlock1(v4, v3, v5);
  }
}
