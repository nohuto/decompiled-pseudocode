/*
 * XREFs of ExInitializePagedLookasideList @ 0x1406EE9A0
 * Callers:
 *     AlpcpInitSystem @ 0x1407C9D8C (AlpcpInitSystem.c)
 *     FsRtlInitSystem @ 0x140A6EA60 (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140A6EE98 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140A6EF34 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x140A6F0CC (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x140A760E4 (WmipInitializeAllocs.c)
 *     RtlInitializeRangeListPackage @ 0x140A9687C (RtlInitializeRangeListPackage.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x140338750 (ExInitializePagedLookasideListInternal.c)
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
