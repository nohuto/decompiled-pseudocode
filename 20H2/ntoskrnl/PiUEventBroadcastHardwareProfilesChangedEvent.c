/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408A5530
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x14076FD20 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MmGetSessionById @ 0x140297320 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 */

void __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(__int64 a1, const void *a2)
{
  struct _DMA_ADAPTER *SessionById; // rdi
  int ExplicitScope; // [rsp+50h] [rbp+8h] BYREF

  ExplicitScope = a1;
  if ( (_DWORD)a1 == -1 )
  {
    ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2, 0x10u, 0LL, 0LL, 0, 0);
  }
  else
  {
    SessionById = (struct _DMA_ADAPTER *)MmGetSessionById(a1, (__int64)a2);
    if ( SessionById )
    {
      ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2, 0x10u, 0LL, &ExplicitScope, 0, 0);
      HalPutDmaAdapter(SessionById);
    }
  }
}
