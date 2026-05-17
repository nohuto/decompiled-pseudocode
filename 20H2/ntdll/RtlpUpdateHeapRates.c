/*
 * XREFs of RtlpUpdateHeapRates @ 0x18007C3AC
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpUpdateHeapRates(__int64 a1, int a2)
{
  int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // eax
  bool v5; // zf
  int v6; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v6 = v2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        ++*(_DWORD *)(a1 + 628);
    }
    else
    {
      ++*(_DWORD *)(a1 + 624);
    }
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 616) + 1;
    v4 = *(_DWORD *)(a1 + 620) + 1;
    *(_DWORD *)(a1 + 616) = v3;
    v5 = *(_BYTE *)(a1 + 418) == 2;
    *(_DWORD *)(a1 + 620) = v4;
    if ( !v5 )
    {
      if ( v3 < v4 )
      {
        v3 = 0;
        *(_QWORD *)(a1 + 616) = 0LL;
        v4 = 0;
      }
      if ( v4 >= v3 >> 4 )
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
    }
  }
}
