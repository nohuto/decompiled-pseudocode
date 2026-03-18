/*
 * XREFs of RawShutdown @ 0x14090BEA0
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x14026F700 (IoDeleteDevice.c)
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 *     RawScanDeletedList @ 0x140634184 (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x14076AD20 (IoUnregisterFileSystem.c)
 */

__int64 __fastcall RawShutdown(__int64 a1, IRP *a2)
{
  RawScanDeletedList();
  IoUnregisterFileSystem(RawDeviceDiskObject);
  IoUnregisterFileSystem(RawDeviceCdRomObject);
  IoUnregisterFileSystem(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceCdRomObject);
  IoDeleteDevice(RawDeviceDiskObject);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 1);
  return 0LL;
}
