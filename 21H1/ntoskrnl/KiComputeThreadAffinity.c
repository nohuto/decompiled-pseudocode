/*
 * XREFs of KiComputeThreadAffinity @ 0x140337644
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140202694 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 *     KiSetAffinityThread @ 0x1402CA140 (KiSetAffinityThread.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiSetSystemAffinityThread @ 0x140335B9C (KiSetSystemAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x1403C226C (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14026D220 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KeSelectIdealProcessor @ 0x1402CA440 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x1402CA648 (KeSelectNodeForAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14032FDE4 (KiUpdateNodeAffinitizedFlag.c)
 *     KiPrcbInGroupAffinity @ 0x140334898 (KiPrcbInGroupAffinity.c)
 *     RtlBeginReadTickLock @ 0x140337704 (RtlBeginReadTickLock.c)
 *     KiComputeCpuSetAffinity @ 0x14033771C (KiComputeCpuSetAffinity.c)
 */

__int64 __fastcall KiComputeThreadAffinity(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 TickLock; // rsi
  __int64 v7; // rax
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r11
  _OWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v13[0] = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    TickLock = RtlBeginReadTickLock(&KiCpuSetSequence);
  }
  else
  {
    v3 = (_QWORD *)(a1 + 576);
    do
    {
      v4 = RtlBeginReadTickLock(&KiCpuSetSequence);
      v5 = *(_QWORD *)(a1 + 552);
      TickLock = v4;
      if ( ((v5 - 1) & v5) != 0 )
      {
        v7 = KiComputeCpuSetAffinity(a1);
        if ( (v7 & v5) != 0 )
          v5 &= v7;
      }
      if ( *v3 != v5 )
      {
        v9 = *(unsigned int *)(a1 + 196);
        *v3 = v5;
        if ( !KiPrcbInGroupAffinity(KiProcessorBlock[v9], (__int64)v3) )
        {
          *((_QWORD *)&v13[0] + 1) = *(unsigned __int16 *)(a1 + 584);
          *(_QWORD *)&v13[0] = v5;
          v11 = KeSelectNodeForAffinity((__int64)v13);
          v10 = (unsigned __int16)KeSelectIdealProcessor(v11, v13, 0LL, (unsigned int *)(v12 + 36));
        }
        *(_DWORD *)(a1 + 588) = v10;
        KiUpdateSharedReadyQueueAffinityThread(KiProcessorBlock[v10], a1);
        KiUpdateNodeAffinitizedFlag(a1);
        v1 = 1;
      }
    }
    while ( KiCpuSetSequence != TickLock );
  }
  *(_QWORD *)(a1 + 568) = TickLock;
  return v1;
}
