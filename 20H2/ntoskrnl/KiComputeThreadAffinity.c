/*
 * XREFs of KiComputeThreadAffinity @ 0x14033D398
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1402F754C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x1402F7A00 (KiSetAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x14033D1E8 (KiSetSystemAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x1403C589C (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402BE850 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KeSelectIdealProcessor @ 0x1402D8400 (KeSelectIdealProcessor.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1402D884C (KiUpdateNodeAffinitizedFlag.c)
 *     KiPrcbInGroupAffinity @ 0x1402D8E00 (KiPrcbInGroupAffinity.c)
 *     KeSelectNodeForAffinity @ 0x1402F7D00 (KeSelectNodeForAffinity.c)
 *     RtlBeginReadTickLock @ 0x14033D458 (RtlBeginReadTickLock.c)
 *     KiComputeCpuSetAffinity @ 0x14033D470 (KiComputeCpuSetAffinity.c)
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
