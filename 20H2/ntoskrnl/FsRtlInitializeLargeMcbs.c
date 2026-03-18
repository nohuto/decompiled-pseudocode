/*
 * XREFs of FsRtlInitializeLargeMcbs @ 0x140A6EE98
 * Callers:
 *     FsRtlInitSystem @ 0x140A6EA60 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x14037A4C0 (ExInitializeNPagedLookasideList.c)
 *     ExInitializePagedLookasideList @ 0x1406EE9A0 (ExInitializePagedLookasideList.c)
 */

void FsRtlInitializeLargeMcbs()
{
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&FsRtlFirstPagedMappingLookasideList,
    0LL,
    0LL,
    0,
    0x78uLL,
    0x6D695346u,
    4u);
  ExInitializeNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList, 0LL, 0LL, 0, 0x78uLL, 0x6D695346u, 4u);
  ExInitializeNPagedLookasideList(&FsRtlFastMutexLookasideList, 0LL, 0LL, 0x200u, 0x38uLL, 0x6D665346u, 0x20u);
}
