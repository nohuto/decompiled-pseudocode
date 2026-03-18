/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18017F398
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18003BAB0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18008AC50 (-GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 *     ?clear_region@?$vector_facade@PEAVCDesktopTree@@V?$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18015A4F0 (-clear_region@-$vector_facade@PEAVCDesktopTree@@V-$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x1801811B8 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     McTemplateU0xqddddddddddddqqq_EventWriteTransfer @ 0x180181FBC (McTemplateU0xqddddddddddddqqq_EventWriteTransfer.c)
 */

unsigned __int8 __fastcall COverlayContext::CheckMultiPlaneOverlaySupport(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 *v3; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // si
  __int64 *v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // r12
  char *v13; // rax
  int v14; // edx
  __int64 **v15; // r13
  char *v16; // r15
  unsigned __int64 v17; // rcx
  __int64 *v18; // rbx
  _BYTE *v19; // r8
  __int64 v20; // r10
  _BYTE *v21; // rbx
  __int64 v22; // r12
  char *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rcx
  char *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  _OWORD *v36; // rax
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  __int128 v42; // xmm5
  __int128 v43; // xmm6
  int v44; // eax
  __int64 v45; // r8
  _DWORD *v46; // rbx
  __int64 v47; // rax
  __int64 *v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rax
  COverlayContext::OverlayPlaneInfo **v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdi
  _QWORD *v55; // rbx
  char v57[4]; // [rsp+A8h] [rbp-80h] BYREF
  unsigned int v58; // [rsp+ACh] [rbp-7Ch]
  int v59; // [rsp+B0h] [rbp-78h]
  int v60; // [rsp+B8h] [rbp-70h] BYREF
  unsigned int v61; // [rsp+C0h] [rbp-68h] BYREF
  unsigned int v62; // [rsp+C8h] [rbp-60h]
  __int64 v63; // [rsp+D0h] [rbp-58h]
  __int64 v64; // [rsp+D8h] [rbp-50h]
  __int64 v65; // [rsp+E0h] [rbp-48h]
  _QWORD *v66; // [rsp+E8h] [rbp-40h]
  char *v67; // [rsp+F0h] [rbp-38h]
  __int64 **v68; // [rsp+F8h] [rbp-30h]
  __int64 v69; // [rsp+100h] [rbp-28h]
  COverlayContext::OverlayPlaneInfo **v70; // [rsp+108h] [rbp-20h] BYREF
  _BYTE *v71; // [rsp+110h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR *v72; // [rsp+118h] [rbp-10h]
  _BYTE v73[128]; // [rsp+120h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+1A0h] [rbp+78h] BYREF
  int *v75; // [rsp+1B0h] [rbp+88h]
  __int64 v76; // [rsp+1B8h] [rbp+90h]
  int *v77; // [rsp+1C0h] [rbp+98h]
  __int64 v78; // [rsp+1C8h] [rbp+A0h]

  v2 = *(_DWORD *)a2;
  v3 = (__int64 *)a1[1];
  v66 = a2;
  v5 = 0LL;
  v6 = *a1;
  v7 = 0;
  v57[0] = 0;
  v58 = 0;
  v8 = &v3[v6];
  v9 = (v6 * 8) >> 3;
  if ( v3 > v8 )
    v9 = 0LL;
  if ( v9 )
  {
    do
    {
      v10 = *v3;
      v11 = v2 + 1;
      ++v3;
      if ( !*(_BYTE *)(v10 + 11032) )
        v11 = v2;
      ++v5;
      v2 = v11;
    }
    while ( v5 != v9 );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v76 = 4LL;
    v78 = 4LL;
    v61 = CCommonRegistryData::m_dwOverlayTestMode < 4;
    v60 = v2;
    v75 = (int *)&v61;
    v77 = &v60;
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_OVERLAY_CHECKSUPPORT_Start,
      (__int64)v3,
      3u,
      &v74);
  }
  v12 = v2;
  v69 = v2;
  v13 = (char *)operator new(saturated_mul(v2, 0x90uLL));
  v15 = (__int64 **)a1[1];
  v16 = v13;
  v17 = *a1;
  v68 = &v15[*a1];
  if ( v15 == v68 )
  {
LABEL_28:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 && v2 )
    {
      v46 = v16 + 88;
      do
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0xqddddddddddddqqq_EventWriteTransfer(
            v17,
            v14,
            *((_QWORD *)v46 - 10),
            *(v46 - 14),
            *(v46 - 13),
            *(v46 - 12),
            *(v46 - 11),
            *(v46 - 10),
            *(v46 - 9),
            *(v46 - 8),
            *(v46 - 7),
            *(v46 - 6),
            *(v46 - 5),
            *(v46 - 4),
            *(v46 - 3),
            *(v46 - 2),
            *(v46 - 1),
            *v46,
            v46[5]);
        v46 += 36;
        --v12;
      }
      while ( v12 );
    }
    if ( CCommonRegistryData::m_dwOverlayTestMode >= 4 )
    {
      if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
        v7 = 1;
    }
    else
    {
      if ( !*a1 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v47 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1[1] + 192LL))(**(_QWORD **)a1[1]);
      v7 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *))(*(_QWORD *)v47 + 80LL))(v47, v16, v2, v57);
      if ( !v7 && v57[0] )
      {
        v48 = (__int64 *)a1[1];
        v49 = 0LL;
        v17 = (unsigned __int64)&v48[*a1];
        v50 = *a1 & 0x1FFFFFFFFFFFFFFFLL;
        if ( (unsigned __int64)v48 > v17 )
          v50 = 0LL;
        if ( v50 )
        {
          do
          {
            v51 = *v48;
            ++v49;
            ++v48;
            *(_BYTE *)(v51 + 11429) = 1;
          }
          while ( v49 != v50 );
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v18 = *v15;
      v59 = 0;
      v63 = (__int64)v18;
      v65 = *v18;
      v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 192LL))(v65);
      v70 = (COverlayContext::OverlayPlaneInfo **)v73;
      v71 = v73;
      v72 = &v74;
      COverlayContext::GetContextCandidates((__int64)v18, v66, &v70);
      v19 = v71;
      v20 = 0LL;
      v21 = v70;
      v60 = 0;
      v22 = (v71 - (_BYTE *)v70) >> 3;
      if ( !v22 || !COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*v70) )
      {
        LODWORD(v22) = v20;
        v60 = 1;
      }
      if ( *(_BYTE *)(v63 + 11032) == (_BYTE)v20 )
      {
        v27 = v59;
      }
      else
      {
        v23 = &v16[144 * (unsigned int)v22 + 144 * v58];
        memset_0(v23, 0, 0x90uLL);
        (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v64 + 112LL))(v64, (_DWORD *)v23 + 2);
        *((_DWORD *)v23 + 7) = 0;
        v24 = v63;
        v25 = v65;
        *(_DWORD *)v23 = v22;
        *((_OWORD *)v23 + 2) = *(_OWORD *)(v24 + 10920);
        *((_OWORD *)v23 + 3) = *(_OWORD *)(v24 + 10936);
        *((_OWORD *)v23 + 4) = *(_OWORD *)(v24 + 10952);
        *((_OWORD *)v23 + 5) = *(_OWORD *)(v24 + 10968);
        *((_OWORD *)v23 + 6) = *(_OWORD *)(v24 + 10984);
        *((_OWORD *)v23 + 7) = *(_OWORD *)(v24 + 11000);
        *((_OWORD *)v23 + 8) = *(_OWORD *)(v24 + 11016);
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 176LL))(v25);
        v19 = v71;
        v27 = 1;
        *((_DWORD *)v23 + 4) = v26;
        v20 = 0LL;
        v21 = v70;
        v59 = 1;
      }
      v62 = v20;
      if ( (v19 - v21) >> 3 )
        break;
