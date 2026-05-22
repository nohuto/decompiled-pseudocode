/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAEEU?$less@X@std@@@std@@YAXPEAE_J1$$QEAEU?$less@X@0@@Z @ 0x1800A5564
 * Callers:
 *     ??$_Sort_heap_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0U?$less@X@0@@Z @ 0x1800A5870 (--$_Sort_heap_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0U-$less@X@0@@Z.c)
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800A5980 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall std::_Pop_heap_hole_by_index<unsigned char *,unsigned char,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  __int64 v5; // r11
  __int64 v6; // rbx
  __int64 i; // rcx
  __int64 v8; // rax
  unsigned __int8 v9; // cl
  unsigned __int8 result; // al

  v5 = (a3 - 1) >> 1;
  v6 = a2;
  for ( i = a2; i < v5; a2 = i )
  {
    i = 2LL - (*(_BYTE *)(a1 + 2 * i + 2) < *(_BYTE *)(a1 + 2 * i + 1)) + 2 * i;
    *(_BYTE *)(a1 + a2) = *(_BYTE *)(i + a1);
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    *(_BYTE *)(a1 + a2) = *(_BYTE *)(a1 + a3 - 1);
    a2 = a3 - 1;
  }
  if ( v6 < a2 )
  {
    do
    {
      v8 = (a2 - 1) >> 1;
      v9 = *(_BYTE *)(v8 + a1);
      if ( v9 >= *a4 )
        break;
      *(_BYTE *)(a2 + a1) = v9;
      a2 = (a2 - 1) >> 1;
    }
    while ( v6 < v8 );
  }
  result = *a4;
  *(_BYTE *)(a2 + a1) = *a4;
  return result;
}
