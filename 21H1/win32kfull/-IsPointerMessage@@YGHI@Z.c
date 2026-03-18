/*
 * XREFs of ?IsPointerMessage@@YGHI@Z @ 0x14D3CF
 * Callers:
 *     _SetMiPPromotion@8 @ 0x14E66B (_SetMiPPromotion@8.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsPointerMessage(char *this)
{
  return (unsigned int)(this - 577) <= 3 || (unsigned int)(this - 581) <= 0x12;
}
