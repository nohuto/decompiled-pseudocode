/*
 * XREFs of ?Release@CNaturalAnimationScalarForceAdapater@@UEAAKXZ @ 0x1800D6D10
 * Callers:
 *     ?Release@CInteractionContextWrapper@@W7EAAKXZ @ 0x1800F09A0 (-Release@CInteractionContextWrapper@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNaturalAnimationScalarForceAdapater::Release(CNaturalAnimationScalarForceAdapater *this)
{
  return CDrawListEntry::Release((CNaturalAnimationScalarForceAdapater *)((char *)this + 8));
}
