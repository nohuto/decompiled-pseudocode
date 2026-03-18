/*
 * XREFs of ?GetShaderCache@CCustomKernelEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x1800C6C50
 * Callers:
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x180032458 (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18001A4E4 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 */

struct CCompiledEffectCache *__fastcall CCustomKernelEffect::GetShaderCache(CCustomKernelEffect *this)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rbx
  struct CCompiledEffectCache *result; // rax
  CCompiledEffectCache *v4; // rcx

  v1 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4;
  if ( v1 > 8 )
    v1 = 0LL;
  v2 = (unsigned int)v1;
  result = (struct CCompiledEffectCache *)CCustomKernelEffect::s_rgspCache[v1];
  if ( !result )
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
    else
    {
      result = 0LL;
    }
    v4 = (CCompiledEffectCache *)CCustomKernelEffect::s_rgspCache[v2];
    CCustomKernelEffect::s_rgspCache[v2] = result;
    if ( v4 )
    {
      CCompiledEffectCache::`scalar deleting destructor'(v4);
      return (struct CCompiledEffectCache *)CCustomKernelEffect::s_rgspCache[v2];
    }
  }
  return result;
}
