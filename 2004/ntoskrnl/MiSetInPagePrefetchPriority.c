/*
 * XREFs of MiSetInPagePrefetchPriority @ 0x140311EE4
 * Callers:
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 * Callees:
 *     MiSetInPagePriority @ 0x140262508 (MiSetInPagePriority.c)
 */

__int64 __fastcall MiSetInPagePrefetchPriority(__int64 a1, __int64 a2)
{
  return MiSetInPagePriority(a2, (*(_DWORD *)(a1 + 80) & 0x40) != 0 ? 5 : 0, *(_DWORD *)(a1 + 80) & 7);
}
