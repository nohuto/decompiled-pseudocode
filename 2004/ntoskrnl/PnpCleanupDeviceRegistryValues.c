/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x14073376C
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x1407317B4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140758CC4 (PiBuildDeviceNodeInstancePath.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407B5370 (IoReportRootDevice.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140201B40 (RtlDeleteElementGenericTableAvl.c)
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     PpDeviceRegistration @ 0x140733C8C (PpDeviceRegistration.c)
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
