/*
 * XREFs of IoSetShareAccess @ 0x1406BC8F0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetLinkShareAccess @ 0x1406BC370 (IoSetLinkShareAccess.c)
 */

void __stdcall IoSetShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  IoSetLinkShareAccess(DesiredAccess, DesiredShareAccess, (__int64)FileObject, (__int64)ShareAccess, 0LL, 0);
}
