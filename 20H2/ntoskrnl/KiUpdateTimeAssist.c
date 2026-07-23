/*
 * XREFs of KiUpdateTimeAssist @ 0x140266848
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1402843F0 (KeResumeClockTimerFromIdle.c)
 *     KeSynchronizeTimeToQpc @ 0x140385CC0 (KeSynchronizeTimeToQpc.c)
 * Callees:
 *     KiComputeNewSystemTime @ 0x140266A10 (KiComputeNewSystemTime.c)
 *     RtlWriteAcquireTickLock @ 0x140266A84 (RtlWriteAcquireTickLock.c)
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall KiUpdateTimeAssist(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *v5; // r11
  LARGE_INTEGER PerformanceCounter; // r11
  unsigned __int128 v7; // rax
  unsigned __int64 v8; // r11
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r8
  __int64 result; // rax
  volatile CCHAR v15; // cl

  RtlWriteAcquireTickLock(0xFFFFF78000000340uLL);
  if ( v5 )
    PerformanceCounter = *v5;
  else
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = (unsigned __int64)((__int64 (__fastcall *)(_QWORD))KiComputeNewSystemTime)((LARGE_INTEGER)PerformanceCounter.QuadPart);
  v9 = v7;
  v10 = 1LL;
  if ( v8 > MEMORY[0xFFFFF78000000350] )
  {
    v11 = v8 - MEMORY[0xFFFFF78000000350];
    if ( MEMORY[0xFFFFF78000000369] )
      v11 <<= MEMORY[0xFFFFF78000000369];
    v7 = v11 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    KiInterruptTimeErrorAccumulator += v7;
    if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v7 )
      ++*((_QWORD *)&v7 + 1);
  }
  *(_QWORD *)a2 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v7 + 1);
  MEMORY[0xFFFFF7800000001C] = HIDWORD(v9);
  MEMORY[0xFFFFF78000000014] = v9;
  MEMORY[0xFFFFF78000000010] = *(_DWORD *)(a2 + 4);
  MEMORY[0xFFFFF78000000008] = *(_QWORD *)a2;
  MEMORY[0xFFFFF78000000348] = v8;
  MEMORY[0xFFFFF78000000350] = v8;
  v12 = MEMORY[0xFFFFF78000000320];
  v13 = (unsigned int)KiTickOffset - *((_QWORD *)&v7 + 1);
  *(_QWORD *)a3 = MEMORY[0xFFFFF78000000320];
  if ( v13 <= 0 )
  {
    v13 += KeMaximumIncrement;
    if ( v13 <= 0 )
    {
      v15 = KeNumberProcessorsGroup0[1];
      v10 = ((unsigned __int64)(((unsigned __int64)-v13
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v15)
          + 2;
      LODWORD(v13) = (((unsigned __int64)(((unsigned __int64)-v13
                                         * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v15)
                    + 1)
                   * KeMaximumIncrement
                   + v13;
    }
    *(_QWORD *)a3 = v12 + v10;
    MEMORY[0xFFFFF78000000328] = *(_DWORD *)(a3 + 4);
    MEMORY[0xFFFFF78000000320] = *(_QWORD *)a3;
  }
  result = ++MEMORY[0xFFFFF78000000340];
  KiTickOffset = v13;
  return result;
}
