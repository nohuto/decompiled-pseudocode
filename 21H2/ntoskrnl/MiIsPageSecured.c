/*
 * XREFs of MiIsPageSecured @ 0x14026C720
 * Callers:
 *     MiCopySinglePage @ 0x14026BE94 (MiCopySinglePage.c)
 *     MmTryIdentifyPage @ 0x14058CAEC (MmTryIdentifyPage.c)
 *     MiAddNonSecuredPagesToDump @ 0x140592690 (MiAddNonSecuredPagesToDump.c)
 *     MiFilterCrashDumpPte @ 0x140592D90 (MiFilterCrashDumpPte.c)
 * Callees:
 *     MiIsFreeSlabPage @ 0x1405B1530 (MiIsFreeSlabPage.c)
 */

_BOOL8 __fastcall MiIsPageSecured(__int64 a1)
{
  unsigned __int64 v2; // r8

  return (MiFlags & 0x4000) != 0
      && ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3
      && *(__int64 *)(a1 + 40) >= 0
      && (!*(_QWORD *)(a1 + 8)
       || (unsigned int)MiIsFreeSlabPage() && v2 == -2LL
       || v2 <= 0xFFFFF6BFFFFFFF78uLL && v2 >= 0xFFFFF68000000000uLL);
}
