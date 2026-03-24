/*
 * XREFs of ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C015DE68
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C015DA44 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C025E51C (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C015E0E4 (-UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEA.c)
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C025C778 (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
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
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  struct D3DKMDT_HVIDPN__ *v36; // rsi
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rax
  _BYTE v66[8]; // [rsp+50h] [rbp-99h] BYREF
  unsigned __int64 v67; // [rsp+58h] [rbp-91h] BYREF
  unsigned __int64 v68; // [rsp+60h] [rbp-89h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v69; // [rsp+68h] [rbp-81h]
  struct _DXGDMM_INTERFACE *v70; // [rsp+70h] [rbp-79h]
  struct _DXGDMM_VIDPN_INTERFACE *v71; // [rsp+78h] [rbp-71h]
  struct D3DKMDT_HVIDPN__ *v72; // [rsp+80h] [rbp-69h]
  unsigned __int64 *v73; // [rsp+88h] [rbp-61h]
  unsigned __int8 *v74; // [rsp+90h] [rbp-59h]
  _OWORD Src[4]; // [rsp+A0h] [rbp-49h] BYREF

  v13 = a6;
  v72 = a3;
  v69 = a6;
  v73 = a11;
  v74 = a13;
  v71 = a4;
  v70 = a1;
  if ( !a1 )
  {
    v41 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v41 + 24) = 4323LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( !a2 )
  {
    v42 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v42 + 24) = 4324LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !a3 )
  {
    v43 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v43 + 24) = 4325LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( !a4 )
  {
    v44 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v44 + 24) = 4326LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( !a5 )
  {
    v45 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v45 + 24) = 4327LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( !a6 )
  {
    v46 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v46 + 24) = 4328LL;
    WdLogEvent5_WdAssertion(v46);
  }
  if ( a7 == -1 )
  {
    v47 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v47 + 24) = 4329LL;
    WdLogEvent5_WdAssertion(v47);
  }
  if ( !a11 )
  {
    v48 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v48 + 24) = 4330LL;
    WdLogEvent5_WdAssertion(v48);
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
  v67 = 0LL;
  v19 = 0;
  v20 = v18(a5, a7, &v67);
  v23 = v20;
  if ( v20 == -1071774919 )
  {
    if ( v67 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v49 + 24) = 4361LL;
      WdLogEvent5_WdAssertion(v49);
    }
    v19 = 1;
    v32 = WdLogNewEntry5_WdDmmEvent(v22, v21);
    v24 = a7;
    *(_QWORD *)(v32 + 24) = a5;
    *(_QWORD *)(v32 + 32) = a7;
  }
  else
  {
    if ( v20 < 0 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
      v50[3] = a7;
      v50[4] = a5;
      v50[5] = v23;
      WdLogEvent5_WdError(v50);
      return (unsigned int)v23;
    }
    v24 = 0LL;
    if ( v67 )
    {
      while ( 1 )
      {
        v25 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned __int64 *))*((_QWORD *)v13 + 1);
        LODWORD(v68) = -1;
        v26 = v25(a5, a7, v24, &v68);
        v29 = v26;
        if ( v26 < 0 )
          break;
        v30 = (unsigned int)v68;
        if ( (_DWORD)v68 == -1 )
        {
          v51 = WdLogNewEntry5_WdAssertion(v28, 0xFFFFFFFFLL);
          *(_QWORD *)(v51 + 24) = 4404LL;
          WdLogEvent5_WdAssertion(v51);
          v30 = (unsigned int)v68;
        }
        v66[0] = 0;
        v31 = (*((__int64 (__fastcall **)(void *const, __int64, _BYTE *))v70 + 9))(a2, v30, v66);
        v29 = v31;
        if ( v31 < 0 )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
          v53[3] = a2;
          goto LABEL_48;
        }
        if ( !v66[0] )
        {
          v19 = 1;
          v52 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v22, v21);
          v52[3] = a5;
          v52[4] = a7;
          v52[5] = (unsigned int)v68;
          WdLogEvent5_WdDmmEvent(v52);
          v13 = v69;
          goto LABEL_28;
        }
        v13 = v69;
        if ( ++v24 >= v67 )
          goto LABEL_28;
      }
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
      v53[4] = a7;
      goto LABEL_51;
    }
LABEL_28:
    v32 = WdLogNewEntry5_WdDmmEvent(v22, v21);
    v24 = a7;
    *(_QWORD *)(v32 + 24) = a7;
    *(_QWORD *)(v32 + 32) = a5;
  }
  WdLogEvent5_WdDmmEvent(v32);
  Src[0] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  Src[1] = Src[0];
  Src[2] = Src[0];
  Src[3] = Src[0];
  if ( v19 )
  {
    if ( !a8 )
    {
      v54 = WdLogNewEntry5_WdDmmEvent(v34, v33);
      *(_QWORD *)(v54 + 24) = v24;
      *(_QWORD *)(v54 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v54);
      return 3223192403LL;
    }
    if ( v67 )
    {
      v55 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v13 + 7))(a5, a7);
      v29 = v55;
      if ( v55 < 0 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56);
        v53[4] = a5;
LABEL_51:
        v53[3] = v24;
        v53[5] = v29;
LABEL_53:
        WdLogEvent5_WdError(v53);
        return (unsigned int)v29;
      }
    }
    v68 = 0LL;
    v58 = AugmentVidPnTopology(v72, v71, a5, v69, a2, v70, a7, a10, &v68, (unsigned int (*)[16])Src);
    v29 = v58;
    if ( v58 == -1071774925 )
    {
      v61 = WdLogNewEntry5_WdDmmEvent(v60, v59);
      *(_QWORD *)(v61 + 24) = a5;
      *(_QWORD *)(v61 + 32) = v24;
      WdLogEvent5_WdDmmEvent(v61);
      return (unsigned int)v29;
    }
    if ( v58 == -1071774886 )
    {
      v62 = WdLogNewEntry5_WdDmmEvent(v60, v59);
      *(_QWORD *)(v62 + 24) = a5;
      *(_QWORD *)(v62 + 32) = v24;
      WdLogEvent5_WdDmmEvent(v62);
      return 3223192410LL;
    }
    if ( v58 < 0 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59);
      v53[3] = v24;
LABEL_48:
      v53[4] = v29;
      goto LABEL_53;
    }
    v35 = v68;
    if ( !v68 )
    {
      v63 = WdLogNewEntry5_WdAssertion(v60, v59);
      *(_QWORD *)(v63 + 24) = 4517LL;
      WdLogEvent5_WdAssertion(v63);
    }
    v64 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v60, v59);
    v64[3] = a2;
    v64[4] = v35;
    v64[5] = v24;
    v64[6] = v67;
    WdLogEvent5_WdDmmEvent(v64);
    v67 = v35;
  }
  else
  {
    v35 = v67;
  }
  if ( !v35 )
  {
    v65 = WdLogNewEntry5_WdAssertion(v34, v33);
    *(_QWORD *)(v65 + 24) = 4527LL;
    WdLogEvent5_WdAssertion(v65);
    v35 = v67;
  }
  if ( a9 )
  {
    v36 = v72;
    v37 = UnpinCofuncModalityOnPathsFromSource(v72, v71, a5, v69, a7, v35);
    v29 = v37;
    if ( v37 < 0 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
      v53[3] = v67;
      v53[4] = v24;
      v53[5] = v36;
      v53[6] = a2;
      v53[7] = v29;
      goto LABEL_53;
    }
    v35 = v67;
  }
  *v73 = v35;
  if ( a12 )
    memmove(a12, Src, 0x40uLL);
  if ( v74 )
    *v74 = v19;
  return 0LL;
}
