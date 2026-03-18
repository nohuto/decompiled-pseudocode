/*
 * XREFs of ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x180085688
 * Callers:
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A3D00 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x1800A5BA0 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x1800D2BD8 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDirtyRegion::UpdateAcceleration(CDirtyRegion *this, unsigned int a2)
{
  __int64 v3; // r11
  __int64 v4; // r8
  __int64 v5; // r9
  float *v6; // rdx
  float *v7; // rcx
  __int64 v8; // r8
  float v9; // xmm1_4
  char v10; // al
  __int64 v11; // rax
  float v12; // xmm2_4
  __int64 v13; // rbx
  float *v14; // r8
  float *v15; // rax
  float *v16; // rcx
  float v17; // xmm1_4
  char v18; // r9
  float v19; // xmm2_4

  v3 = a2;
  if ( a2 )
  {
    v13 = a2;
    v14 = (float *)((char *)this + 16 * a2 + 1952);
    v15 = (float *)((char *)this + 32 * a2 + 2080);
    v16 = (float *)((char *)this + 1956);
    do
    {
      v17 = 0.0;
      v18 = *((_BYTE *)v14 + 12);
      if ( *((_BYTE *)v16 + 8) )
      {
        if ( !v18 )
          v17 = FLOAT_3_4028235e38;
      }
      else if ( !v18 )
      {
        v19 = (float)((float)(*v16 - v14[1]) * (float)(*v16 - v14[1]))
            + (float)((float)(*(v16 - 1) - *v14) * (float)(*(v16 - 1) - *v14));
        if ( v19 != 0.0 )
          v17 = (float)(v16[1] + v14[2]) / v19;
      }
      *v15 = v17;
      v16 += 4;
      ++v15;
      --v13;
    }
    while ( v13 );
  }
  v4 = a2 + 1;
  if ( (unsigned int)v4 < 8 )
  {
    v5 = 8 * v4 + 520;
    v6 = (float *)((char *)this + 16 * (unsigned int)v4 + 1956);
    v7 = (float *)((char *)this + 16 * v3 + 1952);
    v8 = (unsigned int)(8 - v4);
    do
    {
      v9 = 0.0;
      v10 = *((_BYTE *)v7 + 12);
      if ( *((_BYTE *)v6 + 8) )
      {
        if ( !v10 )
          v9 = FLOAT_3_4028235e38;
      }
      else if ( !v10 )
      {
        v12 = (float)((float)(*v6 - v7[1]) * (float)(*v6 - v7[1]))
            + (float)((float)(*(v6 - 1) - *v7) * (float)(*(v6 - 1) - *v7));
        if ( v12 != 0.0 )
          v9 = (float)(v6[1] + v7[2]) / v12;
      }
      v11 = v5 + v3;
      v6 += 4;
      v5 += 8LL;
      *((float *)this + v11) = v9;
      --v8;
    }
    while ( v8 );
  }
}