LABEL_22:
      v58 += v27;
      v45 = (v19 - v21) >> 3;
      if ( v45 )
      {
        detail::vector_facade<CDesktopTree *,detail::buffer_impl<CDesktopTree *,1,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)&v70,
          0LL,
          v45);
        v21 = v70;
        v20 = 0LL;
      }
      v70 = (COverlayContext::OverlayPlaneInfo **)v20;
      if ( v21 == v73 )
        v21 = (_BYTE *)v20;
      operator delete(v21);
      if ( ++v15 == v68 )
      {
        v12 = v2;
        goto LABEL_28;
      }
    }
    v28 = v58;
    v63 = v20;
    v29 = v27 + v58;
    v61 = v27 + v58;
    while ( 1 )
    {
      v30 = v29;
      if ( (_DWORD)v22 )
        v30 = v28;
      v67 = &v16[144 * v30];
      memset_0(v67, 0, 0x90uLL);
      v31 = *(_QWORD *)&v21[8 * v63];
      v32 = v67;
      if ( (*(int (__fastcall **)(__int64, _QWORD, char *, char *))(*(_QWORD *)v64 + 120LL))(
             v64,
             *(_QWORD *)(v31 + 16),
             v67 + 8,
             v67 + 28) < 0 )
        break;
      v33 = (__int64)v70;
      v34 = v63;
      v35 = v65;
      *(_QWORD *)(v32 + 20) = *(_QWORD *)(*((_QWORD *)v70[v63] + 2) + 40LL);
      v36 = *(_OWORD **)(v33 + 8 * v34);
      v37 = v36[2];
      v38 = v36[3];
      v39 = v36[4];
      v40 = v36[5];
      v41 = v36[6];
      v42 = v36[7];
      v43 = v36[8];
      LODWORD(v36) = v62 + v60;
      *((_OWORD *)v32 + 2) = v37;
      *(_DWORD *)v32 = (_DWORD)v36;
      *((_OWORD *)v32 + 3) = v38;
      *((_OWORD *)v32 + 4) = v39;
      *((_OWORD *)v32 + 5) = v40;
      *((_OWORD *)v32 + 6) = v41;
      *((_OWORD *)v32 + 7) = v42;
      *((_OWORD *)v32 + 8) = v43;
      v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 176LL))(v35);
      v27 = v59 + 1;
      v19 = v71;
      v29 = v61 + 1;
      *((_DWORD *)v32 + 4) = v44;
      v20 = 0LL;
      v21 = v70;
      v63 = ++v62;
      v59 = v27;
      v28 = v58;
      v61 = v29;
      if ( v62 >= (unsigned __int64)((v19 - (_BYTE *)v70) >> 3) )
        goto LABEL_22;
    }
    v52 = v70;
    v53 = (v71 - (_BYTE *)v70) >> 3;
    if ( v53 )
    {
      detail::vector_facade<CDesktopTree *,detail::buffer_impl<CDesktopTree *,1,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&v70,
        0LL,
        v53);
      v52 = v70;
    }
    v70 = 0LL;
    if ( v52 == (COverlayContext::OverlayPlaneInfo **)v73 )
      v52 = 0LL;
    operator delete(v52);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0q_EventWriteTransfer(v17, &EVTDESC_OVERLAY_CHECKSUPPORT_Stop, v7);
  if ( v16 )
  {
    if ( v2 )
    {
      v54 = v69;
      v55 = v16 + 8;
      do
      {
        if ( *v55 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v55 + 16LL))(*v55);
        v55 += 18;
        --v54;
      }
      while ( v54 );
    }
    operator delete(v16);
  }
  return v7;
}
