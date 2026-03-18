/*
 * XREFs of ObSetProcessDeviceMap @ 0x1408E1ECC
 * Callers:
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 *     ObpSetDeviceMap @ 0x1406DD7AC (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObSetProcessDeviceMap(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  struct _DMA_ADAPTER *ProcessServerSilo; // rax

  ProcessServerSilo = (struct _DMA_ADAPTER *)PsGetProcessServerSilo(a1);
  return ObpSetDeviceMap(ProcessServerSilo, a1, a2, a3, 2, 0LL);
}
