/*
 * XREFs of IoSetShareAccess @ 0x140652E70
 * Callers:
 *     <none>
 * Callees:
 *     IoSetLinkShareAccess @ 0x1406528B0 (IoSetLinkShareAccess.c)
 */

void __stdcall IoSetShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  IoSetLinkShareAccess(DesiredAccess, DesiredShareAccess, (__int64)FileObject, (__int64)ShareAccess, 0LL, 0);
}
