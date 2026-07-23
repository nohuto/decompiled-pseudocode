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

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
