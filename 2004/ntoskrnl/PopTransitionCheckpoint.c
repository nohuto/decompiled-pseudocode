/*
 * XREFs of PopTransitionCheckpoint @ 0x1407631B8
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PoUserShutdownInitiated @ 0x140763080 (PoUserShutdownInitiated.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x1409AE0F0 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopTransitionCheckpoint(int a1, int a2)
{
  __int64 CurrentServerSilo; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopTransitionCheckpointLock);
    if ( PopTransitionCheckpoints != &PopTransitionCheckpoints || a1 == 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x50434B50u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        *((_DWORD *)PoolWithTag + 4) = PopTransitionCheckpointsSequenceNumber;
        *((_DWORD *)PoolWithTag + 5) = a1;
        *((_DWORD *)PoolWithTag + 6) = a2;
        PoolWithTag[4] = MEMORY[0xFFFFF78000000008];
        v7 = (_QWORD *)qword_140C24E08;
        if ( *(PVOID **)qword_140C24E08 != &PopTransitionCheckpoints )
          __fastfail(3u);
        *v6 = &PopTransitionCheckpoints;
        v6[1] = v7;
        *v7 = v6;
        qword_140C24E08 = (__int64)v6;
      }
      PopBsdTransitionLatestCheckpointSeqNumber = PopTransitionCheckpointsSequenceNumber++;
      PopBsdTransitionLatestCheckpointId = a1;
      PopBsdTransitionLatestCheckpointType = a2;
    }
    PopReleaseRwLock((ULONG_PTR)&PopTransitionCheckpointLock);
  }
}
