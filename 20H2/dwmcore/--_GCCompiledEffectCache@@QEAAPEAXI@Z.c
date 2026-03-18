/*
 * XREFs of ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180021070
 * Callers:
 *     ?GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x18001E56C (-GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCCompiledEffectCache@@XZ.c)
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x180056D64 (--1CBrushRenderingGraph@@EEAA@XZ.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800D5F50 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x1800E2704 (--R-$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x180182428 (--1CEffectCompilationTask@@QEAA@XZ.c)
 *     ?GetShaderCache@CRadialGradientEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x180266DB8 (-GetShaderCache@CRadialGradientEffect@@QEBAPEAVCCompiledEffectCache@@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFC44 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CCompiledEffectCache *__fastcall CCompiledEffectCache::`scalar deleting destructor'(CCompiledEffectCache *this)
{
  void *v2; // rcx
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rax
  CDrawListEntry *v6; // rcx
  void *v7; // rcx

  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((char *)this + 24);
  v2 = *(void **)this;
  if ( *(_QWORD *)this )
  {
    v3 = 0;
    if ( *((int *)this + 4) > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *((_QWORD *)this + 1);
        v6 = *(CDrawListEntry **)(v4 + v5);
        if ( v6 )
        {
          *(_QWORD *)(v4 + v5) = 0LL;
          CDrawListEntry::Release(v6);
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *((_DWORD *)this + 4) );
      v2 = *(void **)this;
    }
    operator delete(v2);
    *(_QWORD *)this = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v7 )
  {
    operator delete(v7);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  operator delete(this, 0x28uLL);
  return this;
}
