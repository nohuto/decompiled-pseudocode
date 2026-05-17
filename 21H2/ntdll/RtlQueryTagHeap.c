/*
 * XREFs of RtlQueryTagHeap @ 0x1800F2AD0
 * Callers:
 *     RtlDebugQueryTagHeap @ 0x1800F9884 (RtlDebugQueryTagHeap.c)
 *     TpDbgDumpHeapUsage @ 0x1801122E0 (TpDbgDumpHeapUsage.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlDebugQueryTagHeap @ 0x1800F9884 (RtlDebugQueryTagHeap.c)
 */

void *__fastcall RtlQueryTagHeap(__int64 a1, unsigned int a2, __int64 a3, char a4, __int64 a5)
{
  int v7; // ecx
  void *TagHeap; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v13; // [rsp+30h] [rbp-28h]
  unsigned __int16 v14; // [rsp+70h] [rbp+18h]

  v14 = a3;
  v13 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 116);
  if ( (v7 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  TagHeap = 0LL;
  v9 = v7 | a2;
  if ( (v9 & 0x61000000) != 0 && (v9 & 0x10000000) == 0 )
  {
    TagHeap = (void *)RtlDebugQueryTagHeap(a1, v9, (unsigned __int16)a3, a4, a5);
  }
  else
  {
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v13 = 1;
    }
    if ( v14 < *(_WORD *)(a1 + 224) && (v10 = *(_QWORD *)(a1 + 232)) != 0 )
    {
      v9 = 9LL * v14;
      a3 = a5;
      if ( a5 )
      {
        *(_DWORD *)a5 = *(_DWORD *)(v10 + 72LL * v14);
        *(_DWORD *)(a5 + 4) = *(_DWORD *)(v10 + 72LL * v14 + 4);
        *(_QWORD *)(a5 + 8) = 16LL * *(_QWORD *)(v10 + 72LL * v14 + 8);
      }
      if ( a4 )
      {
        *(_QWORD *)(v10 + 72LL * v14) = 0LL;
        *(_QWORD *)(v10 + 72LL * v14 + 8) = 0LL;
      }
      TagHeap = (void *)(v10 + 20 + 72LL * v14);
    }
    else if ( (v14 & 0x8000u) != 0 && (v14 ^ 0x8000u) < 0x81 )
    {
      v9 = *(_QWORD *)(a1 + 328);
      if ( v9 )
      {
        v11 = v9 + 16LL * (v14 ^ 0x8000u);
        v9 = a5;
        if ( a5 )
        {
          *(_DWORD *)a5 = *(_DWORD *)v11;
          *(_DWORD *)(a5 + 4) = *(_DWORD *)(v11 + 4);
          *(_QWORD *)(a5 + 8) = 16LL * *(_QWORD *)(v11 + 8);
        }
        if ( a4 )
        {
          *(_QWORD *)v11 = 0LL;
          *(_QWORD *)(v11 + 8) = 0LL;
        }
        TagHeap = &unk_180122394;
      }
    }
  }
  if ( v13 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352), v9, a3);
  return TagHeap;
}
