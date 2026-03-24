/*
 * XREFs of ObSetProcessDeviceMap @ 0x1408DF68C
 * Callers:
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14025CA80 (PsGetProcessServerSilo.c)
 *     ObpSetDeviceMap @ 0x1406BD6D4 (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObSetProcessDeviceMap(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  struct _DMA_ADAPTER *ProcessServerSilo; // rax

  ProcessServerSilo = (struct _DMA_ADAPTER *)PsGetProcessServerSilo(a1);
  return ObpSetDeviceMap(ProcessServerSilo, a1, a2, a3, 2, 0LL);
}
