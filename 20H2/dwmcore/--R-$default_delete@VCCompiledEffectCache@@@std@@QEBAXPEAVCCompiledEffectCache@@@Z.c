/*
 * XREFs of ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x1800E2704
 * Callers:
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredCompiledEffectCache__ @ 0x1800F3B90 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spCenteredCompiledEffectCache__.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredCompiledEffectCache__ @ 0x1800F3BB0 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spNonCenteredCompiledEffectCache__.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect::s_spCompiledEffectCache__ @ 0x1800F3BD0 (_dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect--s_spCompiledEffectCache__.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180021070 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 */

CCompiledEffectCache *__fastcall std::default_delete<CCompiledEffectCache>::operator()(
        __int64 a1,
        CCompiledEffectCache *a2)
{
  CCompiledEffectCache *result; // rax

  if ( a2 )
    return CCompiledEffectCache::`scalar deleting destructor'(a2);
  return result;
}
