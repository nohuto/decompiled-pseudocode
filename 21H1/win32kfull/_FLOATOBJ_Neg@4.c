/*
 * XREFs of _FLOATOBJ_Neg@4 @ 0x1F324C
 * Callers:
 *     <none>
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 */

void __stdcall FLOATOBJ_Neg(PFLOATOBJ pf)
{
  EFLOAT::vNegate((EFLOAT *)pf);
}
