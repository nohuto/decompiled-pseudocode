/*
 * XREFs of FsRtlMdlReadCompleteDev @ 0x140267A30
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlReadComplete2 @ 0x14060F040 (CcMdlReadComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  CcMdlReadComplete2(FileObject, MdlChain, DeviceObject);
  return 1;
}
