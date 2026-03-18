/*
 * XREFs of PnpInitializeDeviceEvents @ 0x140A4BE68
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     KiInitializeMutant @ 0x1402DEBE8 (KiInitializeMutant.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 PnpInitializeDeviceEvents()
{
  unsigned int v0; // ebx
  PVOID PoolWithTag; // rax
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx

  v0 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x4A706E50u);
  PnpDeviceEventList = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    LOBYTE(v2) = 1;
    KiInitializeMutant((__int64)PoolWithTag + 8, 0LL, v2, v3);
    v4 = PnpDeviceEventList;
    *(_DWORD *)(PnpDeviceEventList + 64) = 1;
    *(_QWORD *)(v4 + 72) = 0LL;
    *(_DWORD *)(v4 + 80) = 0;
    *(_QWORD *)(v4 + 104) = v4 + 96;
    *(_QWORD *)(v4 + 96) = v4 + 96;
    *(_WORD *)(v4 + 88) = 1;
    *(_BYTE *)(v4 + 90) = 6;
    *(_DWORD *)(v4 + 92) = 0;
    *(_QWORD *)(v4 + 128) = v4 + 120;
    *(_QWORD *)(v4 + 120) = v4 + 120;
    *(_DWORD *)v4 = 259;
    PnpNotificationInProgressLock.Event.Header.WaitListHead.Blink = &PnpNotificationInProgressLock.Event.Header.WaitListHead;
    PnpNotificationInProgressLock.Event.Header.WaitListHead.Flink = &PnpNotificationInProgressLock.Event.Header.WaitListHead;
    PnpEventQueueEmpty.Header.WaitListHead.Blink = &PnpEventQueueEmpty.Header.WaitListHead;
    PnpEventQueueEmpty.Header.WaitListHead.Flink = &PnpEventQueueEmpty.Header.WaitListHead;
    PnpNotificationInProgressLock.Count = 1;
    PnpNotificationInProgressLock.Owner = 0LL;
    PnpNotificationInProgressLock.Contention = 0;
    LOWORD(PnpNotificationInProgressLock.Event.Header.Lock) = 1;
    PnpNotificationInProgressLock.Event.Header.Size = 6;
    PnpNotificationInProgressLock.Event.Header.SignalState = 0;
    LOWORD(PnpEventQueueEmpty.Header.Lock) = 0;
    PnpEventQueueEmpty.Header.Size = 6;
    PnpEventQueueEmpty.Header.SignalState = 1;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
