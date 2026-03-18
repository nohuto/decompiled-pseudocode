/*
 * XREFs of ExInitializePagedLookasideList @ 0x140651E70
 * Callers:
 *     AlpcpInitSystem @ 0x1407B838C (AlpcpInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x140A67DB0 (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140A681E8 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140A68284 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x140A6841C (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x140A6F1A0 (WmipInitializeAllocs.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1402C2430 (ExInitializePagedLookasideListInternal.c)
 */

void __stdcall ExInitializePagedLookasideList(
        PPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializePagedLookasideListInternal(
    (__int64)Lookaside,
    Allocate,
    (void (__stdcall *)(PVOID, ULONG))Free,
    Flags,
    Size,
    Tag,
    Depth,
    0);
}
