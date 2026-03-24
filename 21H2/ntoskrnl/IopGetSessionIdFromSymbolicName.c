/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x14073E0E4
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x1406C4890 (IoRegisterPlugPlayNotification.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1406E63A0 (PiUEventProcessBroadcastNotifications.c)
 *     PnpNotifyDeviceClassChange @ 0x14073D5D8 (PnpNotifyDeviceClassChange.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14073E140 (IopDeviceObjectFromSymbolicName.c)
 *     IopGetSessionIdFromPDO @ 0x14073E25C (IopGetSessionIdFromPDO.c)
 */

__int64 IopGetSessionIdFromSymbolicName()
{
  unsigned int SessionIdFromPDO; // edi
  __int64 v1; // rax
  struct _DMA_ADAPTER *v2; // rbx
  __int64 v3; // rcx

  SessionIdFromPDO = -1;
  v1 = IopDeviceObjectFromSymbolicName();
  v2 = (struct _DMA_ADAPTER *)v1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 396) & 0x20000) == 0 )
      {
        SessionIdFromPDO = IopGetSessionIdFromPDO(v1);
        HalPutDmaAdapter(v2);
      }
    }
  }
  return SessionIdFromPDO;
}
