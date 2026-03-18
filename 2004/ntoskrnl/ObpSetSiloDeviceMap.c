/*
 * XREFs of ObpSetSiloDeviceMap @ 0x140788DFC
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x140788BC8 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x14026BA30 (HalSystemVectorDispatchEntry.c)
 *     PsGetEffectiveServerSilo @ 0x14027B2E0 (PsGetEffectiveServerSilo.c)
 *     ObpSetDeviceMap @ 0x14070B584 (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObpSetSiloDeviceMap(__int64 a1, void *a2)
{
  struct _DMA_ADAPTER *EffectiveServerSilo; // rax
  struct _DMA_ADAPTER *v5; // rbx
  PEPROCESS v6; // rdx

  EffectiveServerSilo = (struct _DMA_ADAPTER *)HalSystemVectorDispatchEntry();
  v5 = EffectiveServerSilo;
  if ( (struct _DMA_ADAPTER *)a1 == EffectiveServerSilo )
  {
    v6 = PsInitialSystemProcess;
  }
  else
  {
    EffectiveServerSilo = (struct _DMA_ADAPTER *)PsGetEffectiveServerSilo(a1);
    v6 = 0LL;
  }
  return ObpSetDeviceMap(EffectiveServerSilo, (__int64)v6, a2, 0, (a1 != (_QWORD)v5) + 3, 0LL);
}
