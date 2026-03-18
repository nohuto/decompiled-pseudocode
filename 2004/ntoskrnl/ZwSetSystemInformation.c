/*
 * XREFs of ZwSetSystemInformation @ 0x1403F6B00
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140598D10 (SmKmStoreTerminateWorker.c)
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x140926D8C (SmStoreCreate.c)
 *     SmStoreDelete @ 0x140926E88 (SmStoreDelete.c)
 *     SmStoreResize @ 0x140927060 (SmStoreResize.c)
 *     IoShutdownSystem @ 0x1409A7F68 (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140A6E03C (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
