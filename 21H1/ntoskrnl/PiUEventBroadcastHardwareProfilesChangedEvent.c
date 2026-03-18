/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14089E6E0
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x14075F2D0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x14022BBB0 (MmGetSessionById.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
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
