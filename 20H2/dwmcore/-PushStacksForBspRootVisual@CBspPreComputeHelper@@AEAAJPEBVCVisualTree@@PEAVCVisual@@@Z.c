/*
 * XREFs of ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180199684
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180094DD0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x18004C104 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18004C1E8 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x18004FBAC (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x18008C1B0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18009908C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x18009F3D4 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x180177748 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x18019922C (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x180199360 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspRootVisual(
        CBspPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+28h] [rbp-29h]
  _BYTE v11[64]; // [rsp+48h] [rbp-9h] BYREF
  int v12; // [rsp+88h] [rbp+37h]
  __int64 v13; // [rsp+B8h] [rbp+67h] BYREF
  struct CVisual *v14; // [rsp+C8h] [rbp+77h] BYREF

  v14 = a3;
  v12 = 0;
  CVisual::CalcCpuClippingTransform((__int64)a3, 5, (__int64)a2, 0LL, &v13, (CMILMatrix *)v11, 0LL);
  v4 = CMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 64), (const struct CMILMatrix *)v11, 0);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 106;
    goto LABEL_23;
  }
  v13 = 0LL;
  v4 = CWatermarkStack<CBspNode *,64,2,10>::Push((unsigned int *)this, &v13);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 111;
    goto LABEL_23;
  }
  v7 = CWatermarkStack<CVisual *,64,2,10>::Push((unsigned int *)this + 8, &v14);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x72u, 0LL);
  }
  else
  {
    v4 = CMatrixStack::Push(
           (CBspPreComputeHelper *)((char *)this + 96),
           (const struct CMILMatrix *)&CMILMatrix::Identity,
           0);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 117;
      goto LABEL_23;
    }
    LODWORD(v14) = -1;
    v4 = CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push((unsigned int *)this + 32, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 120;
      goto LABEL_23;
    }
    LODWORD(v14) = -1;
    v4 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 123;
      goto LABEL_23;
    }
    LODWORD(v14) = -1;
    v4 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 48, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 126;
      goto LABEL_23;
    }
    LODWORD(v14) = 5;
    v4 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 129;
      goto LABEL_23;
    }
    LODWORD(v14) = (_DWORD)FLOAT_1_0;
    v4 = CWatermarkStack<float,64,2,10>::Push((unsigned int *)this + 64, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 132;
      goto LABEL_23;
    }
    LOBYTE(v14) = 0;
    v4 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 36, &v14);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 135;
      goto LABEL_23;
    }
    v4 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 80, (_DWORD *)this + 88);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 138;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v10, 0LL);
    }
  }
  return v6;
}
