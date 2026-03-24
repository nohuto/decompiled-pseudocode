/*
 * XREFs of CmpSyncKcbCacheForHive @ 0x140870BD0
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsKeyDeleted @ 0x140670F30 (CmpIsKeyDeleted.c)
 *     CmpRebuildKcbCache @ 0x14071D99C (CmpRebuildKcbCache.c)
 */

__int64 __fastcall CmpSyncKcbCacheForHive(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  if ( (!a2 || *(_QWORD *)(a1 + 32) == a2)
    && !CmpIsKeyDeleted(a1, 0LL)
    && *(_QWORD *)(a1 + 32)
    && (*(_DWORD *)(a1 + 184) & 0x100000) == 0 )
  {
    CmpRebuildKcbCache(a1, a3);
  }
  return 0LL;
}
