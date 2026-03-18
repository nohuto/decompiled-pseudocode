/*
 * XREFs of ?GetClipBoundsWorld@CScopedClipStack@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007FE3C
 * Callers:
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007FC60 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FD98 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180080F34 (-EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C22D4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x18018FBC8 (-ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ.c)
 */

__int64 __fastcall CScopedClipStack::GetClipBoundsWorld(CScopedClipStack *this, __int128 *a2, __int64 a3)
{
  int v3; // eax
  int v6; // eax
  __int128 v7; // xmm0
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rcx
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm1_4

  v3 = *((_DWORD *)this + 6);
  if ( v3 && *(_DWORD *)(84LL * (unsigned int)(v3 - 1) + *(_QWORD *)this) )
  {
    v6 = *((_DWORD *)this + 566);
    if ( v6 )
      v7 = *(_OWORD *)(*((_QWORD *)this + 285) + 16LL * (unsigned int)(v6 - 1));
    else
      v7 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  else
  {
    v7 = *a2;
  }
  *(_OWORD *)a3 = v7;
  result = *((unsigned int *)this + 6);
  if ( (_DWORD)result )
  {
    v9 = (unsigned int)(result - 1);
    result = *(_QWORD *)this;
    if ( *(_DWORD *)(84 * v9 + *(_QWORD *)this + 4) )
    {
      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(136LL * (unsigned int)(*((_DWORD *)this + 224) - 1) + *((_QWORD *)this + 109) + 112LL) )
      {
        CScopedClipStack::ComputeCpuClipBoundsInScope(this);
        v10 = *((_DWORD *)this + 224);
      }
      result = 136LL * (unsigned int)(v10 - 1);
      v11 = *((_QWORD *)this + 109);
      v12 = *(float *)(result + v11 + 112);
      if ( v12 > *(float *)a3 )
        *(float *)a3 = v12;
      v13 = *(float *)(result + v11 + 116);
      if ( v13 > *(float *)(a3 + 4) )
        *(float *)(a3 + 4) = v13;
      v14 = *(float *)(result + v11 + 120);
      v15 = *(float *)(a3 + 8);
      if ( v15 > v14 )
      {
        *(float *)(a3 + 8) = v14;
        v15 = v14;
      }
      v16 = *(float *)(result + v11 + 124);
      v17 = *(float *)(a3 + 12);
      if ( v17 > v16 )
      {
        *(float *)(a3 + 12) = v16;
        v17 = v16;
        v15 = *(float *)(a3 + 8);
      }
      if ( v15 <= *(float *)a3 || v17 <= *(float *)(a3 + 4) )
      {
        *(_DWORD *)(a3 + 12) = 0;
        *(_DWORD *)(a3 + 8) = 0;
        *(_DWORD *)(a3 + 4) = 0;
        *(_DWORD *)a3 = 0;
      }
    }
  }
  return result;
}
