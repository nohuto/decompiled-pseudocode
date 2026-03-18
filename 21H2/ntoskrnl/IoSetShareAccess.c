/*
 * XREFs of IoSetShareAccess @ 0x14074B8F0
 * Callers:
 *     DifIoSetShareAccessWrapper @ 0x140611170 (DifIoSetShareAccessWrapper.c)
 * Callees:
 *     IoSetLinkShareAccess @ 0x14074BFF0 (IoSetLinkShareAccess.c)
 */

void __stdcall IoSetShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  IoSetLinkShareAccess(DesiredAccess, DesiredShareAccess, (_DWORD)FileObject, (_DWORD)ShareAccess, 0LL, 0);
}
