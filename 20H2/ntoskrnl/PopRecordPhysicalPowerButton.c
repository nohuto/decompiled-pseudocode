/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x1408E3CC0
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140576E40 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F6650 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140C207B8 + dword_140C207BC) & 0x3F);
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140C207C0 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140C207C8 = MEMORY[0xFFFFF78000000014];
    ++dword_140C207B8;
    LOBYTE(xmmword_140C503F8) = PopBsdCurrentCsPhase;
    *(_QWORD *)((char *)&xmmword_140C503F8 + 4) = __PAIR64__(
                                                    PopBsdTransitionLatestCheckpointType,
                                                    PopBsdTransitionLatestCheckpointId);
    HIDWORD(xmmword_140C503F8) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | PopBsdPowerWatchdogArmed & 1 | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    *(_QWORD *)&xmmword_140C503E8 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140C503E8);
    qword_140C207C0 &= ~v2;
    ++dword_140C207BC;
    WORD6(xmmword_140C503E8) = MEMORY[0xFFFFF780000002C4];
    qword_140C207D0 = MEMORY[0xFFFFF78000000014];
  }
  if ( dword_140C207B8 < (unsigned int)dword_140C207BC || (unsigned int)(dword_140C207B8 - dword_140C207BC) > 1 )
    byte_140C207E8 = 1;
  PopBsdHandleRequest(4);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
