/*
 * XREFs of ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x1800CE99C
 * Callers:
 *     ?EnsureRootLayoutSize@CPreComputeContext@@AEAAJXZ @ 0x180079FDC (-EnsureRootLayoutSize@CPreComputeContext@@AEAAJXZ.c)
 *     ?UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z @ 0x18019C140 (-UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18004009C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18009FB80 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800A4BBC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800CEAFC (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 */

char __fastcall CVisual::ComputeLayoutSize(CVisual *this)
{
  char v1; // di
  float v3; // xmm6_4
  float v4; // xmm3_4
  float v5; // xmm7_4
  __int64 v6; // rax
  float v7; // xmm8_4
  float v8; // xmm4_4
  float v9; // xmm1_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  char v14; // bp
  char v15; // si
  __int64 v17; // rax
  struct D2D_VECTOR_3F v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  v3 = *((float *)this + 30);
  v4 = 0.0;
  v5 = *((float *)this + 34);
  v6 = *((_QWORD *)this + 10);
  v7 = *((float *)this + 33);
  if ( v6 )
    v4 = *(float *)(v6 + 132);
  CVisual::GetRelativeOffsetInternal(this, &v18);
  v9 = (float)(v18.x * v4) + *((float *)this + 26);
  *((float *)this + 30) = (float)(v18.y * v8) + *((float *)this + 27);
  *((float *)this + 29) = v9;
  CVisual::GetRelativeLayoutSizeInternal(this, &v19);
  v12 = (float)(*(float *)&v19 * v4) + *((float *)this + 31);
  v13 = (float)(*((float *)&v19 + 1) * v11) + *((float *)this + 32);
  *((float *)this + 33) = v12;
  *((float *)this + 34) = v13;
  if ( v12 < 0.0 )
  {
    *((_DWORD *)this + 33) = 0;
    v12 = 0.0;
  }
  if ( v13 < 0.0 )
  {
    *((_DWORD *)this + 34) = 0;
    v13 = 0.0;
  }
  if ( v10 != *((float *)this + 29) || (v14 = 0, v3 != *((float *)this + 30)) )
    v14 = 1;
  if ( v7 == v12 && v5 == v13 )
  {
    v15 = 0;
  }
  else
  {
    v17 = *((_QWORD *)this + 30);
    v15 = 1;
    if ( v17 && *(_BYTE *)(v17 + 128) )
      CVisual::OnClipChanged(this);
    CVisual::OnLayoutChanged(this);
  }
  if ( v14 || v15 )
    return 1;
  return v1;
}
