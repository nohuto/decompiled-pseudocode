/*
 * XREFs of _FLOATOBJ_Equal@8 @ 0x1F30CD
 * Callers:
 *     <none>
 * Callees:
 *     ??8EFLOAT@@QAEHAAV0@@Z @ 0x8A5D6 (--8EFLOAT@@QAEHAAV0@@Z.c)
 */

BOOL __stdcall FLOATOBJ_Equal(PFLOATOBJ pf, PFLOATOBJ pf1)
{
  return EFLOAT::operator==(pf, pf1);
}
