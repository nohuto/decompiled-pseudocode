/*
 * XREFs of ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18001B804
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001B740 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x18001B89C (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002F7B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18002FB48 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18002FC70 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18008F790 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  unsigned int v5; // ecx
  bool *v6; // r9
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  _BYTE v11[64]; // [rsp+30h] [rbp-A8h] BYREF
  int v12; // [rsp+70h] [rbp-68h]
  _DWORD v13[22]; // [rsp+80h] [rbp-58h] BYREF

  v13[16] = 0;
  v12 = 0;
  if ( CMILMatrix::SetToInverse((CMILMatrix *)v13, a2) )
  {
    CDrawingContext::UpdateDeviceTransform(this, a2, v6);
    CMatrixStack::Top((CDrawingContext *)((char *)this + 408), (struct CMILMatrix *)v11);
    CMILMatrix::Multiply((CMILMatrix *)v11, a2);
    v7 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v11, 0, 0);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x11D8u, 0LL);
  }
  else
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003304441, 0x11CBu, 0LL);
  }
  return v9;
}
