/*
 * XREFs of ?Release@CHolographicExclusivePresentData@@UEAAKXZ @ 0x18029FED0
 * Callers:
 *     ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x18010AEF0 (-Release@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusivePresentData::Release(CHolographicExclusivePresentData *this)
{
  return CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)this + 2);
}
