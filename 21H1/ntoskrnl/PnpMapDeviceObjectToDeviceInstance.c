/*
 * XREFs of PnpMapDeviceObjectToDeviceInstance @ 0x14073B570
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140737704 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402E5690 (RtlInsertElementGenericTableAvl.c)
 */

__int64 __fastcall PnpMapDeviceObjectToDeviceInstance(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = a1;
  Buffer[1] = a2;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v2 = RtlInsertElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer, 0x10u, 0LL) == 0LL ? 0xC0000001 : 0;
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return v2;
}
