/*
 * XREFs of _EtwpInitLoggerContext@20 @ 0x4B2F1733
 * Callers:
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCreateUnicodeString@8 @ 0x4B2D40C0 (_RtlCreateUnicodeString@8.c)
 *     _RtlQueryPerformanceCounter@4 @ 0x4B2DBC20 (_RtlQueryPerformanceCounter@4.c)
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 *     _EtwpFreeStreamIndexMap@4 @ 0x4B2EE48E (_EtwpFreeStreamIndexMap@4.c)
 *     _EtwpAddInstanceIdToLogFileName@12 @ 0x4B2F1A0B (_EtwpAddInstanceIdToLogFileName@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 *     _EtwpFillProcessorStreamIndexMap@16 @ 0x4B38160C (_EtwpFillProcessorStreamIndexMap@16.c)
 *     _EtwpGetProcessorStreamsCount@16 @ 0x4B381783 (_EtwpGetProcessorStreamsCount@16.c)
 */

char *__fastcall EtwpInitLoggerContext(_DWORD *a1, int a2, unsigned int a3, int a4, int a5)
{
  _DWORD *v5; // esi
  char *Heap; // eax
  int v7; // edi
  char *v8; // ebx
  PVOID v9; // eax
  unsigned int v10; // edi
  unsigned int i; // ecx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // ecx
  int v18; // eax
  _DWORD *v19; // esi
  char *result; // eax
  unsigned __int16 v21; // di
  PVOID v22; // eax
  int v23; // [esp-8h] [ebp-4Ch]
  SIZE_T v24; // [esp-4h] [ebp-48h]
  SIZE_T v25; // [esp-4h] [ebp-48h]
  SIZE_T v26; // [esp-4h] [ebp-48h]
  int v27; // [esp+10h] [ebp-34h]
  int v28; // [esp+14h] [ebp-30h]
  LARGE_INTEGER v29; // [esp+18h] [ebp-2Ch]
  LARGE_INTEGER PerformanceCounter; // [esp+20h] [ebp-24h] BYREF
  int v31; // [esp+2Ch] [ebp-18h] BYREF
  int v32; // [esp+30h] [ebp-14h]
  int v33; // [esp+34h] [ebp-10h]
  _DWORD *v34; // [esp+38h] [ebp-Ch]
  __int16 v35[4]; // [esp+3Ch] [ebp-8h] BYREF

  v33 = a2;
  v34 = a1;
  v35[0] = 1;
  if ( a4 )
    EtwpGetProcessorStreamsCount(&a3, v35);
  while ( MEMORY[0x7FFE0018] != MEMORY[0x7FFE001C] )
    _mm_pause();
  v5 = v34;
  v27 = MEMORY[0x7FFE0014];
  v28 = MEMORY[0x7FFE0018];
  if ( v34[10] == 2 )
  {
    while ( MEMORY[0x7FFE0018] != MEMORY[0x7FFE001C] )
      _mm_pause();
    v5 = v34;
    v29.QuadPart = MEMORY[0x7FFE0014];
  }
  else if ( v34[10] == 3 )
  {
    v29.QuadPart = __rdtsc();
  }
  else
  {
    PerformanceCounter.QuadPart = 0LL;
    RtlQueryPerformanceCounter(&PerformanceCounter);
    v29 = PerformanceCounter;
  }
  LODWORD(v24) = 4 * a3 + 392;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v24);
  v7 = a4;
  v8 = Heap;
  if ( !Heap )
    return 0;
  LODWORD(v25) = 4 * a3;
  v9 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v25);
  *((_DWORD *)v8 + 94) = v9;
  if ( v9 )
  {
    if ( v7 )
    {
      v23 = v7;
      v21 = v35[0];
      if ( EtwpFillProcessorStreamIndexMap(v23, a5) )
        goto LABEL_44;
      LODWORD(v26) = 12 * v21;
      v22 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v26);
      *((_DWORD *)v8 + 89) = v22;
      if ( !v22 )
        goto LABEL_44;
      v10 = a3;
    }
    else
    {
      v10 = a3;
      for ( i = 0; i < v10; ++i )
      {
        *(_WORD *)(*((_DWORD *)v8 + 94) + 4 * i) = 0;
        *(_WORD *)(*((_DWORD *)v8 + 94) + 4 * i + 2) = i;
      }
    }
    v12 = v5[12];
    if ( v12 )
    {
      if ( v12 > 0x4000 )
      {
        v5[12] = 0x4000;
        v12 = 0x4000;
      }
      v13 = v12 << 10;
    }
    else
    {
      v13 = 4096;
    }
    *((_DWORD *)v8 + 35) = v13;
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(v8 + 108), (PCWSTR)v5[37])
      && !EtwpAddInstanceIdToLogFileName(v5, v5[24], &v31) )
    {
      if ( (v5[16] & 0x4000) != 0 )
      {
        *((_DWORD *)v8 + 71) = &EtwpGlobalSequence;
      }
      else if ( (v5[16] & 0x8000) != 0 )
      {
        *((_DWORD *)v8 + 71) = v8 + 288;
      }
      v14 = 2048;
      *((_DWORD *)v8 + 5) = v33;
      *((_DWORD *)v8 + 34) = v10;
      *((_DWORD *)v8 + 53) = 2048;
      *((_DWORD *)v8 + 11) = 0xFFFF;
      *((_DWORD *)v8 + 10) = -1072889856;
      *((_DWORD *)v8 + 9) = -1072562176;
      v15 = v5[16];
      if ( (v15 & 0x400) != 0 )
      {
        v14 = 3072;
        *((_DWORD *)v8 + 53) = 3072;
      }
      else
      {
        if ( (v15 & 2) != 0 )
        {
          v14 = 2050;
        }
        else
        {
          if ( (v15 & 8) != 0 )
          {
            v14 = 2056;
            *((_DWORD *)v8 + 53) = 2056;
            *((_DWORD *)v8 + 31) = v31;
            *((_DWORD *)v8 + 32) = v32;
            goto LABEL_23;
          }
          if ( (v15 & 1) == 0 )
            goto LABEL_23;
          v14 = 2049;
        }
        *((_DWORD *)v8 + 53) = v14;
        *((_DWORD *)v8 + 29) = v31;
        *((_DWORD *)v8 + 30) = v32;
      }
LABEL_23:
      v16 = v14 | v5[16] & 0x34133024;
      v17 = v34;
      *((_DWORD *)v8 + 53) = v16;
      v18 = v5[27];
      v19 = v5 + 6;
      *((_DWORD *)v8 + 70) = v18;
      *((_DWORD *)v8 + 40) = *((_DWORD *)v8 + 39);
      *((_DWORD *)v8 + 12) = *v19++;
      *((_DWORD *)v8 + 13) = *v19++;
      *((_DWORD *)v8 + 14) = *v19;
      *((_DWORD *)v8 + 15) = v19[1];
      *((_DWORD *)v8 + 52) = v17[15];
      *((_DWORD *)v8 + 37) = v17[14];
      *((_DWORD *)v8 + 38) = v17[13];
      *((_DWORD *)v8 + 42) = v8 + 164;
      *((_DWORD *)v8 + 41) = v8 + 164;
      *((_DWORD *)v8 + 45) = 0;
      *((_DWORD *)v8 + 43) = v8 + 180;
      *((_DWORD *)v8 + 44) = v8 + 180;
      *((_DWORD *)v8 + 48) = 0;
      *((_DWORD *)v8 + 46) = v8 + 192;
      *((_DWORD *)v8 + 47) = v8 + 192;
      *((_DWORD *)v8 + 51) = 0;
      *((_DWORD *)v8 + 49) = v8 + 204;
      *((_DWORD *)v8 + 50) = v8 + 204;
      *((_DWORD *)v8 + 84) = v8 + 332;
      *((_DWORD *)v8 + 83) = v8 + 332;
      *((_DWORD *)v8 + 86) = v8 + 340;
      *((_DWORD *)v8 + 85) = v8 + 340;
      *((_DWORD *)v8 + 4) = v17[10];
      *((_DWORD *)v8 + 16) = v17[24];
      *((_DWORD *)v8 + 64) = v17[19];
      if ( NtCreateEvent((PHANDLE)v8 + 24, 0x1F0003u, 0, SynchronizationEvent, 0) >= 0
        && NtCreateEvent((PHANDLE)v8 + 25, 0x1F0003u, 0, SynchronizationEvent, 0) >= 0 )
      {
        RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)v8 + 3, 0, 0);
        *((_DWORD *)v8 + 17) = 0;
        *((_DWORD *)v8 + 54) = 1;
        result = v8;
        *(_DWORD *)v8 = v27;
        *((_DWORD *)v8 + 1) = v28;
        *((LARGE_INTEGER *)v8 + 1) = v29;
        return result;
      }
    }
  }
LABEL_44:
  if ( *((_DWORD *)v8 + 25) )
  {
    NtClose(*((HANDLE *)v8 + 25));
    *((_DWORD *)v8 + 25) = 0;
  }
  if ( *((_DWORD *)v8 + 24) )
  {
    NtClose(*((HANDLE *)v8 + 24));
    *((_DWORD *)v8 + 24) = 0;
  }
  if ( *((_DWORD *)v8 + 89) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)v8 + 89));
  if ( *((_DWORD *)v8 + 94) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)v8 + 94));
  EtwpFreeStreamIndexMap((PVOID *)v8);
  RtlFreeAnsiString((PUNICODE_STRING)(v8 + 108));
  RtlFreeAnsiString((PUNICODE_STRING)(v8 + 116));
  RtlFreeAnsiString((PUNICODE_STRING)(v8 + 124));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  return 0;
}
