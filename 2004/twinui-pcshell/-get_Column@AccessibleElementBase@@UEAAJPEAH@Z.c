/*
 * XREFs of ?get_Column@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1803B5480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AccessibleElementBase::get_Column(AccessibleElementBase *this, int *a2)
{
  return AccessibleElementBase::_GetGridItemCoordinates((AccessibleElementBase *)((char *)this - 80), 0LL, a2);
}
