/*
 * XREFs of ?Release@CNaturalAnimationScalarForceAdapater@@UEAAKXZ @ 0x1800CEB50
 * Callers:
 *     ?Release@CInteractionContextWrapper@@W7EAAKXZ @ 0x1800EDA10 (-Release@CInteractionContextWrapper@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNaturalAnimationScalarForceAdapater::Release(CNaturalAnimationScalarForceAdapater *this)
{
  return CDrawListEntry::Release((CNaturalAnimationScalarForceAdapater *)((char *)this + 8));
}
