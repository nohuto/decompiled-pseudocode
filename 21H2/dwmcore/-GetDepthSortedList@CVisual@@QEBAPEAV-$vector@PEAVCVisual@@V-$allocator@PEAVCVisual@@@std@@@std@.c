/*
 * XREFs of ?GetDepthSortedList@CVisual@@QEBAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x18004960C
 * Callers:
 *     ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x1800495E4 (-DeleteDepthSortedList@CVisual@@AEAAXXZ.c)
 *     ?CreateDepthSortedList@CVisual@@AEAAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x1801F7354 (-CreateDepthSortedList@CVisual@@AEAAPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetDepthSortedList(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // eax

  v1 = *(_DWORD **)(a1 + 232);
  if ( (*v1 & 0x10000000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  v6 = 0;
  if ( (_DWORD)v3 )
  {
    while ( *v4 != 4 )
    {
      ++v6;
      ++v4;
      if ( v6 >= (unsigned int)v3 )
        goto LABEL_6;
    }
    goto LABEL_7;
  }
LABEL_6:
  if ( v6 < (unsigned int)v3 )
LABEL_7:
    v5 = (__int64)v1 + 8LL * v6 - (((_BYTE)v3 + 15) & 7) + v3 + 15;
  return *(_QWORD *)v5;
}
