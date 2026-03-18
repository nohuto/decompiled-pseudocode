/*
 * XREFs of ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E1378
 * Callers:
 *     ?Render@CDDARenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801071D0 (-Render@CDDARenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x18000E37C (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000E3B8 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x180016094 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007E408 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800B99FC (-GetDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800FE910 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HideDDAVisuals@CComposition@@QEBAXXZ @ 0x180111BE2 (-HideDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x180111C04 (-RestoreDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E11CC (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDDARenderTarget::Render(
        CDDARenderTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        CComposition *a4)
{
  unsigned int v4; // ebx
  char v5; // si
  __int64 v8; // rax
  CComposeTop *v9; // r13
  CDirtyRegion *v10; // r12
  struct IDeviceTarget *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD *, char *); // rbx
  _QWORD *DirtyRects; // rax
  int v17; // eax
  struct CComposition **v18; // rbx
  unsigned int v19; // edi
  struct CVisualTree *v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  CComposition *v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  int v32; // [rsp+20h] [rbp-B9h]
  struct CComposition **v33; // [rsp+58h] [rbp-81h]
  __int64 v35[2]; // [rsp+68h] [rbp-71h] BYREF
  int v36[4]; // [rsp+78h] [rbp-61h] BYREF
  __int128 v37; // [rsp+88h] [rbp-51h] BYREF
  int v38; // [rsp+98h] [rbp-41h]
  int v39; // [rsp+9Ch] [rbp-3Dh]
  int *v40; // [rsp+A0h] [rbp-39h] BYREF
  int v41; // [rsp+A8h] [rbp-31h] BYREF
  void *retaddr; // [rsp+138h] [rbp+5Fh]

  v4 = 0;
  v5 = 0;
  if ( *((_QWORD *)this - 247) && *(int *)(*((_QWORD *)this - 265) + 1104LL) <= 3 )
  {
    v8 = *((_QWORD *)this - 246);
    v9 = *(CComposeTop **)(v8 + 4744);
    v10 = (CDirtyRegion *)(v8 + 104);
    if ( v9 && CComposeTop::HasNewContent(*(CComposeTop **)(v8 + 4744)) )
      CDirtyRegion::ForceFullDirty(v10);
    if ( !CDirtyRegion::IsEmpty(v10) )
    {
      **((_DWORD **)this - 16) = 0;
      v11 = (struct IDeviceTarget *)(***((__int64 (__fastcall ****)(_QWORD))this - 247))(*((_QWORD *)this - 247));
      v12 = CDrawingContext::BeginFrame(
              a2,
              v11,
              (CDDARenderTarget *)((char *)this - 1888),
              (const struct _D3DCOLORVALUE *)((char *)this - 2012),
              0LL);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xB3u);
        return v4;
      }
      *(_BYTE *)(*((_QWORD *)this - 265) + 1274LL) = 1;
      CComposition::HideDDAVisuals(*((CComposition **)this - 265));
      v14 = *((_QWORD *)this - 255);
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD *, char *))(*(_QWORD *)v14 + 192LL);
      DirtyRects = CDirtyRegion::GetDirtyRects((__int64)v10, v35);
      v17 = v15(v14, DirtyRects, (char *)this - 1680);
      v18 = 0LL;
      v19 = 0;
      if ( v17 >= 0 )
        v18 = (struct CComposition **)((char *)this - 1680);
      v33 = v18;
      if ( *((_DWORD *)v10 + 705) )
      {
        v5 = 1;
        while ( 1 )
        {
          v40 = &v41;
          v41 = 0;
          v35[0] = 0LL;
          v35[1] = 0LL;
          CDirtyRegion::GetOptimizedRect(
            (struct CComposition **)v10,
            (__int64)v36,
            v19,
            (__int64)this - 1932,
            (FastRegion::CRegion *)&v40,
            (__int64)this - 1888,
            0,
            v35,
            v18);
          if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v36) )
          {
            v38 = 0;
            v39 = 0;
            v20 = (struct CVisualTree *)*((_QWORD *)this - 255);
            v32 = *((_BYTE *)this - 1996) != 0 ? 2 : 0;
            v37 = *(_OWORD *)v36;
            v21 = CDrawingContext::DrawVisualTree(a2, v20, (__int64)&v37, (COcclusionContext *)v18, v32, 0, 0LL);
            v4 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0xD3u);
              FastRegion::CRegion::FreeMemory((void **)&v40);
              goto LABEL_24;
            }
            CDDARenderTarget::NotifyRenderedRect((__int64)this - 2136, (__int64)v36, v23, v24);
            v25 = FastRegion::CRegion::Union(
                    (const struct FastRegion::Internal::CRgnData **)this - 16,
                    (const struct FastRegion::Internal::CRgnData **)&v40);
            if ( v25 < 0 )
              ModuleFailFastForHRESULT((unsigned int)v25, retaddr);
            v18 = v33;
          }
          FastRegion::CRegion::FreeMemory((void **)&v40);
          if ( ++v19 >= *((_DWORD *)v10 + 705) )
            goto LABEL_21;
        }
      }
      v5 = 1;
LABEL_21:
      if ( v9 )
      {
        v26 = CComposeTop::FullRender(v9, (__int64)a2, (__int64)this - 1888);
        v4 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0xE7u);
LABEL_24:
          CDrawingContext::EndFrame((CD3DDevice **)a2);
          goto LABEL_29;
        }
      }
      *((_BYTE *)this - 55) = *((_BYTE *)a2 + 7967);
      v29 = CDrawingContext::EndFrame((CD3DDevice **)a2);
      v4 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0xEDu);
LABEL_29:
        CComposition::RestoreDDAVisuals(v28);
        *((_BYTE *)g_pComposition + 1274) = 0;
        return v4;
      }
    }
  }
  v28 = a4;
  *(_BYTE *)a4 = *((_BYTE *)this - 56);
  if ( v5 )
    goto LABEL_29;
  return v4;
}
