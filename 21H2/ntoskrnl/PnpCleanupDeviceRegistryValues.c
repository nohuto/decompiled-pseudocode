/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x140768024
 * Callers:
 *     PiBuildDeviceNodeInstancePath @ 0x1406DFC4C (PiBuildDeviceNodeInstancePath.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140766258 (PnpUnlinkDeviceRemovalRelations.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     PpDeviceRegistration @ 0x14076B554 (PpDeviceRegistration.c)
 */

__int64 __fastcall PnpCleanupDeviceRegistryValues(__int64 a1)
{
  __int64 v2; // r9
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  Buffer[1] = a1;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  LOBYTE(v2) = 1;
  return PpDeviceRegistration(a1, 0LL, 0LL, v2);
}
