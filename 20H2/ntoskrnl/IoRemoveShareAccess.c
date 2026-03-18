/*
 * XREFs of IoRemoveShareAccess @ 0x1405D8570
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x1405D8DC0 (IoRemoveLinkShareAccessEx.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
