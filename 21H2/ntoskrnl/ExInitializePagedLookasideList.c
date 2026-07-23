/*
 * XREFs of ExInitializePagedLookasideList @ 0x1406BFA10
 * Callers:
 *     AlpcpInitSystem @ 0x1407CE1BC (AlpcpInitSystem.c)
 *     FsRtlInitSystem @ 0x140A6C9E0 (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140A6CE18 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140A6CEB4 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x140A6D04C (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x140A74064 (WmipInitializeAllocs.c)
 *     RtlInitializeRangeListPackage @ 0x140A946EC (RtlInitializeRangeListPackage.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1402A2F70 (ExInitializePagedLookasideListInternal.c)
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
