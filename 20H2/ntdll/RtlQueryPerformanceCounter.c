/*
 * XREFs of RtlQueryPerformanceCounter @ 0x1800401A0
 * Callers:
 *     RtlCapabilityCheck @ 0x18003FCD0 (RtlCapabilityCheck.c)
 *     RtlGetSystemTimePrecise @ 0x1800400E0 (RtlGetSystemTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x180043DA0 (RtlGetInterruptTimePrecise.c)
 *     EtwpReserveTraceBuffer @ 0x180050068 (EtwpReserveTraceBuffer.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180056508 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x180056DBC (EtwpInitLoggerContext.c)
 *     RtlGetMultiTimePrecise @ 0x1800E5DB0 (RtlGetMultiTimePrecise.c)
 *     PsspSampleCounters @ 0x180114C90 (PsspSampleCounters.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x18009D6D0 (NtQueryPerformanceCounter.c)
 */

LOGICAL __cdecl RtlQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v4; // rdx
  LARGE_INTEGER PerformanceCountera; // [rsp+40h] [rbp+18h] BYREF

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
      v1 = __rdtsc();
      LODWORD(v2) = HIDWORD(v1);
      v1 = (unsigned int)v1;
      v2 = (unsigned int)v2;
    }
    else
    {
      __asm { rdtscp }
    }
    v4 = v1 | (v2 << 32);
    goto LABEL_8;
  }
  if ( !RtlpHypervisorSharedUserVa || !*(_DWORD *)RtlpHypervisorSharedUserVa )
  {
LABEL_23:
    NtQueryPerformanceCounter(&PerformanceCountera, 0LL);
    *PerformanceCounter = PerformanceCountera;
    return 1;
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
    v1 = __rdtsc();
    LODWORD(v2) = HIDWORD(v1);
    v1 = (unsigned int)v1;
    v2 = (unsigned int)v2;
  }
  else
  {
    __asm { rdtscp }
  }
  v4 = *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
     + (((v1 | (v2 << 32)) * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
LABEL_8:
  PerformanceCounter->QuadPart = (MEMORY[0x7FFE03B8] + v4) >> MEMORY[0x7FFE03C7];
  return 1;
}
