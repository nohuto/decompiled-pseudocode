/*
 * XREFs of RawShutdown @ 0x14090ABF0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x14033F890 (IoDeleteDevice.c)
 *     RawScanDeletedList @ 0x140703040 (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x140768940 (IoUnregisterFileSystem.c)
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
