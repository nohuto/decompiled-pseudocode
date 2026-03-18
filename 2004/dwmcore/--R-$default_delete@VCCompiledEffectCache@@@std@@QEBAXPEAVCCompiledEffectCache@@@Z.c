/*
 * XREFs of ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x1800E23F4
 * Callers:
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredCompiledEffectCache__ @ 0x1800F3F40 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spCenteredCompiledEffectCache__.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredCompiledEffectCache__ @ 0x1800F3F60 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spNonCenteredCompiledEffectCache__.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect::s_spCompiledEffectCache__ @ 0x1800F3F80 (_dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect--s_spCompiledEffectCache__.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180021560 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
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
