/*
 * XREFs of _RtlpUpdateTagEntry@20 @ 0x4B35995E
 * Callers:
 *     _RtlpGrowBlockInPlace@20 @ 0x4B2B1340 (_RtlpGrowBlockInPlace@20.c)
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall RtlpUpdateTagEntry(int a1, unsigned __int16 a2, int a3, unsigned int a4, int a5)
{
  int v6; // edx
  int v7; // ebx
  _DWORD *v8; // ecx
  unsigned __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  unsigned __int16 v12; // dx
  int v13; // ebx
  _DWORD *v14; // eax
  unsigned __int16 v15; // dx
  int v16; // esi
  int v17; // edi
  unsigned __int16 v18; // dx

  if ( !RtlpGlobalTagHeap )
    return 0;
  if ( a5 < 2 )
  {
    if ( a2 && a2 < *(_WORD *)(a1 + 132) && (v13 = *(_DWORD *)(a1 + 136)) != 0 )
    {
      v14 = (_DWORD *)(v13 + (a2 << 6));
    }
    else if ( (a2 & 0x800) != 0 )
    {
      v15 = a2 & 0xF7FF;
      if ( v15 >= *(_WORD *)(RtlpGlobalTagHeap + 132) )
        return 0;
      v16 = *(_DWORD *)(RtlpGlobalTagHeap + 136);
      if ( !v16 )
        return 0;
      v14 = (_DWORD *)(v16 + (v15 << 6));
      a2 = v15 | 0x800;
    }
    else
    {
      v17 = *(_DWORD *)(a1 + 188);
      if ( !v17 )
        return 0;
      if ( a4 >= 0x80 )
        v18 = a5 != 1 ? 0 : 128;
      else
        v18 = a4;
      v14 = (_DWORD *)(v17 + 12 * v18);
      a2 = v18 | 0x8000;
    }
    ++*v14;
    v14[2] += a4;
    return a2;
  }
  if ( a2 )
  {
    if ( (a2 & 0x8000u) == 0 )
    {
      if ( (a2 & 0x800) != 0 )
      {
        v9 = a2 & 0xF7FF;
        if ( v9 >= *(_WORD *)(RtlpGlobalTagHeap + 132) )
          return 0;
        v10 = *(_DWORD *)(RtlpGlobalTagHeap + 136);
        if ( !v10 )
          return 0;
        v8 = (_DWORD *)(v10 + (v9 << 6));
        a2 = v9 | 0x800;
      }
      else
      {
        if ( a2 >= *(_WORD *)(a1 + 132) )
          return 0;
        v11 = *(_DWORD *)(a1 + 136);
        if ( !v11 )
          return 0;
        v8 = (_DWORD *)(v11 + (a2 << 6));
      }
LABEL_15:
      ++v8[1];
      v8[2] -= a3;
      if ( a5 >= 4 )
      {
        if ( (a2 & 0x8000u) != 0 )
        {
          v12 = 128;
          if ( a4 >= 0x80 )
          {
            if ( a5 != 5 )
              v12 = 0;
          }
          else
          {
            v12 = a4;
          }
          v8 = (_DWORD *)(*(_DWORD *)(a1 + 188) + 12 * v12);
          a2 = v12 | 0x8000;
        }
        ++*v8;
        v8[2] += a4;
      }
      return a2;
    }
    v6 = a2 & 0x7FFF;
    if ( (unsigned __int16)v6 < 0x81u )
    {
      v7 = *(_DWORD *)(a1 + 188);
      if ( v7 )
      {
        v8 = (_DWORD *)(v7 + 12 * v6);
        a2 = v6 | 0x8000;
        goto LABEL_15;
      }
    }
  }
  return 0;
}
