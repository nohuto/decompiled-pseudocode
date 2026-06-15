/*
 * XREFs of ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000CA40
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AD0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 * Callees:
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140002058 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1400041C0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140007300 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x140009CF0 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x14000A960 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000BA60 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000C6B0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000D610 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000F420 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000F4D0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140016510 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14001BF54 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CC88 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x140029D37 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DD6C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x14003E95C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004D95C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CPipeInstance::CreateStreamPipeInstance(
        struct IUnknown *a1,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct CPipeInstance *a3,
        struct tWAVEFORMATEX *a4,
        struct SYSTEM_AUDIO_STREAM *a5,
        struct CPipeInstance **a6)
{
  int v8; // edi
  BOOL v9; // r13d
  float v10; // xmm6_4
  int FxPropertyStore; // eax
  int StreamProcessNode; // eax
  __int64 v13; // rsi
  struct ATL::CAtlPlex *v14; // rcx
  struct ATL::CAtlPlex *v15; // rdx
  unsigned __int16 *v16; // rcx
  unsigned __int16 v17; // ax
  GUID v18; // xmm1
  int v19; // r10d
  __int64 v20; // r8
  __int64 v21; // rax
  struct ATL::CAtlPlex *v22; // rdx
  __int64 v23; // rax
  int wFormatTag; // ecx
  WORD cbSize; // ax
  int v26; // eax
  __int64 v27; // rsi
  struct ATL::CAtlPlex *v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // esi
  int v31; // eax
  GUID *v32; // r15
  int v33; // r14d
  struct IPropertyStore *v34; // rdx
  int v35; // r14d
  __int64 v36; // r14
  __int64 v37; // r15
  struct ATL::CAtlPlex *v38; // rax
  struct ATL::CAtlPlex *v39; // rcx
  int v40; // eax
  int v41; // eax
  int APOProcessNode; // eax
  __int64 v43; // rdi
  struct IAudioMediaType *v44; // rsi
  __int64 v45; // r14
  struct ATL::CAtlPlex *v46; // rax
  struct ATL::CAtlPlex *v47; // rcx
  CPipeInstance *v48; // rax
  CPipeInstance *v49; // rdi
  const unsigned __int16 *v50; // r15
  unsigned __int64 v51; // r14
  unsigned __int64 v52; // r12
  unsigned __int16 *v53; // rax
  int v54; // r13d
  int v55; // r15d
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v56; // r14
  struct CPipeInstance *v57; // r15
  __int64 v58; // r14
  __int64 v59; // r15
  __int64 v60; // r12
  __int64 *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  struct ATL::CAtlPlex *v64; // rax
  int v65; // r9d
  char *v66; // r8
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v67; // r14
  int v68; // eax
  int v69; // eax
  int v70; // eax
  unsigned int v71; // r15d
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  WORD nChannels; // dx
  WORD wBitsPerSample; // r8
  struct ATL::CAtlPlex *v80; // rax
  __int64 v81; // r8
  struct ATL::CAtlPlex *v82; // r9
  const struct tWAVEFORMATEX *v83; // rax
  int v84; // eax
  const struct tWAVEFORMATEX *v85; // rax
  int v86; // eax
  const struct tWAVEFORMATEX *v87; // rax
  int v88; // eax
  unsigned __int16 **v89; // [rsp+20h] [rbp-258h]
  unsigned __int64 *v90; // [rsp+28h] [rbp-250h]
  __int64 *v91; // [rsp+30h] [rbp-248h]
  int v92[2]; // [rsp+50h] [rbp-228h] BYREF
  __int128 v93; // [rsp+58h] [rbp-220h] BYREF
  __int64 v94; // [rsp+68h] [rbp-210h]
  struct ATL::CAtlPlex *v95[2]; // [rsp+70h] [rbp-208h] BYREF
  unsigned __int64 v96; // [rsp+80h] [rbp-1F8h]
  int v97; // [rsp+88h] [rbp-1F0h]
  int v98; // [rsp+8Ch] [rbp-1ECh]
  BOOL v99; // [rsp+90h] [rbp-1E8h]
  struct IAudioMediaType *v100; // [rsp+98h] [rbp-1E0h] BYREF
  struct IPropertyStore *v101; // [rsp+A0h] [rbp-1D8h]
  __int64 v102; // [rsp+A8h] [rbp-1D0h] BYREF
  __int64 v103; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v104; // [rsp+B8h] [rbp-1C0h] BYREF
  unsigned int v105[2]; // [rsp+C0h] [rbp-1B8h] BYREF
  __int64 v106; // [rsp+C8h] [rbp-1B0h] BYREF
  CPipeInstance *v107; // [rsp+D0h] [rbp-1A8h] BYREF
  struct CStreamProcessNode *v108; // [rsp+D8h] [rbp-1A0h] BYREF
  unsigned int v109; // [rsp+E0h] [rbp-198h]
  int v110; // [rsp+E4h] [rbp-194h] BYREF
  int v111; // [rsp+E8h] [rbp-190h] BYREF
  int v112; // [rsp+ECh] [rbp-18Ch] BYREF
  int v113; // [rsp+F0h] [rbp-188h] BYREF
  int v114; // [rsp+F4h] [rbp-184h] BYREF
  _DWORD v115[2]; // [rsp+F8h] [rbp-180h] BYREF
  int v116; // [rsp+100h] [rbp-178h] BYREF
  int v117; // [rsp+104h] [rbp-174h] BYREF
  int v118; // [rsp+108h] [rbp-170h] BYREF
  int pExceptionObject; // [rsp+10Ch] [rbp-16Ch] BYREF
  int v120; // [rsp+110h] [rbp-168h] BYREF
  int v121; // [rsp+114h] [rbp-164h] BYREF
  int v122; // [rsp+118h] [rbp-160h] BYREF
  struct CPipeInstance *v123; // [rsp+120h] [rbp-158h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v124; // [rsp+128h] [rbp-150h]
  struct IPropertyStore *v125; // [rsp+130h] [rbp-148h] BYREF
  int v126; // [rsp+138h] [rbp-140h] BYREF
  int v127; // [rsp+13Ch] [rbp-13Ch]
  struct ATL::CAtlPlex *v128; // [rsp+140h] [rbp-138h]
  char *v129; // [rsp+148h] [rbp-130h]
  struct tWAVEFORMATEX *v130; // [rsp+150h] [rbp-128h]
  __int64 v131; // [rsp+158h] [rbp-120h]
  CPipeInstance *v132; // [rsp+160h] [rbp-118h] BYREF
  __int64 v133; // [rsp+168h] [rbp-110h] BYREF
  __int64 v134; // [rsp+170h] [rbp-108h] BYREF
  struct IUnknown *v135; // [rsp+178h] [rbp-100h]
  struct CPipeInstance **v136; // [rsp+180h] [rbp-F8h]
  __int64 v137[3]; // [rsp+188h] [rbp-F0h] BYREF
  GUID v138; // [rsp+1A0h] [rbp-D8h] BYREF
  GUID v139; // [rsp+1B0h] [rbp-C8h] BYREF
  unsigned __int64 v140[2]; // [rsp+1C0h] [rbp-B8h] BYREF
  __int128 v141; // [rsp+1D8h] [rbp-A0h] BYREF
  _BYTE v142[24]; // [rsp+1E8h] [rbp-90h]
  __int128 v143; // [rsp+200h] [rbp-78h]
  _BYTE v144[24]; // [rsp+210h] [rbp-68h]

  v130 = a4;
  v123 = a3;
  v124 = a2;
  v135 = a1;
  v136 = a6;
  v8 = 0;
  v9 = *(_DWORD *)a2 != 0;
  v99 = v9;
  v93 = 0LL;
  v94 = 0LL;
  *(_OWORD *)v95 = 0LL;
  LODWORD(v96) = 10;
  if ( *((_DWORD *)a2 + 2) == 1 )
    v10 = FLOAT_1_0;
  else
    v10 = FLOAT_1_1;
  *a6 = 0LL;
  v125 = 0LL;
  FxPropertyStore = TryGetFxPropertyStore(*((const unsigned __int16 **)a2 + 19), &v125);
  if ( FxPropertyStore < 0 )
  {
    pExceptionObject = FxPropertyStore;
    throw (long *)&pExceptionObject;
  }
  v108 = 0LL;
  StreamProcessNode = CStreamProcessNode::CreateStreamProcessNode(
                        (const struct tWAVEFORMATEX **)a2,
                        (struct IAudioMediaType ***)&v108);
  if ( StreamProcessNode < 0 )
  {
    v120 = StreamProcessNode;
    throw (long *)&v120;
  }
  v13 = *((_QWORD *)&v93 + 1);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v93);
  v14 = v95[1];
  v15 = *(struct ATL::CAtlPlex **)v95[1];
  *((_QWORD *)v95[1] + 2) = v108;
  v95[1] = v15;
  *((_QWORD *)v14 + 1) = v13;
  *(_QWORD *)v14 = 0LL;
  ++v94;
  if ( *((_QWORD *)&v93 + 1) )
    **((_QWORD **)&v93 + 1) = v14;
  else
    *(_QWORD *)&v93 = v14;
  *((_QWORD *)&v93 + 1) = v14;
  v108 = 0LL;
  v16 = (unsigned __int16 *)*((_QWORD *)a2 + 16);
  v97 = 0;
  if ( !v16 )
    goto LABEL_115;
  v17 = v16[8];
  if ( *v16 == 0xFFFE )
  {
    v20 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( v17 == 22 )
      goto LABEL_101;
    v74 = *((_QWORD *)v16 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v74 )
      v74 = *((_QWORD *)v16 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v74 )
      goto LABEL_101;
    v75 = *((_QWORD *)v16 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v75 )
      v75 = *((_QWORD *)v16 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v75 )
    {
LABEL_101:
      v143 = *(_OWORD *)v16;
      *(_OWORD *)v144 = *((_OWORD *)v16 + 1);
      *(_QWORD *)&v144[16] = *((_QWORD *)v16 + 4);
      *(_WORD *)v144 = 22;
      v97 = 1;
      v19 = *(_DWORD *)&v144[4];
      v18 = GUID_00000000_0000_0010_8000_00aa00389b71;
      goto LABEL_15;
    }
LABEL_115:
    v117 = -2005139404;
    throw (long *)&v117;
  }
  if ( v17 && ((*v16 - 1) & 0xFFFD) != 0 || (unsigned __int16)(v16[1] - 1) > 1u || ((v16[7] - 8) & 0xFFE7) != 0 )
    goto LABEL_115;
  v143 = *(_OWORD *)v16;
  LOWORD(v143) = -2;
  *(_WORD *)v144 = 22;
  *(_WORD *)&v144[2] = v16[7];
  v18 = GUID_00000000_0000_0010_8000_00aa00389b71;
  *(GUID *)&v144[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
  *(_DWORD *)&v144[8] = *v16;
  if ( v16[1] == 1 )
    v19 = 4;
  else
    v19 = 3;
  *(_DWORD *)&v144[4] = v19;
  v97 = 1;
  v20 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
LABEL_15:
  v21 = v20 - *(_QWORD *)&v144[8];
  v22 = *(struct ATL::CAtlPlex **)&v144[16];
  if ( v20 == *(_QWORD *)&v144[8] )
    v21 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v144[16];
  if ( !v21 )
    goto LABEL_21;
  v23 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v144[8];
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v144[8] )
    v23 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v144[16];
  if ( !v23 )
  {
LABEL_21:
    v98 = 0;
    if ( !a4 )
      goto LABEL_125;
    wFormatTag = a4->wFormatTag;
    cbSize = a4->cbSize;
    if ( (_WORD)wFormatTag == 0xFFFE )
    {
      if ( cbSize != 22 )
      {
        v76 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2) - v20;
        if ( !v76 )
          v76 = *(_QWORD *)&a4[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v76 )
        {
          v77 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v77 )
            v77 = *(_QWORD *)&a4[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v77 )
          {
LABEL_125:
            v116 = -2005139404;
            throw (long *)&v116;
          }
        }
      }
      v141 = *(_OWORD *)&a4->wFormatTag;
      *(_OWORD *)v142 = *(_OWORD *)&a4->cbSize;
      *(_QWORD *)&v142[16] = *(_QWORD *)&a4[1].wBitsPerSample;
      *(_WORD *)v142 = 22;
    }
    else
    {
      if ( cbSize && (((_WORD)wFormatTag - 1) & 0xFFFD) != 0 )
        goto LABEL_125;
      nChannels = a4->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u )
        goto LABEL_125;
      wBitsPerSample = a4->wBitsPerSample;
      if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
        goto LABEL_125;
      v141 = *(_OWORD *)&a4->wFormatTag;
      LOWORD(v141) = -2;
      *(_WORD *)v142 = 22;
      *(_WORD *)&v142[2] = wBitsPerSample;
      *(GUID *)&v142[8] = v18;
      *(_DWORD *)&v142[8] = wFormatTag;
      *(_DWORD *)&v142[4] = (nChannels == 1) + 3;
    }
    v98 = 1;
    if ( *((_DWORD *)a2 + 40) && WORD1(v141) != WORD1(v143) )
    {
      WORD1(v141) = WORD1(v143);
      *(_DWORD *)&v142[4] = v19;
      WORD6(v141) = WORD1(v143) * (HIWORD(v141) >> 3);
      DWORD2(v141) = DWORD1(v141) * WORD6(v141);
    }
    v104 = 0LL;
    v26 = CProcessNode::CreateDummyProcessNode(v9, (const struct tWAVEFORMATEX *)&v141, &v104);
    if ( v26 < 0 )
    {
      v121 = v26;
      throw (long *)&v121;
    }
    v27 = *((_QWORD *)&v93 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v93);
    v28 = v95[1];
    v22 = *(struct ATL::CAtlPlex **)v95[1];
    *((_QWORD *)v95[1] + 2) = v104;
    v95[1] = v22;
    *((_QWORD *)v28 + 1) = v27;
    *(_QWORD *)v28 = 0LL;
    ++v94;
    if ( *((_QWORD *)&v93 + 1) )
      **((_QWORD **)&v93 + 1) = v28;
    else
      *(_QWORD *)&v93 = v28;
    *((_QWORD *)&v93 + 1) = v28;
    v104 = 0LL;
    v29 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v144[8];
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v144[8] )
      v29 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v144[16];
    if ( !v29 && (*((_DWORD *)a2 + 34) & 0x800000) == 0 )
    {
      *(_QWORD *)v92 = 0LL;
      v138 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v91 = (__int64 *)v92;
      v73 = CAPOProcessNode::CreateAPOProcessNode(&GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec, 0LL, v9, 1LL, 0, &v138);
      if ( v73 < 0 )
      {
        v122 = v73;
        throw (long *)&v122;
      }
      v133 = *(_QWORD *)v92;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v93, &v133);
      *(_QWORD *)v92 = 0LL;
    }
    v104 = 0LL;
  }
  v30 = 0;
  v109 = 0;
  while ( v30 < *((_DWORD *)a2 + 50) )
  {
    v102 = 0LL;
    v31 = *((_DWORD *)a2 + 40);
    if ( _bittest(&v31, v30) )
    {
      v32 = (GUID *)((char *)a2 + 164);
      v33 = 1;
      v101 = v125;
      if ( v125 )
        ((void (__fastcall *)(struct IPropertyStore *, struct ATL::CAtlPlex *))v125->lpVtbl->AddRef)(v125, v22);
      v8 |= 1u;
      v34 = v101;
    }
    else
    {
      v32 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v33 = 0;
      v131 = 0LL;
      v8 |= 2u;
      v34 = 0LL;
    }
    v139 = *v32;
    v91 = &v102;
    v35 = CAPOProcessNode::CreateAPOProcessNode((char *)a2 + 16 * v30 + 288, v34, v9, 0LL, v33, &v139);
    if ( (v8 & 2) != 0 )
    {
      v8 &= ~2u;
      if ( v131 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v131 + 16LL))(v131);
    }
    if ( (v8 & 1) != 0 )
    {
      v8 &= ~1u;
      if ( v101 )
        ((void (__fastcall *)(struct IPropertyStore *))v101->lpVtbl->Release)(v101);
    }
    if ( v35 < 0 )
    {
      v126 = v35;
      throw (long *)&v126;
    }
    v36 = v102;
    v37 = *((_QWORD *)&v93 + 1);
    v38 = v95[1];
    if ( !v95[1] )
    {
      v80 = ATL::CAtlPlex::Create(v95, (unsigned int)v96, 0x18uLL);
      if ( !v80 )
        ATL::AtlThrowImpl(-2147024882);
      v22 = (struct ATL::CAtlPlex *)((char *)v80 + 8);
      v81 = (unsigned int)(v96 - 1);
      v82 = (struct ATL::CAtlPlex *)((char *)v80 + 24 * v81 + 8);
      v128 = v82;
      v127 = v96 - 1;
      v38 = v95[1];
      while ( (int)v81 >= 0 )
      {
        *(_QWORD *)v82 = v38;
        v38 = v82;
        v95[1] = v82;
        v82 = (struct ATL::CAtlPlex *)((char *)v82 - 24);
        v128 = v82;
        LODWORD(v81) = v81 - 1;
        v127 = v81;
      }
    }
    v39 = *(struct ATL::CAtlPlex **)v38;
    *((_QWORD *)v38 + 2) = v36;
    v95[1] = v39;
    *((_QWORD *)v38 + 1) = v37;
    *(_QWORD *)v38 = 0LL;
    ++v94;
    if ( *((_QWORD *)&v93 + 1) )
      **((_QWORD **)&v93 + 1) = v38;
    else
      *(_QWORD *)&v93 = v38;
    *((_QWORD *)&v93 + 1) = v38;
    v102 = 0LL;
    v109 = ++v30;
  }
  v100 = 0LL;
  v40 = CAudioMediaType::Create(v130, (unsigned int)v130->cbSize + 18, &v100, 0.0, 0);
  if ( v40 < 0 )
  {
    v110 = v40;
    throw (long *)&v110;
  }
  v41 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 )
  {
    if ( v41 == 1 )
    {
      v106 = 0LL;
      v44 = v100;
      v85 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->GetAudioFormat)(v100);
      v86 = CProcessNode::CreateDummyProcessNode(v9, v85, &v106);
      if ( v86 < 0 )
      {
        v113 = v86;
        throw (long *)&v113;
      }
      v134 = v106;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v93, &v134);
      v106 = 0LL;
    }
    else if ( v41 == 2 )
    {
      v107 = 0LL;
      v44 = v100;
      v87 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v100->lpVtbl->GetAudioFormat)(v100);
      v88 = CProcessNode::CreateDummyProcessNode(v9, v87, &v107);
      if ( v88 < 0 )
      {
        v114 = v88;
        throw (long *)&v114;
      }
      v132 = v107;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v93, &v132);
      v107 = 0LL;
    }
    else
    {
      v44 = v100;
    }
  }
  else
  {
    *(_QWORD *)v105 = 0LL;
    *(GUID *)v140 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v91 = (__int64 *)v105;
    APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                       &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
                       0LL,
                       v9,
                       1LL,
                       0,
                       v140);
    if ( APOProcessNode < 0 )
    {
      v111 = APOProcessNode;
      throw (long *)&v111;
    }
    v43 = *(_QWORD *)v105;
    v44 = v100;
    (*(void (__fastcall **)(_QWORD, struct IAudioMediaType *))(**(_QWORD **)v105 + 24LL))(*(_QWORD *)v105, v100);
    (*(void (__fastcall **)(__int64, struct IAudioMediaType *))(*(_QWORD *)v43 + 32LL))(v43, v44);
    v45 = *((_QWORD *)&v93 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v93);
    v46 = v95[1];
    v47 = *(struct ATL::CAtlPlex **)v95[1];
    *((_QWORD *)v95[1] + 2) = v43;
    v95[1] = v47;
    *((_QWORD *)v46 + 1) = v45;
    *(_QWORD *)v46 = 0LL;
    ++v94;
    if ( *((_QWORD *)&v93 + 1) )
      **((_QWORD **)&v93 + 1) = v46;
    else
      *(_QWORD *)&v93 = v46;
    *((_QWORD *)&v93 + 1) = v46;
    *(_QWORD *)v105 = 0LL;
    if ( !v123 )
    {
      v103 = 0LL;
      v83 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->GetAudioFormat)(v44);
      v84 = CProcessNode::CreateDummyProcessNode(v9, v83, &v103);
      if ( v84 < 0 )
      {
        v112 = v84;
        throw (long *)&v112;
      }
      v137[0] = v103;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v93, v137);
      v103 = 0LL;
    }
    *(_QWORD *)v105 = 0LL;
  }
  v48 = (CPipeInstance *)operator new(0x140uLL);
  v132 = v48;
  if ( v48 )
    v49 = CPipeInstance::CPipeInstance(v48, WRITE_DATA_PIPE);
  else
    v49 = 0LL;
  v101 = (struct IPropertyStore *)v49;
  if ( !v49 )
  {
    v115[0] = -2147024882;
    throw (long *)v115;
  }
  v50 = (const unsigned __int16 *)*((_QWORD *)a2 + 19);
  v51 = -1LL;
  do
    ++v51;
  while ( v50[v51] );
  *((_QWORD *)v49 + 24) = 0LL;
  v52 = v51 + 1;
  if ( v51 + 1 < v51 )
  {
    v54 = -2147024362;
    goto LABEL_163;
  }
  if ( is_mul_ok(v52, 2uLL) )
  {
    v53 = (unsigned __int16 *)CoTaskMemAlloc(2 * v52);
    *((_QWORD *)v49 + 24) = v53;
    if ( v53 )
    {
      v92[0] = 0;
      v54 = 0;
      StringCchCopyNExW(v53, v51 + 1, v50, v51, v89, v90, (unsigned int)v91);
      v55 = 0;
      goto LABEL_64;
    }
    v54 = -2147024882;
LABEL_163:
    v118 = v54;
    throw (long *)&v118;
  }
  v55 = -2147024362;
  v92[0] = -2147024362;
  v54 = -2147024362;
LABEL_64:
  if ( v55 < 0 )
    goto LABEL_163;
  v56 = v124;
  *((_DWORD *)v49 + 30) = *(_DWORD *)v124 == 2;
  *((_DWORD *)v49 + 3) = v99;
  *((_DWORD *)v49 + 33) = *((_DWORD *)v56 + 40) != 0;
  *((_DWORD *)v49 + 31) = *((_DWORD *)v56 + 2) == 1;
  if ( *((_QWORD *)v49 + 19) )
    ATL::AtlComPtrAssign((struct IUnknown **)v49 + 19, 0LL);
  if ( *((struct IUnknown **)v49 + 30) != v135 )
    ATL::AtlComPtrAssign((struct IUnknown **)v49 + 30, v135);
  v57 = v123;
  *(_QWORD *)v49 = v123;
  *((_DWORD *)v49 + 2) = v57 == 0LL;
  *((_BYTE *)v49 + 316) = *((_DWORD *)v56 + 49) != 0;
  v58 = *((_QWORD *)&v93 + 1);
  while ( v58 )
  {
    v59 = v58;
    v58 = *(_QWORD *)(v58 + 8);
    v60 = *((_QWORD *)v49 + 2);
    if ( !*((_QWORD *)v49 + 6) )
    {
      v64 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v49 + 5, *((unsigned int *)v49 + 14), 0x18uLL);
      if ( !v64 )
        ATL::AtlThrowImpl(-2147024882);
      v129 = (char *)v64 + 8;
      v65 = *((_DWORD *)v49 + 14) - 1;
      v66 = (char *)v64 + 24 * (unsigned int)v65 + 8;
      v129 = v66;
      while ( 1 )
      {
        v115[1] = v65;
        if ( v65 < 0 )
          break;
        *(_QWORD *)v66 = *((_QWORD *)v49 + 6);
        *((_QWORD *)v49 + 6) = v66;
        v66 -= 24;
        v129 = v66;
        --v65;
      }
    }
    v61 = (__int64 *)*((_QWORD *)v49 + 6);
    v62 = *v61;
    v61[2] = *(_QWORD *)(v59 + 16);
    *((_QWORD *)v49 + 6) = v62;
    v61[1] = 0LL;
    *v61 = v60;
    ++*((_QWORD *)v49 + 4);
    v63 = *((_QWORD *)v49 + 2);
    if ( v63 )
      *(_QWORD *)(v63 + 8) = v61;
    else
      *((_QWORD *)v49 + 3) = v61;
    *((_QWORD *)v49 + 2) = v61;
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v93);
  v67 = v124;
  if ( v123 )
    v68 = *((_DWORD *)v123 + 35);
  else
    v68 = (int)(float)((float)(int)((double)(int)(v130->nAvgBytesPerSec / v130->nBlockAlign)
                                  * (double)(int)*((_QWORD *)v124 + 4)
                                  / 10000000.0
                                  + 0.5)
                     * v10);
  *((_DWORD *)v49 + 36) = v68;
  v69 = 1;
  if ( *((_DWORD *)v67 + 1) )
    v69 = 7;
  *((_DWORD *)v49 + 34) = v69;
  *((_DWORD *)v49 + 53) = 0;
  v70 = *((_DWORD *)v67 + 34);
  if ( (v70 & 0x100000) != 0 )
  {
    *((_DWORD *)v49 + 34) |= 0xAu;
    *((_DWORD *)v49 + 50) = 1056964608;
    *((_DWORD *)v49 + 51) = 1065353216;
    v70 = *((_DWORD *)v67 + 34);
  }
  if ( (v70 & 0x8000000) != 0 )
    *((_DWORD *)v49 + 52) = 3;
  *v136 = v49;
  v101 = 0LL;
  if ( v44 )
    ((void (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->Release)(v44);
  v108 = 0LL;
  if ( v125 )
    ((void (__fastcall *)(struct IPropertyStore *))v125->lpVtbl->Release)(v125);
  v71 = v92[0];
  if ( v92[0] < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
        (unsigned int)v92[0]);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateStreamPipeInstance", 0x355u, v71);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v93);
  return v71;
}
