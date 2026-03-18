/*
 * XREFs of _FLOATOBJ_GreaterThan@8 @ 0x1F315E
 * Callers:
 *     <none>
 * Callees:
 *     ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48 (--OEFLOAT@@QAEHAAV0@@Z.c)
 */

BOOL __stdcall FLOATOBJ_GreaterThan(PFLOATOBJ pf, PFLOATOBJ pf1)
{
  return EFLOAT::operator>((int *)pf, (int *)pf1);
}
