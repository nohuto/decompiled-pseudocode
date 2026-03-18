/*
 * XREFs of ObpSetSiloDeviceMap @ 0x140796B0C
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x1407968D8 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14023CDA0 (PsGetEffectiveServerSilo.c)
 *     HalSystemVectorDispatchEntry @ 0x140245E60 (HalSystemVectorDispatchEntry.c)
 *     ObpSetDeviceMap @ 0x1406DD7AC (ObpSetDeviceMap.c)
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
