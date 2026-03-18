/*
 * XREFs of KeQuerySystemAllowedCpuSetAffinity @ 0x1402FF090
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402FF620 (PpmParkSteerInterrupts.c)
 *     KeResumeClockTimerFromIdle @ 0x140308240 (KeResumeClockTimerFromIdle.c)
 *     PpmCheckContinueExecution @ 0x140343BA0 (PpmCheckContinueExecution.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeQuerySystemAllowedCpuSetAffinity(unsigned __int16 *a1, __int64 *a2)
{
  __int64 v4; // rbx
  bool v5; // zf
  __int64 result; // rax
  unsigned int v7; // ebp
  unsigned int v8; // r8d
  unsigned __int64 *v9; // r10
  unsigned __int64 v10; // r9
  __int64 v11; // r11
  unsigned __int64 v12; // rdx

  do
  {
    while ( 1 )
    {
      v4 = KiCpuSetSequence;
      if ( (KiCpuSetSequence & 1) == 0 )
        break;
      _mm_pause();
    }
    if ( *a2 == KiCpuSetSequence )
      return result;
    memset(a1 + 4, 0, 8LL * *a1);
    v5 = KiRestrictedSystemCpuSetsActive == 0;
    *a1 = 1;
    if ( v5 )
    {
      KiCopyAffinityEx(a1, a1[1], &KeActiveProcessors);
      goto LABEL_5;
    }
    v7 = (unsigned __int16)KiActiveGroups;
    v8 = 0;
    if ( KiActiveGroups )
    {
      v9 = (unsigned __int64 *)KiSystemAllowedCpuSets;
      while ( 1 )
      {
        v10 = *v9;
        v11 = 0LL;
        if ( !*v9 )
          goto LABEL_17;
        do
        {
          _BitScanForward64(&v12, v10);
          v11 |= *((_QWORD *)KiCpuSetAffinities + 64 * v8 + (unsigned int)v12);
          v10 &= ~(1LL << v12);
        }
        while ( v10 );
        if ( !v11 )
          goto LABEL_17;
        if ( *a1 > (unsigned __int16)v8 )
          goto LABEL_16;
        if ( a1[1] > (unsigned __int16)v8 )
          break;
LABEL_17:
        ++v8;
        v9 += 2;
        if ( v8 >= v7 )
          goto LABEL_5;
      }
      *a1 = v8 + 1;
LABEL_16:
      *(_QWORD *)&a1[4 * (unsigned __int16)v8 + 4] |= v11;
      goto LABEL_17;
    }
LABEL_5:
    result = KiCpuSetSequence;
  }
  while ( KiCpuSetSequence != v4 );
  *a2 = v4;
  return result;
}
