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
