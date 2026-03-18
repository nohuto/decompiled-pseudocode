/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect::s_spCompiledEffectCache__ @ 0x1800F0FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x1800E0F54 (--R-$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z.c)
 */

CCompiledEffectCache *__fastcall dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect::s_spCompiledEffectCache__(
        __int64 a1)
{
  CCompiledEffectCache *result; // rax

  if ( CProjectedShadowApproxBlurEffect::s_spCompiledEffectCache )
    return std::default_delete<CCompiledEffectCache>::operator()(
             a1,
             CProjectedShadowApproxBlurEffect::s_spCompiledEffectCache);
  return result;
}
