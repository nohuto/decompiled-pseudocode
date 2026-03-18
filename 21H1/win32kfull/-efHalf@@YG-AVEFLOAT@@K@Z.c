/*
 * XREFs of ?efHalf@@YG?AVEFLOAT@@K@Z @ 0x21522E
 * Callers:
 *     ??0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z @ 0x214527 (--0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 */

__int64 __usercall efHalf@<edx:eax>(__int64 a1@<edx:eax>, unsigned int a2@<ecx>)
{
  char v2; // bl
  __int64 v4; // [esp+8h] [ebp-8h] BYREF

  v2 = a2;
  LODWORD(a1) = a2 >> 1;
  ltoef_c(a1, a2 >> 1, (int *)&v4);
  if ( (v2 & 1) != 0 )
    addff3_c((int *)&v4, (int *)&v4, _FP_0_5);
  return v4;
}
