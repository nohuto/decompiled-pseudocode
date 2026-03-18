/*
 * XREFs of ?bWorldXformIdentity@@YGHPBU_XFORML@@@Z @ 0x21CB59
 * Callers:
 *     ?bModifyWorldTransform@XDCOBJ@@QAEHPBU_XFORML@@K@Z @ 0x21C828 (-bModifyWorldTransform@XDCOBJ@@QAEHPBU_XFORML@@K@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall bWorldXformIdentity(_DWORD *this)
{
  BOOL result; // eax

  result = 0;
  if ( *this == 1065353216 && !this[1] && !this[2] && this[3] == 1065353216 && !this[4] )
    return this[5] == 0;
  return result;
}
