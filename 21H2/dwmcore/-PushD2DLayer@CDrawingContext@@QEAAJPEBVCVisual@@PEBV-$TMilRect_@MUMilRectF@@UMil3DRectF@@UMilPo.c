/*
 * XREFs of ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180096690
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18008AB80 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180098620 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1801AFF60 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801B0B14 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801B0F54 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020EB6C (-Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18008B404 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x1800969F0 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ?ApplyDeferredD2DClipLayers@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800977D4 (-ApplyDeferredD2DClipLayers@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800D5558 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D8514 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::PushD2DLayer(
        struct CDrawingContext *a1,
        char *a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        float a6,
        char a7,
        unsigned int a8)
{
  unsigned int v8; // esi
  bool v9; // zf
  BOOL v10; // r13d
  int v12; // r12d
  __int64 (__fastcall ***v15)(_QWORD, char *); // rcx
  HANDLE ProcessHeap; // rax
  __int64 v17; // rcx
  char *v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // edx
  char v21; // r13
  unsigned int *v22; // r14
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // r12d
  unsigned int v30; // eax
  unsigned int v31; // edx
  int v33; // eax
  __int64 v34; // rcx
  int v35; // ebx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // r12d
  int v40; // eax
  __int64 v41; // rcx
  int v42; // ebx
  unsigned __int64 v43; // rax
  void *v44; // rbx
  void *v45; // r12
  HANDLE v46; // rax
  __int64 v47; // rcx
  int v48; // ebx
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  void *lpMem; // [rsp+30h] [rbp-50h] BYREF
  char *v53; // [rsp+38h] [rbp-48h] BYREF
  __int128 v54; // [rsp+40h] [rbp-40h] BYREF
  char v55[16]; // [rsp+50h] [rbp-30h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+38h]

  v8 = 0;
  v53 = a2;
  v9 = *((_DWORD *)a1 + 76) == 0;
  LODWORD(lpMem) = 0;
  v10 = !v9;
  v54 = 0LL;
  v12 = 0;
  v15 = (__int64 (__fastcall ***)(_QWORD, char *))(*((_QWORD *)a1 + 4)
                                                 + 8LL
                                                 + *(int *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8LL) + 12LL));
  if ( *(_DWORD *)((**v15)(v15, v55) + 4) == 3 )
  {
    v12 = 3;
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a6 - 1.0) & _xmm) < 0.0000011920929 )
  {
    LODWORD(lpMem) = 1;
    v12 = 1;
  }
  if ( a3 )
    v54 = *a3;
  else
    CDrawingContext::GetClipBoundsWorld(a1, &v54);
  if ( *((float *)&v54 + 2) <= *(float *)&v54 || *((float *)&v54 + 3) <= *((float *)&v54 + 1) )
  {
    *((_QWORD *)&v54 + 1) = v53;
    LODWORD(v54) = 7;
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)a1 + 84, &v54);
    return v8;
  }
  ProcessHeap = GetProcessHeap();
  v18 = (char *)HeapAlloc(ProcessHeap, 0, 0x50uLL);
  if ( !v18 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *(_QWORD *)v18 = &CD2DLayer::`vftable';
  *(_OWORD *)(v18 + 8) = v54;
  *((_QWORD *)v18 + 3) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  *((_DWORD *)v18 + 18) = (_DWORD)lpMem;
  *((float *)v18 + 15) = a6;
  v18[56] = 0;
  *((_DWORD *)v18 + 16) = v10;
  *((_DWORD *)v18 + 17) = v12;
  if ( a5 )
  {
    *((_OWORD *)v18 + 2) = *(_OWORD *)a5;
    *((_QWORD *)v18 + 6) = *(_QWORD *)(a5 + 16);
    v18[56] = 1;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(v17, &EVTDESC_ETWGUID_D2DLAYERCREATEREASON, a8);
  if ( a7 && a4 && COERCE_FLOAT(COERCE_UNSIGNED_INT(a6 - 1.0) & _xmm) < 0.0000011920929 )
  {
    v19 = *((_DWORD *)a1 + 754);
    lpMem = v18;
    v20 = v19 + 1;
    if ( v19 + 1 < v19 )
    {
      v8 = -2147024362;
      v35 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      if ( v20 <= *((_DWORD *)a1 + 753) )
      {
        *(_QWORD *)(*((_QWORD *)a1 + 374) + 8LL * v19) = v18;
        *((_DWORD *)a1 + 754) = v20;
LABEL_20:
        v21 = 1;
        goto LABEL_21;
      }
      v37 = DynArrayImpl<0>::AddMultipleAndSet((char *)a1 + 2992, 8LL, 1LL, &lpMem);
      v35 = v37;
      v8 = v37;
      if ( v37 >= 0 )
        goto LABEL_20;
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0LL, v37, 0xC0u);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0LL, v35, 0xF7Fu);
LABEL_64:
    CD2DLayer::`scalar deleting destructor'((CD2DLayer *)v18, 1u);
    return v8;
  }
  v27 = CScopedClipStack::ApplyDeferredD2DClipLayers((struct CDrawingContext *)((char *)a1 + 864), a1);
  v8 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0xF88u);
    goto LABEL_64;
  }
  v21 = 0;
LABEL_21:
  v22 = (unsigned int *)((char *)a1 + 336);
  v23 = *((unsigned int *)a1 + 85);
  v8 = -2147024362;
  *((_QWORD *)&v54 + 1) = v53;
  v24 = *((_DWORD *)a1 + 84);
  LODWORD(v54) = 6;
  lpMem = 0LL;
  if ( v24 != (_DWORD)v23 )
  {
LABEL_22:
    v25 = 2LL * v24;
    *(_OWORD *)(*((_QWORD *)a1 + 44) + 16LL * v24) = v54;
    v26 = *((_DWORD *)a1 + 90);
    if ( v26 <= ++*v22 )
      v26 = *v22;
    *((_DWORD *)a1 + 90) = v26;
    goto LABEL_30;
  }
  v39 = 2 * v23;
  if ( (unsigned __int64)(2 * v23) > 0xFFFFFFFF )
  {
    v42 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, -2147024362, 0x64u);
    v29 = -2147024362;
    goto LABEL_55;
  }
  if ( v39 <= 0x40 )
    v39 = 64;
  v40 = HrMalloc(0x10uLL, v39, &lpMem);
  v42 = v40;
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0LL, v40, 0x6Bu);
  }
  else
  {
    v43 = 16LL * *v22;
    if ( v43 <= 0xFFFFFFFF )
    {
      v44 = lpMem;
      memcpy_0(lpMem, *((const void **)a1 + 44), (unsigned int)v43);
      DefaultHeap::Free(*((void **)a1 + 44));
      v24 = *v22;
      *((_QWORD *)a1 + 44) = v44;
      *((_DWORD *)a1 + 85) = v39;
      goto LABEL_22;
    }
    v42 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0LL, -2147024362, 0x6Du);
  }
  v45 = lpMem;
  if ( lpMem )
  {
    v46 = GetProcessHeap();
    HeapFree(v46, 0, v45);
  }
  v29 = v42;
  if ( v42 < 0 )
  {
LABEL_55:
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v42, 0xFB8u);
    v8 = v29;
    goto LABEL_62;
  }
LABEL_30:
  v30 = *((_DWORD *)a1 + 122);
  v53 = v18;
  v31 = v30 + 1;
  if ( v30 + 1 < v30 )
  {
    v48 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_59;
  }
  if ( v31 > *((_DWORD *)a1 + 121) )
  {
    v50 = DynArrayImpl<0>::AddMultipleAndSet((char *)a1 + 464, 8LL, 1LL, &v53);
    v48 = v50;
    v8 = v50;
    if ( v50 >= 0 )
      goto LABEL_33;
    MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0LL, v50, 0xC0u);
LABEL_59:
    v29 = v8;
    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0LL, v48, 0xFBDu);
    goto LABEL_61;
  }
  v8 = 0;
  *(_QWORD *)(*((_QWORD *)a1 + 58) + 8LL * v30) = v18;
  *((_DWORD *)a1 + 122) = v31;
LABEL_33:
  if ( !v21 )
  {
    v33 = (*(__int64 (__fastcall **)(char *, struct CDrawingContext *))(*(_QWORD *)v18 + 16LL))(v18, a1);
    v8 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0LL, v33, 0xFC2u);
      --*((_DWORD *)a1 + 122);
      v29 = v8;
LABEL_61:
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)a1 + 336, 0LL);
LABEL_62:
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0LL, v29, 0xF8Fu);
      if ( v21 )
        --*((_DWORD *)a1 + 754);
      goto LABEL_64;
    }
  }
  ++dword_1803D3148;
  ++dword_1803D31F8;
  return v8;
}
