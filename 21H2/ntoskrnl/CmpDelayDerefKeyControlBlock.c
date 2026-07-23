/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x1406DE0FC
 * Callers:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1405CD088 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406DDF90 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1406DDFD4 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406E2D00 (CmpFindSubKeyByNumberEx.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1408705A8 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14087AC98 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14066782C (CmpDoQueueLateUnloadWorker.c)
 */

char __fastcall CmpDelayDerefKeyControlBlock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // r11
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  bool v5; // r10
  _QWORD *v6; // rax
  _QWORD *v7; // r8

  v2 = *(_QWORD *)(BugCheckParameter2 + 32);
  v3 = *(_QWORD *)BugCheckParameter2;
  do
  {
    if ( v3 <= 1 )
    {
      v6 = (_QWORD *)(BugCheckParameter2 + 224);
      if ( (_QWORD *)*v6 != v6 )
        KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 1uLL, 0LL);
      v7 = *(_QWORD **)(a2 + 8);
      if ( *v7 != a2 )
        __fastfail(3u);
      *v6 = a2;
      *(_QWORD *)(BugCheckParameter2 + 232) = v7;
      *v7 = v6;
      *(_QWORD *)(a2 + 8) = v6;
      *(_BYTE *)(BugCheckParameter2 + 64) |= 1u;
      return (char)v6;
    }
    v4 = v3 - 1;
    v5 = v3 == 3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v2 + 2936) == 1;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v4, v3);
    LOBYTE(v6) = v4 + 1;
  }
  while ( v3 != v4 + 1 );
  if ( v3 < v4 )
    KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
  if ( v5 )
    LOBYTE(v6) = CmpDoQueueLateUnloadWorker(v2);
  return (char)v6;
}
