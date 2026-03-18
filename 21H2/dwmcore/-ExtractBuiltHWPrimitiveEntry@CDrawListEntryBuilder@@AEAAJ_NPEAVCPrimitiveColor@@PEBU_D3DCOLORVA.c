/*
 * XREFs of ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B3EB0
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1800AC0F4 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800EC17C (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801E30C4 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180057630 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x1800B4300 (-Initialize@CDrawListPrimitive@@IEAAXAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x1800B4768 (PrimitiveStorage--Alloc_16_.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800F1BC4 (--0CThreadContext@@AEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180111B30 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A0C34 (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1801E308C (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18026C098 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
        CDrawListEntryBuilder *this,
        char a2,
        struct CPrimitiveColor *a3,
        const struct _D3DCOLORVALUE *a4)
{
  void *v4; // rdi
  __int64 v7; // rbx
  unsigned int v10; // r15d
  char v11; // al
  unsigned int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r15
  int v18; // eax
  bool v19; // zf
  _DWORD *Value; // rbx
  int v21; // ecx
  char *v22; // rdi
  __int64 v23; // rcx
  detail::liberal_expansion_policy *v24; // rcx
  _QWORD *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rbx
  unsigned __int64 v28; // r13
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  CCpuClip *v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  struct CShape *v44; // rdi
  __int64 (__fastcall *v45)(struct CShape *, _QWORD, __int64 *); // rbx
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rcx
  CThreadContext *v49; // rax
  __int64 v50; // rcx
  CThreadContext *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // xmm0_8
  int v55; // eax
  int v56; // ebx
  BOOL v57; // eax
  char v58; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // rsi
  LPVOID v63; // rax
  __int64 v64; // r8
  __int64 v65; // rdx
  LPVOID v66; // rbx
  CDrawListEntryBuilder *v67; // rcx
  __int64 v68; // r11
  __int64 v69; // r10
  void *Src; // [rsp+20h] [rbp-E0h]
  void *v71; // [rsp+28h] [rbp-D8h]
  __int64 v72; // [rsp+30h] [rbp-D0h]
  __int64 v73; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v74; // [rsp+68h] [rbp-98h] BYREF
  __int64 v75; // [rsp+78h] [rbp-88h]
  __int64 v76; // [rsp+80h] [rbp-80h]
  struct CShape *v77; // [rsp+88h] [rbp-78h] BYREF
  __int64 v78; // [rsp+90h] [rbp-70h]
  __int64 v79; // [rsp+98h] [rbp-68h]
  struct CPrimitiveColor *v80; // [rsp+A0h] [rbp-60h]
  const struct _D3DCOLORVALUE *v81; // [rsp+A8h] [rbp-58h]
  __int64 *v82; // [rsp+B0h] [rbp-50h]
  detail::liberal_expansion_policy *v83; // [rsp+B8h] [rbp-48h]
  __int64 v84; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v85; // [rsp+C8h] [rbp-38h] BYREF
  int v86[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v87; // [rsp+D8h] [rbp-28h]
  unsigned int v88; // [rsp+DCh] [rbp-24h]
  int v89[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v90; // [rsp+E8h] [rbp-18h]
  unsigned int v91; // [rsp+ECh] [rbp-14h]
  __int128 v92; // [rsp+F0h] [rbp-10h]
  __int64 v93; // [rsp+100h] [rbp+0h]
  __int128 v94; // [rsp+110h] [rbp+10h] BYREF
  __int64 v95; // [rsp+120h] [rbp+20h]
  __int128 v96; // [rsp+130h] [rbp+30h] BYREF
  __int64 v97; // [rsp+140h] [rbp+40h]
  char v98[24]; // [rsp+150h] [rbp+50h] BYREF
  char v99[24]; // [rsp+168h] [rbp+68h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+A8h]
  __int16 Response; // [rsp+1B0h] [rbp+B0h] BYREF

  v4 = (void *)*((_QWORD *)this + 503);
  v7 = (__int64)(*((_QWORD *)this + 504) - (_QWORD)v4) >> 1;
  v10 = 0;
  if ( v7 )
  {
    v11 = *((_BYTE *)this + 30);
    v84 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 1), (__m128)*((unsigned int *)this + 2)).m128_u64[0];
    LOBYTE(Response) = v11;
    if ( v7 == -1 || !v4 )
      goto LABEL_94;
    v12 = *((_DWORD *)this + 1004);
    v13 = *(_DWORD *)this;
    *(_QWORD *)v86 = *((_QWORD *)this + 258);
    *(_QWORD *)v89 = *((_QWORD *)this + 14);
    v87 = 8 * v13 + 16;
    v14 = v12;
    v90 = v87;
    LODWORD(v77) = v13;
    v88 = v12;
    v91 = v12;
    *(_QWORD *)&v92 = v7;
    LODWORD(v74) = v12;
    *(_QWORD *)((char *)&v74 + 4) = __PAIR64__(v13, v12);
    HIDWORD(v74) = v7;
    LODWORD(v75) = 0;
    if ( (v12 & 1) != 0 )
    {
      v14 = (v12 & 0xFFFFFFFE) + 2;
      LODWORD(v74) = v14;
      if ( v12 )
        DWORD1(v74) = (v12 & 0xFFFFFFFE) + 2;
    }
    if ( v14 > 0x10000 || (unsigned int)v7 > 0x1FFFE )
    {
      LODWORD(v74) = 0;
      HIDWORD(v74) = 0;
    }
    v15 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)&v74);
    v76 = v15;
    v17 = v15;
    if ( !v15 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, -2147024882, 0x55u);
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0LL, -2147024882, 0x44Au);
      return v10;
    }
    CDrawListPrimitive::Initialize(v15, (int)v89, (int)v86, (int)v77, v4, v7, (__int64)&v84, Response);
    v81 = a4;
    v78 = 0LL;
    v79 = 0LL;
    v83 = (detail::liberal_expansion_policy *)*((_QWORD *)this + 4);
    v80 = a3;
    if ( *((_BYTE *)this + 4428) )
      v82 = (__int64 *)((char *)this + 4408);
    else
      v82 = 0LL;
    v18 = *((_DWORD *)this + 6);
    LODWORD(v78) = v18;
    if ( a2 )
    {
      v18 |= 8u;
      LODWORD(v78) = v18;
    }
    if ( *((_BYTE *)this + 4427) )
    {
      *((_BYTE *)this + 4427) = 0;
      LODWORD(v78) = v18 & 0xFFFFFFFE;
    }
    v19 = *((_BYTE *)this + 4425) == 0;
    v73 = 0LL;
    if ( v19 )
    {
      v41 = (CCpuClip *)*((_QWORD *)this + 2);
      if ( *(_QWORD *)v41 || *((_QWORD *)v41 + 10) )
      {
        v42 = CCpuClip::ResolveClip(v41, &v77, 0LL);
        v10 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0LL, v42, 0x468u);
        }
        else
        {
          v44 = v77;
          v45 = *(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v77 + 24LL);
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v73);
          v46 = v45(v44, 0LL, &v73);
          v10 = v46;
          if ( v46 >= 0 )
          {
            v17 = v76;
            v79 = v73;
            goto LABEL_15;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0LL, v46, 0x469u);
        }
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v73);
        std::default_delete<CDrawListPrimitive>::operator()(v48, v76);
        return v10;
      }
    }
LABEL_15:
    v85 = 0LL;
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v49 = (CThreadContext *)operator new(0x150uLL);
      if ( !v49 || (v51 = CThreadContext::CThreadContext(v49), (Value = v51) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0LL, -2147024882, 0x42u);
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v51);
    }
    v21 = Value[33];
    v22 = 0LL;
    if ( v21 )
    {
      v22 = (char *)*((_QWORD *)Value + 17);
      *((_QWORD *)Value + 17) = *(_QWORD *)v22;
      Value[33] = v21 - 1;
    }
    if ( !v22 )
    {
      v22 = (char *)DefaultHeap::Alloc(0x50uLL);
      if ( !v22 )
      {
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, -2147024882, 0x11u);
        std::default_delete<CDrawListPrimitive>::operator()(v52, v76);
        MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0LL, -2147024882, 0x46Eu);
        Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v85);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v73);
        return v10;
      }
    }
    *((_DWORD *)v22 + 2) = 0;
    *((_QWORD *)v22 + 2) = a3;
    *((_DWORD *)v22 + 6) = 1065353216;
    *((_DWORD *)v22 + 7) = 1065353216;
    *((_DWORD *)v22 + 8) = 1065353216;
    *((_DWORD *)v22 + 9) = 1065353216;
    v23 = v79;
    *((_DWORD *)v22 + 12) = v78;
    *((_QWORD *)v22 + 7) = v23;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    if ( v81 )
      *(struct _D3DCOLORVALUE *)(v22 + 24) = *(const struct _D3DCOLORVALUE *)&v81->r;
    if ( v82 )
    {
      v54 = *v82;
      *((_DWORD *)v22 + 12) |= 0x400u;
      *((_QWORD *)v22 + 5) = v54;
    }
    v24 = v83;
    *(_QWORD *)v22 = &CHWDrawListEntry::`vftable';
    *((_QWORD *)v22 + 8) = v17;
    *((_QWORD *)v22 + 9) = v24;
    if ( v24 )
      (**(void (__fastcall ***)(detail::liberal_expansion_policy *))v24)(v24);
    ++CHWDrawListEngineMetrics::s_cDrawListEntries;
    if ( *((int *)v22 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
    {
      while ( 1 )
      {
        v55 = IsKernelDebuggerPresent();
        Response = 63;
        v56 = v55;
        if ( !v55 )
        {
          v57 = IsDebuggerPresent();
          v58 = Response;
          if ( v57 )
            v58 = 103;
          LOBYTE(Response) = v58;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
          word_18032C468,
          word_18032C468,
          "Function: ",
          L"CMILRefCountImpl::AddReference",
          ", ",
          L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          23);
        if ( v56 )
        {
          DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
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
            &Response,
            &Response);
          __debugbreak();
        }
        switch ( (char)Response )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_28;
          case 'G':
          case 'g':
            goto LABEL_28;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_76;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_76;
          default:
LABEL_76:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_28:
    _InterlockedIncrement((volatile signed __int32 *)v22 + 2);
    v25 = (_QWORD *)*((_QWORD *)this + 6);
    v10 = 0;
    v26 = *((_QWORD *)this + 7);
    v27 = *((_QWORD *)this + 5);
    v28 = ((__int64)v25 - v27) >> 3;
    if ( !((v26 - (__int64)v25) >> 3) )
    {
      v61 = v28 + 1;
      if ( v28 + 1 < v28 )
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
      }
      v62 = detail::liberal_expansion_policy::expand(v24, (v26 - v27) >> 3, v61);
      v63 = operator new(saturated_mul(v62, 8uLL));
      v64 = *((_QWORD *)this + 6);
      v65 = *((_QWORD *)this + 5);
      *(_QWORD *)&v74 = v63;
      *((_QWORD *)&v74 + 1) = v28;
      v66 = v63;
      v75 = 0LL;
      v94 = v74;
      v95 = 0LL;
      std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>(
        v98,
        v65,
        v64,
        &v94,
        Src,
        v71,
        v72);
      v67 = (CDrawListEntryBuilder *)*((_QWORD *)this + 5);
      *((_QWORD *)this + 5) = v66;
      if ( v67 == (CDrawListEntryBuilder *)((char *)this + 64) )
        v67 = 0LL;
      DefaultHeap::Free(v67);
      v27 = *((_QWORD *)this + 5);
      v25 = (_QWORD *)(v27 + 8 * v28);
      *((_QWORD *)this + 6) = v25;
      *((_QWORD *)this + 7) = v27 + 8 * v62;
    }
    *((_QWORD *)&v74 + 1) = 1LL;
    v29 = ((__int64)v25 - v27) >> 3;
    v30 = v29 - v28;
    *(_QWORD *)&v74 = v27 + 8 * v29;
    if ( (_QWORD)v74 )
    {
      v75 = 1LL;
      v31 = (((__int64)v25 - v27) >> 3) - v28;
      if ( v30 > 1 )
        v31 = 1LL;
      v92 = v74;
      v93 = 1LL;
      v32 = 8 * v31;
      v33 = &v25[v32 / 0xFFFFFFFFFFFFFFF8uLL];
      if ( v25 == &v25[v32 / 0xFFFFFFFFFFFFFFF8uLL] )
      {
LABEL_33:
        if ( v30 <= 1 )
          goto LABEL_34;
        *(_QWORD *)&v74 = v27;
        *((_QWORD *)&v74 + 1) = v29;
        if ( !v29 || v27 && v29 >= 0 )
        {
          v75 = v29;
          v96 = v74;
          v97 = v29;
          std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
            v99,
            v27 + 8 * v28,
            v27 + 8 * (v29 - 1),
            &v96,
            Src,
            v71,
            v72);
LABEL_34:
          *((_QWORD *)this + 6) += 8LL;
          *(_QWORD *)(v27 + 8 * v28) = v22;
          v34 = v73;
          if ( v73 )
          {
            v73 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          }
          goto LABEL_36;
        }
      }
      else
      {
        v68 = v92;
        v69 = v93;
        while ( 1 )
        {
          --v25;
          if ( !v68 )
            break;
          if ( !v69 )
            break;
          if ( (unsigned __int64)--v69 >= *((_QWORD *)&v92 + 1) )
            break;
          *(_QWORD *)(v68 + 8 * v69) = *v25;
          if ( v25 == v33 )
            goto LABEL_33;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v29);
    __debugbreak();
LABEL_94:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
LABEL_36:
  v35 = (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 4;
  if ( v35 )
    *((_QWORD *)this + 15) -= 16 * v35;
  v36 = (__int64)(*((_QWORD *)this + 259) - *((_QWORD *)this + 258)) >> 4;
  if ( v36 )
    *((_QWORD *)this + 259) -= 16 * v36;
  v37 = (__int64)(*((_QWORD *)this + 504) - *((_QWORD *)this + 503)) >> 1;
  if ( v37 )
    *((_QWORD *)this + 504) -= 2 * v37;
  *((_DWORD *)this + 1004) = 0;
  *((_DWORD *)this + 1100) = 0;
  return v10;
}
