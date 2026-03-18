/*
 * XREFs of ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x18007A150
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007B000 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBU_LUID@@@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@QEAAPEAU_LUID@@QEAU2@AEBU2@@Z @ 0x18001D804 (--$_Emplace_reallocate@AEBU_LUID@@@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@QEAAPEAU_LU.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x18004F1F4 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x18006B420 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18006C9A4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180078130 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@@Z @ 0x1800CDDA0 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAUIDXGIResource@@@std@@V?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@V?$move_iterator@PEAPEAUIDXGIResource@@@0@0V12@@Z @ 0x180154768 (--$uninitialized_copy@V-$move_iterator@PEAPEAUIDXGIResource@@@std@@V-$checked_array_iterator@PEA.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180154820 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180213CDC (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CRenderTargetManager::ComputeOverlayConfiguration(CRenderTargetManager *this, __int64 a2)
{
  volatile signed __int32 **v3; // r14
  volatile signed __int32 **v4; // r15
  unsigned int v5; // r12d
  int v6; // r13d
  _BYTE *v7; // rdi
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  int v10; // edi
  volatile signed __int32 *v11; // rax
  __int64 *v12; // rax
  _BYTE *v13; // rbx
  unsigned __int64 v14; // r14
  __int64 v15; // r9
  unsigned __int64 v16; // r8
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  _BYTE *v26; // rbx
  volatile signed __int32 *v28; // rcx
  volatile signed __int32 *v29; // rcx
  RenderTargetInfo *v30; // rax
  __int64 *v31; // rax
  _BYTE *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  BOOL v35; // eax
  CHAR v36; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  unsigned __int64 v39; // rdi
  void *v40; // rbx
  _BYTE *v41; // rcx
  char *v42; // rcx
  __int64 v43; // r11
  __int64 v44; // r10
  bool v45; // sf
  HANDLE ProcessHeap; // rax
  unsigned int v47[2]; // [rsp+20h] [rbp-E0h]
  void *v48; // [rsp+28h] [rbp-D8h]
  __int64 v49; // [rsp+30h] [rbp-D0h]
  CHAR Response[8]; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v51; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v52; // [rsp+70h] [rbp-90h]
  __int128 v53; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 *v58; // [rsp+A8h] [rbp-58h]
  volatile signed __int32 **v59; // [rsp+B0h] [rbp-50h]
  __int128 v60; // [rsp+B8h] [rbp-48h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  __int128 v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+E0h] [rbp-20h]
  __int128 v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+100h] [rbp+0h]
  __int128 v66; // [rsp+110h] [rbp+10h]
  __int64 v67; // [rsp+120h] [rbp+20h]
  _QWORD v68[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v69[11]; // [rsp+138h] [rbp+38h] BYREF
  __int128 v70; // [rsp+190h] [rbp+90h] BYREF
  __int64 v71; // [rsp+1A0h] [rbp+A0h]
  __int128 v72; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v73; // [rsp+1C0h] [rbp+C0h]
  char v74[24]; // [rsp+1D0h] [rbp+D0h] BYREF
  char v75[24]; // [rsp+1E8h] [rbp+E8h] BYREF
  char v76[24]; // [rsp+200h] [rbp+100h] BYREF
  char v77[24]; // [rsp+218h] [rbp+118h] BYREF
  LPVOID lpMem; // [rsp+230h] [rbp+130h]
  __int64 *v79; // [rsp+238h] [rbp+138h]
  char *v80; // [rsp+240h] [rbp+140h]
  _BYTE v81[128]; // [rsp+248h] [rbp+148h] BYREF
  __int64 v82; // [rsp+2C8h] [rbp+1C8h] BYREF

  lpMem = v81;
  v54 = 0LL;
  v79 = (__int64 *)v81;
  v3 = (volatile signed __int32 **)*((_QWORD *)this + 2);
  v4 = (volatile signed __int32 **)*((_QWORD *)this + 1);
  v5 = 0;
  v80 = (char *)&v82;
  v6 = 0;
  v59 = v3;
  v53 = 0LL;
  v7 = 0LL;
  if ( v4 != v3 )
  {
    v52 = 0LL;
    while ( 1 )
    {
      v8 = *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1
         - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
      v9 = *v4;
      v51 = 0LL;
      if ( *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
        v8 = *(_QWORD *)GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data4
           - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
      if ( !v8 )
        break;
      v10 = (*(__int64 (__fastcall **)(volatile signed __int32 *, GUID *, volatile signed __int32 **))(*(_QWORD *)v9 + 40LL))(
              v9,
              &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
              &v51);
      if ( v10 >= 0 )
        goto LABEL_7;
      v11 = 0LL;
      v51 = 0LL;
LABEL_9:
      if ( v10 < 0 )
        goto LABEL_19;
      ++v6;
      v57 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 32LL))(v11);
      v7 = (_BYTE *)v57;
      if ( v57 )
      {
        v12 = v79;
        a2 = (__int64)v80;
        v13 = lpMem;
        v69[2] = v79;
        v14 = ((char *)v79 - (_BYTE *)lpMem) >> 3;
        v69[3] = v79;
        v69[4] = 1LL;
        if ( !((v80 - (char *)v79) >> 3) )
        {
          if ( v14 + 1 < v14 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
LABEL_89:
            _o__invalid_parameter_noinfo_noreturn(v17, a2);
            __debugbreak();
            goto LABEL_90;
          }
          v39 = detail::liberal_expansion_policy::expand(0LL, (v80 - (_BYTE *)lpMem) >> 3, v14 + 1);
          *(_QWORD *)&v60 = operator new(saturated_mul(v39, 8uLL));
          v40 = (void *)v60;
          *((_QWORD *)&v60 + 1) = v14;
          v61 = 0LL;
          v70 = v60;
          v71 = 0LL;
          std::uninitialized_copy<std::move_iterator<IDXGIResource * *>,stdext::checked_array_iterator<IDXGIResource * *>>(
            v74,
            lpMem,
            v79,
            &v70);
          v41 = lpMem;
          lpMem = v40;
          v69[5] = 0LL;
          if ( v41 == v81 )
            v41 = 0LL;
          operator delete(v41);
          v13 = lpMem;
          v42 = (char *)lpMem + 8 * v39;
          v7 = (_BYTE *)v57;
          v12 = (__int64 *)((char *)lpMem + 8 * v14);
          v80 = v42;
          v79 = v12;
        }
        *((_QWORD *)&v62 + 1) = 1LL;
        v15 = ((char *)v12 - v13) >> 3;
        v16 = v15 - v14;
        v69[6] = v15 - v14;
        v17 = (__int64 *)&v13[8 * v15];
        *(_QWORD *)&v62 = v17;
        if ( !v17 )
          goto LABEL_89;
        v63 = 1LL;
        v18 = (((char *)v12 - v13) >> 3) - v14;
        if ( v16 > 1 )
          v18 = 1LL;
        v58 = v12;
        v64 = v62;
        v65 = 1LL;
        a2 = 8 * v18;
        v17 = (__int64 *)((char *)v12 - a2);
        v69[7] = (char *)v12 - a2;
        if ( v12 != (__int64 *)((char *)v12 - a2) )
        {
          v43 = v64;
          v44 = v65;
          while ( 1 )
          {
            v58 = --v12;
            if ( !v43 )
              goto LABEL_89;
            if ( !v44 )
              goto LABEL_89;
            if ( (unsigned __int64)--v44 >= *((_QWORD *)&v64 + 1) )
              goto LABEL_89;
            a2 = *v12;
            *(_QWORD *)(v43 + 8 * v44) = *v12;
            if ( v12 == v17 )
            {
              v12 = v79;
              break;
            }
          }
        }
        if ( v16 > 1 )
        {
          *(_QWORD *)&v66 = v13;
          *((_QWORD *)&v66 + 1) = v15;
          v45 = v15 < 0;
          if ( v15 )
          {
            if ( !v13 )
              goto LABEL_89;
            v45 = v15 < 0;
          }
          if ( v45 && v15 )
            goto LABEL_89;
          v67 = v15;
          v72 = v66;
          v73 = v15;
          std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
            v75,
            &v13[8 * v14],
            &v13[8 * v15 - 8],
            &v72,
            *(_QWORD *)v47,
            v48,
            v49);
          v12 = v79;
        }
        v79 = v12 + 1;
        *(_QWORD *)&v13[8 * v14] = v7;
        v3 = v59;
        v69[8] = lpMem;
      }
      v11 = v51;
      if ( *((_BYTE *)this + 130) )
      {
        v28 = (volatile signed __int32 *)((char *)v51 + *(int *)(*((_QWORD *)v51 + 1) + 12LL) + 8);
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64 *))v28)(v28, &v55);
        if ( HIDWORD(v55) * (_DWORD)v55 )
        {
          v29 = v51;
          *((_QWORD *)this + 13) = v55;
          v30 = (RenderTargetInfo *)(*(__int64 (__fastcall **)(volatile signed __int32 *, char *))(*(_QWORD *)v29 + 80LL))(
                                      v29,
                                      v76);
          if ( RenderTargetInfo::IsHDR(v30) )
            *((_DWORD *)this + 28) = 8;
          else
            *((_DWORD *)this + 28) = 4;
        }
        v31 = (__int64 *)(*(__int64 (__fastcall **)(volatile signed __int32 *, char *))(*(_QWORD *)v51 + 80LL))(
                           v51,
                           v77);
        v19 = v53;
        v7 = v52;
        v32 = (_BYTE *)v53;
        v33 = *v31;
        v56 = v33;
        if ( (_BYTE *)v53 != v52 )
        {
          a2 = HIDWORD(v56);
          do
          {
            if ( *(_QWORD *)v32 == __PAIR64__(HIDWORD(v56), v33) )
              break;
            v32 += 8;
          }
          while ( v32 != v52 );
        }
        v69[9] = v32;
        v69[10] = v52;
        if ( v32 != v52 )
          goto LABEL_86;
        if ( v54 != v52 )
        {
          *(_QWORD *)v52 = v33;
          v7 += 8;
          v52 = v7;
          *((_QWORD *)&v53 + 1) = v7;
LABEL_86:
          v11 = v51;
          goto LABEL_21;
        }
        std::vector<_LUID>::_Emplace_reallocate<_LUID const &>(&v53, v52, &v56);
        v7 = (_BYTE *)*((_QWORD *)&v53 + 1);
        v11 = v51;
        v52 = (_BYTE *)*((_QWORD *)&v53 + 1);
      }
      else
      {
LABEL_19:
        v7 = v52;
      }
      v19 = v53;
LABEL_21:
      if ( v11 )
      {
        v20 = (__int64)v11 + *(int *)(*((_QWORD *)v11 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      if ( ++v4 == v3 )
      {
        if ( v6 != 1 )
          goto LABEL_91;
        v21 = 1;
        goto LABEL_26;
      }
    }
    v51 = v9;
    v10 = 0;
LABEL_7:
    if ( *((int *)v9 + 2) < 0 )
    {
      while ( 1 )
      {
        LODWORD(v52) = IsKernelDebuggerPresent();
        strcpy(Response, "?");
        if ( !(_DWORD)v52 )
        {
          v35 = IsDebuggerPresent();
          v36 = Response[0];
          if ( v35 )
            v36 = 103;
          Response[0] = v36;
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
        if ( (_DWORD)v52 )
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
        a2 = (__int64)&_ImageBase;
        switch ( Response[0] )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_8;
          case 'G':
          case 'g':
            goto LABEL_8;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_61;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_61;
          default:
LABEL_61:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_8:
    _InterlockedIncrement(v9 + 2);
    v52 = (_BYTE *)*((_QWORD *)&v53 + 1);
    v11 = v51;
    goto LABEL_9;
  }
LABEL_90:
  v19 = v53;
LABEL_91:
  v21 = 0;
LABEL_26:
  *((_BYTE *)this + 129) = v21;
  if ( *((_BYTE *)this + 130) )
  {
    v34 = gsl::narrow<__int64,unsigned __int64>((__int64)&v7[-v19] >> 3);
    v68[0] = v34;
    if ( v34 < 0 || (v68[1] = v19) == 0LL && v34 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    CDeviceManager::UpdateFeatureLevels(v68);
  }
  v22 = ((char *)v79 - (_BYTE *)lpMem) >> 3;
  if ( v22 )
  {
    if ( v22 < 0 || (v69[0] = ((char *)v79 - (_BYTE *)lpMem) >> 3, (v69[1] = lpMem) == 0LL) )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v23 = COverlayContext::ComputeOverlayConfiguration((unsigned __int64)v69, a2);
    v5 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x218u, 0LL);
  }
  if ( v19 )
    std::_Deallocate<16,0>(v19, (unsigned __int64)&v54[-v19] & 0xFFFFFFFFFFFFFFF8uLL);
  v25 = ((char *)v79 - (_BYTE *)lpMem) >> 3;
  if ( v25 )
    v79 -= v25;
  v26 = lpMem;
  lpMem = 0LL;
  if ( v26 != v81 && v26 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v26);
  }
  return v5;
}
