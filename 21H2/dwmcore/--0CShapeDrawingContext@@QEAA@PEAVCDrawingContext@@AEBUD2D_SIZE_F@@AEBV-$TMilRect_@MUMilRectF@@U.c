/*
 * XREFs of ??0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800AD540
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180089D74 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800555F0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?clear_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008A2EC (-clear_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_.c)
 *     ?reserve_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVMatrix3x2F@D2D1@@_K0@Z @ 0x1800AD718 (-reserve_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vlibera.c)
 */

__int64 __fastcall CShapeDrawingContext::CShapeDrawingContext(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _OWORD *a4,
        __int64 a5)
{
  __int64 *v5; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 result; // rax

  v5 = (__int64 *)(a1 + 64);
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 28) = 1LL;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 64) = a1 + 88;
  *(_QWORD *)(a1 + 72) = a1 + 88;
  *(_QWORD *)(a1 + 80) = a1 + 328;
  v10 = detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::reserve_region(
          a1 + 64,
          0LL);
  *(_OWORD *)v10 = *(_OWORD *)&_xmm;
  *(_QWORD *)(v10 + 16) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_QWORD *)(a1 + 328) = a2;
  *(_QWORD *)(a1 + 336) = *a3;
  *(_OWORD *)(a1 + 344) = *a4;
  *(_OWORD *)(a1 + 360) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 376) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 392) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 408) = *(_OWORD *)(a5 + 48);
  *(_DWORD *)(a1 + 424) = *(_DWORD *)(a5 + 64);
  *(_OWORD *)(a1 + 428) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 444) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 460) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 476) = *(_OWORD *)(a5 + 48);
  *(_DWORD *)(a1 + 492) = *(_DWORD *)(a5 + 64);
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)(a1 + 360), (float *)(a1 + 496), (float *)(a1 + 500));
  v11 = v5[1];
  v12 = *v5;
  v13 = 0xAAAAAAAAAAAAAAABuLL * ((v11 - *v5) >> 3);
  if ( v13 )
  {
    detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear_region(
      v5,
      0LL,
      v13);
    v11 = v5[1];
    v12 = *v5;
  }
  v14 = detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::reserve_region(
          v5,
          0xAAAAAAAAAAAAAAABuLL * ((v11 - v12) >> 3));
  *(_OWORD *)v14 = *(_OWORD *)&_xmm;
  *(_QWORD *)(v14 + 16) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  result = a1;
  *(_QWORD *)(a1 + 512) = *(_QWORD *)(a1 + 504);
  *(_WORD *)(a1 + 528) = 0;
  return result;
}
