/*
 * XREFs of _NormBuffer__GetCurrentOutputChar@8 @ 0x4B366CF5
 * Callers:
 *     _NormBuffer__IsBlocked@8 @ 0x4B366E4E (_NormBuffer__IsBlocked@8.c)
 *     _NormBuffer__RecheckStartCombinations@4 @ 0x4B366F14 (_NormBuffer__RecheckStartCombinations@4.c)
 *     _NormBuffer__SortBeforeSameClass@8 @ 0x4B367119 (_NormBuffer__SortBeforeSameClass@8.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall NormBuffer__GetCurrentOutputChar(int a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // edi
  unsigned int v3; // esi

  v2 = *a2;
  v3 = **a2;
  if ( v3 >= 0xD800 && v3 <= 0xDFFF )
  {
    if ( v3 < 0xDC00 )
      v3 = *++v2 + ((v3 - 55287) << 10);
    else
      v3 += (*--v2 - 55287) << 10;
  }
  *a2 = v2;
  return v3;
}
