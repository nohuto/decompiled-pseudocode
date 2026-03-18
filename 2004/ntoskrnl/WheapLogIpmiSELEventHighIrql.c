/*
 * XREFs of WheapLogIpmiSELEventHighIrql @ 0x1405B8028
 * Callers:
 *     WheapLogIpmiSELEvent @ 0x1405B7F88 (WheapLogIpmiSELEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1405B7F60 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

void WheapLogIpmiSELEventHighIrql()
{
  if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceRoutine) && WheapHighIrqlLogSelEventHandlerAcquireLock(0) )
  {
    if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceRoutine) )
      ((void (__fastcall *)(_QWORD, LIST_ENTRY *))WheapDispatchPtr.Queue.Wcb.DeviceContext)(
        *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters,
        &WheapDispatchPtr.DeviceQueue.DeviceListHead);
    _InterlockedExchange((_DWORD *)&WheapDispatchPtr.Queue.Wcb.DeviceRoutine + 1, 0);
  }
}
