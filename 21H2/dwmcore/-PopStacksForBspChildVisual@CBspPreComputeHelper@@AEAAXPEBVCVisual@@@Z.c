/*
 * XREFs of ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x180199ADC
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088930 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x1800411FC (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180068390 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x1801779D0 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
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
  if ( *((char *)a2 + 93) < 0 )
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((int *)this + 72);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(CVisual::GetOpacityInternal(v2) - 1.0) & _xmm) >= 0.0000011920929 )
    CWatermarkStack<float,64,2,10>::Pop(v3 + 64);
  v5 = *(_DWORD *)(v4 + 96);
  if ( (v5 & 0x10) != 0 )
  {
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v3 + 56);
    v5 = *(_DWORD *)(v6 + 96);
  }
  if ( (v5 & 8) != 0 )
  {
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v3 + 48);
    v5 = *(_DWORD *)(v7 + 96);
  }
  if ( (v5 & 2) != 0 )
  {
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v3 + 40);
    v5 = *(_DWORD *)(v8 + 96);
  }
  if ( (v5 & 0x40) != 0 )
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v3 + 32);
  v9 = v3[24];
  if ( v9 )
    v3[24] = v9 - 1;
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v3 + 80);
}
