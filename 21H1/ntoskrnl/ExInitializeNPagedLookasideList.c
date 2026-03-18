/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x140377980
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1407B5BA0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x1407B838C (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x140A18BA0 (KiFilterFiberContext.c)
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140A681E8 (FsRtlInitializeLargeMcbs.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1403779C0 (ExInitializeNPagedLookasideListInternal.c)
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
