/*
 * XREFs of ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A44F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0008EE4 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01A7750 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::OnFlushDelayZonePalmRejectInputTimerNotification(CHidInput *this)
{
  int v1; // edx
  struct DelayZonePalmRejection *Instance; // rbx

  Instance = DelayZonePalmRejection::GetInstance();
  if ( *((_BYTE *)Instance + 9) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v1,
        8,
        11,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids);
    }
    *((_BYTE *)Instance + 9) = 0;
    DelayZonePalmRejection::DispatchBufferedInputFrames(Instance);
  }
  return 0LL;
}
