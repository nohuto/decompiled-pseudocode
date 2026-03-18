/*
 * XREFs of IoCheckShareAccess @ 0x1405D7170
 * Callers:
 *     <none>
 * Callees:
 *     IoCheckLinkShareAccess @ 0x1405D8090 (IoCheckLinkShareAccess.c)
 */

NTSTATUS __stdcall IoCheckShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        BOOLEAN Update)
{
  return IoCheckLinkShareAccess(
           DesiredAccess,
           DesiredShareAccess,
           (_DWORD)FileObject,
           (_DWORD)ShareAccess,
           0LL,
           Update != 0);
}
