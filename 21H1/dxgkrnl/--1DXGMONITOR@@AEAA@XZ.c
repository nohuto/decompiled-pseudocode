/*
 * XREFs of ??1DXGMONITOR@@AEAA@XZ @ 0x1C02F3FBC
 * Callers:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C005BF2C (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01585C4 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0168BA4 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C01696C8 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C02F0C38 (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C02F43A4 (-_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02F44AC (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C02F4FB4 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 */

void __fastcall DXGMONITOR::~DXGMONITOR(DXGMONITOR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  void *v9; // rcx
  __int64 v10; // rdx
  ReferenceCounted *v11; // rcx
  GUID ActivityId; // [rsp+20h] [rbp-28h] BYREF

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DXGMONITOR::LogMonitorObjectOnOffState((char *)this, (__int64)&ActivityId, 0, 1);
  if ( *((_DWORD *)this + 128) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(v3, v2);
    v4[3] = *((unsigned int *)this + 128);
    v4[4] = this;
    v4[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    WdLogEvent5_WdError(v4);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)((char *)this + 400), this, 0x20u);
  DXGMONITOR::_DestroyTtmDevice(this);
  DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v5, v6);
  DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this, v7);
  DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(this, v8);
  DXGMONITOR::_CleanupMonitorDescriptors(this);
  v9 = (void *)*((_QWORD *)this + 14);
  if ( v9 )
  {
    operator delete[](v9);
    *((_QWORD *)this + 14) = 0LL;
  }
  DXGMONITOR::_CleanupMonitorCCDName(this);
  v11 = (ReferenceCounted *)*((_QWORD *)this + 155);
  if ( v11 )
    ReferenceCounted::Release(v11, v10);
  ExDeleteResourceLite((PERESOURCE)((char *)this + 296));
}
