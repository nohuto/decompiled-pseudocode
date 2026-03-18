/*
 * XREFs of IoRemoveShareAccess @ 0x14074B990
 * Callers:
 *     DifIoRemoveShareAccessWrapper @ 0x140610B30 (DifIoRemoveShareAccessWrapper.c)
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x14074BF60 (IoRemoveLinkShareAccessEx.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
