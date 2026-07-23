/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x14037A210
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1407CBA00 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x1407CE1BC (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x140A1CBA0 (KiFilterFiberContext.c)
 *     ObInitSystem @ 0x140A3F538 (ObInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140A6CE18 (FsRtlInitializeLargeMcbs.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x14037A250 (ExInitializeNPagedLookasideListInternal.c)
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
