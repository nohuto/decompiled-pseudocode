/*
 * XREFs of ?DiscardIfOccluded@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5984
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18009AEB4 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800C9230 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?DiscardView@CD3DDevice@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z @ 0x1800DD384 (-DiscardView@CD3DDevice@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::DiscardIfOccluded(_QWORD *a1, float *a2)
{
  float *v4; // rcx
  __int64 v5; // rdx
  struct tagRECT *v6; // rcx
  LONG v7; // eax
  float v8; // xmm0_4
  LONG v9; // eax
  float v10; // xmm0_4
  LONG v11; // eax
  float v12; // xmm0_4
  LONG v13; // eax
  __int64 v14; // rcx
  CD3DDevice *v15; // rbx
  struct ID3D11View *v16; // rax
  unsigned int v17; // r9d
  struct tagRECT v18; // [rsp+20h] [rbp-28h] BYREF

  if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    if ( a1[993] )
    {
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v4)
        || (v18 = *v6, (unsigned __int8)CArrayBasedCoverageSet::IsCovered(v5 + 448, &v18, 0x7FFFFFFFLL)) )
      {
        v7 = CFloatFPU::CeilingSat(*a2 - 0.5);
        v8 = a2[1] - 0.5;
        v18.left = v7;
        v9 = CFloatFPU::CeilingSat(v8);
        v10 = a2[2] - 0.5;
        v18.top = v9;
        v11 = CFloatFPU::CeilingSat(v10);
        v12 = a2[3] - 0.5;
        v18.right = v11;
        v13 = CFloatFPU::CeilingSat(v12);
        v14 = a1[4];
        v15 = (CD3DDevice *)a1[5];
        v18.bottom = v13;
        v16 = (struct ID3D11View *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14);
        CD3DDevice::DiscardView(v15, v16, &v18, v17);
      }
    }
  }
}
