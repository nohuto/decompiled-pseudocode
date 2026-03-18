/*
 * XREFs of ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x180031BCC
 * Callers:
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x180031C28 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18001A4E4 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 */

struct CCompiledEffectCache *__fastcall CPassthroughEffect::GetShaderCache(CPassthroughEffect *this)
{
  struct CCompiledEffectCache *result; // rax
  CCompiledEffectCache *v2; // rcx

  result = CPassthroughEffect::s_spCompiledEffectCache;
  if ( !CPassthroughEffect::s_spCompiledEffectCache )
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
    v2 = CPassthroughEffect::s_spCompiledEffectCache;
    CPassthroughEffect::s_spCompiledEffectCache = result;
    if ( v2 )
    {
      CCompiledEffectCache::`scalar deleting destructor'(v2);
      return CPassthroughEffect::s_spCompiledEffectCache;
    }
  }
  return result;
}
