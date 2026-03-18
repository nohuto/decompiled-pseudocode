/*
 * XREFs of FsRtlInitializeLargeMcbs @ 0x140A68668
 * Callers:
 *     FsRtlInitSystem @ 0x140A68230 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x140378790 (ExInitializeNPagedLookasideList.c)
 *     ExInitializePagedLookasideList @ 0x140701340 (ExInitializePagedLookasideList.c)
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
