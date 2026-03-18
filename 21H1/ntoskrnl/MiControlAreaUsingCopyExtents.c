/*
 * XREFs of MiControlAreaUsingCopyExtents @ 0x14027B03C
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14062F350 (MiPfPrepareReadList.c)
 *     MiDeleteFileExtents @ 0x14063E2E4 (MiDeleteFileExtents.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaUsingCopyExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x20) != 0 && (*(_QWORD *)(*(_QWORD *)(a1 + 96) + 48LL) & 0xFFFFFFFFFFFFFFF0uLL) != 0;
}
