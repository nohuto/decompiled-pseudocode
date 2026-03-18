/*
 * XREFs of ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180035960
 * Callers:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180036730 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x1800259BC (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x180035CBC (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800374A0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CVisualTree::Create(struct CComposition *a1, struct CVisual *a2, struct CVisualTree **a3)
{
  CVisualTree *v6; // rax
  CVisualTree *v7; // rax
  unsigned int v8; // ecx
  struct CVisualTree *v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CVisualTree *v15; // [rsp+58h] [rbp+20h] BYREF

  v6 = (CVisualTree *)DefaultHeap::AllocClear(0x1708uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v7 = CVisualTree::CVisualTree(v6, a1, a2);
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    &v15,
    (__int64)v7);
  v9 = v15;
  if ( v15 )
  {
    v10 = (*(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v15 + 48LL))(v15);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x18u, 0LL);
    }
    else
    {
      v15 = 0LL;
      *a3 = v9;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x16u, 0LL);
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v15);
  return v12;
}
