/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14089E6E0
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x14075F2D0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x14022BBB0 (MmGetSessionById.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 */

void __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(unsigned int a1, const void *a2)
{
  struct _DMA_ADAPTER *SessionById; // rdi
  unsigned int ExplicitScope; // [rsp+50h] [rbp+8h] BYREF

  ExplicitScope = a1;
  if ( a1 == -1 )
  {
    ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2, 0x10u, 0LL, 0LL, 0, 0);
  }
  else
  {
    SessionById = (struct _DMA_ADAPTER *)MmGetSessionById(a1);
    if ( SessionById )
    {
      ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2, 0x10u, 0LL, &ExplicitScope, 0, 0);
      HalPutDmaAdapter(SessionById);
    }
  }
}
