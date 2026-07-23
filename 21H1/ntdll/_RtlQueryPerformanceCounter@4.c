/*
 * XREFs of _RtlQueryPerformanceCounter@4 @ 0x4B2DBC20
 * Callers:
 *     _RtlGetSystemTimePrecise@0 @ 0x4B2DBB10 (_RtlGetSystemTimePrecise@0.c)
 *     _RtlCapabilityCheck@12 @ 0x4B2EF210 (_RtlCapabilityCheck@12.c)
 *     _EtwpReserveTraceBuffer@20 @ 0x4B2EFD10 (_EtwpReserveTraceBuffer@20.c)
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 *     _EtwpInitLoggerContext@20 @ 0x4B2F1733 (_EtwpInitLoggerContext@20.c)
 *     _RtlGetInterruptTimePrecise@4 @ 0x4B3448C0 (_RtlGetInterruptTimePrecise@4.c)
 *     _RtlGetMultiTimePrecise@12 @ 0x4B3449D0 (_RtlGetMultiTimePrecise@12.c)
 *     PsspSampleCounters @ 0x4B386FC7 (PsspSampleCounters.c)
 * Callees:
 *     _RtlWow64GetProcessMachines@12 @ 0x4B2DBD70 (_RtlWow64GetProcessMachines@12.c)
 *     _NtQueryPerformanceCounter@8 @ 0x4B2F2C90 (_NtQueryPerformanceCounter@8.c)
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 *     ReadTimeStampCounterFromEmulator @ 0x4B344841 (ReadTimeStampCounterFromEmulator.c)
 */

