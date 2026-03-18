/*
 * XREFs of ?CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800C87F8
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006B0EC (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006A610 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18006AEF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x18006B420 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006BC74 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ??0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z @ 0x1800C8944 (--0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

__int64 __fastcall CCachedVisualImage::CreateCachedTarget(
        CCachedVisualImage *this,
        struct D2D_SIZE_U a2,
        const struct RenderTargetInfo *a3,
        struct CCachedVisualImage::CCachedTarget **a4)
{
  int v4; // edx
  bool v8; // zf
  int v9; // edx
  CDeviceManager *v10; // rcx
  int Device; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  CCachedVisualImage::CCachedTarget *v16; // rax
  CD3DDevice *v18; // [rsp+40h] [rbp-40h] BYREF
  struct IRenderTargetBitmap *v19; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v20[2]; // [rsp+50h] [rbp-30h] BYREF
  int v21; // [rsp+58h] [rbp-28h]
  const char *v22; // [rsp+60h] [rbp-20h] BYREF
  int v23; // [rsp+68h] [rbp-18h]
  struct D2D_SIZE_U v24; // [rsp+A8h] [rbp+28h] BYREF

  v24 = a2;
  v4 = *((_DWORD *)this + 37);
  *a4 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v8 = *((_DWORD *)this + 39) == 2;
  v20[0] = v4;
  v21 = v8;
  v20[1] = *((_DWORD *)this + 38) != 0 ? 1 : 3;
  if ( RenderTargetInfo::IsHDR(a3) && v9 != 10 )
  {
    v20[0] = 10;
    v21 = 1;
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v18);
  Device = CDeviceManager::GetDevice(v10, *(struct _LUID *)a3, &v18);
  v13 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Device, 0x333u, 0LL);
  }
  else
  {
    v22 = "DWM Cached Visual Image";
    v23 = 23;
    v14 = CD3DDevice::CreateRenderTargetBitmap(
            v18,
            (const struct CResourceTag *)&v22,
            &v24,
            (const struct PixelFormatInfo *)v20,
            a3,
            0,
            &v19);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x33Au, 0LL);
    }
    else
    {
      v16 = (CCachedVisualImage::CCachedTarget *)DefaultHeap::Alloc(0x28uLL);
      if ( v16 )
        v16 = (CCachedVisualImage::CCachedTarget *)CCachedVisualImage::CCachedTarget::CCachedTarget(v16, this, v19);
      *a4 = v16;
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v19);
  if ( v18 )
    CD3DDevice::Release(v18);
  return v13;
}
