/*
 * XREFs of RawShutdown @ 0x140911AD0
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x140203350 (IoDeleteDevice.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     RawScanDeletedList @ 0x1405D90B8 (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x140779330 (IoUnregisterFileSystem.c)
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
