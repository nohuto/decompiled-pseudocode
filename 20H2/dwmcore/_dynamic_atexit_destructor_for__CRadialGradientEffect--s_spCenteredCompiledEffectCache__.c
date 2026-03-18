/*
 * XREFs of _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredCompiledEffectCache__ @ 0x1800F3B90
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x1800E2704 (--R-$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z.c)
 */

CCompiledEffectCache *__fastcall dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredCompiledEffectCache__(
        __int64 a1)
{
  CCompiledEffectCache *result; // rax

  if ( CRadialGradientEffect::s_spCenteredCompiledEffectCache )
    return std::default_delete<CCompiledEffectCache>::operator()(
             a1,
             CRadialGradientEffect::s_spCenteredCompiledEffectCache);
  return result;
}
