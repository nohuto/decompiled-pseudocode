/*
 * XREFs of MiSetInPagePrefetchPriority @ 0x14020B354
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiSetInPagePriority @ 0x1403077C8 (MiSetInPagePriority.c)
 */

__int64 __fastcall MiSetInPagePrefetchPriority(__int64 a1, __int64 a2)
{
  return MiSetInPagePriority(a2, (*(_DWORD *)(a1 + 80) & 0x40) != 0 ? 5 : 0, *(_DWORD *)(a1 + 80) & 7);
}
