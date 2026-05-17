/*
 * XREFs of _RtlpHpLargeWalkHeap@8 @ 0x4B37A78A
 * Callers:
 *     _RtlpHpHeapWalk@12 @ 0x4B37924D (_RtlpHpHeapWalk@12.c)
 * Callees:
 *     _RtlpHpLargeAllocReport@12 @ 0x4B37A12B (_RtlpHpLargeAllocReport@12.c)
 */

int __fastcall RtlpHpLargeWalkHeap(int a1, unsigned int *a2)
{
  int v3; // edi
  int v4; // esi
  int v5; // edx
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // esi

  v3 = 0;
  v4 = a1 + 68;
  if ( *a2 )
  {
    v7 = *(_DWORD *)v4;
    if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    {
      if ( v7 )
        v7 ^= v4;
      else
        v7 = 0;
    }
    while ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 12) & 0xFFFF0000;
      if ( *a2 < v8 )
      {
        v9 = *(_DWORD *)v7;
      }
      else
      {
        if ( *a2 <= v8 )
          break;
        v9 = *(_DWORD *)(v7 + 4);
      }
      if ( (*(_BYTE *)(v4 + 4) & 1) != 0 && v9 )
        v7 ^= v9;
      else
        v7 = v9;
    }
    v5 = 0;
    if ( v7 )
    {
      v5 = *(_DWORD *)v7;
      if ( !*(_DWORD *)v7 )
      {
        v5 = *(_DWORD *)(v7 + 4);
        if ( !v5 )
        {
          v10 = *(_DWORD *)v4;
          while ( v7 != v10 )
          {
            v5 = *(_DWORD *)((*(_DWORD *)(v7 + 8) & 0xFFFFFFFC) + 4);
            if ( v7 != v5 && v5 )
              goto LABEL_30;
            v7 = *(_DWORD *)(v7 + 8) & 0xFFFFFFFC;
          }
          return -2147483622;
        }
      }
    }
    goto LABEL_30;
  }
  if ( (*(_BYTE *)(a1 + 72) & 1) == 0 )
  {
    v6 = *(_DWORD *)v4;
    v5 = *(_DWORD *)v4;
LABEL_6:
    if ( !v6 )
      return -2147483622;
LABEL_30:
    RtlpHpLargeAllocReport(a1, v5, (int)a2);
    return v3;
  }
  v5 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 )
  {
    v6 = v4 ^ v5;
    goto LABEL_6;
  }
  return -2147483622;
}
