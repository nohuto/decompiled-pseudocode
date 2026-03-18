/*
 * XREFs of ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x180252AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x18002B6A8 (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x1800BB3AC (-IsValid@CD2DBitmap@@UEBAJXZ.c)
 *     ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x1800D6E90 (-Initialize@CDeviceTextureTarget@@MEAAJXZ.c)
 *     ??0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NI@Z @ 0x1800D6FB8 (--0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_.c)
 */

__int64 __fastcall CDeviceTextureTarget::CreateSubResourceTextureTarget(
        CDeviceTextureTarget *this,
        unsigned int a2,
        struct IDeviceTextureTarget **a3)
{
  CRenderTargetBitmap *v3; // rdi
  int IsValid; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  CMILCOMBase *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  CRenderTargetBitmap *v15; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  v15 = 0LL;
  if ( a2 >= *((_DWORD *)this - 21) || a2 == *((_DWORD *)this - 2) )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x5Bu, 0LL);
  }
  else
  {
    IsValid = CD2DBitmap::IsValid((CDeviceTextureTarget *)((char *)this + 24));
    v9 = IsValid;
    if ( IsValid < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, IsValid, 0x5Eu, 0LL);
      return v9;
    }
    v10 = (CMILCOMBase *)DefaultHeap::Alloc(0x1A8uLL);
    if ( v10 )
      v10 = (CMILCOMBase *)CDeviceTextureTarget::CDeviceTextureTarget(
                             (__int64)v10,
                             *((struct CD2DResourceManager **)this - 28),
                             *((_QWORD *)this - 16),
                             (__int64)this - 96,
                             (_OWORD *)this - 3,
                             *((_DWORD *)this - 4),
                             *((_DWORD *)this - 3),
                             *((_DWORD *)this + 7),
                             *((_BYTE *)this + 33),
                             a2);
    wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=(&v15, v10);
    v3 = v15;
    if ( !v15 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x69u, 0LL);
      return v9;
    }
    v12 = CDeviceTextureTarget::Initialize(v15);
    v9 = v12;
    if ( v12 >= 0 )
    {
      *a3 = (struct IDeviceTextureTarget *)(((unsigned __int64)v3 + 248) & -(__int64)(v3 != 0LL));
      return v9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x6Bu, 0LL);
  }
  if ( v3 )
    CRenderTargetBitmap::Release(v3);
  return v9;
}
