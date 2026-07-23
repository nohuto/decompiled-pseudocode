/*
 * XREFs of KiComputeThreadAffinity @ 0x14029CDF0
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140229114 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiSetSystemAffinityThread @ 0x14029CC14 (KiSetSystemAffinityThread.c)
 *     KiSetAffinityThread @ 0x14029D724 (KiSetAffinityThread.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 *     KiUpdateThreadCpuSets @ 0x1403C642C (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiUpdateNodeAffinitizedFlag @ 0x140265E74 (KiUpdateNodeAffinitizedFlag.c)
 *     KeSelectIdealProcessor @ 0x140265F28 (KeSelectIdealProcessor.c)
 *     KiPrcbInGroupAffinity @ 0x14029CDC4 (KiPrcbInGroupAffinity.c)
 *     RtlBeginReadTickLock @ 0x14029CEB0 (RtlBeginReadTickLock.c)
 *     KiComputeCpuSetAffinity @ 0x14029CEC8 (KiComputeCpuSetAffinity.c)
 *     KeSelectNodeForAffinity @ 0x14029E0B0 (KeSelectNodeForAffinity.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402D5640 (KiUpdateSharedReadyQueueAffinityThread.c)
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
          v11 = KeSelectNodeForAffinity(v13);
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
