/*
 * XREFs of ZwSetSystemInformation @ 0x1403FB6D0
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x14059C7B0 (SmKmStoreTerminateWorker.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x14092CBB4 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x14092CCB0 (SmStoreDelete.c)
 *     SmStoreResize @ 0x14092CE88 (SmStoreResize.c)
 *     IoShutdownSystem @ 0x1409ADED8 (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140A7481C (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
