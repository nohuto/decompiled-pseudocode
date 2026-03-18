/*
 * XREFs of ObSetProcessDeviceMap @ 0x1408DC08C
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     ObpSetDeviceMap @ 0x14070B584 (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObSetProcessDeviceMap(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  struct _DMA_ADAPTER *ProcessServerSilo; // rax

  ProcessServerSilo = (struct _DMA_ADAPTER *)PsGetProcessServerSilo(a1);
  return ObpSetDeviceMap(ProcessServerSilo, a1, a2, a3, 2, 0LL);
}
