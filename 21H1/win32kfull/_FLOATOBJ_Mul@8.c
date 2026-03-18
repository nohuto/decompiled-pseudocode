/*
 * XREFs of _FLOATOBJ_Mul@8 @ 0xF6F9E
 * Callers:
 *     <none>
 * Callees:
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

void __stdcall FLOATOBJ_Mul(PFLOATOBJ pf, PFLOATOBJ pf1)
{
  mulff3_c((int *)pf, pf, pf1);
}
