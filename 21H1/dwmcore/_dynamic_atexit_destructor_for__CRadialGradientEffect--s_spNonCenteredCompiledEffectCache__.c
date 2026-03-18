/*
 * XREFs of _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredCompiledEffectCache__ @ 0x1800F0FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x1800E0F54 (--R-$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z.c)
 */

CCompiledEffectCache *__fastcall dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredCompiledEffectCache__(
        __int64 a1)
{
  CCompiledEffectCache *result; // rax

  if ( CRadialGradientEffect::s_spNonCenteredCompiledEffectCache )
    return std::default_delete<CCompiledEffectCache>::operator()(
             a1,
             CRadialGradientEffect::s_spNonCenteredCompiledEffectCache);
  return result;
}
