/*
 * XREFs of ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01A9F74
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0195AB0 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01A65D0 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01A6658 (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C01B9F9C (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C01BA0B0 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

void __fastcall DelayZonePalmRejection::OnDeviceRemoval(DelayZonePalmRejection *this, void *a2, __int64 a3, __int64 a4)
{
  void *v4; // rax
  void *v5; // rdi
  void *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  CHidInput *v12; // rcx
  __int64 v13; // rdx
  DelayZoneTelemetry *v14; // rcx
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v4 = (void *)*((_QWORD *)this + 4);
  v5 = a2;
  if ( v4 && v4 == a2 )
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
        v4);
    }
    *((_DWORD *)this + 11) = 0;
    *((_QWORD *)this + 4) = 0LL;
    if ( !*((_DWORD *)this + 10) )
    {
      *((_QWORD *)this + 2) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v7 = (void *)*((_QWORD *)this + 2);
  if ( v7 && v7 == v5 )
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
    v8 = *((_DWORD *)this + 1);
    if ( v8 == 1 )
    {
      CHidInput::HandleDelayZonePalmRejectionTimer(this, 1, 0, a4);
      v12 = (CHidInput *)*((_QWORD *)this + 20);
      *((_BYTE *)this + 8) = 0;
      if ( v12 )
      {
        v13 = *((unsigned int *)this + 1);
        v15 = 0LL;
        DelayZoneTelemetry::UpdateDelayZoneStateInfo(v12, v13, v10, 2LL, &v15);
      }
      CHidInput::HandleFlushDelayZonePalmRejectInputTimer(v12, v9, v10, v11);
      v8 = *((_DWORD *)this + 1);
      *((_BYTE *)this + 9) = 1;
    }
    if ( v8 == 2 && !*((_DWORD *)this + 11) )
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_DWORD *)this + 1) = 0;
    }
  }
  v14 = (DelayZoneTelemetry *)*((_QWORD *)this + 20);
  if ( v14 )
    DelayZoneTelemetry::ClearSession(v14);
}
