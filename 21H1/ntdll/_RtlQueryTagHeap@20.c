/*
 * XREFs of _RtlQueryTagHeap@20 @ 0x4B356E90
 * Callers:
 *     _RtlDebugQueryTagHeap@20 @ 0x4B35FB69 (_RtlDebugQueryTagHeap@20.c)
 *     _TpDbgDumpHeapUsage@12 @ 0x4B384700 (_TpDbgDumpHeapUsage@12.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlQueryTagHeap@20 @ 0x4B356E90 (_RtlQueryTagHeap@20.c)
 *     _RtlDebugQueryTagHeap@20 @ 0x4B35FB69 (_RtlDebugQueryTagHeap@20.c)
 */

int *__stdcall RtlQueryTagHeap(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int *TagHeap; // ebx
  int v6; // ecx
  int v7; // edx
  _DWORD *v8; // ecx
  int v9; // edx
  _DWORD *v10; // ecx
  char v12; // [esp+1Bh] [ebp-19h]

  TagHeap = 0;
  v12 = 0;
  if ( *(_DWORD *)(a1 + 8) == -571548178 )
    return 0;
  v6 = *(_DWORD *)(a1 + 68);
  if ( (v6 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0;
  if ( ((v6 | a2) & 0x61000000) != 0 && ((v6 | a2) & 0x10000000) == 0 )
  {
    TagHeap = (int *)RtlDebugQueryTagHeap(a3, a4, a5);
  }
  else
  {
    if ( (((unsigned __int8)v6 | (unsigned __int8)a2) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_DWORD *)(a1 + 200));
      v12 = 1;
    }
    if ( (unsigned __int16)a3 < *(_WORD *)(a1 + 132) && (v7 = *(_DWORD *)(a1 + 136)) != 0 )
    {
      v8 = (_DWORD *)(v7 + ((unsigned __int16)a3 << 6));
      if ( a5 )
      {
        *a5 = *v8;
        a5[1] = v8[1];
        a5[2] = 8 * v8[2];
      }
      if ( (_BYTE)a4 )
      {
        *v8 = 0;
        v8[1] = 0;
        v8[2] = 0;
      }
      TagHeap = v8 + 4;
    }
    else if ( (a3 & 0x8000u) != 0 && ((unsigned __int16)a3 ^ 0x8000u) < 0x81 )
    {
      v9 = *(_DWORD *)(a1 + 188);
      if ( v9 )
      {
        v10 = (_DWORD *)(v9 + 12 * ((unsigned __int16)a3 ^ 0x8000));
        if ( a5 )
        {
          *a5 = *v10;
          a5[1] = v10[1];
          a5[2] = 8 * v10[2];
        }
        if ( (_BYTE)a4 )
        {
          *v10 = 0;
          v10[1] = 0;
          v10[2] = 0;
        }
        TagHeap = &dword_4B285DEC;
      }
    }
  }
  if ( v12 )
    RtlLeaveCriticalSection(*(_DWORD *)(a1 + 200));
  return TagHeap;
}
