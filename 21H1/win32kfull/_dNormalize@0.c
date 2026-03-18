/*
 * XREFs of _dNormalize@0 @ 0xEEE14
 * Callers:
 *     _ltoef@0 @ 0xEEE5B (_ltoef@0.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _fxtoef@0 @ 0xEEE86 (_fxtoef@0.c)
 *     _fxtoef_c@8 @ 0xEEE93 (_fxtoef_c@8.c)
 *     _fraction_c@8 @ 0xEEFAF (_fraction_c@8.c)
 *     _addff@0 @ 0xEEFF5 (_addff@0.c)
 * Callees:
 *     <none>
 */

int __usercall dNormalize@<eax>(__int64 a1@<edx:eax>)
{
  int v1; // ecx

  a1 = (int)a1;
  v1 = 0;
  LODWORD(a1) = abs32(a1);
  if ( (_DWORD)a1 )
  {
    if ( (int)a1 < 0 )
    {
      LODWORD(a1) = (int)a1 >> 1;
    }
    else
    {
      LOBYTE(v1) = (unsigned int)a1 < 0x10000;
      LOBYTE(v1) = ((unsigned int)a1 < 0x10000) + ((unsigned int)a1 < cmp_table_1[v1]) + ((unsigned int)a1 < 0x10000);
      LOBYTE(v1) = v1 + ((unsigned int)a1 < cmp_table_2[v1]) + v1;
      LOBYTE(v1) = v1 + ((unsigned int)a1 < cmp_table_3[v1]) + v1;
      LODWORD(a1) = (HIDWORD(a1) ^ ((_DWORD)a1 << (v1 + ((unsigned int)a1 < cmp_table_4[v1]) + v1 - 1))) - HIDWORD(a1);
    }
  }
  return a1;
}
