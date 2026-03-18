/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x140748F48
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14078AF40 (PiUEventProcessBroadcastNotifications.c)
 *     PnpNotifyDeviceClassChange @ 0x14078D5D8 (PnpNotifyDeviceClassChange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140748FA4 (IopDeviceObjectFromSymbolicName.c)
 *     IopGetSessionIdFromPDO @ 0x140749588 (IopGetSessionIdFromPDO.c)
 */

__int64 IopGetSessionIdFromSymbolicName()
{
  unsigned int SessionIdFromPDO; // edi
  __int64 v1; // rax
  void *v2; // rbx
  __int64 v3; // rcx

  SessionIdFromPDO = -1;
  v1 = IopDeviceObjectFromSymbolicName();
  v2 = (void *)v1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 396) & 0x20000) == 0 )
      {
        SessionIdFromPDO = IopGetSessionIdFromPDO(v1);
        ObfDereferenceObject(v2);
      }
    }
  }
  return SessionIdFromPDO;
}
