/*
 * XREFs of ??$_Med3_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE00U?$less@X@0@@Z @ 0x1800A5428
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAEU?$less@X@std@@@std@@YA?AU?$pair@PEAEPEAE@0@PEAE0U?$less@X@0@@Z @ 0x1800A5574 (--$_Partition_by_median_guess_unchecked@PEAEU-$less@X@std@@@std@@YA-AU-$pair@PEAEPEAE@0@PEAE0U-$.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall std::_Med3_unchecked<unsigned char *,std::less<void>>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3)
{
  unsigned __int8 v3; // r9
  unsigned __int8 result; // al

  v3 = *a2;
  if ( *a2 < *a1 )
  {
    *a2 = *a1;
    *a1 = v3;
    v3 = *a2;
  }
  result = *a3;
  if ( *a3 < v3 )
  {
    *a3 = v3;
    *a2 = result;
    if ( result < *a1 )
    {
      *a2 = *a1;
      *a1 = result;
    }
  }
  return result;
}
