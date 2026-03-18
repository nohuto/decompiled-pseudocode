/*
 * XREFs of ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01A7360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     HMAssignmentUnlock @ 0x1C0076340 (HMAssignmentUnlock.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C007788C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01A9AD0 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::PreProcessInput(CHidInput *this, void *a2, char a3)
{
  __int64 v4; // rax
  int v5; // edx
  struct DelayZonePalmRejection *Instance; // rbx

  if ( (a3 & 0x1C) != 0 )
  {
    v4 = *((_QWORD *)this + 2);
    if ( v4 )
    {
      if ( *(_QWORD *)(v4 + 48) )
      {
        HMAssignmentUnlock((__int64 *)(v4 + 48));
        *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) = 0LL;
        v4 = *((_QWORD *)this + 2);
      }
      if ( *(_QWORD *)(v4 + 56) )
      {
        HMAssignmentUnlock((__int64 *)(v4 + 56));
        *(_QWORD *)(*((_QWORD *)this + 2) + 56LL) = 0LL;
      }
    }
  }
  Instance = DelayZonePalmRejection::GetInstance();
  if ( *((_BYTE *)Instance + 9) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v5,
        8,
        11,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids);
    }
    *((_BYTE *)Instance + 9) = 0;
    DelayZonePalmRejection::DispatchBufferedInputFrames(Instance);
  }
  return 0LL;
}
