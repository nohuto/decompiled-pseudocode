/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408A2B00
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140773BF0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x140206410 (MmGetSessionById.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ZwUpdateWnfStateData @ 0x1403FDDA0 (ZwUpdateWnfStateData.c)
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
