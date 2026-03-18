/*
 * XREFs of ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801D8060
 * Callers:
 *     ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801D8470 (-ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801D8DB0 (-ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801DC180 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801DC5B0 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800D1AB0 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800D1C04 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x1801B3574 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 */

__int64 __fastcall CExternalLayer::ApplyState(CExternalLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  bool v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  v4 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *, char *))(*(_QWORD *)this + 64LL))(
         this,
         a2,
         (char *)this + 48);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0xB3u);
    goto LABEL_10;
  }
  v7 = CDrawingContext::PushDeviceTransform(
         a2,
         (CExternalLayer *)((char *)this + 48),
         (struct Windows::Foundation::Numerics::float4x4 *)&v14);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0xB7u);
    goto LABEL_10;
  }
  *((_BYTE *)this + 32) = 1;
  v9 = CExternalLayer::ApplyRenderTarget(this, a2);
  v6 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0xBBu);
LABEL_10:
    CExternalLayer::RestoreState(this, a2, v12);
    return v6;
  }
  if ( !v14 || !(*(unsigned __int8 (__fastcall **)(CExternalLayer *))(*(_QWORD *)this + 72LL))(this) )
  {
    v11 = *((_QWORD *)a2 + 993);
    *((_QWORD *)a2 + 993) = 0LL;
    *((_QWORD *)this + 5) = v11;
  }
  return v6;
}
