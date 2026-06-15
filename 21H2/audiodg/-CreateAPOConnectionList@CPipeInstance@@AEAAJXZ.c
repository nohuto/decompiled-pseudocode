/*
 * XREFs of ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400067C0
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005970 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007324 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140001EF8 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140004190 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x1400070D0 (-GetFreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400072D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x140029E07 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DEFC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTION@@PEAVCProcessNode@@4@Z @ 0x140046578 (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTI.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x1400466E4 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x14004675C (-AddHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?AddTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x14004681C (-AddTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x140047700 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004DAEC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateAPOConnectionList(CPipeInstance *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r13
  _QWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 **v9; // rax
  __int64 **v10; // rsi
  __int64 *v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // r12
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // r8
  __int64 *v21; // rax
  int v22; // edx
  __int64 *v23; // rax
  __int64 v24; // rsi
  __int64 *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r15
  _QWORD *v29; // rsi
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 **v33; // rax
  __int64 **v34; // rbx
  __int64 *v35; // rax
  int v36; // edx
  int v37; // edx
  _QWORD *v38; // rsi
  int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 **v42; // rax
  __int64 **v43; // rbx
  __int64 *v44; // rax
  int v45; // edx
  __int64 *v46; // rcx
  int v47; // edx
  __int64 *v48; // r8
  __int64 *v49; // rax
  __int64 v50; // rsi
  __int64 *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  struct ATL::CAtlPlex *v55; // r8
  int v56; // edx
  _QWORD *v57; // rcx
  int i; // edx
  _QWORD **Head; // rax
  const struct CConnectionInstance *LoopbackConnection; // rax
  __int64 v61; // rbx
  void *v62; // rsi
  int v63; // eax
  struct IUnknown *v64; // rdx
  __int64 **v65; // rax
  __int64 **v66; // rbx
  __int64 *v67; // rcx
  __int64 *v68; // rax
  __int64 v69; // r15
  __int64 *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 *v74; // rax
  __int64 v75; // rax
  __int64 v76; // r15
  void *v77; // rsi
  int v78; // eax
  struct IUnknown *v79; // rdx
  __int64 *v80; // r15
  __int64 *v81; // rcx
  __int64 *v82; // rax
  __int64 **v83; // rax
  void *v84; // rsi
  int v85; // eax
  struct IUnknown *v86; // rdx
  __int64 *v87; // r14
  __int64 *v88; // rcx
  __int64 *v89; // rax
  __int64 **v90; // rax
  __int64 v91; // rdx
  _QWORD *v92; // rcx
  __int64 v93; // rax
  struct ATL::CAtlPlex *v94; // r8
  int v95; // edx
  _QWORD *v96; // rcx
  int j; // edx
  int pExceptionObject; // [rsp+40h] [rbp-78h] BYREF
  int v99; // [rsp+44h] [rbp-74h] BYREF
  int v100; // [rsp+48h] [rbp-70h] BYREF
  int v101; // [rsp+4Ch] [rbp-6Ch] BYREF
  int v102; // [rsp+50h] [rbp-68h] BYREF
  int v103; // [rsp+54h] [rbp-64h] BYREF
  int v104; // [rsp+58h] [rbp-60h] BYREF
  int v105; // [rsp+5Ch] [rbp-5Ch] BYREF
  int v106; // [rsp+60h] [rbp-58h] BYREF
  int v107; // [rsp+64h] [rbp-54h] BYREF
  int v108; // [rsp+68h] [rbp-50h] BYREF
  int v109; // [rsp+6Ch] [rbp-4Ch] BYREF
  __int64 v110; // [rsp+C0h] [rbp+8h]
  _QWORD *v111; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v112; // [rsp+D0h] [rbp+18h]

  v112 = 0LL;
  v111 = 0LL;
  v2 = *((_QWORD *)this + 3);
  if ( !v2 )
  {
    pExceptionObject = -2005139408;
    throw (long *)&pExceptionObject;
  }
  v3 = *(_QWORD *)(v2 + 8);
  v110 = v3;
  v4 = *(_QWORD *)(v2 + 16);
  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 30) )
    {
      LoopbackConnection = CPipeInstance::GetLoopbackConnection(*(CPipeInstance **)this);
    }
    else
    {
      Head = (_QWORD **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(*(_QWORD *)this + 64LL));
      LoopbackConnection = *(const struct CConnectionInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(*Head);
    }
    v61 = *((_QWORD *)LoopbackConnection + 1);
    v62 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v111 = v62;
    if ( v62 )
    {
      v63 = *(_DWORD *)(v4 + 24);
      v64 = (struct IUnknown *)*((_QWORD *)this + 30);
      *((_QWORD *)v62 + 6) = 0LL;
      *(_QWORD *)v62 = 0LL;
      *((_QWORD *)v62 + 1) = v61;
      *((_DWORD *)v62 + 4) = v63;
      *((_QWORD *)v62 + 3) = v4;
      *((_QWORD *)v62 + 4) = 0LL;
      *((_DWORD *)v62 + 10) = 0;
      *((_QWORD *)v62 + 7) = 0LL;
      if ( *((struct IUnknown **)v62 + 6) != v64 )
        ATL::AtlComPtrAssign((struct IUnknown **)v62 + 6, v64);
    }
    else
    {
      v62 = 0LL;
    }
    v111 = v62;
    if ( !v62 )
    {
      v99 = -2147024882;
      throw (long *)&v99;
    }
    v65 = (__int64 **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v66 = v65;
    if ( !v65 )
    {
      v101 = -2147024882;
      throw (long *)&v101;
    }
    *v65 = 0LL;
    v65[1] = 0LL;
    v65[2] = 0LL;
    v65[3] = 0LL;
    v65[4] = 0LL;
    *((_DWORD *)v65 + 10) = 10;
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode(v65);
    v67 = v66[4];
    v68 = (__int64 *)*v67;
    v67[2] = (__int64)v62;
    v66[4] = v68;
    v67[1] = 0LL;
    *v67 = 0LL;
    v66[2] = (__int64 *)((char *)v66[2] + 1);
    if ( *v66 )
      (*v66)[1] = (__int64)v67;
    else
      v66[1] = v67;
    *v66 = v67;
    v69 = *((_QWORD *)this + 8);
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((char *)this + 64);
    v70 = (__int64 *)*((_QWORD *)this + 12);
    v71 = *v70;
    v70[2] = (__int64)v66;
    *((_QWORD *)this + 12) = v71;
    v70[1] = 0LL;
    *v70 = v69;
    ++*((_QWORD *)this + 10);
    v72 = *((_QWORD *)this + 8);
    if ( v72 )
      *(_QWORD *)(v72 + 8) = v70;
    else
      *((_QWORD *)this + 9) = v70;
    *((_QWORD *)this + 8) = v70;
    v111 = 0LL;
    if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 316) )
    {
      v73 = *(_QWORD *)this;
      if ( *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(*(_QWORD *)this + 64LL))
                     + 16LL) == 2LL )
      {
        v74 = (__int64 *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v73 + 64));
        v75 = *(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(*v74);
      }
      else
      {
        v75 = 0LL;
      }
      v76 = *(_QWORD *)(v75 + 8);
      v77 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v111 = v77;
      if ( v77 )
      {
        v78 = *(_DWORD *)(v4 + 24);
        v79 = (struct IUnknown *)*((_QWORD *)this + 30);
        *((_QWORD *)v77 + 6) = 0LL;
        *(_QWORD *)v77 = 0LL;
        *((_QWORD *)v77 + 1) = v76;
        *((_DWORD *)v77 + 4) = v78;
        *((_QWORD *)v77 + 3) = v4;
        *((_QWORD *)v77 + 4) = 0LL;
        *((_DWORD *)v77 + 10) = 0;
        *((_QWORD *)v77 + 7) = 0LL;
        if ( *((struct IUnknown **)v77 + 6) != v79 )
          ATL::AtlComPtrAssign((struct IUnknown **)v77 + 6, v79);
      }
      else
      {
        v77 = 0LL;
      }
      v111 = v77;
      if ( !v77 )
      {
        v100 = -2147024882;
        throw (long *)&v100;
      }
      v80 = v66[1];
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode(v66);
      v81 = v66[4];
      v82 = (__int64 *)*v81;
      v81[2] = (__int64)v77;
      v66[4] = v82;
      v81[1] = (__int64)v80;
      *v81 = 0LL;
      v66[2] = (__int64 *)((char *)v66[2] + 1);
      v83 = (__int64 **)v66[1];
      if ( v83 )
        *v83 = v81;
      else
        *v66 = v81;
      v66[1] = v81;
      goto LABEL_29;
    }
  }
  else
  {
    if ( !*((_DWORD *)this + 2) )
      goto LABEL_31;
    v5 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v111 = v5;
    if ( v5 )
    {
      v6 = *(_DWORD *)(v4 + 24);
      v7 = *((_QWORD *)this + 30);
      v5[6] = 0LL;
      *v5 = 0LL;
      v5[1] = -1LL;
      *((_DWORD *)v5 + 4) = v6;
      v5[3] = v4;
      v5[4] = 0LL;
      *((_DWORD *)v5 + 10) = 0;
      v5[7] = 0LL;
      v8 = v5[6];
      if ( v8 != v7 )
      {
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
          v8 = v5[6];
        }
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        v5[6] = v7;
      }
    }
    else
    {
      v5 = 0LL;
    }
    v111 = v5;
    if ( !v5 )
    {
      v102 = -2147024882;
      throw (long *)&v102;
    }
    v9 = (__int64 **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( !v9 )
    {
      v104 = -2147024882;
      throw (long *)&v104;
    }
    *v9 = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
    v9[3] = 0LL;
    v9[4] = 0LL;
    *((_DWORD *)v9 + 10) = 10;
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode(v9);
    v11 = v10[4];
    v12 = (__int64 *)*v11;
    v11[2] = (__int64)v5;
    v10[4] = v12;
    v11[1] = 0LL;
    *v11 = 0LL;
    v10[2] = (__int64 *)((char *)v10[2] + 1);
    if ( *v10 )
      (*v10)[1] = (__int64)v11;
    else
      v10[1] = v11;
    *v10 = v11;
    v13 = *((_QWORD *)this + 8);
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((char *)this + 64);
    v14 = (__int64 *)*((_QWORD *)this + 12);
    v15 = *v14;
    v14[2] = (__int64)v10;
    *((_QWORD *)this + 12) = v15;
    v14[1] = 0LL;
    *v14 = v13;
    ++*((_QWORD *)this + 10);
    v16 = *((_QWORD *)this + 8);
    if ( v16 )
      *(_QWORD *)(v16 + 8) = v14;
    else
      *((_QWORD *)this + 9) = v14;
    *((_QWORD *)this + 8) = v14;
    v17 = *((_QWORD *)this + 31);
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode((char *)this + 248);
    v18 = (__int64 *)*((_QWORD *)this + 35);
    v19 = *v18;
    v18[2] = (__int64)v5;
    *((_QWORD *)this + 35) = v19;
    v18[1] = 0LL;
    *v18 = v17;
    ++*((_QWORD *)this + 33);
    if ( *((_QWORD *)this + 31) )
      *(_QWORD *)(*((_QWORD *)this + 31) + 8LL) = v18;
    else
      *((_QWORD *)this + 32) = v18;
    *((_QWORD *)this + 31) = v18;
    v111 = 0LL;
    if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 316) )
    {
      v92 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v111 = v92;
      if ( v92 )
        v93 = CConnectionInstance::CConnectionInstance(v92, v91, *((_QWORD *)this + 30), -2LL, *(_DWORD *)(v4 + 24), v4);
      else
        v93 = 0LL;
      v111 = (_QWORD *)v93;
      if ( !v93 )
      {
        v103 = -2147024882;
        throw (long *)&v103;
      }
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v10, &v111);
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(
        (char *)this + 248,
        &v111);
      goto LABEL_29;
    }
  }
  while ( 1 )
  {
    v3 = v110;
LABEL_31:
    if ( !v3 )
      break;
    v28 = *(_QWORD *)(v3 + 16);
    v110 = *(_QWORD *)(v3 + 8);
    v29 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v111 = v29;
    if ( v29 )
    {
      v30 = *(_DWORD *)(v28 + 24);
      v31 = *((_QWORD *)this + 30);
      v29[6] = 0LL;
      *v29 = 1LL;
      v29[1] = 0LL;
      *((_DWORD *)v29 + 4) = v30;
      v29[3] = v28;
      v29[4] = v4;
      *((_DWORD *)v29 + 10) = 0;
      v29[7] = 0LL;
      v32 = v29[6];
      if ( v32 != v31 )
      {
        if ( v31 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
          v32 = v29[6];
        }
        if ( v32 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        v29[6] = v31;
      }
    }
    else
    {
      v29 = 0LL;
    }
    v111 = v29;
    if ( !v29 )
    {
      v105 = -2147024882;
      throw (long *)&v105;
    }
    v33 = (__int64 **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v34 = v33;
    if ( !v33 )
    {
      v106 = -2147024882;
      throw (long *)&v106;
    }
    *v33 = 0LL;
    v33[1] = 0LL;
    v33[2] = 0LL;
    v33[3] = 0LL;
    v33[4] = 0LL;
    *((_DWORD *)v33 + 10) = 10;
    v35 = (__int64 *)malloc(0xF8uLL);
    if ( !v35 )
      ATL::AtlThrowImpl(-2147024882);
    *v35 = (__int64)v34[3];
    v34[3] = v35;
    v36 = *((_DWORD *)v34 + 10);
    v21 = &v35[2 * (v36 - 1) + 1 + (unsigned int)(v36 - 1)];
    v22 = v36 - 1;
    if ( v22 >= 0 )
    {
      do
      {
        v20 = v21;
        *v21 = (__int64)v34[4];
        v34[4] = v21;
        v21 -= 3;
        --v22;
      }
      while ( v22 >= 0 );
    }
    else
    {
      v20 = v34[4];
    }
    v23 = (__int64 *)*v20;
    v20[2] = (__int64)v29;
    v34[4] = v23;
    v20[1] = 0LL;
    *v20 = 0LL;
    v34[2] = (__int64 *)((char *)v34[2] + 1);
    if ( *v34 )
      (*v34)[1] = (__int64)v20;
    else
      v34[1] = v20;
    *v34 = v20;
    v24 = *((_QWORD *)this + 8);
    if ( !*((_QWORD *)this + 12) )
    {
      v55 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
      if ( !v55 )
        ATL::AtlThrowImpl(-2147024882);
      v56 = *((_DWORD *)this + 26);
      v57 = (_QWORD *)((char *)v55 + 16 * (v56 - 1) + 8 * (unsigned int)(v56 - 1) + 8);
      for ( i = v56 - 1; i >= 0; --i )
      {
        *v57 = *((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = v57;
        v57 -= 3;
      }
    }
    v25 = (__int64 *)*((_QWORD *)this + 12);
    v26 = *v25;
    v25[2] = (__int64)v34;
    *((_QWORD *)this + 12) = v26;
    v25[1] = 0LL;
    *v25 = v24;
    ++*((_QWORD *)this + 10);
    v27 = *((_QWORD *)this + 8);
    if ( v27 )
      *(_QWORD *)(v27 + 8) = v25;
    else
      *((_QWORD *)this + 9) = v25;
    *((_QWORD *)this + 8) = v25;
    v4 = v28;
LABEL_29:
    v111 = 0LL;
  }
  v37 = *((_DWORD *)this + 28);
  if ( ((v37 - 1) & 0xFFFFFFFC) == 0 && v37 != 2 )
  {
    v38 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v38 )
    {
      v39 = *(_DWORD *)(v4 + 24);
      v40 = *((_QWORD *)this + 30);
      v38[6] = 0LL;
      *v38 = 1LL;
      v38[1] = 0LL;
      *((_DWORD *)v38 + 4) = v39;
      v38[3] = 0LL;
      v38[4] = v4;
      *((_DWORD *)v38 + 10) = 0;
      v38[7] = 0LL;
      v41 = v38[6];
      if ( v41 != v40 )
      {
        if ( v40 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
          v41 = v38[6];
        }
        if ( v41 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
        v38[6] = v40;
      }
    }
    else
    {
      v38 = 0LL;
    }
    v111 = v38;
    if ( !v38 )
    {
      v107 = -2147024882;
      throw (long *)&v107;
    }
    v42 = (__int64 **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v43 = v42;
    if ( !v42 )
    {
      v109 = -2147024882;
      throw (long *)&v109;
    }
    *v42 = 0LL;
    v42[1] = 0LL;
    v42[2] = 0LL;
    v42[3] = 0LL;
    v42[4] = 0LL;
    *((_DWORD *)v42 + 10) = 10;
    v44 = (__int64 *)malloc(0xF8uLL);
    if ( !v44 )
      ATL::AtlThrowImpl(-2147024882);
    *v44 = (__int64)v43[3];
    v43[3] = v44;
    v45 = *((_DWORD *)v43 + 10);
    v46 = &v44[2 * (v45 - 1) + 1 + (unsigned int)(v45 - 1)];
    v47 = v45 - 1;
    if ( v47 < 0 )
    {
      v48 = v43[4];
    }
    else
    {
      do
      {
        v48 = v46;
        *v46 = (__int64)v43[4];
        v43[4] = v46;
        v46 -= 3;
        --v47;
      }
      while ( v47 >= 0 );
    }
    v49 = (__int64 *)*v48;
    v48[2] = (__int64)v38;
    v43[4] = v49;
    v48[1] = 0LL;
    *v48 = 0LL;
    v43[2] = (__int64 *)((char *)v43[2] + 1);
    if ( *v43 )
      (*v43)[1] = (__int64)v48;
    else
      v43[1] = v48;
    *v43 = v48;
    v50 = *((_QWORD *)this + 8);
    if ( !*((_QWORD *)this + 12) )
    {
      v94 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
      if ( !v94 )
        ATL::AtlThrowImpl(-2147024882);
      v95 = *((_DWORD *)this + 26);
      v96 = (_QWORD *)((char *)v94 + 16 * (v95 - 1) + 8 * (unsigned int)(v95 - 1) + 8);
      for ( j = v95 - 1; j >= 0; --j )
      {
        *v96 = *((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = v96;
        v96 -= 3;
      }
    }
    v51 = (__int64 *)*((_QWORD *)this + 12);
    v52 = *v51;
    v51[2] = (__int64)v43;
    *((_QWORD *)this + 12) = v52;
    v51[1] = 0LL;
    *v51 = v50;
    ++*((_QWORD *)this + 10);
    v53 = *((_QWORD *)this + 8);
    if ( v53 )
      *(_QWORD *)(v53 + 8) = v51;
    else
      *((_QWORD *)this + 9) = v51;
    *((_QWORD *)this + 8) = v51;
    v111 = 0LL;
    if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 317) )
    {
      v84 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v84 )
      {
        v85 = *(_DWORD *)(v4 + 24);
        v86 = (struct IUnknown *)*((_QWORD *)this + 30);
        *((_QWORD *)v84 + 6) = 0LL;
        *(_QWORD *)v84 = 1LL;
        *((_QWORD *)v84 + 1) = 0LL;
        *((_DWORD *)v84 + 4) = v85;
        *((_QWORD *)v84 + 3) = 0LL;
        *((_QWORD *)v84 + 4) = v4;
        *((_DWORD *)v84 + 10) = 0;
        *((_QWORD *)v84 + 7) = 0LL;
        if ( *((struct IUnknown **)v84 + 6) != v86 )
          ATL::AtlComPtrAssign((struct IUnknown **)v84 + 6, v86);
      }
      else
      {
        v84 = 0LL;
      }
      v111 = v84;
      if ( !v84 )
      {
        v108 = -2147024882;
        throw (long *)&v108;
      }
      v87 = v43[1];
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode(v43);
      v88 = v43[4];
      v89 = (__int64 *)*v88;
      v88[2] = (__int64)v84;
      v43[4] = v89;
      v88[1] = (__int64)v87;
      *v88 = 0LL;
      v43[2] = (__int64 *)((char *)v43[2] + 1);
      v90 = (__int64 **)v43[1];
      if ( v90 )
        *v90 = v88;
      else
        *v43 = v88;
      v43[1] = v88;
      v111 = 0LL;
    }
  }
  return 0LL;
}
