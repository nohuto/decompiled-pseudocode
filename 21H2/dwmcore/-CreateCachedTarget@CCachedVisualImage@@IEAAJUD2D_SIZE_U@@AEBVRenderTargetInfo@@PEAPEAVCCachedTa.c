/*
 * XREFs of ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x18005D0B4
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005C500 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z @ 0x18005D204 (--0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x18005D298 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAB68 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::CreateCachedTarget(
        CCachedVisualImage *this,
        struct D2D_SIZE_U a2,
        const struct RenderTargetInfo *a3,
        struct CCachedVisualImage::CCachedTarget **a4)
{
  __int64 v4; // rax
  char *v8; // rcx
  CDeviceManager *v9; // rcx
  struct _LUID v10; // rdx
  int Device; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  CCachedVisualImage::CCachedTarget *v17; // rax
  struct IRenderTargetBitmap *v19; // [rsp+40h] [rbp-40h] BYREF
  CD3DDevice *v20; // [rsp+48h] [rbp-38h] BYREF
  struct D2D_SIZE_U v21; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v22[16]; // [rsp+58h] [rbp-28h] BYREF
  int v23; // [rsp+68h] [rbp-18h] BYREF
  int v24; // [rsp+70h] [rbp-10h]

  v4 = *((_QWORD *)this + 8);
  v19 = 0LL;
  v21 = a2;
  v8 = (char *)this + *(int *)(v4 + 8) + 64;
  (**(void (__fastcall ***)(char *, int *))v8)(v8, &v23);
  *a4 = 0LL;
  if ( RenderTargetInfo::IsHDR(a3) )
  {
    v23 = 10;
    v24 = 1;
  }
  else
  {
    v24 = 0;
    v23 = 87;
  }
  v10 = *(struct _LUID *)a3;
  v20 = 0LL;
  Device = CDeviceManager::GetDevice(v9, v10, &v20);
  v13 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Device, 0x371u, 0LL);
  }
  else
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v19);
    v14 = (*(__int64 (__fastcall **)(CCachedVisualImage *, _BYTE *))(*(_QWORD *)this + 200LL))(this, v22);
    v15 = CD3DDevice::CreateRenderTargetBitmap(v20, v14, &v21, &v23, a3, 0, &v19);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x378u, 0LL);
    }
    else
    {
      v17 = (CCachedVisualImage::CCachedTarget *)DefaultHeap::Alloc(0x40uLL);
      if ( v17 )
        v17 = (CCachedVisualImage::CCachedTarget *)CCachedVisualImage::CCachedTarget::CCachedTarget(v17, this, v19);
      *a4 = v17;
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v19);
  if ( v20 )
    CD3DDevice::Release(v20);
  return v13;
}
