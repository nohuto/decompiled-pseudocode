/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x1408DDE80
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140573410 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F21A4 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140C20598 + dword_140C2059C) & 0x3F);
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140C205A0 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140C205A8 = MEMORY[0xFFFFF78000000014];
    ++dword_140C20598;
    LOBYTE(xmmword_140C50378) = PopBsdCurrentCsPhase;
    *(_QWORD *)((char *)&xmmword_140C50378 + 4) = __PAIR64__(
                                                    PopBsdTransitionLatestCheckpointType,
                                                    PopBsdTransitionLatestCheckpointId);
    HIDWORD(xmmword_140C50378) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | PopBsdPowerWatchdogArmed & 1 | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    *(_QWORD *)&xmmword_140C50368 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140C50368);
    qword_140C205A0 &= ~v2;
    ++dword_140C2059C;
    WORD6(xmmword_140C50368) = MEMORY[0xFFFFF780000002C4];
    qword_140C205B0 = MEMORY[0xFFFFF78000000014];
  }
  if ( dword_140C20598 < (unsigned int)dword_140C2059C || (unsigned int)(dword_140C20598 - dword_140C2059C) > 1 )
    byte_140C205C8 = 1;
  PopBsdHandleRequest(4);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
