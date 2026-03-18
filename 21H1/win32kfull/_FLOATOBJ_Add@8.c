/*
 * XREFs of _FLOATOBJ_Add@8 @ 0xF6F66
 * Callers:
 *     <none>
 * Callees:
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 */

void __stdcall FLOATOBJ_Add(PFLOATOBJ pf, PFLOATOBJ pf1)
{
  addff3_c((int *)pf, (int *)pf, (int *)pf1);
}
