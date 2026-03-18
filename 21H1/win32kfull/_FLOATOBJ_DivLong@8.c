/*
 * XREFs of _FLOATOBJ_DivLong@8 @ 0x1F309A
 * Callers:
 *     <none>
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 */

void __stdcall FLOATOBJ_DivLong(PFLOATOBJ pf, LONG l)
{
  __int64 v2; // rax
  int v3[2]; // [esp+0h] [ebp-8h] BYREF

  v3[0] = 0;
  LODWORD(v2) = v3;
  v3[1] = 0;
  ltoef_c(v2, l, v3);
  divff3_c(pf, (int *)pf, v3);
}
