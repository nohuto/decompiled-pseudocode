/*
 * XREFs of ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C0151A7C
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C0151658 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0259F68 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C0151CF8 (-UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEA.c)
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C02581C4 (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 */

__int64 __fastcall PrepareUnpinnedPathsFromSource(
        struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        struct D3DKMDT_HVIDPN__ *a3,
        const struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int64 *const a11,
        __m128i *a12,
        unsigned __int8 *a13)
{
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v13; // rdi
  __m128i si128; // xmm0
  __int64 (__fastcall *v18)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *); // rax
  char v19; // r13
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned __int64 *); // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  struct D3DKMDT_HVIDPN__ *v37; // rsi
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  _BYTE v67[8]; // [rsp+50h] [rbp-99h] BYREF
  unsigned __int64 v68; // [rsp+58h] [rbp-91h] BYREF
  unsigned __int64 v69; // [rsp+60h] [rbp-89h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v70; // [rsp+68h] [rbp-81h]
  struct _DXGDMM_INTERFACE *v71; // [rsp+70h] [rbp-79h]
  struct _DXGDMM_VIDPN_INTERFACE *v72; // [rsp+78h] [rbp-71h]
  struct D3DKMDT_HVIDPN__ *v73; // [rsp+80h] [rbp-69h]
  unsigned __int64 *v74; // [rsp+88h] [rbp-61h]
  unsigned __int8 *v75; // [rsp+90h] [rbp-59h]
  _OWORD Src[4]; // [rsp+A0h] [rbp-49h] BYREF

  v13 = a6;
  v73 = a3;
  v70 = a6;
  v74 = a11;
  v75 = a13;
  v72 = a4;
  v71 = a1;
  if ( !a1 )
  {
    v42 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v42 + 24) = 4323LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !a2 )
  {
    v43 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v43 + 24) = 4324LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( !a3 )
  {
    v44 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v44 + 24) = 4325LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( !a4 )
  {
    v45 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v45 + 24) = 4326LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( !a5 )
  {
    v46 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v46 + 24) = 4327LL;
    WdLogEvent5_WdAssertion(v46);
  }
  if ( !a6 )
  {
    v47 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v47 + 24) = 4328LL;
    WdLogEvent5_WdAssertion(v47);
  }
  if ( a7 == -1 )
  {
    v48 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v48 + 24) = 4329LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( !a11 )
  {
    v49 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v49 + 24) = 4330LL;
    WdLogEvent5_WdAssertion(v49);
  }
  *a11 = 0LL;
  if ( a12 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *a12 = si128;
    a12[1] = si128;
    a12[2] = si128;
    a12[3] = si128;
  }
  v18 = *(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a6;
  v68 = 0LL;
  v19 = 0;
  v20 = v18(a5, a7, &v68);
  v23 = v20;
  if ( v20 == -1071774919 )
  {
    if ( v68 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v50 + 24) = 4361LL;
      WdLogEvent5_WdAssertion(v50);
    }
    v19 = 1;
    v33 = WdLogNewEntry5_WdDmmEvent(v22);
    v24 = a7;
    *(_QWORD *)(v33 + 24) = a5;
    *(_QWORD *)(v33 + 32) = a7;
  }
  else
  {
    if ( v20 < 0 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
      v51[3] = a7;
      v51[4] = a5;
      v51[5] = v23;
      WdLogEvent5_WdError(v51);
      return (unsigned int)v23;
    }
    v24 = 0LL;
    if ( v68 )
    {
      while ( 1 )
      {
        v25 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned __int64 *))*((_QWORD *)v13 + 1);
        LODWORD(v69) = -1;
        v26 = v25(a5, a7, v24, &v69);
        v29 = v26;
        if ( v26 < 0 )
          break;
        v30 = (unsigned int)v69;
        if ( (_DWORD)v69 == -1 )
        {
          v52 = WdLogNewEntry5_WdAssertion(v28, 0xFFFFFFFFLL);
          *(_QWORD *)(v52 + 24) = 4404LL;
          WdLogEvent5_WdAssertion(v52);
          v30 = (unsigned int)v69;
        }
        v67[0] = 0;
        v31 = (*((__int64 (__fastcall **)(void *const, __int64, _BYTE *))v71 + 9))(a2, v30, v67);
        v29 = v31;
        if ( v31 < 0 )
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdError(v22, v32);
          v54[3] = a2;
          goto LABEL_48;
        }
        if ( !v67[0] )
        {
          v19 = 1;
          v53 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v22);
          v53[3] = a5;
          v53[4] = a7;
          v53[5] = (unsigned int)v69;
          WdLogEvent5_WdDmmEvent(v53);
          v13 = v70;
          goto LABEL_28;
        }
        v13 = v70;
        if ( ++v24 >= v68 )
          goto LABEL_28;
      }
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
      v54[4] = a7;
      goto LABEL_51;
    }
