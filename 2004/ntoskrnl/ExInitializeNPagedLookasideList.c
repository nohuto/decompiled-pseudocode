/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x140378790
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1407B8D10 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x1407BB4FC (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x140A18BA0 (KiFilterFiberContext.c)
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140A68668 (FsRtlInitializeLargeMcbs.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1403787D0 (ExInitializeNPagedLookasideListInternal.c)
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
