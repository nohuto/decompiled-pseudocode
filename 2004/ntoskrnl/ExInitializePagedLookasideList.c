/*
 * XREFs of ExInitializePagedLookasideList @ 0x140701340
 * Callers:
 *     AlpcpInitSystem @ 0x1407BB4FC (AlpcpInitSystem.c)
 *     FsRtlInitSystem @ 0x140A68230 (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140A68668 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140A68704 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x140A6889C (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x140A6FBC4 (WmipInitializeAllocs.c)
 *     RtlInitializeRangeListPackage @ 0x140A90C18 (RtlInitializeRangeListPackage.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x140353190 (ExInitializePagedLookasideListInternal.c)
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
