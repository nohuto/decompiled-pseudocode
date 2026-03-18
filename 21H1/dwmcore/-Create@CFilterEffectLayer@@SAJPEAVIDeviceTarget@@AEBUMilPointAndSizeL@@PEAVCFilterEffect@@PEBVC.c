/*
 * XREFs of ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x18000CD10
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000CE6C (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x18000C7BC (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x18000C84C (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x1800318DC (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180032214 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffectLayer::Create(
        struct IDeviceTarget *a1,
        const struct MilPointAndSizeL *a2,
        struct CFilterEffect *a3,
        const struct CVisual *a4,
        const struct MilPointAndSizeF *a5,
        struct CFilterEffectLayer **a6)
{
  char *v10; // rcx
  bool IsOpaque; // al
  int v12; // ecx
  int v13; // ebx
  __int64 (__fastcall **v14)(struct IDeviceTarget *, _BYTE *); // rax
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edi
  CExternalLayer *v19; // rax
  unsigned int v20; // ecx
  CExternalLayer *v21; // rbx
  struct IRenderTargetBitmap *v23; // [rsp+30h] [rbp-39h] BYREF
  const char *v24; // [rsp+38h] [rbp-31h] BYREF
  int v25; // [rsp+40h] [rbp-29h]
  _BYTE v26[24]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v27[4]; // [rsp+60h] [rbp-9h] BYREF
  int v28; // [rsp+64h] [rbp-5h]

  *a6 = 0LL;
  v10 = (char *)a1 + *(int *)(*((_QWORD *)a1 + 1) + 12LL) + 8;
  (**(void (__fastcall ***)(char *, _BYTE *))v10)(v10, v27);
  IsOpaque = CFilterEffect::IsOpaque(a3, a4);
  v12 = v28;
  v13 = 1;
  if ( !IsOpaque )
    v12 = 1;
  v28 = v12;
  if ( (int)CFilterEffect::ContainEffectInChainInputs((__int64)a3, 0x3Eu) >= 0
    || (int)CFilterEffect::ContainEffectInChainInputs((__int64)a3, 0xA7u) >= 0 )
  {
    v13 = 2;
  }
  v14 = *(__int64 (__fastcall ***)(struct IDeviceTarget *, _BYTE *))a1;
  v23 = 0LL;
  v15 = (*v14)(a1, v26);
  v25 = 46;
  v24 = "DWM Scratch Rendertarget (filter effect layer)";
  v16 = CExternalLayer::CreateBitmap(&v24, a2, v27, v15, v13, &v23);
  v18 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x25u, 0LL);
  }
  else
  {
    v19 = (CExternalLayer *)operator new(0x90uLL);
    v21 = v19;
    if ( v19 )
    {
      CExternalLayer::CExternalLayer(v19, a2, v23);
      *((_QWORD *)v21 + 15) = a3;
      *(_QWORD *)v21 = &CFilterEffectLayer::`vftable';
    }
    else
    {
      v21 = 0LL;
    }
    *a6 = v21;
    if ( v21 )
    {
      *((_OWORD *)v21 + 8) = *(_OWORD *)a5;
    }
    else
    {
      v18 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0x2Au, 0LL);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v23);
  return v18;
}
