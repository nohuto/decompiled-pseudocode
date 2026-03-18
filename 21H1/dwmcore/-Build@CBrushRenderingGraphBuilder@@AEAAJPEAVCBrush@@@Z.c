/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x18009C7A0
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18009C9F8 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18009AA14 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x18009AFE8 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18009B214 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18009B340 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18009C004 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x18009C88C (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@0AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x1800C46EC (--$_Destroy_range@V-$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFr.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C93E4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(CBrushRenderingGraphBuilder *this, struct CBrush *a2)
{
  struct CRenderingTechniqueFragment *v4; // rcx
  int v5; // ebx
  CRenderingTechniqueFragment *v6; // rdi
  int ShaderBodies; // eax
  char v8; // al
  void *v10; // rcx
  __int64 v11; // r14
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment *v14; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  int v16; // [rsp+90h] [rbp+40h] BYREF
  CRenderingTechniqueFragment *v17; // [rsp+98h] [rbp+48h] BYREF

  v17 = 0LL;
  v14 = 0LL;
  v15 = 1;
  v5 = CBrushRenderingGraphBuilder::AddBrush(this, a2, 0, &v14);
  if ( v15 )
  {
    v4 = v14;
    v6 = v17;
    v17 = v14;
    if ( v6 )
    {
      v10 = (void *)*((_QWORD *)v6 + 14);
      if ( v10 )
        operator delete(v10);
      v11 = *((_QWORD *)v6 + 4);
      if ( v11 )
      {
        std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(
          *((_QWORD *)v6 + 4),
          *((_QWORD *)v6 + 5));
        std::_Deallocate<16,0>(v11, (*((_QWORD *)v6 + 6) - v11) & 0xFFFFFFFFFFFFFFF0uLL);
        *((_QWORD *)v6 + 4) = 0LL;
        *((_QWORD *)v6 + 5) = 0LL;
        *((_QWORD *)v6 + 6) = 0LL;
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v6);
      operator delete(v6);
    }
  }
  if ( v5 < 0 )
  {
    v12 = v5;
    v13 = 48;
  }
  else
  {
    ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v17, &v16);
    v5 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v13 = 51;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 105LL);
      ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache(this, v8);
      v5 = ShaderBodies;
      if ( ShaderBodies < 0 )
      {
        v13 = 53;
      }
      else
      {
        ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
        v5 = ShaderBodies;
        if ( ShaderBodies >= 0 )
        {
          CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
          goto LABEL_8;
        }
        v13 = 54;
      }
    }
    v12 = ShaderBodies;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, v12, v13, 0LL);
LABEL_8:
  if ( v17 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v17);
  return (unsigned int)v5;
}
