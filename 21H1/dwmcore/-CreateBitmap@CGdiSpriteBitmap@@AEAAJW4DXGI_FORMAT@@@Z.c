/*
 * XREFs of ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18008FCA4
 * Callers:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18008FC68 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800B985C (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?ProcessUpdateSurface@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x1800CE0A0 (-ProcessUpdateSurface@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_U.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x180075F44 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x18008DB84 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?RegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAJXZ @ 0x18008F184 (-RegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18008F460 (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?UpdateMargins@CGdiSpriteBitmap@@AEBAXXZ @ 0x18008FE24 (-UpdateMargins@CGdiSpriteBitmap@@AEBAXXZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18008FE84 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x18008FFA4 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18009009C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x180090174 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateBitmap(CGdiSpriteBitmap *this, enum DXGI_FORMAT a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  enum DXGI_FORMAT v6; // ecx
  int v7; // edx
  int v8; // edx
  int DeviceBitmap; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int SectionBitmap; // eax
  __int64 v17; // rcx
  int v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[16]; // [rsp+48h] [rbp-B8h] BYREF
  void *v21; // [rsp+58h] [rbp-A8h]
  unsigned int v22; // [rsp+60h] [rbp-A0h]
  unsigned int v23; // [rsp+64h] [rbp-9Ch]
  int v24; // [rsp+68h] [rbp-98h]
  enum DXGI_FORMAT v25; // [rsp+6Ch] [rbp-94h]
  struct _LUID v26; // [rsp+78h] [rbp-88h]
  void *v27; // [rsp+80h] [rbp-80h]

  v4 = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  v19 = 0;
  memset_0(v20, 0, 0x130uLL);
  v5 = *((_QWORD *)this + 11);
  v25 = a2;
  v18[0] = 312;
  if ( (int)CRedirectedGDISurface::GetInformation(v5, 2, v18, (__int64)&v19) < 0 || !v19 )
    goto LABEL_11;
  v6 = v25;
  *((_DWORD *)this + 118) = v24;
  if ( *((_BYTE *)this + 132) && *((_BYTE *)this + 440) && v6 == DXGI_FORMAT_B8G8R8X8_UNORM )
    v6 = DXGI_FORMAT_B8G8R8A8_UNORM;
  *((_DWORD *)this + 24) = v6;
  *((_DWORD *)this + 25) = (unsigned int)HasAlphaChannel(v6) != 0 ? 1 : 3;
  v8 = v7 - 1;
  if ( !v8 )
  {
    CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
    SectionBitmap = CGdiSpriteBitmap::CreateSectionBitmap(this, v21, v22, v23);
    v4 = SectionBitmap;
    if ( SectionBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, SectionBitmap, 0x10Fu, 0LL);
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  if ( v8 != 1 )
  {
LABEL_9:
    if ( *((_QWORD *)this + 60) )
    {
      v13 = CGdiSpriteBitmap::RegisterForSignaling(this);
      v4 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x132u, 0LL);
    }
    goto LABEL_11;
  }
  DeviceBitmap = CGdiSpriteBitmap::CreateDeviceBitmap(this, v27, v26, v22, v23);
  v4 = DeviceBitmap;
  if ( DeviceBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, DeviceBitmap, 0x11Cu, 0LL);
    goto LABEL_11;
  }
  if ( *((_QWORD *)this + 60) )
  {
    v11 = CGdiSpriteBitmap::RegisterWithSurfaceManager(this);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x125u, 0LL);
      goto LABEL_11;
    }
    goto LABEL_9;
  }
LABEL_11:
  CGdiSpriteBitmap::UpdateMargins(this);
  return v4;
}
