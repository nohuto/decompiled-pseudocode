/*
 * XREFs of ?Release@CRadialGradientEffect@@UEAAKXZ @ 0x1800F38D0
 * Callers:
 *     ?Release@CPassthroughEffect@@WBA@EAAKXZ @ 0x18010D490 (-Release@CPassthroughEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CRadialGradientEffect::Release(CRadialGradientEffect *this)
{
  return CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(this);
}
