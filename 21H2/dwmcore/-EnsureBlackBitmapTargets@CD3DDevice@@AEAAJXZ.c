/*
 * XREFs of ?EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ @ 0x18001E100
 * Callers:
 *     ?GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ @ 0x1800085E8 (-GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18005FEDC (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180060864 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::EnsureBlackBitmapTargets(CD3DDevice *this)
{
  char *v1; // r15
  unsigned int v3; // r14d
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rsi
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, __int64, const struct _D3DCOLORVALUE *); // rdi
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
  __int64 v21; // [rsp+B0h] [rbp+30h] BYREF
  int v22; // [rsp+B8h] [rbp+38h] BYREF
  int v23; // [rsp+BCh] [rbp+3Ch]

  v1 = (char *)this + 1120;
  v3 = 0;
  if ( !*((_QWORD *)this + 140) )
  {
    v12 = 87;
    v22 = 1;
    v23 = 1;
    v13 = 1LL;
    v16 = *((_QWORD *)this + 117);
    v17 = DisplayId::None;
    v14 = "DWM stock black bitmap";
    v19 = 0;
    v18 = 0;
    v20 = 0;
    v21 = 0LL;
    v15 = 22;
    v4 = CD3DDevice::CreateRenderTargetBitmap(this, &v14, &v22, &v12, &v16, 0, &v21);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x77Eu, 0LL);
    }
    else
    {
      v6 = *((_QWORD *)this + 75);
      v7 = v21;
      v8 = *(void (__fastcall **)(__int64, __int64, const struct _D3DCOLORVALUE *))(*(_QWORD *)v6 + 400LL);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 64LL))(v21);
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
      v8(v6, v10, &stru_1802ACF00);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(v1, v7);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v21);
  }
  return v3;
}
