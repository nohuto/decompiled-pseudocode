/*
 * XREFs of ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DB694
 * Callers:
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x180177548 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180076D44 (-HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180076D70 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076D9C (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 */

char __fastcall CScopedClipStack::GetTopGpuClipInScope(CScopedClipStack *a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _OWORD *v5; // r10
  CScopedClipStack *v6; // r11
  float *v7; // r10
  __int64 v8; // r11
  __int64 v9; // rcx
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4

  LOBYTE(v3) = CScopedClipStack::HasGpuClipsInScope(a1);
  if ( (_BYTE)v3 )
    LOBYTE(v3) = CBaseClipStack::Top((_DWORD *)(v4 + 2264), v5);
  else
    *v5 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  if ( a2 )
  {
    LOBYTE(v3) = CScopedClipStack::HasCpuClipsInScope(v6);
    if ( (_BYTE)v3 )
    {
      v9 = 136LL * (unsigned int)(*(_DWORD *)(v8 + 896) - 1);
      v3 = *(_QWORD *)(v8 + 872);
      v10 = *(float *)(v9 + v3 + 96);
      if ( v10 > *v7 )
        *v7 = v10;
      v11 = *(float *)(v9 + v3 + 100);
      if ( v11 > v7[1] )
        v7[1] = v11;
      v12 = *(float *)(v9 + v3 + 104);
      v13 = v7[2];
      if ( v13 > v12 )
      {
        v7[2] = v12;
        v13 = v12;
      }
      v14 = *(float *)(v9 + v3 + 108);
      v15 = v7[3];
      if ( v15 > v14 )
      {
        v7[3] = v14;
        v15 = v14;
        v13 = v7[2];
      }
      if ( v13 <= *v7 || v15 <= v7[1] )
      {
        v7[3] = 0.0;
        v7[2] = 0.0;
        v7[1] = 0.0;
        *v7 = 0.0;
      }
    }
  }
  return v3;
}
