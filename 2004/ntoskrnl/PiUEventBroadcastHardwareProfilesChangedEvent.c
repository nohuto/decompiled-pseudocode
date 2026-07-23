/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14089FA00
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140761710 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     MmGetSessionById @ 0x1402BE830 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
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
