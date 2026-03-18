/*
 * XREFs of ?Create@CD2DBitmap@@KAJPEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@IPEAPEAV1@@Z @ 0x18003EAE0
 * Callers:
 *     ?CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MMPEAPEAVCD2DBitmap@@@Z @ 0x18003E9A0 (-CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@.c)
 * Callees:
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x18000B334 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800374A0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18003ECF4 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 *a9)
{
  __int64 *v9; // rsi
  void *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // edi

  v9 = a9;
  a9 = 0LL;
  *v9 = 0LL;
  v13 = DefaultHeap::Alloc(0x168uLL);
  if ( v13 )
  {
    LOBYTE(v14) = 1;
    v13 = (void *)CD2DBitmap::CD2DBitmap(v13, a1, v14, a3, a4, a5, a6, a7, 0, 1);
  }
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((__int64 *)&a9, (__int64)v13);
  v16 = (__int64)a9;
  if ( a9 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64 *))(*a9 + 48))(a9);
    v19 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x26u, 0LL);
    }
    else
    {
      a9 = 0LL;
      *v9 = v16;
    }
  }
  else
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x24u, 0LL);
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&a9);
  return v19;
}
