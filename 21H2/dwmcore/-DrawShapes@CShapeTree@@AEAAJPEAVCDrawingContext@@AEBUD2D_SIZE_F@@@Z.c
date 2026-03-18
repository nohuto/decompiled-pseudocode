/*
 * XREFs of ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180089D74
 * Callers:
 *     ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180089C74 (-Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18025C060 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008A238 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?clear_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008A2EC (-clear_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x18008A358 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18008A3B4 (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008A438 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x18008B3C4 (-MarkCurrentState@CDrawingContext@@QEAAJXZ.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1800936E0 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180096A60 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AD06C (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800AD540 (--0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CShapeDrawingContext@@QEAA@XZ @ 0x18025BD90 (--1CShapeDrawingContext@@QEAA@XZ.c)
 */

__int64 __fastcall CShapeTree::DrawShapes(CShapeTree *this, struct CDrawingContext *a2, const struct D2D_SIZE_F *a3)
{
  int v3; // esi
  unsigned int v6; // ebx
  char v7; // r15
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  void (__fastcall ***v14)(_QWORD, unsigned __int64 *); // rcx
  int v15; // r8d
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  void *v24; // rcx
  unsigned __int64 v25; // rdx
  char *v26; // rsi
  void *v27; // rsi
  HANDLE v28; // rax
  HANDLE ProcessHeap; // rax
  _OWORD v31[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+80h] [rbp-80h]
  void *v33[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v34; // [rsp+A0h] [rbp-60h] BYREF
  FLOAT v35; // [rsp+A8h] [rbp-58h]
  FLOAT v36; // [rsp+ACh] [rbp-54h]
  __int128 v37; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v38[48]; // [rsp+C0h] [rbp-40h] BYREF
  LPVOID lpMem; // [rsp+F0h] [rbp-10h]
  _QWORD v40[3]; // [rsp+100h] [rbp+0h] BYREF
  char v41; // [rsp+118h] [rbp+18h] BYREF
  void *v42; // [rsp+2B8h] [rbp+1B8h]
  __int128 v43; // [rsp+2C0h] [rbp+1C0h]

  v3 = (int)a3;
  v6 = 0;
  v7 = 0;
  *(_OWORD *)v33 = *((_OWORD *)this + 5);
  if ( !*((_BYTE *)this + 97) )
    return v6;
  width = a3->width;
  height = a3->height;
  v34 = 0LL;
  v35 = width;
  v36 = height;
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(&v34) )
  {
    v10 = CDrawingContext::MarkCurrentState(a2);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x114u);
      return v6;
    }
    v7 = 1;
    v12 = CDrawingContext::PushClipRectForCurrentNode(a2);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x117u);
      goto LABEL_37;
    }
  }
  v32 = 0;
  if ( *((_DWORD *)a2 + 92) )
  {
    CWatermarkStack<CMILMatrix,8,2,8>::Top((char *)a2 + 368, v31);
  }
  else
  {
    v31[0] = _xmm;
    v31[1] = _xmm;
    BYTE1(v32) = BYTE1(v32) & 0xC0 | 0x17;
    v31[2] = _xmm;
    v31[3] = _xmm;
    LOBYTE(v32) = 85;
  }
  v14 = (void (__fastcall ***)(_QWORD, unsigned __int64 *))(*((_QWORD *)a2 + 4)
                                                          + 8LL
                                                          + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 16LL));
  (**v14)(v14, &v34);
  *(_QWORD *)&v37 = 0LL;
  v15 = *((_DWORD *)a2 + 222);
  *((float *)&v37 + 2) = (float)(int)v34;
  *((float *)&v37 + 3) = (float)SHIDWORD(v34);
  if ( v15 && *(_DWORD *)(88LL * (unsigned int)(v15 - 1) + *((_QWORD *)a2 + 108)) )
  {
    CBaseClipStack::Top((char *)a2 + 2928, v33);
    v15 = *((_DWORD *)a2 + 222);
  }
  else
  {
    *(_OWORD *)v33 = v37;
  }
  if ( v15 && *(_DWORD *)(88LL * (unsigned int)(v15 - 1) + *((_QWORD *)a2 + 108) + 8) )
  {
    v37 = 0LL;
    CBaseClipStack::Top((char *)a2 + 2960, &v37);
    v16 = *(float *)v33;
    if ( *(float *)&v37 > *(float *)v33 )
    {
      LODWORD(v33[0]) = v37;
      v16 = *(float *)&v37;
    }
    v17 = *((float *)v33 + 1);
    if ( *((float *)&v37 + 1) > *((float *)v33 + 1) )
    {
      HIDWORD(v33[0]) = DWORD1(v37);
      v17 = *((float *)&v37 + 1);
    }
    v18 = *(float *)&v33[1];
    if ( *(float *)&v33[1] > *((float *)&v37 + 2) )
    {
      LODWORD(v33[1]) = DWORD2(v37);
      v18 = *((float *)&v37 + 2);
    }
    v19 = *((float *)&v33[1] + 1);
    if ( *((float *)&v33[1] + 1) > *((float *)&v37 + 3) )
    {
      HIDWORD(v33[1]) = HIDWORD(v37);
      v19 = *((float *)&v37 + 3);
    }
    if ( v18 <= v16 || v19 <= v17 )
    {
      v33[1] = 0LL;
      v33[0] = 0LL;
    }
  }
  CShapeDrawingContext::CShapeDrawingContext((unsigned int)v38, (_DWORD)a2, v3, (unsigned int)v33, (__int64)v31);
  v20 = CShapeTreeIterator::Walk<CShapeDrawingContext>(v38, this, v38);
  v6 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x126u);
    goto LABEL_46;
  }
  v22 = CShapeDrawingContext::Render((CShapeDrawingContext *)v38);
  v6 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0x127u);
LABEL_46:
    CShapeDrawingContext::~CShapeDrawingContext((CShapeDrawingContext *)v38);
    goto LABEL_36;
  }
  v24 = v42;
  if ( v42 )
  {
    v33[0] = v42;
    v25 = 8 * ((__int64)(*((_QWORD *)&v43 + 1) - (_QWORD)v42) >> 3);
    v34 = v25;
    if ( v25 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v33, &v34);
      v25 = v34;
      v24 = v33[0];
    }
    operator delete(v24, v25);
    v42 = 0LL;
    v43 = 0LL;
  }
  v26 = (char *)v40[0];
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v40[1] - v40[0]) >> 3) )
  {
    detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear_region(
      v40,
      0LL);
    v26 = (char *)v40[0];
  }
  v40[0] = 0LL;
  if ( v26 == &v41 )
    v26 = 0LL;
  if ( v26 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v26);
  }
  v27 = lpMem;
  if ( lpMem )
  {
    v28 = GetProcessHeap();
    HeapFree(v28, 0, v27);
  }
LABEL_36:
  if ( v7 )
LABEL_37:
    CDrawingContext::RestoreStateToLastMark(a2);
  return v6;
}
