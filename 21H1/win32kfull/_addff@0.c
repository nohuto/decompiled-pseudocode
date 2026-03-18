/*
 * XREFs of _addff@0 @ 0xEEFF5
 * Callers:
 *     _bCvtVts_FlToFl@16 @ 0xEECF0 (_bCvtVts_FlToFl@16.c)
 *     _subff_c@8 @ 0xEF02B (_subff_c@8.c)
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 *     _addff_c@8 @ 0xEF087 (_addff_c@8.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 * Callees:
 *     _dNormalize@0 @ 0xEEE14 (_dNormalize@0.c)
 */

int __usercall addff@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>)
{
  int v4; // et0
  int v5; // et1
  unsigned int v6; // ecx
  __int64 v7; // rax

  if ( a2 )
  {
    if ( result )
    {
      if ( a3 < a4 )
      {
        v4 = result;
        result = a2;
        a2 = v4;
        v5 = a3;
        a3 = a4;
        a4 = v5;
      }
      v6 = a3 - a4;
      if ( v6 <= 0x1E )
      {
        HIDWORD(v7) = a2 >> v6 >> 1;
        LODWORD(v7) = HIDWORD(v7) + (result >> 1);
        return dNormalize(v7);
      }
    }
    else
    {
      return a2;
    }
  }
  return result;
}
