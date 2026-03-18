/*
 * XREFs of MiIsPageSecured @ 0x140302D58
 * Callers:
 *     MiCopySinglePage @ 0x140302BB4 (MiCopySinglePage.c)
 *     MmTryIdentifyPage @ 0x14052ED48 (MmTryIdentifyPage.c)
 *     MiAddNonSecuredPagesToDump @ 0x140531D44 (MiAddNonSecuredPagesToDump.c)
 *     MiAddRangeToCrashDump @ 0x1405322C8 (MiAddRangeToCrashDump.c)
 * Callees:
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiIsFreeSlabPage @ 0x14054D848 (MiIsFreeSlabPage.c)
 */

_BOOL8 __fastcall MiIsPageSecured(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r9

  return (MiFlags & 0x8000) != 0
      && ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3
      && !(unsigned int)MI_PFN_IS_PROTO(a1, a2, a3)
      && (!*(_QWORD *)(v3 + 8)
       || (unsigned int)MiIsFreeSlabPage() && v4 == -2LL
       || v4 <= 0xFFFFF6BFFFFFFF78uLL && v4 >= 0xFFFFF68000000000uLL);
}
