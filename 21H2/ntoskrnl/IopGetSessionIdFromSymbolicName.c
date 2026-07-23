/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x14073E2A4
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140673180 (IoRegisterPlugPlayNotification.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1406FD780 (PiUEventProcessBroadcastNotifications.c)
 *     PnpNotifyDeviceClassChange @ 0x14073D798 (PnpNotifyDeviceClassChange.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14073E300 (IopDeviceObjectFromSymbolicName.c)
 *     IopGetSessionIdFromPDO @ 0x14073E41C (IopGetSessionIdFromPDO.c)
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
