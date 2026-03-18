/*
 * XREFs of CmpSyncKcbCacheForHive @ 0x1408733A0
 * Callers:
 *     <none>
 * Callees:
 *     CmpRebuildKcbCache @ 0x1406A1CF8 (CmpRebuildKcbCache.c)
 *     CmpIsKeyDeleted @ 0x140700E04 (CmpIsKeyDeleted.c)
 */

__int64 __fastcall CmpSyncKcbCacheForHive(ULONG_PTR a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  if ( (!a2 || *(_QWORD *)(a1 + 32) == a2)
    && !CmpIsKeyDeleted(a1, 0LL, a3, a4)
    && *(_QWORD *)(a1 + 32)
    && (*(_DWORD *)(a1 + 184) & 0x100000) == 0 )
  {
    CmpRebuildKcbCache(a1);
  }
  return 0LL;
}
