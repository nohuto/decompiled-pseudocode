/*
 * XREFs of _EtwpReserveTraceBuffer@20 @ 0x4B2EFD10
 * Callers:
 *     _EtwpTraceUmMessage@24 @ 0x4B2EFAD2 (_EtwpTraceUmMessage@24.c)
 *     @EtwpRelogEvent@8 @ 0x4B380EC6 (@EtwpRelogEvent@8.c)
 *     @EtwpTraceUmEvent@20 @ 0x4B381076 (@EtwpTraceUmEvent@20.c)
 *     _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E (_EtwpWriteToPrivateBuffers@40.c)
 * Callees:
 *     _RtlQueryPerformanceCounter@4 @ 0x4B2DBC20 (_RtlQueryPerformanceCounter@4.c)
 *     _EtwpSwitchBuffer@12 @ 0x4B2EFDE8 (_EtwpSwitchBuffer@12.c)
 */

int __fastcall EtwpReserveTraceBuffer(
        int a1,
        unsigned int a2,
        unsigned int a3,
        PLARGE_INTEGER PerformanceCounter,
        _DWORD *a5)
{
  unsigned int v6; // edi
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // ebx
  int v11; // ecx
  unsigned __int32 v12; // edx
  int v13; // edi
  PLARGE_INTEGER v14; // ecx
  unsigned __int64 v15; // rax
  unsigned int v17; // [esp+Ch] [ebp-4h]
  int v18; // [esp+Ch] [ebp-4h]

  v6 = a3;
  if ( a2 > *(_DWORD *)(a1 + 144) )
  {
LABEL_22:
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 272));
    if ( (*(_DWORD *)(a1 + 212) & 0x10000) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(12 * *(unsigned __int16 *)(*(_DWORD *)(a1 + 376) + 4 * v6)
                                                      + *(_DWORD *)(a1 + 356)
                                                      + 4));
    return 0;
  }
  v7 = *(_DWORD *)(a1 + 136);
  v8 = a2 + 7;
  v9 = *(_DWORD *)(a1 + 140);
  v10 = v8 & 0xFFFFFFF8;
  v17 = v9;
  if ( a3 >= v7 )
  {
    v6 = a3 % v7;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v11 = *(_DWORD *)(a1 + 4 * v6 + 388);
    if ( !v11 )
      goto LABEL_13;
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
    if ( *(_DWORD *)(v11 + 44) != 1 || *(_DWORD *)(v11 + 8) > v9 )
      goto LABEL_13;
    v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), v10);
    if ( v12 + v10 <= v17 )
      break;
    if ( v12 <= v17 )
      *(_DWORD *)(v11 + 4) = v12;
LABEL_13:
    if ( (unsigned __int8)EtwpSwitchBuffer(v6) != 1 )
      goto LABEL_22;
LABEL_14:
    v9 = v17;
  }
  v13 = v12 + v11;
  v18 = v12 + v11;
  *a5 = v11;
  v14 = PerformanceCounter;
  if ( PerformanceCounter )
  {
    if ( *(_DWORD *)(a1 + 16) == 2 )
    {
      while ( 1 )
      {
        HIDWORD(v15) = MEMORY[0x7FFE0018];
        if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
          break;
        _mm_pause();
      }
      v14 = PerformanceCounter;
      v13 = v18;
      PerformanceCounter->LowPart = MEMORY[0x7FFE0014];
LABEL_11:
      v14->HighPart = HIDWORD(v15);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 16) == 3 )
      {
        v15 = __rdtsc();
        PerformanceCounter->LowPart = v15;
        goto LABEL_11;
      }
      RtlQueryPerformanceCounter(PerformanceCounter);
    }
  }
  return v13;
}
