/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408A5530
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x14076FD20 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MmGetSessionById @ 0x140297320 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 */

void __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(__int64 a1, __int64 a2)
{
  struct _DMA_ADAPTER *SessionById; // rdi

  if ( (_DWORD)a1 == -1 )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2);
  }
  else
  {
    SessionById = (struct _DMA_ADAPTER *)MmGetSessionById(a1, a2);
    if ( SessionById )
    {
      ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2);
      HalPutDmaAdapter(SessionById);
    }
  }
}