LABEL_28:
    v33 = WdLogNewEntry5_WdDmmEvent(v22);
    v24 = a7;
    *(_QWORD *)(v33 + 24) = a7;
    *(_QWORD *)(v33 + 32) = a5;
  }
  WdLogEvent5_WdDmmEvent(v33);
  Src[0] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  Src[1] = Src[0];
  Src[2] = Src[0];
  Src[3] = Src[0];
  if ( v19 )
  {
    if ( !a8 )
    {
      v55 = WdLogNewEntry5_WdDmmEvent(v35);
      *(_QWORD *)(v55 + 24) = v24;
      *(_QWORD *)(v55 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v55);
      return 3223192403LL;
    }
    if ( v68 )
    {
      v56 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v13 + 7))(a5, a7);
      v29 = v56;
      if ( v56 < 0 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
        v54[4] = a5;
LABEL_51:
        v54[3] = v24;
        v54[5] = v29;
LABEL_53:
        WdLogEvent5_WdError(v54);
        return (unsigned int)v29;
      }
    }
    v69 = 0LL;
    v59 = AugmentVidPnTopology(v73, v72, a5, v70, a2, v71, a7, a10, &v69, (unsigned int (*)[16])Src);
    v29 = v59;
    if ( v59 == -1071774925 )
    {
      v62 = WdLogNewEntry5_WdDmmEvent(v61);
      *(_QWORD *)(v62 + 24) = a5;
      *(_QWORD *)(v62 + 32) = v24;
      WdLogEvent5_WdDmmEvent(v62);
      return (unsigned int)v29;
    }
    if ( v59 == -1071774886 )
    {
      v63 = WdLogNewEntry5_WdDmmEvent(v61);
      *(_QWORD *)(v63 + 24) = a5;
      *(_QWORD *)(v63 + 32) = v24;
      WdLogEvent5_WdDmmEvent(v63);
      return 3223192410LL;
    }
    if ( v59 < 0 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v61, v60);
      v54[3] = v24;
LABEL_48:
      v54[4] = v29;
      goto LABEL_53;
    }
    v36 = v69;
    if ( !v69 )
    {
      v64 = WdLogNewEntry5_WdAssertion(v61, v60);
      *(_QWORD *)(v64 + 24) = 4517LL;
      WdLogEvent5_WdAssertion(v64);
    }
    v65 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v61);
    v65[3] = a2;
    v65[4] = v36;
    v65[5] = v24;
    v65[6] = v68;
    WdLogEvent5_WdDmmEvent(v65);
    v68 = v36;
  }
  else
  {
    v36 = v68;
  }
  if ( !v36 )
  {
    v66 = WdLogNewEntry5_WdAssertion(v35, v34);
    *(_QWORD *)(v66 + 24) = 4527LL;
    WdLogEvent5_WdAssertion(v66);
    v36 = v68;
  }
  if ( a9 )
  {
    v37 = v73;
    v38 = UnpinCofuncModalityOnPathsFromSource(v73, v72, a5, v70, a7, v36);
    v29 = v38;
    if ( v38 < 0 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
      v54[3] = v68;
      v54[4] = v24;
      v54[5] = v37;
      v54[6] = a2;
      v54[7] = v29;
      goto LABEL_53;
    }
    v36 = v68;
  }
  *v74 = v36;
  if ( a12 )
    memmove(a12, Src, 0x40uLL);
  if ( v75 )
    *v75 = v19;
  return 0LL;
}
