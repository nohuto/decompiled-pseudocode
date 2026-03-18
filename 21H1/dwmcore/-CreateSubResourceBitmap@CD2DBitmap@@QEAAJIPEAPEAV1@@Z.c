/*
 * XREFs of ?CreateSubResourceBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x180249C7C
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180265A80 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x180006838 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x180030D8C (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CreateSubResourceBitmap(CD2DBitmap *this, __int64 a2, struct CD2DBitmap **a3)
{
  __int64 (__fastcall ***v5)(_QWORD); // rcx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rax
  struct CD2DBitmap *v10; // rax
  unsigned int v12; // [rsp+20h] [rbp-38h]
  struct CD2DBitmap *v13; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0LL;
  *a3 = 0LL;
  if ( *((_DWORD *)this + 60) || *((_DWORD *)this + 41) <= 1u )
  {
    v8 = -2147024809;
    v12 = 383;
    goto LABEL_11;
  }
  v5 = (__int64 (__fastcall ***)(_QWORD))((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16);
  v6 = (**v5)(v5);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x182u, 0LL);
  }
  else
  {
    v9 = (__int64)DefaultHeap::Alloc(0x168uLL);
    if ( v9 )
      v9 = CD2DBitmap::CD2DBitmap(
             v9,
             *((struct CD2DResourceManager **)this + 3),
             0,
             *((_QWORD *)this + 15),
             (__int64)this + 152,
             (CD2DBitmap *)((char *)this + 200),
             *((_DWORD *)this + 58),
             *((_DWORD *)this + 59),
             1,
             1);
    wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((__int64 *)&v13, v9);
    v10 = v13;
    if ( !v13 )
    {
      v8 = -2147024882;
      v12 = 396;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v8, v12, 0LL);
      goto LABEL_12;
    }
    v13 = 0LL;
    *a3 = v10;
  }
LABEL_12:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v13);
  return v8;
}
