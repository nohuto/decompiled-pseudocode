/*
 * XREFs of ZwSetSystemInformation @ 0x1403F5870
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140598620 (SmKmStoreTerminateWorker.c)
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x140925ADC (SmStoreCreate.c)
 *     SmStoreDelete @ 0x140925BD8 (SmStoreDelete.c)
 *     SmStoreResize @ 0x140925DB0 (SmStoreResize.c)
 *     IoShutdownSystem @ 0x1409A7108 (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140A6D994 (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
