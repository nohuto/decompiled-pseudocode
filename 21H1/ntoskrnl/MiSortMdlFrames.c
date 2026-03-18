/*
 * XREFs of MiSortMdlFrames @ 0x14052E7BC
 * Callers:
 *     MiRemoveMdlPages @ 0x1408C2110 (MiRemoveMdlPages.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D0398 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     qsort @ 0x1403CE680 (qsort.c)
 */

void __fastcall MiSortMdlFrames(__int64 a1)
{
  qsort(
    (void *)(a1 + 48),
    (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12,
    8uLL,
    (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
}
