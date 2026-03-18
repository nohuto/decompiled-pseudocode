/*
 * XREFs of ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18001AA04
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001A940 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x18001AA98 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18004AD5C (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18004E2D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18004E668 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E6818 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
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
    CDrawingContext::GetWorldTransform(this, (struct CMILMatrix *)v11);
    CMILMatrix::Multiply((CMILMatrix *)v11, a2);
    v7 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v11, 0, 0);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x11ECu, 0LL);
  }
  else
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003304441, 0x11DFu, 0LL);
  }
  return v9;
}
