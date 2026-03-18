/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x140250C10
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14085B6D0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x14085C5A8 (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x140AD6B90 (KiFilterFiberContext.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140B2603C (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140B260DC (FsRtlInitializeFileLocks.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140250C50 (ExInitializeNPagedLookasideListInternal.c)
 */

void __stdcall ExInitializeNPagedLookasideList(
        PNPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializeNPagedLookasideListInternal((_DWORD)Lookaside, (_DWORD)Allocate, (_DWORD)Free, Flags, Size, Tag, Depth, 0);
}
