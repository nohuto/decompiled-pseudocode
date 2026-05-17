/*
 * XREFs of _RtlpGetNextRegionHeap@16 @ 0x4B357FF1
 * Callers:
 *     _RtlpQueryMemoryUsageHeap@12 @ 0x4B35970A (_RtlpQueryMemoryUsageHeap@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpGetNextRegionHeap(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // ebx
  unsigned int v5; // esi
  _DWORD *v6; // edx
  _DWORD *i; // eax
  _DWORD *v8; // ecx
  _DWORD *v9; // eax

  v4 = a3;
  v5 = -1;
  *a3 = 0;
  v6 = (_DWORD *)(a1 + 164);
  *a4 = 0;
  for ( i = *(_DWORD **)(a1 + 164); i != v6; i = (_DWORD *)*i )
  {
    v8 = i - 4;
    if ( (unsigned int)(i - 4) < v5 && (unsigned int)v8 > a2 )
    {
      v5 = (unsigned int)(i - 4);
      *a3 = v8;
    }
  }
  v9 = *(_DWORD **)(a1 + 156);
  if ( v9 != (_DWORD *)(a1 + 156) )
  {
    do
    {
      if ( (unsigned int)v9 < v5 && (unsigned int)v9 > a2 )
      {
        v5 = (unsigned int)v9;
        *a4 = v9;
      }
      v9 = (_DWORD *)*v9;
    }
    while ( v9 != (_DWORD *)(a1 + 156) );
    v4 = a3;
  }
  if ( v5 == -1 )
    return 0;
  if ( *a4 )
    *v4 = 0;
  return 1;
}
