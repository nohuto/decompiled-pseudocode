/*
 * XREFs of MiSetInPagePrefetchPriority @ 0x14032DAAC
 * Callers:
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 * Callees:
 *     MiSetInPagePriority @ 0x14024E1A8 (MiSetInPagePriority.c)
 */

__int64 __fastcall MiSetInPagePrefetchPriority(__int64 a1, __int64 a2)
{
  return MiSetInPagePriority(a2, (*(_DWORD *)(a1 + 80) & 0x40) != 0 ? 5 : 0, *(_DWORD *)(a1 + 80) & 7);
}
