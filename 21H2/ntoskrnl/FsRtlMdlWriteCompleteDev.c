/*
 * XREFs of FsRtlMdlWriteCompleteDev @ 0x14061D960
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlWriteComplete2 @ 0x14024E958 (CcMdlWriteComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlWriteCompleteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        PMDL MdlChain,
        PDEVICE_OBJECT DeviceObject)
{
  if ( (FileObject->Flags & 0x10) != 0 )
    return 0;
  CcMdlWriteComplete2((__int64)FileObject, (__int64 *)FileOffset, MdlChain, (int)DeviceObject);
  return 1;
}
