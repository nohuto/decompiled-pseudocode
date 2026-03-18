/*
 * XREFs of ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800435E0
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18005C920 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800978F0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800B2A90 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801B0B14 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801D6A58 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801D8880 (-RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801DC180 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180211D90 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180247DB0 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800D5558 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
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
  unsigned int v10; // eax
  unsigned int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // xmm1_8
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // r15d
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // edi
  unsigned __int64 v23; // rcx
  void *v24; // rdi
  int v25; // ecx
  int v27; // edx
  unsigned int v28; // r15d
  int v29; // edi
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  unsigned __int64 v34; // rax
  void *v35; // rdi
  void *v36; // r15
  HANDLE ProcessHeap; // rax
  void *v38; // rbp
  HANDLE v39; // rax
  void *lpMem; // [rsp+30h] [rbp-58h] BYREF
  __int128 v41; // [rsp+38h] [rbp-50h]
  __int64 v42; // [rsp+48h] [rbp-40h]
  int v43; // [rsp+50h] [rbp-38h]

  v7 = -2147024362;
  if ( !a4 )
    goto LABEL_7;
  v8 = *((_DWORD *)this + 84);
  v9 = *((unsigned int *)this + 85);
  LODWORD(v41) = 9;
  *((_QWORD *)&v41 + 1) = a2;
  lpMem = 0LL;
  if ( v8 != (_DWORD)v9 )
    goto LABEL_3;
  v28 = 2 * v9;
  if ( (unsigned __int64)(2 * v9) <= 0xFFFFFFFF )
  {
    if ( v28 <= 0x40 )
      v28 = 64;
    v32 = HrMalloc(0x10uLL, v28, &lpMem);
    v29 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x6Bu, 0LL);
    }
    else
    {
      v34 = 16LL * *((unsigned int *)this + 84);
      if ( v34 <= 0xFFFFFFFF )
      {
        v35 = lpMem;
        memcpy_0(lpMem, *((const void **)this + 44), (unsigned int)v34);
        DefaultHeap::Free(*((void **)this + 44));
        v8 = *((_DWORD *)this + 84);
        *((_QWORD *)this + 44) = v35;
        *((_DWORD *)this + 85) = v28;
LABEL_3:
        *(_OWORD *)(*((_QWORD *)this + 44) + 16LL * v8) = v41;
        v10 = *((_DWORD *)this + 90);
        if ( v10 <= ++*((_DWORD *)this + 84) )
          v10 = *((_DWORD *)this + 84);
        *((_DWORD *)this + 90) = v10;
        goto LABEL_7;
      }
      v29 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, -2147024362, 0x6Du, 0LL);
    }
    v36 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v36);
    }
    v11 = v29;
    if ( v29 >= 0 )
    {
LABEL_7:
      v12 = *((unsigned int *)this + 209);
      LOBYTE(v43) = *((_BYTE *)this + 320);
      *(_QWORD *)&v41 = *(_QWORD *)((char *)this + 300);
      DWORD2(v41) = *((_DWORD *)this + 82);
      HIDWORD(v41) = *((_DWORD *)this + 77);
      v42 = *((_QWORD *)this + 39);
      v13 = *((unsigned int *)this + 208);
      lpMem = 0LL;
      if ( (_DWORD)v13 != (_DWORD)v12 )
      {
LABEL_8:
        v7 = 0;
        v14 = v42;
        v15 = 28 * v13;
        v16 = v43;
        v17 = *((_QWORD *)this + 106) + v15;
        *(_OWORD *)v17 = v41;
        *(_QWORD *)(v17 + 16) = v14;
        *(_DWORD *)(v17 + 24) = v16;
        v18 = *((_DWORD *)this + 214);
        if ( v18 <= ++*((_DWORD *)this + 208) )
          v18 = *((_DWORD *)this + 208);
        *((_DWORD *)this + 214) = v18;
        goto LABEL_18;
      }
      v19 = 2 * v12;
      if ( (unsigned __int64)(2 * v12) > 0xFFFFFFFF )
      {
        v22 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024362, 0x64u, 0LL);
      }
      else
      {
        if ( v19 <= 0x40 )
          v19 = 64;
        v20 = HrMalloc(0x1CuLL, v19, &lpMem);
        v22 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x6Bu, 0LL);
        }
        else
        {
          v23 = 28LL * *((unsigned int *)this + 208);
          if ( v23 <= 0xFFFFFFFF )
          {
            v24 = lpMem;
            memcpy_0(lpMem, *((const void **)this + 106), (unsigned int)v23);
            DefaultHeap::Free(*((void **)this + 106));
            v13 = *((unsigned int *)this + 208);
            *((_QWORD *)this + 106) = v24;
            *((_DWORD *)this + 209) = v19;
            goto LABEL_8;
          }
          v22 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2147024362, 0x6Du, 0LL);
        }
        v38 = lpMem;
        if ( lpMem )
        {
          v39 = GetProcessHeap();
          HeapFree(v39, 0, v38);
        }
        v7 = v22;
        if ( v22 >= 0 )
        {
LABEL_18:
          if ( (*(_BYTE *)a3 & 1) != 0 )
            *((_BYTE *)this + 320) = *((_DWORD *)a3 + 4) != 1;
          v25 = *(_DWORD *)a3;
          if ( (*(_DWORD *)a3 & 2) == 0 )
            goto LABEL_20;
          v27 = *((_DWORD *)a3 + 1);
          if ( (v27 & 0xFF000000) == 0xFF000000 )
          {
            v27 &= 0xFFFFFFu;
          }
          else if ( *((_BYTE *)this + 7922) )
          {
LABEL_20:
            if ( (v25 & 8) != 0 )
            {
              *((_DWORD *)this + 76) = *((_DWORD *)a3 + 2);
              v25 = *(_DWORD *)a3;
            }
            if ( (v25 & 0x10) != 0 )
            {
              *((_DWORD *)this + 77) = *((_DWORD *)a3 + 5);
              v25 = *(_DWORD *)a3;
            }
            if ( (v25 & 0x20) != 0 )
            {
              *((_DWORD *)this + 78) = *((_DWORD *)a3 + 6);
              v25 = *(_DWORD *)a3;
            }
            if ( (v25 & 0x40) != 0 )
            {
              *((_DWORD *)this + 79) = *((_DWORD *)a3 + 7);
              v25 = *(_DWORD *)a3;
            }
            if ( (v25 & 4) != 0 )
              *((_DWORD *)this + 82) = *((_DWORD *)a3 + 3);
            return v7;
          }
          *((_DWORD *)this + 75) = v27;
          v25 = *(_DWORD *)a3;
          goto LABEL_20;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v22, 0x1176u, 0LL);
      if ( a4 )
      {
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 336, 0LL);
        return v7;
      }
      goto LABEL_18;
    }
  }
  else
  {
    v29 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0x64u, 0LL);
    v11 = -2147024362;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x1166u, 0LL);
  return v11;
}
