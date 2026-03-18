/*
 * XREFs of MiControlAreaUsingCopyExtents @ 0x14023025C
 * Callers:
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 *     MiDeleteFileExtents @ 0x140681F54 (MiDeleteFileExtents.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiControlAreaUsingCopyExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 0x20) != 0 && (*(_QWORD *)(*(_QWORD *)(a1 + 96) + 48LL) & 0xFFFFFFFFFFFFFFF0uLL) != 0;
}
