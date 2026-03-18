/*
 * XREFs of IoCheckShareAccess @ 0x14074B2A0
 * Callers:
 *     DifIoCheckShareAccessWrapper @ 0x14060D540 (DifIoCheckShareAccessWrapper.c)
 * Callees:
 *     IoCheckLinkShareAccess @ 0x14074B530 (IoCheckLinkShareAccess.c)
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
