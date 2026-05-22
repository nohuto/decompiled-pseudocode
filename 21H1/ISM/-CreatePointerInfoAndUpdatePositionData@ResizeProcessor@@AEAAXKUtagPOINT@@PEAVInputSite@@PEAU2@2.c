/*
 * XREFs of ?CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2@Z @ 0x1800453D8
 * Callers:
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FE550 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FF4BC (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ??A?$unordered_map@KUInitialPointerInfo@ResizeProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@@std@@QEAAAEAUInitialPointerInfo@ResizeProcessor@@AEBK@Z @ 0x1800453B0 (--A-$unordered_map@KUInitialPointerInfo@ResizeProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$alloc.c)
 *     ?GetTransformFromRootToSite@PointerManipulationHelper@@SA?AUtagINPUT_TRANSFORM@@PEAVInputSite@@@Z @ 0x180048C70 (-GetTransformFromRootToSite@PointerManipulationHelper@@SA-AUtagINPUT_TRANSFORM@@PEAVInputSite@@@.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800B7254 (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ??A?$unordered_map@KUtagPOINT@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@@std@@QEAAAEAUtagPOINT@@AEBK@Z @ 0x1800FDC50 (--A-$unordered_map@KUtagPOINT@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$pair@$$CBKUtagPOIN.c)
 */

void __fastcall ResizeProcessor::CreatePointerInfoAndUpdatePositionData(
        ResizeProcessor *this,
        int a2,
        struct tagPOINT a3,
        struct InputSite *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  LONG x; // ebx
  _OWORD *TransformFromRootToSite; // rax
  __int128 v9; // xmm8
  __int128 v10; // xmm7
  __int128 v11; // xmm6
  __m128d v12; // xmm9
  int *v13; // rax
  float *v14; // rax
  struct tagPOINT *v15; // rdi
  struct tagPOINT v16; // rax
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __m128i v21; // xmm0
  float *v22; // rax
  int v23; // ecx
  _BYTE v24[72]; // [rsp+28h] [rbp-A9h] BYREF
  _BYTE v25[16]; // [rsp+78h] [rbp-59h] BYREF
  _OWORD v26[8]; // [rsp+88h] [rbp-49h] BYREF
  struct tagPOINT v27; // [rsp+128h] [rbp+57h] BYREF
  int v28; // [rsp+130h] [rbp+5Fh] BYREF
  struct tagPOINT v29; // [rsp+138h] [rbp+67h] BYREF

  v29 = a3;
  v28 = a2;
  x = a3.x;
  TransformFromRootToSite = (_OWORD *)PointerManipulationHelper::GetTransformFromRootToSite(v24, a4);
  v10 = TransformFromRootToSite[1];
  v11 = TransformFromRootToSite[2];
  v12 = (__m128d)TransformFromRootToSite[3];
  v26[0] = *TransformFromRootToSite;
  v9 = v26[0];
  v26[1] = v10;
  v26[2] = v11;
  v26[3] = v12;
  v13 = (int *)std::unordered_map<unsigned long,tagPOINT>::operator[]((char *)this + 232, &v28);
  v27 = (struct tagPOINT)_mm_unpacklo_ps(
                           (__m128)COERCE_UNSIGNED_INT((float)*v13),
                           (__m128)COERCE_UNSIGNED_INT((float)v13[1])).m128_u64[0];
  v14 = (float *)CInputTransform::ScreenPointToRelative(v25, &v27, v26);
  v15 = a5;
  *(_OWORD *)&v24[8] = v9;
  v27 = (struct tagPOINT)__PAIR64__((int)v14[1], (int)*v14);
  *(_OWORD *)&v24[24] = v10;
  v16 = v27;
  *a5 = v27;
  *(struct tagPOINT *)v24 = v16;
  *(_OWORD *)&v24[40] = v11;
  *(__m128d *)&v24[56] = v12;
  v17 = std::unordered_map<unsigned long,ResizeProcessor::InitialPointerInfo>::operator[](
          (__int64)this + 168,
          (const unsigned __int8 *)&v28);
  v18 = *(_OWORD *)&v24[16];
  *(_OWORD *)v17 = *(_OWORD *)v24;
  v19 = *(_OWORD *)&v24[32];
  *(_OWORD *)(v17 + 16) = v18;
  v20 = *(_OWORD *)&v24[48];
  *(_OWORD *)(v17 + 32) = v19;
  v21 = _mm_cvtsi32_si128(v29.y);
  *(_OWORD *)(v17 + 48) = v20;
  v29 = (struct tagPOINT)_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)x), _mm_cvtepi32_ps(v21)).m128_u64[0];
  *(_QWORD *)(v17 + 64) = *(_OWORD *)&_mm_unpackhi_pd(v12, v12);
  v22 = (float *)CInputTransform::ScreenPointToRelative(&a5, &v29, v26);
  v23 = (int)*v22;
  LODWORD(v22) = (int)v22[1];
  v29.x = v23 - v15->x;
  v29.y = (_DWORD)v22 - v15->y;
  *a6 = v29;
}
