/*
 * XREFs of ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18002A790
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x180033C94 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180048ABC (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18004D8A0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E7C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800BAB48 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800E9624 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVI_ea_1800E9624.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18016645C (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18017A104 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801941D0 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180195260 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD690 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18002C9E8 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180071964 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushRenderOptionsInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct MilRenderOptions *a3,
        char a4)
{
  unsigned int v7; // ebp
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edi
  __int64 v17; // xmm1_8
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // ecx
  int v25; // edx
  unsigned int v26; // r15d
  int v27; // eax
  unsigned int v28; // ecx
  unsigned __int64 v29; // rcx
  void *v30; // rdi
  unsigned int v31; // r15d
  int v32; // eax
  unsigned int v33; // ecx
  unsigned __int64 v34; // rax
  void *v35; // rdi
  void *v36; // r15
  HANDLE v37; // rax
  void *v38; // rbp
  HANDLE ProcessHeap; // rax
  __int64 v40; // r8
  void *lpMem; // [rsp+30h] [rbp-58h] BYREF
  __int128 v42; // [rsp+38h] [rbp-50h]
  __int64 v43; // [rsp+48h] [rbp-40h]
  int v44; // [rsp+50h] [rbp-38h]

  v7 = -2147024362;
  if ( !a4 )
  {
LABEL_7:
    v14 = *((unsigned int *)this + 227);
    LOBYTE(v44) = *((_BYTE *)this + 292);
    *(_QWORD *)&v42 = *((_QWORD *)this + 34);
    DWORD2(v42) = *((_DWORD *)this + 75);
    HIDWORD(v42) = *((_DWORD *)this + 70);
    v43 = *(_QWORD *)((char *)this + 284);
    v15 = *((unsigned int *)this + 226);
    lpMem = 0LL;
    if ( (_DWORD)v15 != (_DWORD)v14 )
    {
LABEL_8:
      v16 = 0;
      v17 = v43;
      v18 = 28 * v15;
      v19 = v44;
      v20 = *((_QWORD *)this + 115) + v18;
      *(_OWORD *)v20 = v42;
      *(_QWORD *)(v20 + 16) = v17;
      *(_DWORD *)(v20 + 24) = v19;
      v21 = *((_DWORD *)this + 232);
      v22 = ++*((_DWORD *)this + 226);
      if ( v21 <= v22 )
        v21 = *((_DWORD *)this + 226);
      *((_DWORD *)this + 232) = v21;
      goto LABEL_11;
    }
    v26 = 2 * v14;
    if ( (unsigned __int64)(2 * v14) > 0xFFFFFFFF )
    {
      v16 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_54:
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v16, 0x10E5u, 0LL);
      if ( a4 )
      {
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 376, 0LL, v40);
        return v7;
      }
LABEL_12:
      if ( (*(_BYTE *)a3 & 1) != 0 )
        *((_BYTE *)this + 292) = *((_DWORD *)a3 + 4) != 1;
      v23 = *(_DWORD *)a3;
      if ( (*(_DWORD *)a3 & 2) == 0 )
        goto LABEL_14;
      v25 = *((_DWORD *)a3 + 1);
      if ( (v25 & 0xFF000000) == 0xFF000000 )
      {
        v25 &= 0xFFFFFFu;
      }
      else if ( *((_BYTE *)this + 5922) )
      {
LABEL_14:
        if ( (v23 & 8) != 0 )
        {
          *((_DWORD *)this + 69) = *((_DWORD *)a3 + 2);
          v23 = *(_DWORD *)a3;
        }
        if ( (v23 & 0x10) != 0 )
        {
          *((_DWORD *)this + 70) = *((_DWORD *)a3 + 5);
          v23 = *(_DWORD *)a3;
        }
        if ( (v23 & 0x20) != 0 )
        {
          *((_DWORD *)this + 71) = *((_DWORD *)a3 + 6);
          v23 = *(_DWORD *)a3;
        }
        if ( (v23 & 0x40) != 0 )
        {
          *((_DWORD *)this + 72) = *((_DWORD *)a3 + 7);
          v23 = *(_DWORD *)a3;
        }
        if ( (v23 & 4) != 0 )
          *((_DWORD *)this + 75) = *((_DWORD *)a3 + 3);
        return v7;
      }
      *((_DWORD *)this + 68) = v25;
      v23 = *(_DWORD *)a3;
      goto LABEL_14;
    }
    if ( v26 <= 0x40 )
      v26 = 64;
    v27 = HrMalloc(0x1CuLL, v26, &lpMem);
    v16 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x53u, 0LL);
    }
    else
    {
      v29 = 28LL * *((unsigned int *)this + 226);
      if ( v29 <= 0xFFFFFFFF )
      {
        v30 = lpMem;
        memcpy_0(lpMem, *((const void **)this + 115), (unsigned int)v29);
        operator delete(*((void **)this + 115));
        v15 = *((unsigned int *)this + 226);
        *((_QWORD *)this + 115) = v30;
        *((_DWORD *)this + 227) = v26;
        goto LABEL_8;
      }
      v16 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v38 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v38);
    }
LABEL_11:
    v7 = v16;
    if ( v16 >= 0 )
      goto LABEL_12;
    goto LABEL_54;
  }
  v8 = *((_DWORD *)this + 94);
  v9 = *((unsigned int *)this + 95);
  LODWORD(v42) = 9;
  *((_QWORD *)&v42 + 1) = a2;
  lpMem = 0LL;
  if ( v8 != (_DWORD)v9 )
    goto LABEL_3;
  v31 = 2 * v9;
  if ( (unsigned __int64)(2 * v9) > 0xFFFFFFFF )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    v13 = -2147024362;
    goto LABEL_48;
  }
  if ( v31 <= 0x40 )
    v31 = 64;
  v32 = HrMalloc(0x10uLL, v31, &lpMem);
  v10 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x53u, 0LL);
  }
  else
  {
    v34 = 16LL * *((unsigned int *)this + 94);
    if ( v34 <= 0xFFFFFFFF )
    {
      v35 = lpMem;
      memcpy_0(lpMem, *((const void **)this + 49), (unsigned int)v34);
      operator delete(*((void **)this + 49));
      v8 = *((_DWORD *)this + 94);
      *((_QWORD *)this + 49) = v35;
      *((_DWORD *)this + 95) = v31;
LABEL_3:
      v10 = 0;
      *(_OWORD *)(*((_QWORD *)this + 49) + 16LL * v8) = v42;
      v11 = *((_DWORD *)this + 100);
      v12 = ++*((_DWORD *)this + 94);
      if ( v11 <= v12 )
        v11 = *((_DWORD *)this + 94);
      *((_DWORD *)this + 100) = v11;
      goto LABEL_6;
    }
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, -2147024362, 0x55u, 0LL);
  }
  v36 = lpMem;
  if ( lpMem )
  {
    v37 = GetProcessHeap();
    HeapFree(v37, 0, v36);
  }
LABEL_6:
  v13 = v10;
  if ( v10 >= 0 )
    goto LABEL_7;
LABEL_48:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v10, 0x10D5u, 0LL);
  return v13;
}
