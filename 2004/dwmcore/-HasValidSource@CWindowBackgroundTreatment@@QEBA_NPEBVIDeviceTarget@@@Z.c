/*
 * XREFs of ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIDeviceTarget@@@Z @ 0x1800061C4
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800051C8 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800058CC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800748A0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@V?$_Uhash_compare@PEBVIDeviceTarget@@U?$hash@PEBVIDeviceTarget@@@std@@U?$equal_to@PEBVIDeviceTarget@@@3@@std@@V?$allocator@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBQEBVIDeviceTarget@@@Z @ 0x180006148 (-lower_bound@-$_Hash@V-$_Umap_traits@PEBVIDeviceTarget@@V-$ComPtr@VIRenderTargetBitmap@@@WRL@Mic.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CWindowBackgroundTreatment::HasValidSource(
        CWindowBackgroundTreatment *this,
        const struct IDeviceTarget *a2)
{
  _QWORD *v3; // rbx
  char *v4; // rcx
  _QWORD *i; // rax
  bool v7; // zf
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF
  const struct IDeviceTarget *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( !*((_BYTE *)this + 359) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 56LL))(
           *((_QWORD *)this + 8),
           20LL) )
    {
      return 1;
    }
    v7 = *((_QWORD *)this + 17) == 0LL;
    return !v7;
  }
  if ( *((_QWORD *)this + 11) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 10);
    v4 = (char *)this + 72;
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      if ( !i[3] )
        return 0;
    }
    if ( !a2 )
      return 1;
    std::_Hash<std::_Umap_traits<IDeviceTarget const *,Microsoft::WRL::ComPtr<IRenderTargetBitmap>,std::_Uhash_compare<IDeviceTarget const *,std::hash<IDeviceTarget const *>,std::equal_to<IDeviceTarget const *>>,std::allocator<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>>,0>>::lower_bound(
      (unsigned __int64)v4,
      &v8,
      (const unsigned __int8 *)&v9);
    v7 = v8 == v3;
    return !v7;
  }
  return 0;
}
