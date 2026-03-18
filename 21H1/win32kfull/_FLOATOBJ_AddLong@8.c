/*
 * XREFs of _FLOATOBJ_AddLong@8 @ 0x1F3034
 * Callers:
 *     <none>
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 */

void __stdcall FLOATOBJ_AddLong(PFLOATOBJ pf, LONG l)
{
  __int64 v2; // rax
  int v3[2]; // [esp+0h] [ebp-8h] BYREF

  v3[0] = 0;
  LODWORD(v2) = v3;
  v3[1] = 0;
  ltoef_c(v2, l, v3);
  addff3_c((int *)pf, (int *)pf, v3);
}