LOGICAL __cdecl RtlQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter)
{
  char v1; // bl
  int v2; // edx
  __int64 v3; // rdi
  int *v4; // edi
  int v5; // ecx
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  int v8; // ecx
  int v9; // ecx
  int v10; // edi
  bool v11; // cf
  unsigned __int64 v12; // rax
  struct _TEB *v14; // eax
  int WowTebOffset; // ecx
  _BYTE *v16; // eax
  LARGE_INTEGER v17; // [esp+Ch] [ebp-54h] BYREF
  _DWORD v18[2]; // [esp+14h] [ebp-4Ch] BYREF
  unsigned __int64 v19; // [esp+1Ch] [ebp-44h] BYREF
  unsigned __int64 v20; // [esp+24h] [ebp-3Ch] BYREF
  __int64 v21; // [esp+2Ch] [ebp-34h]
  int v22; // [esp+34h] [ebp-2Ch]
  int v23; // [esp+38h] [ebp-28h]
  int *v24; // [esp+3Ch] [ebp-24h]
  int v25; // [esp+40h] [ebp-20h]
  int v26; // [esp+44h] [ebp-1Ch]
  unsigned int v27; // [esp+48h] [ebp-18h]
  unsigned int v28; // [esp+4Ch] [ebp-14h]
  unsigned int v29; // [esp+50h] [ebp-10h]
  unsigned __int64 *v30; // [esp+54h] [ebp-Ch]
  USHORT ProcessMachine; // [esp+58h] [ebp-8h] BYREF
  USHORT NativeMachine; // [esp+5Ch] [ebp-4h] BYREF

  v1 = MEMORY[0x7FFE03C6];
  if ( (MEMORY[0x7FFE03C6] & 4) != 0 )
  {
    v14 = NtCurrentTeb();
    WowTebOffset = v14->WowTebOffset;
    if ( WowTebOffset < 0 )
      v14 = (struct _TEB *)((char *)v14 + WowTebOffset);
    v16 = v14 == (struct _TEB *)v14->NtTib.Self ? v14->TlsSlots[10] : (_BYTE *)v14[1].GdiTebBatch.Buffer[189];
    if ( (v16[4] & 2) == 0 )
      goto LABEL_23;
  }
  if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
  {
LABEL_23:
    NtQueryPerformanceCounter(&v17, 0);
    *PerformanceCounter = v17;
    return 1;
  }
  v2 = 2147353528;
  v3 = MEMORY[0x7FFE03B8];
  v21 = MEMORY[0x7FFE03B8];
  if ( (MEMORY[0x7FFE03C6] & 2) != 0 )
  {
    v4 = (int *)RtlpHypervisorSharedUserVa;
    v24 = (int *)RtlpHypervisorSharedUserVa;
    if ( RtlpHypervisorSharedUserVa )
    {
      while ( 1 )
      {
        v23 = *v4;
        if ( !v23 )
          goto LABEL_23;
        RtlWow64GetProcessMachines((HANDLE)0xFFFFFFFF, &ProcessMachine, &NativeMachine);
        LODWORD(v6) = 43620;
        if ( NativeMachine == 0xAA64 )
        {
          v30 = &v20;
          __asm { int     81h }
          LODWORD(v20) = &v20;
          HIDWORD(v20) = HIDWORD(v6);
          if ( (v1 & 0x40) == 0 )
            goto LABEL_12;
          v30 = (unsigned __int64 *)v18;
          __asm { int     81h }
          v18[0] = v18;
          v18[1] = HIDWORD(v6);
          if ( ((BYTE4(v20) ^ BYTE4(v6)) & 1) != 0 )
            goto LABEL_12;
          LODWORD(v6) = v18[0];
        }
        else if ( v1 >= 0 )
        {
          if ( (v1 & 0x20) != 0 )
          {
            _mm_lfence();
          }
          else if ( (v1 & 0x10) != 0 )
          {
            _mm_mfence();
          }
          v6 = __rdtsc();
        }
        else
        {
          __asm { rdtscp }
          v22 = v5;
        }
        v20 = v6;
LABEL_12:
        v7 = v4[3];
        v8 = v4[4];
        v30 = (unsigned __int64 *)v4[2];
        v26 = v8;
        v9 = v4[5];
        v29 = v7;
        v27 = (HIDWORD(v20) * (unsigned __int64)(unsigned int)v30) >> 32;
        v25 = v9;
        v28 = (v7 * (unsigned __int64)(unsigned int)v20) >> 32;
        v10 = v27
            + v28
            + HIDWORD(v20) * v7
            + ((v7 * (unsigned int)v20
              + __PAIR64__(
                  __CFADD__(HIDWORD(v20) * (_DWORD)v30, ((unsigned int)v30 * (unsigned __int64)(unsigned int)v20) >> 32),
                  (v20 * (unsigned int)v30) >> 32)) >> 32);
        v11 = __CFADD__(v26, v10);
        LODWORD(v19) = v26 + v10;
        v4 = v24;
        HIDWORD(v19) = v9
                     + v11
                     + ((v27
                       + v28
                       + HIDWORD(v20) * (unsigned __int64)v7
                       + ((v7 * (unsigned int)v20
                         + __PAIR64__(
                             __CFADD__(
                               HIDWORD(v20) * (_DWORD)v30,
                               ((unsigned int)v30 * (unsigned __int64)(unsigned int)v20) >> 32),
                             (v20 * (unsigned int)v30) >> 32)) >> 32)) >> 32);
        if ( *v24 == v23 )
        {
          v3 = v21;
          goto LABEL_14;
        }
      }
    }
    goto LABEL_23;
  }
  LOBYTE(v2) = MEMORY[0x7FFE03C6];
  LODWORD(v12) = ReadTimeStampCounterFromEmulator(&v19, v2);
  if ( (_BYTE)v12 )
  {
LABEL_14:
    v12 = v19;
  }
  else if ( v1 >= 0 )
  {
    if ( (v1 & 0x20) != 0 )
    {
      _mm_lfence();
    }
    else if ( (v1 & 0x10) != 0 )
    {
      _mm_mfence();
    }
    v12 = __rdtsc();
    v19 = v12;
  }
  else
  {
    __asm { rdtscp }
    v19 = v12;
  }
  PerformanceCounter->QuadPart = (v3 + v12) >> MEMORY[0x7FFE03C7];
  return 1;
}
