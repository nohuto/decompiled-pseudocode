/*
 * XREFs of ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01A7D48
 * Callers:
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A44B0 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01A7750 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C01B7D40 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

void __fastcall DelayZonePalmRejection::PalmRejectTimerProc(
        DelayZonePalmRejection *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      8,
      10,
      (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids);
  }
  *((_BYTE *)this + 8) = 0;
  DelayZonePalmRejection::DispatchBufferedInputFrames(this, a2, a3, a4);
  v6 = *((_QWORD *)this + 20);
  if ( v6 )
  {
    v7 = *((unsigned int *)this + 1);
    v8 = 0LL;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v6, v7, v5, 1LL, &v8);
  }
}
