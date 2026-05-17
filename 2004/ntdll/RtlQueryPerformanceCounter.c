/*
 * XREFs of RtlQueryPerformanceCounter @ 0x180040150
 * Callers:
 *     RtlCapabilityCheck @ 0x18003FC80 (RtlCapabilityCheck.c)
 *     RtlGetSystemTimePrecise @ 0x180040090 (RtlGetSystemTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x180043D50 (RtlGetInterruptTimePrecise.c)
 *     EtwpReserveTraceBuffer @ 0x180050018 (EtwpReserveTraceBuffer.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800564B8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x180056D6C (EtwpInitLoggerContext.c)
 *     RtlGetMultiTimePrecise @ 0x1800E5960 (RtlGetMultiTimePrecise.c)
 *     PsspSampleCounters @ 0x180114780 (PsspSampleCounters.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x18009D430 (NtQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlQueryPerformanceCounter(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    goto LABEL_23;
  if ( (MEMORY[0x7FFE03C6] & 2) == 0 )
  {
    if ( MEMORY[0x7FFE03C6] >= 0 )
    {
      if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
      {
        _mm_lfence();
      }
      else if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
      {
        _mm_mfence();
      }
      v2 = __rdtsc();
      LODWORD(a2) = HIDWORD(v2);
      v2 = (unsigned int)v2;
      a2 = (unsigned int)a2;
    }
    else
    {
      __asm { rdtscp }
    }
    v4 = v2 | (a2 << 32);
    goto LABEL_8;
  }
  if ( !RtlpHypervisorSharedUserVa || !*(_DWORD *)RtlpHypervisorSharedUserVa )
  {
LABEL_23:
    NtQueryPerformanceCounter(&v6, 0LL);
    *a1 = v6;
    return 1LL;
  }
  if ( MEMORY[0x7FFE03C6] >= 0 )
  {
    if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
    {
      _mm_lfence();
    }
    else if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
    {
      _mm_mfence();
    }
    v2 = __rdtsc();
    LODWORD(a2) = HIDWORD(v2);
    v2 = (unsigned int)v2;
    a2 = (unsigned int)a2;
  }
  else
  {
    __asm { rdtscp }
  }
  v4 = *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
     + (((v2 | (a2 << 32)) * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
LABEL_8:
  *a1 = (MEMORY[0x7FFE03B8] + v4) >> MEMORY[0x7FFE03C7];
  return 1LL;
}
