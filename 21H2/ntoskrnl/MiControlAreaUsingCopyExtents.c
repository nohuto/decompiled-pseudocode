/*
 * XREFs of MiControlAreaUsingCopyExtents @ 0x140322F4C
 * Callers:
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 *     MiDeleteFileExtents @ 0x1406FF658 (MiDeleteFileExtents.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaUsingCopyExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x20) != 0 && (*(_QWORD *)(*(_QWORD *)(a1 + 96) + 48LL) & 0xFFFFFFFFFFFFFFF0uLL) != 0;
}
