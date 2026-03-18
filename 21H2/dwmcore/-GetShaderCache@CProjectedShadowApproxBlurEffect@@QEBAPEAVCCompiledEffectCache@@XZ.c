/*
 * XREFs of ?GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x1802AD1CC
 * Callers:
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180259EB0 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18001A4E4 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 */

struct CCompiledEffectCache *__fastcall CProjectedShadowApproxBlurEffect::GetShaderCache(
        CProjectedShadowApproxBlurEffect *this)
{
  struct CCompiledEffectCache *result; // rax
  CCompiledEffectCache *v2; // rcx

  result = CProjectedShadowApproxBlurEffect::s_spCompiledEffectCache;
  if ( !CProjectedShadowApproxBlurEffect::s_spCompiledEffectCache )
  {
    result = (struct CCompiledEffectCache *)operator new(0x28uLL);
    if ( result )
    {
      *(_QWORD *)result = 0LL;
      *((_QWORD *)result + 1) = 0LL;
      *((_DWORD *)result + 4) = 0;
      *((_QWORD *)result + 3) = 0LL;
      *((_QWORD *)result + 4) = result;
    }
    v2 = CProjectedShadowApproxBlurEffect::s_spCompiledEffectCache;
    CProjectedShadowApproxBlurEffect::s_spCompiledEffectCache = result;
    if ( v2 )
    {
      CCompiledEffectCache::`scalar deleting destructor'(v2);
      return CProjectedShadowApproxBlurEffect::s_spCompiledEffectCache;
    }
  }
  return result;
}
