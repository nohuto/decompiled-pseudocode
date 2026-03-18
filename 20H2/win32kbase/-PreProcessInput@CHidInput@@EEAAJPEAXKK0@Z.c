/*
 * XREFs of ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01A4FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0008EE4 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     HMAssignmentUnlock @ 0x1C0054AD0 (HMAssignmentUnlock.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01A7750 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::PreProcessInput(CHidInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  int v6; // edx
  struct DelayZonePalmRejection *Instance; // rbx

  if ( (a3 & 0x1C) != 0 )
  {
    v5 = *((_QWORD *)this + 2);
    if ( v5 )
    {
      if ( *(_QWORD *)(v5 + 48) )
      {
        HMAssignmentUnlock((__int64 *)(v5 + 48), a2, a3, a4);
        *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) = 0LL;
        v5 = *((_QWORD *)this + 2);
      }
      if ( *(_QWORD *)(v5 + 56) )
      {
        HMAssignmentUnlock((__int64 *)(v5 + 56), a2, a3, a4);
        *(_QWORD *)(*((_QWORD *)this + 2) + 56LL) = 0LL;
      }
    }
  }
  Instance = DelayZonePalmRejection::GetInstance();
  if ( *((_BYTE *)Instance + 9) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v6,
        8,
        11,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids);
    }
    *((_BYTE *)Instance + 9) = 0;
    DelayZonePalmRejection::DispatchBufferedInputFrames(Instance);
  }
  return 0LL;
}
