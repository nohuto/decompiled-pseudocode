/*
 * XREFs of MiIsPageSecured @ 0x140251878
 * Callers:
 *     MiCopySinglePage @ 0x1402516D4 (MiCopySinglePage.c)
 *     MmTryIdentifyPage @ 0x140532D68 (MmTryIdentifyPage.c)
 *     MiAddNonSecuredPagesToDump @ 0x140535D64 (MiAddNonSecuredPagesToDump.c)
 *     MiAddRangeToCrashDump @ 0x1405362E8 (MiAddRangeToCrashDump.c)
 * Callees:
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiIsFreeSlabPage @ 0x140551868 (MiIsFreeSlabPage.c)
 */

_BOOL8 __fastcall MiIsPageSecured(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // r9

  return (MiFlags & 0x8000) != 0
      && ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3
      && !(unsigned int)MI_PFN_IS_PROTO(a1)
      && (!*(_QWORD *)(v1 + 8)
       || (unsigned int)MiIsFreeSlabPage() && v2 == -2LL
       || v2 <= 0xFFFFF6BFFFFFFF78uLL && v2 >= 0xFFFFF68000000000uLL);
}
