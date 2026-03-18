/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x14072388C
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x140683E60 (PiUEventProcessBroadcastNotifications.c)
 *     IoRegisterPlugPlayNotification @ 0x1406B3480 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x140722CF8 (PnpNotifyDeviceClassChange.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1407238E8 (IopDeviceObjectFromSymbolicName.c)
 *     IopGetSessionIdFromPDO @ 0x140723A04 (IopGetSessionIdFromPDO.c)
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
