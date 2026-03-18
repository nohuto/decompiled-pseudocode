/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x1408DCB10
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140572DC0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F0DDC (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140C208B8 + dword_140C208BC) & 0x3F);
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140C208C0 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140C208C8 = MEMORY[0xFFFFF78000000014];
    ++dword_140C208B8;
    LOBYTE(xmmword_140C504B8) = PopBsdCurrentCsPhase;
    *(_QWORD *)((char *)&xmmword_140C504B8 + 4) = __PAIR64__(
                                                    PopBsdTransitionLatestCheckpointType,
                                                    PopBsdTransitionLatestCheckpointId);
    HIDWORD(xmmword_140C504B8) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | PopBsdPowerWatchdogArmed & 1 | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    *(_QWORD *)&xmmword_140C504A8 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140C504A8);
    qword_140C208C0 &= ~v2;
    ++dword_140C208BC;
    WORD6(xmmword_140C504A8) = MEMORY[0xFFFFF780000002C4];
    qword_140C208D0 = MEMORY[0xFFFFF78000000014];
  }
  if ( dword_140C208B8 < (unsigned int)dword_140C208BC || (unsigned int)(dword_140C208B8 - dword_140C208BC) > 1 )
    byte_140C208E8 = 1;
  PopBsdHandleRequest(4);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
