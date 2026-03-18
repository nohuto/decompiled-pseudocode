/*
 * XREFs of ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800AEC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x180056BCC (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800AF6DC (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     IsWhitePixelOptimizationCandidate @ 0x1800C629C (IsWhitePixelOptimizationCandidate.c)
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800C67E8 (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1800D5AB0 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??A?$span@PEBVCDrawListBrush@@$0?0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z @ 0x1800EAF50 (--A-$span@PEBVCDrawListBrush@@$0-0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1800FAE80 (--0SamplerMode@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18026C098 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CCommonRenderingEffectFactory::CreateRenderingEffect(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  _QWORD *v4; // r12
  char v5; // si
  __int64 v6; // r14
  __int64 v7; // r15
  int Current; // eax
  struct CThreadContext *v9; // rcx
  char *v10; // rbx
  int v11; // edx
  CDrawListBitmap *v12; // rax
  char v13; // cl
  char v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // r13
  __int64 *v19; // rsi
  CDrawListBitmap *v20; // r14
  __int64 v21; // r15
  SamplerMode *v22; // r14
  __int64 v23; // r15
  _QWORD *v24; // r14
  __int64 v25; // r15
  __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 *v29; // r15
  CDrawListBitmap *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rdx
  int *v35; // rdx
  __int64 v36; // rcx
  char v37; // al
  __int16 *v38; // rdx
  char v39; // al
  char v40; // al
  __int64 PixelFormatInfo; // rax
  __int64 v43; // rcx
  char *v44; // rcx
  __int64 v45; // rcx
  bool v46; // zf
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // eax
  int v53; // r14d
  BOOL v54; // eax
  CHAR v55; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  CHAR Response[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v61; // [rsp+64h] [rbp-9Ch] BYREF
  char v62; // [rsp+66h] [rbp-9Ah]
  int v63; // [rsp+68h] [rbp-98h] BYREF
  CDrawListBitmap *v64; // [rsp+70h] [rbp-90h]
  __int16 *v65; // [rsp+78h] [rbp-88h]
  __int64 *v66; // [rsp+80h] [rbp-80h]
  _QWORD *v67; // [rsp+88h] [rbp-78h]
  struct CThreadContext *v68; // [rsp+90h] [rbp-70h] BYREF
  __int64 v69; // [rsp+98h] [rbp-68h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-60h] BYREF
  char v71; // [rsp+A8h] [rbp-58h]
  __int128 v72; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v73; // [rsp+C0h] [rbp-40h]
  __int128 v74; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v75; // [rsp+D8h] [rbp-28h]
  char v76[8]; // [rsp+E0h] [rbp-20h] BYREF
  char v77[16]; // [rsp+E8h] [rbp-18h] BYREF
  int *v78; // [rsp+F8h] [rbp-8h] BYREF
  void *retaddr; // [rsp+148h] [rbp+48h]

  v3 = 0;
  v67 = a3;
  v63 = 0;
  v4 = a3;
  v5 = 0;
  if ( !*(_QWORD *)a2 )
  {
    v6 = 0LL;
    goto LABEL_3;
  }
  v6 = **(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)a2 <= 1uLL )
  {
LABEL_3:
    v7 = 0LL;
    goto LABEL_4;
  }
  v7 = *(_QWORD *)gsl::span<CDrawListBrush const *,-1>::operator[](a2, 1LL);
LABEL_4:
  Current = CThreadContext::GetCurrent(&v68);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  v9 = v68;
  v10 = 0LL;
  v11 = *((_DWORD *)v68 + 49);
  if ( v11 )
  {
    v10 = (char *)*((_QWORD *)v68 + 25);
    *((_QWORD *)v68 + 25) = *(_QWORD *)v10;
    *((_DWORD *)v9 + 49) = v11 - 1;
  }
  if ( v10 || (v10 = (char *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    if ( v7 )
    {
      v61 = *(_WORD *)(v7 + 80);
      v62 = *(_BYTE *)(v7 + 82);
      v12 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v76, (const struct CDrawListBitmap *)(v7 + 56));
      v13 = 9;
      v14 = 5;
    }
    else
    {
      v61 = 257;
      v75 = 0LL;
      v12 = (CDrawListBitmap *)&v74;
      v62 = 1;
      v74 = 0LL;
      v13 = 10;
      v14 = 6;
    }
    v64 = v12;
    v65 = &v61;
    if ( v6 )
    {
      v15 = *(_QWORD *)(v6 + 56);
      v69 = v15;
      if ( v15 )
      {
        v43 = v15 + 8 + *(int *)(*(_QWORD *)(v15 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
      }
      v16 = *(_QWORD *)(v6 + 64);
      v70 = v16;
      if ( v16 )
      {
        v17 = v16 + 8 + *(int *)(*(_QWORD *)(v16 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      }
      v18 = &v69;
      v71 = *(_BYTE *)(v6 + 72);
      LOWORD(v63) = *(_WORD *)(v6 + 80);
      BYTE2(v63) = *(_BYTE *)(v6 + 82);
    }
    else
    {
      LOWORD(v63) = 257;
      BYTE2(v63) = 1;
      v72 = 0LL;
      v73 = 0LL;
      v18 = (__int64 *)&v72;
      v14 = v13;
      v65 = &v61;
    }
    v66 = v18;
    v78 = &v63;
    v19 = (__int64 *)(v10 + 16);
    *(_QWORD *)v10 = &CCommonRenderingEffect::`vftable';
    v20 = (CDrawListBitmap *)(v10 + 16);
    *((_DWORD *)v10 + 2) = 0;
    v21 = 2LL;
    do
    {
      CDrawListBitmap::CDrawListBitmap(v20);
      v20 = (CDrawListBitmap *)((char *)v20 + 24);
      --v21;
    }
    while ( v21 );
    v22 = (SamplerMode *)(v10 + 64);
    v23 = 2LL;
    do
    {
      SamplerMode::SamplerMode(v22);
      v22 = (SamplerMode *)((char *)v22 + 3);
      --v23;
    }
    while ( v23 );
    v24 = (_QWORD *)*v18;
    v25 = *v19;
    *v19 = *v18;
    if ( v24 )
    {
      v44 = (char *)v24 + *(int *)(v24[1] + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v44 + 8LL))(v44);
    }
    if ( v25 )
    {
      v48 = v25 + *(int *)(*(_QWORD *)(v25 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    v26 = v18[1];
    v27 = *((_QWORD *)v10 + 3);
    *((_QWORD *)v10 + 3) = v26;
    if ( v26 )
    {
      v28 = v26 + *(int *)(*(_QWORD *)(v26 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    }
    if ( v27 )
    {
      v49 = v27 + *(int *)(*(_QWORD *)(v27 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    }
    v29 = v66;
    v30 = v64;
    v10[32] = *((_BYTE *)v66 + 16);
    v31 = *(_QWORD *)v30;
    v32 = *((_QWORD *)v10 + 5);
    *((_QWORD *)v10 + 5) = v31;
    if ( v31 )
    {
      v47 = v31 + 8 + *(int *)(*(_QWORD *)(v31 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
    }
    if ( v32 )
    {
      v50 = v32 + *(int *)(*(_QWORD *)(v32 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    v33 = *((_QWORD *)v10 + 6);
    v34 = *((_QWORD *)v64 + 1);
    *((_QWORD *)v10 + 6) = v34;
    if ( v34 )
    {
      v45 = v34 + 8 + *(int *)(*(_QWORD *)(v34 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 8LL))(v45);
    }
    if ( v33 )
    {
      v51 = v33 + *(int *)(*(_QWORD *)(v33 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
    v35 = v78;
    v36 = (__int64)v64;
    v10[56] = *((_BYTE *)v64 + 16);
    *((_WORD *)v10 + 32) = *(_WORD *)v35;
    v37 = *((_BYTE *)v35 + 2);
    v38 = v65;
    v10[66] = v37;
    *(_WORD *)(v10 + 67) = *v38;
    v10[69] = *((_BYTE *)v38 + 2);
    if ( v26 )
    {
      if ( !CCommonRegistryData::EnableCommonSuperSets || !v24 )
        goto LABEL_41;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24) )
      {
        v36 = (__int64)v64;
LABEL_41:
        v39 = 0;
        goto LABEL_42;
      }
      PixelFormatInfo = CDrawListBitmap::GetPixelFormatInfo(v29, &v78);
      v36 = (__int64)v64;
      if ( *(_DWORD *)(PixelFormatInfo + 8) )
        goto LABEL_41;
    }
    v39 = 1;
LABEL_42:
    v10[70] = v39;
    if ( !*(_QWORD *)(v36 + 8)
      || (v46 = (unsigned __int8)IsWhitePixelOptimizationCandidate(v36, 1LL) == 0, v40 = 0, !v46) )
    {
      v40 = 1;
    }
    v10[70] &= v40;
    v5 = v14;
    if ( *((int *)v10 + 2) >= 0 || !IsDebuggerPresent() && !(unsigned int)IsKernelDebuggerPresent() )
    {
LABEL_45:
      _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
      v4 = v67;
      goto LABEL_46;
    }
    v5 = v14;
    while ( 1 )
    {
      v52 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v53 = v52;
      if ( !v52 )
      {
        v54 = IsDebuggerPresent();
        v55 = Response[0];
        if ( v54 )
          v55 = 103;
        Response[0] = v55;
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
      if ( v53 )
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
      if ( Response[0] > 98 )
      {
        if ( Response[0] == 103 )
          goto LABEL_45;
        if ( Response[0] == 105 )
          goto LABEL_96;
        if ( Response[0] != 112 )
        {
          if ( Response[0] != 116 )
            goto LABEL_95;
          goto LABEL_93;
        }
LABEL_94:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_95:
        DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
      }
      else
      {
        if ( Response[0] == 98 || Response[0] == 66 )
        {
          __debugbreak();
          goto LABEL_45;
        }
        if ( Response[0] == 71 )
          goto LABEL_45;
        if ( Response[0] != 73 )
        {
          if ( Response[0] != 80 )
          {
            if ( Response[0] != 84 )
              goto LABEL_95;
LABEL_93:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_95;
          }
          goto LABEL_94;
        }
LABEL_96:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
    }
  }
  v10 = 0LL;
LABEL_46:
  if ( (v5 & 8) != 0 )
  {
    v5 &= ~8u;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v72 + 8);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v72);
  }
  if ( (v5 & 4) != 0 )
  {
    v5 &= ~4u;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v70);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v69);
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( *((_QWORD *)&v74 + 1) )
    {
      v58 = *((_QWORD *)&v74 + 1) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)&v74 + 1) + 8LL) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    }
    if ( (_QWORD)v74 )
    {
      v59 = v74 + 8 + *(int *)(*(_QWORD *)(v74 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    }
  }
  if ( (v5 & 1) != 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v77);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v76);
  }
  if ( v10 )
  {
    *v4 = v10;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0LL, -2147024882, 0x31u);
  }
  return v3;
}
