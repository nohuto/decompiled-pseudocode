/*
 * XREFs of ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x1C007AB00
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C007E030 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vGetSubRect(struct _RECTL **this, struct _RECTL *a2)
{
  struct _RECTL v2; // xmm0

  if ( (*this)[5].left > 0x38u )
    v2 = (struct _RECTL)xmmword_1C020D210;
  else
    v2 = (*this)[6];
  *a2 = v2;
}
