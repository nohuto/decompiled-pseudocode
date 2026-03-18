/*
 * XREFs of ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18001A4E4
 * Callers:
 *     ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x180031BCC (-GetShaderCache@CPassthroughEffect@@QEBAPEAVCCompiledEffectCache@@XZ.c)
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x1800356EC (--1CBrushRenderingGraph@@MEAA@XZ.c)
 *     ?GetShaderCache@CCustomKernelEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x1800C6C50 (-GetShaderCache@CCustomKernelEffect@@QEBAPEAVCCompiledEffectCache@@XZ.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800EF78C (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VCCompiledEffectCache@@U?$default_delete@VCCompiledEffectCache@@@std@@@std@@QEAA@XZ @ 0x180100010 (--1-$unique_ptr@VCCompiledEffectCache@@U-$default_delete@VCCompiledEffectCache@@@std@@@std@@QEAA.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x1801BF5DC (--1CEffectCompilationTask@@QEAA@XZ.c)
 *     ?GetShaderCache@CRadialGradientEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x1802ABE48 (-GetShaderCache@CRadialGradientEffect@@QEBAPEAVCCompiledEffectCache@@XZ.c)
 *     ?GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x1802AD1CC (-GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCCompiledEffectCache@@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5C3C (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CCompiledEffectCache *__fastcall CCompiledEffectCache::`scalar deleting destructor'(CCompiledEffectCache *this)
{
  void *v2; // rcx
  void *v3; // rcx
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx

  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 24);
  v2 = *(void **)this;
  if ( *(_QWORD *)this )
  {
    v5 = 0;
    if ( *((int *)this + 4) > 0 )
    {
      v6 = 0LL;
      do
      {
        v7 = *((_QWORD *)this + 1);
        v8 = *(_QWORD *)(v6 + v7);
        if ( v8 )
        {
          *(_QWORD *)(v6 + v7) = 0LL;
          CMILRefCountBaseT<IMILRefCount>::InternalRelease(v8);
        }
        ++v5;
        v6 += 8LL;
      }
      while ( v5 < *((_DWORD *)this + 4) );
      v2 = *(void **)this;
    }
    DefaultHeap::Free(v2);
    *(_QWORD *)this = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    DefaultHeap::Free(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  operator delete(this, 0x28uLL);
  return this;
}
