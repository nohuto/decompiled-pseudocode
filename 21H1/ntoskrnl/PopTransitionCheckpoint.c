/*
 * XREFs of PopTransitionCheckpoint @ 0x1407618D8
 * Callers:
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PoUserShutdownInitiated @ 0x1407617A0 (PoUserShutdownInitiated.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PsIsHostSilo @ 0x1402556F0 (PsIsHostSilo.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopTransitionCheckpoint(int a1, int a2)
{
  struct _LIST_ENTRY *CurrentServerSilo; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo((__int64)CurrentServerSilo) )
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
        v7 = (_QWORD *)qword_140C250A8;
        if ( *(PVOID **)qword_140C250A8 != &PopTransitionCheckpoints )
          __fastfail(3u);
        *v6 = &PopTransitionCheckpoints;
        v6[1] = v7;
        *v7 = v6;
        qword_140C250A8 = (__int64)v6;
      }
      PopBsdTransitionLatestCheckpointSeqNumber = PopTransitionCheckpointsSequenceNumber++;
      PopBsdTransitionLatestCheckpointId = a1;
      PopBsdTransitionLatestCheckpointType = a2;
    }
    PopReleaseRwLock((ULONG_PTR)&PopTransitionCheckpointLock);
  }
}
