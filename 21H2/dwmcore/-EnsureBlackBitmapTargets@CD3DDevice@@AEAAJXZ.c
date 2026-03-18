/*
 * XREFs of ?EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ @ 0x18027DE10
 * Callers:
 *     ?GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ @ 0x180115F4A (-GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18005D034 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAB68 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::EnsureBlackBitmapTargets(CD3DDevice *this)
{
  __int64 *v1; // r15
  unsigned int v3; // r14d
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rsi
  struct IRenderTargetBitmap *v7; // rbx
  void (__fastcall *v8)(__int64, __int64, void *); // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  int v12; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+44h] [rbp-3Ch]
  const char *v14; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  int v19; // [rsp+70h] [rbp-10h]
  char v20; // [rsp+74h] [rbp-Ch]
  struct IRenderTargetBitmap *v21; // [rsp+B0h] [rbp+30h] BYREF
  struct D2D_SIZE_U v22; // [rsp+B8h] [rbp+38h] BYREF

  v1 = (__int64 *)((char *)this + 1080);
  v3 = 0;
  if ( !*((_QWORD *)this + 135) )
  {
    v21 = 0LL;
    v22.width = 1;
    v22.height = 1;
    v13 = 1LL;
    v16 = *((_QWORD *)this + 112);
    v17 = DisplayId::None;
    v19 = 0;
    v12 = 87;
    v18 = 0;
    v20 = 0;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v21);
    v15 = 22;
    v14 = "DWM stock black bitmap";
    v4 = CD3DDevice::CreateRenderTargetBitmap(
           this,
           (const struct CResourceTag *)&v14,
           &v22,
           (const struct PixelFormatInfo *)&v12,
           (struct RenderTargetInfo *)&v16,
           0,
           &v21);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x5CAu);
    }
    else
    {
      v6 = *((_QWORD *)this + 70);
      v7 = v21;
      v8 = *(void (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)v6 + 400LL);
      v9 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v21 + 64LL))(v21);
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
      v8(v6, v10, &unk_18038DA10);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(v1, (__int64)v7);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v21);
  }
  return v3;
}
