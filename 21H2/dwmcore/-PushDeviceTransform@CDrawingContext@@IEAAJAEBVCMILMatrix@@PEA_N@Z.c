/*
 * XREFs of ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x1801B3574
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801D8060 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x1801B4564 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PushDeviceTransform(
        CDrawingContext *this,
        const struct CMILMatrix *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  __int128 v3; // xmm0
  __int128 v5; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rcx
  bool *v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  _OWORD v17[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v18; // [rsp+70h] [rbp-68h]
  _BYTE v19[64]; // [rsp+80h] [rbp-58h] BYREF
  int v20; // [rsp+C0h] [rbp-18h]

  v3 = *(_OWORD *)a2;
  v20 = 0;
  v5 = *((_OWORD *)a2 + 1);
  v17[0] = v3;
  v7 = *((_OWORD *)a2 + 2);
  v17[1] = v5;
  v8 = *((_OWORD *)a2 + 3);
  v17[2] = v7;
  v17[3] = v8;
  v18 = *((_DWORD *)a2 + 16);
  if ( CMILMatrix::Invert((CMILMatrix *)v17, (__int64)a2, a3) )
  {
    CDrawingContext::UpdateDeviceTransform(this, a2, v10);
    CMatrixStack::Top((__int64)this + 368, (__int64)v19);
    CMILMatrix::Multiply((CMILMatrix *)v19, a2, v12, v13);
    v14 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v19, 0, 0);
    v11 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x126Cu);
  }
  else
  {
    v11 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2003304441, 0x125Fu);
  }
  return v11;
}
