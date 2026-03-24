/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x14037A6C0
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1407CB890 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x1407CE04C (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x140A1BBA0 (KiFilterFiberContext.c)
 *     ObInitSystem @ 0x140A3E538 (ObInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140A6BE18 (FsRtlInitializeLargeMcbs.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x14037A700 (ExInitializeNPagedLookasideListInternal.c)
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
