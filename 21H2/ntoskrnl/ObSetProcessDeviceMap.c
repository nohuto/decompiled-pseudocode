/*
 * XREFs of ObSetProcessDeviceMap @ 0x1408DF7EC
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     ObpSetDeviceMap @ 0x14061C8E4 (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObSetProcessDeviceMap(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  struct _DMA_ADAPTER *ProcessServerSilo; // rax

  ProcessServerSilo = (struct _DMA_ADAPTER *)PsGetProcessServerSilo(a1);
  return ObpSetDeviceMap(ProcessServerSilo, a1, a2, a3, 2, 0LL);
}
