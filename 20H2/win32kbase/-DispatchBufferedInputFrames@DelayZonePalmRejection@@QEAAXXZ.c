/*
 * XREFs of ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01A7750
 * Callers:
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A44F0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01A4FE0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01A7D48 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01A7DCC (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0054AD0 (HMAssignmentUnlock.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013958C (WPP_RECORDER_SF_Dd.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C018AE00 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall DelayZonePalmRejection::DispatchBufferedInputFrames(
        DelayZonePalmRejection *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct CPointerInputFrame *Next; // rax
  struct CPointerInputFrame *v6; // rdi
  int v7; // eax
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  if ( *((_DWORD *)this + 1) == 1 && !*((_BYTE *)this + 8) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *((_DWORD *)this + 11);
      v8 = *((_DWORD *)this + 10);
      WPP_RECORDER_SF_Dd(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        8u,
        0xCu,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
        v8,
        v9);
    }
    Next = (struct CPointerInputFrame *)*((_QWORD *)this + 7);
    v6 = (struct CPointerInputFrame *)*((_QWORD *)this + 8);
    while ( Next && Next != v6 )
      Next = CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext(
               (struct _LIST_ENTRY *)gpTouchProcessor,
               Next);
    if ( v6 )
      CTouchProcessor::DispatchFramePostDelayZoneProcessingAndGetNext((struct _LIST_ENTRY *)gpTouchProcessor, v6);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    if ( *((_DWORD *)this + 10) || *((_DWORD *)this + 11) )
    {
      v7 = 2;
    }
    else
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_QWORD *)this + 2) = 0LL;
      v7 = 0;
    }
    *((_DWORD *)this + 1) = v7;
    if ( *((_QWORD *)this + 3) )
      HMAssignmentUnlock((__int64 *)this + 3, a2, a3, a4);
  }
}
