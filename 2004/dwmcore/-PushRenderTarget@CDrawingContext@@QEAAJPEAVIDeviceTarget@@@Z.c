/*
 * XREFs of ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180062434
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18003A5C4 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18006622C (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18007CDF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018E05C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18003CA70 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18003CAA0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x18003E930 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x180062ECC (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x180062F50 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FFEC (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C22D4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x1800D0CD8 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x18018FBC8 (-ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180215B3C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IDeviceTarget *a2)
{
  __int64 *v2; // r15
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD); // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  float v13; // xmm6_4
  __int64 *v14; // rdi
  int v15; // r8d
  float v16; // xmm7_4
  float v17; // xmm9_4
  float v18; // xmm8_4
  __int64 v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdi
  char *v24; // rcx
  char *v25; // rcx
  __int64 v26; // rax
  CD3DDevice *v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r9
  struct IDeviceTarget *v31; // r8
  int v32; // eax
  __int64 v33; // rcx
  __int64 v35; // rcx
  int v36; // r8d
  __int64 v37; // rax
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm0_4
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  int v48; // ebx
  BOOL v49; // eax
  CHAR v50; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  CHAR Response[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+70h] [rbp-98h]
  __int128 v55; // [rsp+78h] [rbp-90h] BYREF
  __int128 v56; // [rsp+88h] [rbp-80h]
  __int128 v57; // [rsp+98h] [rbp-70h]
  __int128 v58; // [rsp+A8h] [rbp-60h]
  __int128 v59; // [rsp+B8h] [rbp-50h]
  int v60; // [rsp+C8h] [rbp-40h]
  _BYTE v61[24]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v62; // [rsp+F0h] [rbp-18h] BYREF

  v2 = (__int64 *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  v54 = v3;
  if ( v3 )
  {
    v35 = v3 + *(int *)(*(_QWORD *)(v3 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  }
  v6 = *((_QWORD *)a2 + 1);
  v62 = 0LL;
  v7 = (__int64 (__fastcall ***)(_QWORD))((char *)a2 + *(int *)(v6 + 8) + 8);
  v8 = (**v7)(v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x73u, 0LL);
LABEL_77:
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=(v2, v3);
    if ( *v2 )
      CDrawingContext::UpdateRenderTargetInfo(this);
    else
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((CD3DDevice **)this + 5);
    goto LABEL_24;
  }
  *((_BYTE *)this + 5954) = 1;
  v11 = CDrawingContext::FlushDeferredD2DLayers(this);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xFB2u, 0LL);
  }
  else if ( *((_BYTE *)this + 5955) )
  {
    *((_WORD *)this + 2977) = 1;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v10, 0xB47u, 0LL);
  }
  else
  {
    v13 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v14 = (__int64 *)((char *)this + 936);
    v15 = *((_DWORD *)this + 240);
    v16 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v17 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v18 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    *(_QWORD *)&v55 = 0LL;
    DWORD2(v55) = 0;
    HIDWORD(v59) = 0;
    LOBYTE(v60) = 0;
    if ( v15 && (v12 = (unsigned int)(v15 - 1), *(_DWORD *)(84 * v12 + *v14)) )
    {
      CBaseClipStack::Top((char *)this + 3200, &v62);
      v15 = *((_DWORD *)this + 240);
      v18 = *((float *)&v62 + 3);
      v17 = *((float *)&v62 + 2);
      v16 = *((float *)&v62 + 1);
      v13 = *(float *)&v62;
    }
    else
    {
      v62 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    if ( v15 )
    {
      v12 = (unsigned int)(v15 - 1);
      if ( *(_DWORD *)(84 * v12 + *v14 + 4) )
      {
        if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(136LL * (unsigned int)(*((_DWORD *)this + 458) - 1) + *((_QWORD *)this + 226) + 112LL) )
        {
          CScopedClipStack::ComputeCpuClipBoundsInScope((CDrawingContext *)((char *)this + 936));
          v36 = *((_DWORD *)this + 458);
        }
        v37 = 136LL * (unsigned int)(v36 - 1);
        v12 = *((_QWORD *)this + 226);
        v38 = *(float *)(v37 + v12 + 112);
        if ( v38 > v13 )
        {
          LODWORD(v62) = *(_DWORD *)(v37 + v12 + 112);
          v13 = v38;
        }
        v39 = *(float *)(v37 + v12 + 116);
        if ( v39 > v16 )
        {
          DWORD1(v62) = *(_DWORD *)(v37 + v12 + 116);
          v16 = v39;
        }
        v40 = *(float *)(v37 + v12 + 120);
        if ( v17 > v40 )
        {
          DWORD2(v62) = *(_DWORD *)(v37 + v12 + 120);
          v17 = v40;
        }
        v41 = *(float *)(v37 + v12 + 124);
        if ( v18 > v41 )
        {
          HIDWORD(v62) = *(_DWORD *)(v37 + v12 + 124);
          v18 = v41;
        }
        if ( v17 <= v13 || v18 <= v16 )
          v62 = 0uLL;
      }
    }
    v19 = *((unsigned int *)this + 240);
    *(_QWORD *)&v59 = 0LL;
    v20 = v19 + 1;
    v56 = 0LL;
    HIDWORD(v55) = 1065353216;
    v57 = _xmm;
    v58 = _xmm;
    DWORD2(v59) = 1065353216;
    WORD6(v59) = 32085;
    if ( (int)v19 + 1 < (unsigned int)v19 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v20 <= *((_DWORD *)this + 239) )
      {
        v21 = *v14;
        v22 = 84 * v19;
        *(_OWORD *)(v22 + v21) = v55;
        *(_OWORD *)(v22 + v21 + 16) = v56;
        *(_OWORD *)(v22 + v21 + 32) = v57;
        *(_OWORD *)(v22 + v21 + 48) = v58;
        *(_OWORD *)(v22 + v21 + 64) = v59;
        *(_DWORD *)(v22 + v21 + 80) = v60;
        *((_DWORD *)this + 240) = v20;
        v10 = 0;
        goto LABEL_14;
      }
      v45 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 936, 84LL, 1LL, &v55);
      v10 = v45;
      if ( v45 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v45, 0xC0u, 0LL);
    }
    if ( v10 >= 0 )
      goto LABEL_15;
    MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v10, 0x41u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v10, 0xB52u, 0LL);
  }
LABEL_14:
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v10, 0x7Eu, 0LL);
    goto LABEL_77;
  }
LABEL_15:
  v23 = *v2;
  *v2 = (__int64)a2;
  v24 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v24 + 8LL))(v24);
  if ( v23 )
  {
    v42 = v23 + *(int *)(*(_QWORD *)(v23 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  if ( *((_QWORD *)this + 5) )
    goto LABEL_23;
  v25 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
  v26 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v25 + 8LL))(v25);
  v27 = (CD3DDevice *)*((_QWORD *)this + 5);
  v28 = v26;
  *((_QWORD *)this + 5) = v26;
  if ( !v26 )
    goto LABEL_21;
  if ( *(int *)(v26 + 8) >= 0 )
    goto LABEL_20;
  while ( 1 )
  {
    while ( 1 )
    {
      v47 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v48 = v47;
      if ( !v47 )
      {
        v49 = IsDebuggerPresent();
        v50 = Response[0];
        if ( v49 )
          v50 = 103;
        Response[0] = v50;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_18028970C,
        word_18028970C,
        "Function: ",
        L"CMILCOMBase::InternalAddRef",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
        25);
      if ( v48 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          Response,
          Response);
        __debugbreak();
      }
      if ( Response[0] <= 98 )
        break;
      if ( Response[0] == 103 )
        goto LABEL_20;
      if ( Response[0] == 105 )
        goto LABEL_72;
      if ( Response[0] != 112 )
      {
        if ( Response[0] != 116 )
          goto LABEL_71;
        goto LABEL_69;
      }
LABEL_70:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_71:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( Response[0] == 98 || Response[0] == 66 )
      break;
    if ( Response[0] == 71 )
      goto LABEL_20;
    if ( Response[0] != 73 )
    {
      if ( Response[0] != 80 )
      {
        if ( Response[0] != 84 )
          goto LABEL_71;
LABEL_69:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_71;
      }
      goto LABEL_70;
    }
LABEL_72:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_20:
  _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
  v3 = v54;
LABEL_21:
  if ( v27 )
    CD3DDevice::Release(v27);
LABEL_23:
  v29 = (**(__int64 (__fastcall ***)(__int64, _BYTE *))*v2)(*v2, v61);
  v30 = *((_QWORD *)this + 5);
  v31 = (struct IDeviceTarget *)*v2;
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)v29;
  *((_QWORD *)this + 9) = *(_QWORD *)(v29 + 16);
  v32 = CD2DContext::PushTarget(
          (CD2DContext *)(v30 + 16),
          (struct ID2DContextOwner *)(((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
          v31);
  v10 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x96u, 0LL);
    --*((_DWORD *)this + 240);
    goto LABEL_77;
  }
LABEL_24:
  if ( v3 )
  {
    v43 = v3 + *(int *)(*(_QWORD *)(v3 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
  return (unsigned int)v10;
}
