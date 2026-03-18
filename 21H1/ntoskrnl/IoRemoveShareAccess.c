/*
 * XREFs of IoRemoveShareAccess @ 0x140652B40
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x140652820 (IoRemoveLinkShareAccessEx.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccessEx((__int64)FileObject, ShareAccess, 0LL, 0);
}
