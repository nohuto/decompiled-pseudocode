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

int __fastcall EtwpInitLoggerContext(_DWORD *a1, int a2, unsigned int a3, int a4, int a5)
{
  _DWORD *v5; // esi
  int Heap; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // eax
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
  int result; // eax
  unsigned __int16 v21; // di
  int v22; // eax
  int v23; // [esp-8h] [ebp-4Ch]
  int v24; // [esp+10h] [ebp-34h]
  int v25; // [esp+14h] [ebp-30h]
  unsigned __int64 v26; // [esp+18h] [ebp-2Ch]
  unsigned __int64 v27; // [esp+20h] [ebp-24h] BYREF
  int v28; // [esp+2Ch] [ebp-18h] BYREF
  int v29; // [esp+30h] [ebp-14h]
  int v30; // [esp+34h] [ebp-10h]
  _DWORD *v31; // [esp+38h] [ebp-Ch]
  __int16 v32[4]; // [esp+3Ch] [ebp-8h] BYREF

  v30 = a2;
  v31 = a1;
  v32[0] = 1;
  if ( a4 )
    EtwpGetProcessorStreamsCount(&a3, v32);
  while ( MEMORY[0x7FFE0018] != MEMORY[0x7FFE001C] )
    _mm_pause();
  v5 = v31;
  v24 = MEMORY[0x7FFE0014];
  v25 = MEMORY[0x7FFE0018];
  if ( v31[10] == 2 )
  {
    while ( MEMORY[0x7FFE0018] != MEMORY[0x7FFE001C] )
      _mm_pause();
    v5 = v31;
    v26 = MEMORY[0x7FFE0014];
  }
  else if ( v31[10] == 3 )
  {
    v26 = __rdtsc();
  }
  else
  {
    v27 = 0LL;
    RtlQueryPerformanceCounter(&v27);
    v26 = v27;
  }
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 4 * a3 + 392);
  v7 = a4;
  v8 = Heap;
  if ( !Heap )
    return 0;
  v9 = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 4 * a3);
  *(_DWORD *)(v8 + 376) = v9;
  if ( v9 )
  {
    if ( v7 )
    {
      v23 = v7;
      v21 = v32[0];
      if ( EtwpFillProcessorStreamIndexMap(v23, a5) )
        goto LABEL_44;
      v22 = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 12 * v21);
      *(_DWORD *)(v8 + 356) = v22;
      if ( !v22 )
        goto LABEL_44;
      v10 = a3;
    }
    else
    {
      v10 = a3;
      for ( i = 0; i < v10; ++i )
      {
        *(_WORD *)(*(_DWORD *)(v8 + 376) + 4 * i) = 0;
        *(_WORD *)(*(_DWORD *)(v8 + 376) + 4 * i + 2) = i;
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
    *(_DWORD *)(v8 + 140) = v13;
    if ( RtlCreateUnicodeString(v8 + 108, (const unsigned __int16 *)v5[37])
      && !EtwpAddInstanceIdToLogFileName(v5, v5[24], &v28) )
    {
      if ( (v5[16] & 0x4000) != 0 )
      {
        *(_DWORD *)(v8 + 284) = &EtwpGlobalSequence;
      }
      else if ( (v5[16] & 0x8000) != 0 )
      {
        *(_DWORD *)(v8 + 284) = v8 + 288;
      }
      v14 = 2048;
      *(_DWORD *)(v8 + 20) = v30;
      *(_DWORD *)(v8 + 136) = v10;
      *(_DWORD *)(v8 + 212) = 2048;
      *(_DWORD *)(v8 + 44) = 0xFFFF;
      *(_DWORD *)(v8 + 40) = -1072889856;
      *(_DWORD *)(v8 + 36) = -1072562176;
      v15 = v5[16];
      if ( (v15 & 0x400) != 0 )
      {
        v14 = 3072;
        *(_DWORD *)(v8 + 212) = 3072;
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
            *(_DWORD *)(v8 + 212) = 2056;
            *(_DWORD *)(v8 + 124) = v28;
            *(_DWORD *)(v8 + 128) = v29;
            goto LABEL_23;
          }
          if ( (v15 & 1) == 0 )
            goto LABEL_23;
          v14 = 2049;
        }
        *(_DWORD *)(v8 + 212) = v14;
        *(_DWORD *)(v8 + 116) = v28;
        *(_DWORD *)(v8 + 120) = v29;
      }
LABEL_23:
      v16 = v14 | v5[16] & 0x34133024;
      v17 = v31;
      *(_DWORD *)(v8 + 212) = v16;
      v18 = v5[27];
      v19 = v5 + 6;
      *(_DWORD *)(v8 + 280) = v18;
      *(_DWORD *)(v8 + 160) = *(_DWORD *)(v8 + 156);
      *(_DWORD *)(v8 + 48) = *v19++;
      *(_DWORD *)(v8 + 52) = *v19++;
      *(_DWORD *)(v8 + 56) = *v19;
      *(_DWORD *)(v8 + 60) = v19[1];
      *(_DWORD *)(v8 + 208) = v17[15];
      *(_DWORD *)(v8 + 148) = v17[14];
      *(_DWORD *)(v8 + 152) = v17[13];
      *(_DWORD *)(v8 + 168) = v8 + 164;
      *(_DWORD *)(v8 + 164) = v8 + 164;
      *(_DWORD *)(v8 + 180) = 0;
      *(_DWORD *)(v8 + 172) = v8 + 180;
      *(_DWORD *)(v8 + 176) = v8 + 180;
      *(_DWORD *)(v8 + 192) = 0;
      *(_DWORD *)(v8 + 184) = v8 + 192;
      *(_DWORD *)(v8 + 188) = v8 + 192;
      *(_DWORD *)(v8 + 204) = 0;
      *(_DWORD *)(v8 + 196) = v8 + 204;
      *(_DWORD *)(v8 + 200) = v8 + 204;
      *(_DWORD *)(v8 + 336) = v8 + 332;
      *(_DWORD *)(v8 + 332) = v8 + 332;
      *(_DWORD *)(v8 + 344) = v8 + 340;
      *(_DWORD *)(v8 + 340) = v8 + 340;
      *(_DWORD *)(v8 + 16) = v17[10];
      *(_DWORD *)(v8 + 64) = v17[24];
      *(_DWORD *)(v8 + 256) = v17[19];
      if ( (int)NtCreateEvent(v8 + 96, 2031619, 0, 1, 0) >= 0 && (int)NtCreateEvent(v8 + 100, 2031619, 0, 1, 0) >= 0 )
      {
        RtlInitializeCriticalSectionEx((_DWORD *)(v8 + 72), 0, 0);
        *(_DWORD *)(v8 + 68) = 0;
        *(_DWORD *)(v8 + 216) = 1;
        result = v8;
        *(_DWORD *)v8 = v24;
        *(_DWORD *)(v8 + 4) = v25;
        *(_QWORD *)(v8 + 8) = v26;
        return result;
      }
    }
  }
LABEL_44:
  if ( *(_DWORD *)(v8 + 100) )
  {
    NtClose(*(HANDLE *)(v8 + 100));
    *(_DWORD *)(v8 + 100) = 0;
  }
  if ( *(_DWORD *)(v8 + 96) )
  {
    NtClose(*(HANDLE *)(v8 + 96));
    *(_DWORD *)(v8 + 96) = 0;
  }
  if ( *(_DWORD *)(v8 + 356) )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(v8 + 356));
  if ( *(_DWORD *)(v8 + 376) )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(v8 + 376));
  EtwpFreeStreamIndexMap((int *)v8);
  RtlFreeAnsiString((PUNICODE_STRING)(v8 + 108));
  RtlFreeAnsiString((PUNICODE_STRING)(v8 + 116));
  RtlFreeAnsiString((PUNICODE_STRING)(v8 + 124));
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v8);
  return 0;
}
