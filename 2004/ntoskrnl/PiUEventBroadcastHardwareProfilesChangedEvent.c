/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14089FA00
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140761710 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     MmGetSessionById @ 0x1402BE830 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 */

void __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(unsigned int a1, __int64 a2)
{
  struct _DMA_ADAPTER *SessionById; // rdi

  if ( a1 == -1 )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2);
  }
  else
  {
    SessionById = (struct _DMA_ADAPTER *)MmGetSessionById(a1);
    if ( SessionById )
    {
      ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2);
      HalPutDmaAdapter(SessionById);
    }
  }
}
