/*
 * XREFs of IoUpdateShareAccess @ 0x1407610D0
 * Callers:
 *     <none>
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x14068C1A0 (IoUpdateLinkShareAccessEx.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccessEx((__int64)FileObject, ShareAccess, 0LL, 0);
}
