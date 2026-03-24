/*
 * XREFs of MiSortMdlFrames @ 0x1405342DC
 * Callers:
 *     MiRemoveMdlPages @ 0x1408C6A60 (MiRemoveMdlPages.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4CE8 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     qsort @ 0x1403D2AC0 (qsort.c)
 */

void __fastcall MiSortMdlFrames(__int64 a1)
{
  qsort(
    (void *)(a1 + 48),
    (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12,
    8uLL,
    (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
}
