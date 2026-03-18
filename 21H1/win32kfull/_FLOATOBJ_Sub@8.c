/*
 * XREFs of _FLOATOBJ_Sub@8 @ 0xF6FBA
 * Callers:
 *     <none>
 * Callees:
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 */

void __stdcall FLOATOBJ_Sub(PFLOATOBJ pf, PFLOATOBJ pf1)
{
  subff3_c((int *)pf, (int *)pf, pf1);
}
