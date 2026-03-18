/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x14037A4C0
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1407C75A0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x1407C9D8C (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x140A1EBA0 (KiFilterFiberContext.c)
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140A6EE98 (FsRtlInitializeLargeMcbs.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x14037A500 (ExInitializeNPagedLookasideListInternal.c)
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
