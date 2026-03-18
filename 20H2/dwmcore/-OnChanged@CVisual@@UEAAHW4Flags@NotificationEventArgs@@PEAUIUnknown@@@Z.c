/*
 * XREFs of ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180079330
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039EB0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18005E884 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180071284 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180077928 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180079DD0 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800A6094 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A69B0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x1800A8218 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x1800AA564 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z @ 0x1800AA704 (-ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800AB954 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800AC66C (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800BB5C8 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BD340 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C07A0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800C5968 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180213CDC (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CVisual::OnChanged(__int64 a1, int a2, _QWORD *a3)
{
  struct TransformParentData **v3; // r14
  _QWORD *v4; // r12
  int v5; // r13d
  unsigned int v7; // esi
  __int64 v8; // rcx
  char v9; // r15
  char v10; // bl
  __int64 v11; // rbx
  __int64 v12; // rdx
  _BYTE *v13; // rax
  char v14; // cl
  char v15; // dl
  _QWORD *v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // ebx
  BOOL v19; // r15d
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 *v27; // rax
  _DWORD *v28; // r8
  char v29; // al
  __int64 v31; // r8
  __int64 v32; // rax
  _BYTE *v33; // rdx
  unsigned int i; // ecx
  _QWORD ***v35; // rbx
  _QWORD **v36; // rbx
  _QWORD *j; // rsi
  bool v38; // cl
  int v39; // ebx
  int (__fastcall **v40)(_QWORD *, GUID *, __int64 *); // rax
  __int64 v41; // rbx
  _QWORD *v42; // rcx
  __int64 v43; // r9
  __int64 v44; // r9
  unsigned __int64 v45; // r8
  __int64 v46; // r12
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  bool v50; // zf
  FastRegion::Internal::CRgnData **v51; // rax
  float v52; // xmm1_4
  float v53; // xmm0_4
  FastRegion::Internal::CRgnData *v54; // rcx
  __int64 v55; // rax
  _BYTE *v56; // r8
  __int64 m; // rdx
  _QWORD ***v58; // rdx
  _QWORD **v59; // rdx
  _QWORD *v60; // rax
  __int64 v61; // rax
  _BYTE *v62; // r8
  __int64 n; // rdx
  _QWORD ***v64; // rdx
  _QWORD **v65; // rdx
  _QWORD *v66; // rax
  __int64 v67; // rax
  _BYTE *v68; // rdx
  unsigned int k; // ecx
  struct TransformParentData *v70; // rdx
  CVisual *v71; // rcx
  CVisual *v72; // rcx
  char v73; // dl
  __int64 v74; // r12
  __int64 v75; // rax
  int v76; // eax
  int v77; // r14d
  BOOL v78; // eax
  CHAR v79; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  CMILCOMBase *Transform3DEffectNoRef; // rbx
  CHAR Response[4]; // [rsp+60h] [rbp-69h] BYREF
  char v84; // [rsp+64h] [rbp-65h]
  _QWORD *v85; // [rsp+68h] [rbp-61h]
  void *v86; // [rsp+70h] [rbp-59h] BYREF
  __int64 v87; // [rsp+78h] [rbp-51h] BYREF
  float v88; // [rsp+80h] [rbp-49h] BYREF
  float v89; // [rsp+84h] [rbp-45h] BYREF
  unsigned __int64 v90; // [rsp+88h] [rbp-41h]
  __int64 v91; // [rsp+90h] [rbp-39h]
  _QWORD *v92; // [rsp+98h] [rbp-31h]
  char v93[8]; // [rsp+A0h] [rbp-29h] BYREF
  unsigned __int64 v94; // [rsp+A8h] [rbp-21h]
  int *v95; // [rsp+B0h] [rbp-19h]
  __int64 v96; // [rsp+B8h] [rbp-11h]
  int v97; // [rsp+C0h] [rbp-9h]
  float v98; // [rsp+D0h] [rbp+7h]
  float v99; // [rsp+D4h] [rbp+Bh]
  float v100; // [rsp+D8h] [rbp+Fh]
  float v101; // [rsp+DCh] [rbp+13h]

  v3 = 0LL;
  v92 = a3;
  v4 = a3;
  v5 = a2;
  if ( a2 == 11 )
  {
    v7 = 2;
    goto LABEL_3;
  }
  if ( a2 == 1 )
  {
LABEL_63:
    v7 = 4;
    goto LABEL_3;
  }
  if ( a2 != 3 )
  {
    if ( a2 == 4 )
    {
      CVisual::OnClipChanged((CVisual *)a1);
LABEL_48:
      v7 = 5;
      goto LABEL_3;
    }
    if ( a2 == 5 )
    {
      if ( (*(_QWORD *)(a1 + 456) - *(_QWORD *)(a1 + 448)) / 24LL )
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)(a1 + 448),
          0LL,
          (*(_QWORD *)(a1 + 456) - *(_QWORD *)(a1 + 448)) / 24LL);
      v31 = *(_QWORD *)(a1 + 224);
      if ( *(int *)v31 < 0 )
      {
        v32 = *(unsigned int *)(v31 + 4);
        v33 = (_BYTE *)(v31 + 8);
        for ( i = 0; i < (unsigned int)v32; ++v33 )
        {
          if ( *v33 == 1 )
            break;
          ++i;
        }
        if ( i >= (unsigned int)v32 )
          v35 = 0LL;
        else
          v35 = (_QWORD ***)(v31 + v32 + 15 + 8LL * i - (((_BYTE)v32 + 15) & 7));
        v36 = *v35;
        if ( v36 )
        {
          for ( j = *v36; j != v36; j = (_QWORD *)*j )
            detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(j - 20);
        }
      }
      goto LABEL_40;
    }
    if ( a2 != 6 )
      goto LABEL_48;
    CVisual::ClearContentTreeDataCaches((CVisual *)a1);
    v5 = 1;
    goto LABEL_63;
  }
  v7 = 1;
LABEL_3:
  v8 = *(_QWORD *)(a1 + 248);
  if ( v8 )
  {
    v9 = 0;
    v10 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 56LL))(v8, 14LL) )
    {
      v11 = *(_QWORD *)(a1 + 248);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, 202LL) )
      {
        v9 = 1;
        v10 = 0;
      }
      else
      {
        if ( *(_BYTE *)(v11 + 72) && !*(_QWORD *)(v11 + 64) )
        {
          LOBYTE(v12) = 1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 336LL))(v11, v12);
        }
        v13 = *(_BYTE **)(v11 + 64);
        v10 = 0;
        if ( v13 )
        {
          v10 = v13[197];
          LOBYTE(v3) = v13[196];
          v9 = v13[198];
          v84 = v10;
        }
      }
    }
    v14 = *(_BYTE *)(a1 + 94);
    if ( v10 != ((v14 & 8) != 0) )
      *(_BYTE *)(a1 + 94) = v14 ^ (v14 ^ (8 * v10)) & 8;
    v15 = *(_BYTE *)(a1 + 264);
    if ( (_BYTE)v3 != (v15 & 1) )
    {
      v71 = *(CVisual **)(a1 + 80);
      if ( (_BYTE)v3 )
      {
        if ( v71 )
        {
          CVisual::PropagateBackdropUpdates(v71, 1, 0);
          v15 = *(_BYTE *)(a1 + 264);
        }
        v15 |= 1u;
      }
      else
      {
        if ( v71 )
        {
          CVisual::PropagateBackdropUpdates(v71, -1, 0);
          v15 = *(_BYTE *)(a1 + 264);
        }
        v15 &= ~1u;
      }
      *(_BYTE *)(a1 + 264) = v15;
    }
    if ( v9 != ((v15 & 2) != 0) )
    {
      v72 = *(CVisual **)(a1 + 80);
      if ( v9 )
      {
        if ( v72 )
        {
          CVisual::PropagateBackdropUpdates(v72, 0, 1);
          v15 = *(_BYTE *)(a1 + 264);
        }
        v73 = v15 | 2;
      }
      else
      {
        if ( v72 )
        {
          CVisual::PropagateBackdropUpdates(v72, 0, -1);
          v15 = *(_BYTE *)(a1 + 264);
        }
        v73 = v15 & 0xFD;
      }
      *(_BYTE *)(a1 + 264) = v73;
    }
    v16 = *(_QWORD **)(a1 + 248);
    if ( v16 == v4 )
    {
      v38 = (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v16 + 208LL))(v16) == 0;
      v39 = v7 | 0x10;
      if ( (BYTE1(*(_DWORD *)(a1 + 88)) & 1) == v38 )
        v39 = v7;
      v3 = 0LL;
      v7 = v39;
      if ( v38 && v5 == 1 )
      {
        v40 = (int (__fastcall **)(_QWORD *, GUID *, __int64 *))*v4;
        v87 = 0LL;
        if ( (*v40)(v4, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27, &v87) >= 0 )
        {
          CVisual::GetEffectiveSize((CVisual *)a1, &v88, &v89);
          v51 = (FastRegion::Internal::CRgnData **)(*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v87 + 24LL))(
                                                     v87,
                                                     &v88);
          if ( v51 )
          {
            FastRegion::Internal::CRgnData::BeginIterator(*v51, (struct FastRegion::CRegion::Iterator *)v93);
            while ( (unsigned __int64)v95 < v94 )
            {
              v99 = (float)*v95;
              v52 = (float)v95[2];
              v98 = (float)*(int *)(v96 + 8LL * v97);
              v53 = (float)*(int *)(v96 + 8LL * v97 + 4);
              v101 = v52;
              v100 = v53;
              CVisual::AddAdditionalDirtyRect((CVisual *)a1);
              FastRegion::Internal::CRgnData::StepIterator(v54, (struct FastRegion::CRegion::Iterator *)v93);
            }
            v7 = v39 & 0xFFFFFFFB;
          }
        }
        if ( v87 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
      }
    }
    else
    {
      v3 = 0LL;
    }
  }
  if ( v7 )
  {
    v17 = *(_QWORD *)(a1 + 24);
    v18 = v7 | 0x10;
    if ( (v7 & 1) == 0 )
      v18 = v7;
    v19 = !(v7 & 1);
    if ( (v17 & 2) != 0 )
      v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v17) = v17 & 1;
    if ( (_DWORD)v17 )
    {
      v74 = (unsigned int)v17;
      do
      {
        v75 = CPtrArrayBase::operator[](a1 + 24, v3);
        if ( v75 != *(_QWORD *)(a1 + 80) )
          (*(void (__fastcall **)(__int64, bool, __int64))(*(_QWORD *)v75 + 72LL))(v75, !(v7 & 1), a1);
        v3 = (struct TransformParentData **)((char *)v3 + 1);
        --v74;
      }
      while ( v74 );
      v3 = 0LL;
    }
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
    *(_BYTE *)(a1 + 88) |= v18;
    v21 = v20;
    if ( (v18 & 0xC) != 0 )
    {
      v18 = v18 & 0xFFFFFF73 | 0x80;
      if ( v20 )
        ++*(_DWORD *)(v20 + 28);
    }
    if ( (v18 & 2) != 0 )
      v18 = v18 & 0xFFFFFFBD | 0x40;
    v22 = *(__int64 **)(a1 + 80);
    if ( (*(_BYTE *)(a1 + 95) & 2) != 0 )
    {
      do
      {
        if ( !v22 || (v18 & (char)v22[11]) == v18 )
          break;
        v23 = *v22;
        *((_BYTE *)v22 + 88) |= v18;
        v24 = (*(__int64 (__fastcall **)(__int64 *))(v23 + 168))(v22);
        v25 = v24;
        if ( v24 )
        {
          if ( (v18 & 0x80u) != 0 && v24 != v21 )
            ++*(_DWORD *)(v24 + 24);
        }
        else
        {
          v25 = v21;
        }
        v26 = v22[3];
        if ( (v26 & 2) != 0 )
          v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v26) = v26 & 1;
        if ( (_DWORD)v26 )
        {
          v45 = 0LL;
          v90 = 0LL;
          v91 = (unsigned int)v26;
          v46 = 16LL;
          do
          {
            v47 = v22[3];
            if ( (v47 & 2) != 0 )
              v48 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v48 = v22[3] & 1;
            if ( v45 >= v48 )
            {
              v49 = 0LL;
            }
            else if ( v48 == 1 )
            {
              v49 = v47 & 0xFFFFFFFFFFFFFFFCuLL;
            }
            else
            {
              _mm_lfence();
              v49 = *(_QWORD *)((v22[3] & 0xFFFFFFFFFFFFFFFCuLL) + v46);
            }
            if ( v49 != v22[10] )
            {
              (*(void (__fastcall **)(unsigned __int64, BOOL, __int64 *))(*(_QWORD *)v49 + 72LL))(v49, v19, v22);
              v45 = v90;
            }
            ++v45;
            v46 += 8LL;
            v50 = v91-- == 1;
            v90 = v45;
          }
          while ( !v50 );
        }
        v27 = v22;
        v21 = v25;
        v22 = (__int64 *)v22[10];
      }
      while ( (*((_BYTE *)v27 + 95) & 2) != 0 );
      v3 = 0LL;
    }
    v4 = v92;
  }
  if ( v5 != 2 )
  {
LABEL_40:
    if ( v4 )
    {
      v28 = *(_DWORD **)(a1 + 224);
      if ( (*v28 & 0x1000000) != 0 )
      {
        v67 = (unsigned int)v28[1];
        v68 = v28 + 2;
        for ( k = 0; k < (unsigned int)v67; ++v68 )
        {
          if ( *v68 == 8 )
            break;
          ++k;
        }
        if ( k < (unsigned int)v67 )
          v3 = (struct TransformParentData **)((char *)v28 + 8LL * k - (((_BYTE)v67 + 15) & 7) + v67 + 15);
        v70 = *v3;
        if ( *v3 && v4 == *(_QWORD **)v70 )
        {
          CVisual::ManageTransformParentChildList((CVisual *)a1, v70);
          CVisual::OnOuterTransformChanged((CVisual *)a1);
        }
      }
    }
    goto LABEL_42;
  }
  v41 = *(_QWORD *)(a1 + 232);
  if ( v41 )
  {
    v85 = *(_QWORD **)(a1 + 232);
    if ( *(int *)(v41 + 8) < 0 )
    {
      while ( 1 )
      {
        v76 = IsKernelDebuggerPresent();
        strcpy(Response, "?");
        v77 = v76;
        if ( !v76 )
        {
          v78 = IsDebuggerPresent();
          v79 = Response[0];
          if ( v78 )
            v79 = 103;
          Response[0] = v79;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
          word_180288730,
          word_180288730,
          "Function: ",
          L"CMILCOMBase::InternalAddRef",
          ", ",
          L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
          25);
        if ( v77 )
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
        switch ( Response[0] )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_73;
          case 'G':
          case 'g':
            goto LABEL_73;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_168;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_168;
          default:
LABEL_168:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_73:
    _InterlockedIncrement((volatile signed __int32 *)(v41 + 8));
    v42 = v85;
    if ( v4 == v85 )
    {
      *(_QWORD *)(a1 + 440) = 0LL;
      v43 = *(_QWORD *)(a1 + 224);
      if ( *(int *)v43 < 0 )
      {
        v55 = *(unsigned int *)(v43 + 4);
        v56 = (_BYTE *)(v43 + 8);
        for ( m = 0LL; (unsigned int)m < (unsigned int)v55; ++v56 )
        {
          if ( *v56 == 1 )
            break;
          m = (unsigned int)(m + 1);
        }
        if ( (unsigned int)m >= (unsigned int)v55 )
          v58 = 0LL;
        else
          v58 = (_QWORD ***)(v55 + 15 + v43 + 8 * m - (((_BYTE)v55 + 15) & 7));
        v59 = *v58;
        if ( v59 )
        {
          v60 = *v59;
          if ( *v59 != v59 )
          {
            do
            {
              *(v60 - 21) = 0LL;
              v60 = (_QWORD *)*v60;
            }
            while ( v60 != v59 );
            v42 = v85;
          }
        }
      }
      *(_QWORD *)(a1 + 560) = 0LL;
      v44 = *(_QWORD *)(a1 + 224);
      if ( *(int *)v44 < 0 )
      {
        v61 = *(unsigned int *)(v44 + 4);
        v62 = (_BYTE *)(v44 + 8);
        for ( n = 0LL; (unsigned int)n < (unsigned int)v61; ++v62 )
        {
          if ( *v62 == 1 )
            break;
          n = (unsigned int)(n + 1);
        }
        if ( (unsigned int)n >= (unsigned int)v61 )
          v64 = 0LL;
        else
          v64 = (_QWORD ***)(v61 + 15 + v44 + 8 * n - (((_BYTE)v61 + 15) & 7));
        v65 = *v64;
        if ( v65 )
        {
          v66 = *v65;
          if ( *v65 != v65 )
          {
            do
            {
              *(v66 - 6) = 0LL;
              v66 = (_QWORD *)*v66;
            }
            while ( v66 != v65 );
            v42 = v85;
          }
        }
      }
    }
    if ( v42 )
      (*(void (__fastcall **)(_QWORD *))(*v42 + 16LL))(v42);
  }
  if ( CVisual::GetTransform3DEffectNoRef((CVisual *)a1) )
  {
    v86 = 0LL;
    Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)a1);
    if ( v86 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v86 + 16LL))(v86);
    if ( (int)CMILCOMBase::InternalQueryInterface(
                Transform3DEffectNoRef,
                &GUID_00000000_0000_0000_c000_000000000046,
                &v86) >= 0
      && v4 == v86 )
    {
      CVisual::OnInnerTransformChanged((CVisual *)a1);
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v86);
  }
LABEL_42:
  v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
  *(_BYTE *)(a1 + 92) &= ~1u;
  *(_BYTE *)(a1 + 92) |= v29 & 1;
  return 0LL;
}
