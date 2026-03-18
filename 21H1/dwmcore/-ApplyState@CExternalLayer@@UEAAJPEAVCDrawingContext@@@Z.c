/*
 * XREFs of ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001B740
 * Callers:
 *     ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001B6F0 (-ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180193DE0 (-ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180195260 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801956A0 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18001B804 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18002FF54 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExternalLayer::ApplyState(CExternalLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rax
  bool v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0;
  v4 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *, char *))(*(_QWORD *)this + 32LL))(
         this,
         a2,
         (char *)this + 48);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xA4u, 0LL);
  }
  else
  {
    v7 = CDrawingContext::PushDeviceTransform(a2, (CExternalLayer *)((char *)this + 48), &v13);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xA8u, 0LL);
    }
    else
    {
      *((_BYTE *)this + 32) = 1;
      v9 = CExternalLayer::ApplyRenderTarget(this, a2);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xACu, 0LL);
      }
      else if ( !v13 || !(*(unsigned __int8 (__fastcall **)(CExternalLayer *))(*(_QWORD *)this + 40LL))(this) )
      {
        v11 = *((_QWORD *)a2 + 742);
        *((_QWORD *)a2 + 742) = 0LL;
        *((_QWORD *)this + 5) = v11;
      }
    }
  }
  if ( v6 < 0 )
    (*(void (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(*(_QWORD *)this + 24LL))(this, a2);
  return (unsigned int)v6;
}
