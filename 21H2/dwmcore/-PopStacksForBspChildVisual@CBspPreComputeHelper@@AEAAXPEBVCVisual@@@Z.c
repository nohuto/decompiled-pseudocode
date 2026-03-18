/*
 * XREFs of ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801B50FC
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@M$01$01$09@@QEAA_NPEAM@Z @ 0x180004C70 (-Pop@-$CWatermarkStack@M$01$01$09@@QEAA_NPEAM@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x1800456B4 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z @ 0x1800D5430 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBackfaceVisibility@@@Z @ 0x18018FED0 (-Pop@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBackfaceVis.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderMode@@@Z @ 0x1801B50B4 (-Pop@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderM.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1801B50CC (-Pop@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmap.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilCompositingMode@@@Z @ 0x1801B50E4 (-Pop@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilCompositingMod.c)
 */

void __fastcall CBspPreComputeHelper::PopStacksForBspChildVisual(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  CVisual *v2; // r11
  int *v3; // r10
  __int64 v4; // r11
  int v5; // eax
  __int64 v6; // r11
  __int64 v7; // r11
  __int64 v8; // r11
  int v9; // eax

  v2 = a2;
  if ( (*((_BYTE *)a2 + 101) & 0x40) != 0 )
    CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)this + 72);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(CVisual::GetOpacityInternal(v2) - 1.0) & _xmm) >= 0.0000011920929 )
    CWatermarkStack<float,2,2,10>::Pop(v3 + 64);
  v5 = *(_DWORD *)(v4 + 104);
  if ( (v5 & 0x10) != 0 )
  {
    CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Pop(v3 + 56);
    v5 = *(_DWORD *)(v6 + 104);
  }
  if ( (v5 & 8) != 0 )
  {
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop(v3 + 48);
    v5 = *(_DWORD *)(v7 + 104);
  }
  if ( (v5 & 2) != 0 )
  {
    CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Pop(v3 + 40);
    v5 = *(_DWORD *)(v8 + 104);
  }
  if ( (v5 & 0x40) != 0 )
    CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop(v3 + 32);
  v9 = v3[24];
  if ( v9 )
    v3[24] = v9 - 1;
  CWatermarkStack<unsigned int,64,2,10>::Pop(v3 + 80);
}
