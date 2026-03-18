/*
 * XREFs of IoRemoveShareAccess @ 0x1406BC860
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x1406BC2E0 (IoRemoveLinkShareAccessEx.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccessEx((__int64)FileObject, ShareAccess, 0LL, 0);
}
