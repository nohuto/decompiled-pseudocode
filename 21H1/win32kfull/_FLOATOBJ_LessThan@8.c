/*
 * XREFs of _FLOATOBJ_LessThan@8 @ 0x1F31C1
 * Callers:
 *     <none>
 * Callees:
 *     ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48 (--OEFLOAT@@QAEHAAV0@@Z.c)
 */

BOOL __stdcall FLOATOBJ_LessThan(PFLOATOBJ pf, PFLOATOBJ pf1)
{
  return EFLOAT::operator>((int *)pf1, (int *)pf);
}
