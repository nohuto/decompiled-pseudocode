/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x14067232C
 * Callers:
 *     CmpCleanUpKcbCachedSymlink @ 0x1406721C0 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140672204 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFindSubKeyByNumberEx @ 0x140676250 (CmpFindSubKeyByNumberEx.c)
 *     CmpDiscardKcb @ 0x140701A1C (CmpDiscardKcb.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140872C18 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14087D1BC (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14070121C (CmpDoQueueLateUnloadWorker.c)
 */

_QWORD *__fastcall CmpDelayDerefKeyControlBlock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // r11
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  bool v5; // r10
  _QWORD *result; // rax
  _QWORD *v7; // r8

  v2 = *(_QWORD *)(BugCheckParameter2 + 32);
  v3 = *(_QWORD *)BugCheckParameter2;
  while ( v3 > 1 )
  {
    v4 = v3 - 1;
    v5 = v3 == 3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v2 + 2936) == 1;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v4, v3);
    result = (_QWORD *)(v4 + 1);
    if ( v3 == v4 + 1 )
    {
      if ( v3 < v4 )
        KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
      if ( v5 )
        return (_QWORD *)CmpDoQueueLateUnloadWorker(v2);
      return result;
    }
  }
  v7 = *(_QWORD **)(a2 + 8);
  result = (_QWORD *)(BugCheckParameter2 + 224);
  if ( *v7 != a2 )
    __fastfail(3u);
  *result = a2;
  *(_QWORD *)(BugCheckParameter2 + 232) = v7;
  *v7 = result;
  *(_QWORD *)(a2 + 8) = result;
  *(_BYTE *)(BugCheckParameter2 + 64) |= 1u;
  return result;
}
