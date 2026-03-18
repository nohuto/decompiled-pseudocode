/*
 * XREFs of ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802698F4
 * Callers:
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180211D90 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ProcessStateChanges@CCursorState@@QEAAX_K_N@Z @ 0x180269F68 (-ProcessStateChanges@CCursorState@@QEAAX_K_N@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1800664C0 (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ??4?$com_ptr_t@UIWICBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIWICBitmapSource@@@Z @ 0x18006B110 (--4-$com_ptr_t@UIWICBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIWICBitmapSou.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ColorConvertBitmap@CCursorState@@CA?AV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAUIWICBitmap@@@Z @ 0x1802695E0 (-ColorConvertBitmap@CCursorState@@CA-AV-$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@.c)
 *     ?EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x180269A54 (-EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x18026B2D4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 */

void __fastcall CCursorState::EnsureCompositionResources(CCursorState *this)
{
  __int64 v1; // rdx
  struct IBitmapRealization **v3; // rdi
  CSystemMemoryBitmap **v4; // rax
  CSystemMemoryBitmap *v5; // rdx
  __int64 v6; // rdx
  struct IBitmapRealization *v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-10h]
  std::_Ref_count_base *v12; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct IWICBitmapSource *v14; // [rsp+50h] [rbp+10h] BYREF
  CSystemMemoryBitmap *v15; // [rsp+58h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 23);
  if ( v1 )
  {
    v3 = (struct IBitmapRealization **)((char *)this + 112);
    if ( !*((_QWORD *)this + 14) )
    {
      v14 = 0LL;
      if ( *((_BYTE *)this + 72) )
      {
        v4 = CCursorState::ColorConvertBitmap(&v15, *(_QWORD *)(v1 + 24));
        v5 = *v4;
        *v4 = 0LL;
        v14 = (struct IWICBitmapSource *)(((unsigned __int64)v5 + 48) & -(__int64)(v5 != 0LL));
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v15);
      }
      else if ( *((_BYTE *)this + 105) )
      {
        CCursorState::TryGetShape(this, 1);
        if ( v11 )
        {
          wil::com_ptr_t<IWICBitmapSource,wil::err_returncode_policy>::operator=((__int64 *)&v14, *(_QWORD *)(v11 + 24));
        }
        else
        {
          v6 = *((_QWORD *)this + 23);
          *((_BYTE *)this + 106) = 0;
          wil::com_ptr_t<IWICBitmapSource,wil::err_returncode_policy>::operator=((__int64 *)&v14, *(_QWORD *)(v6 + 24));
          *((_BYTE *)this + 105) = 0;
        }
        if ( v12 )
          std::_Ref_count_base::_Decref(v12);
      }
      else
      {
        wil::com_ptr_t<IWICBitmapSource,wil::err_returncode_policy>::operator=((__int64 *)&v14, *(_QWORD *)(v1 + 24));
      }
      v7 = *v3;
      *v3 = 0LL;
      if ( v7 )
      {
        v8 = (__int64)v7 + *(int *)(*((_QWORD *)v7 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v9 = CWICBitmapRealization::Create(v14, v3);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          324LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          (const char *)(unsigned int)v9,
          v10);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
    }
    CCursorState::EnsureDestRectAndTransform(this, 0);
  }
}
