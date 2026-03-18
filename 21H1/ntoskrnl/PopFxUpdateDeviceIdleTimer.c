/*
 * XREFs of PopFxUpdateDeviceIdleTimer @ 0x1403C3F94
 * Callers:
 *     PopFxProcessWork @ 0x1402367FC (PopFxProcessWork.c)
 *     PoFxSetDeviceIdleTimeout @ 0x1403C3F10 (PoFxSetDeviceIdleTimeout.c)
 * Callees:
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140236708 (PopFxScheduleDeviceIdleTimer.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140236BC8 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x140236C6C (PopFxAddLogEntry.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

void __fastcall PopFxUpdateDeviceIdleTimer(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  _m_prefetchw((const void *)(a1 + 32));
  v2 = *(_DWORD *)(a1 + 32);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v2, v2);
  }
  while ( v3 != v2 );
  if ( (v2 & 4) != 0 )
  {
    if ( KeCancelTimer((PKTIMER)(a1 + 368)) )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFB);
      if ( !PopFxScheduleDeviceIdleTimer(a1) )
      {
        PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(a1 + 48), 0, 0);
        (*(void (__fastcall **)(_QWORD))(a1 + 144))(*(_QWORD *)(a1 + 192));
        _InterlockedOr((volatile signed __int32 *)(a1 + 32), 0x40u);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), 0xFFFFFFFF) != 1 )
          PopFxAddLogEntry(*(_QWORD *)(a1 + 48), 0, 17, 0LL);
      }
    }
  }
}
