/*
 * XREFs of MiSetInPagePrefetchPriority @ 0x14034074C
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 * Callees:
 *     MiSetInPagePriority @ 0x1402BB538 (MiSetInPagePriority.c)
 */

__int64 __fastcall MiSetInPagePrefetchPriority(__int64 a1, __int64 a2)
{
  return MiSetInPagePriority(a2, (*(_DWORD *)(a1 + 80) & 0x40) != 0 ? 5 : 0, *(_DWORD *)(a1 + 80) & 7);
}
