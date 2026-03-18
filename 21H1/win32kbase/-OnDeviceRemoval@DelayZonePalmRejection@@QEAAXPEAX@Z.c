/*
 * XREFs of ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01AFCD4
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C019B7A0 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01AC330 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01AC3B8 (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C01BFCFC (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C01BFE10 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

void __fastcall DelayZonePalmRejection::OnDeviceRemoval(DelayZonePalmRejection *this, void *a2)
{
  void *v2; // rax
  void *v3; // rdi
  void *v5; // rax
  int v6; // eax
  __int64 v7; // r8
  CHidInput *v8; // rcx
  __int64 v9; // rdx
  DelayZoneTelemetry *v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v2 = (void *)*((_QWORD *)this + 4);
  v3 = a2;
  if ( v2 && v2 == a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        8,
        21,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
        v2);
    }
    *((_DWORD *)this + 11) = 0;
    *((_QWORD *)this + 4) = 0LL;
    if ( !*((_DWORD *)this + 10) )
    {
      *((_QWORD *)this + 2) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 && v5 == v3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        8,
        22,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
        *((_QWORD *)this + 2));
    }
    *((_DWORD *)this + 10) = 0;
    *((_QWORD *)this + 2) = 0LL;
    v6 = *((_DWORD *)this + 1);
    if ( v6 == 1 )
    {
      CHidInput::HandleDelayZonePalmRejectionTimer(this, 1, 0);
      v8 = (CHidInput *)*((_QWORD *)this + 20);
      *((_BYTE *)this + 8) = 0;
      if ( v8 )
      {
        v9 = *((unsigned int *)this + 1);
        v11 = 0LL;
        DelayZoneTelemetry::UpdateDelayZoneStateInfo(v8, v9, v7, 2LL, &v11);
      }
      CHidInput::HandleFlushDelayZonePalmRejectInputTimer(v8);
      v6 = *((_DWORD *)this + 1);
      *((_BYTE *)this + 9) = 1;
    }
    if ( v6 == 2 && !*((_DWORD *)this + 11) )
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v10 = (DelayZoneTelemetry *)*((_QWORD *)this + 20);
  if ( v10 )
    DelayZoneTelemetry::ClearSession(v10);
}
