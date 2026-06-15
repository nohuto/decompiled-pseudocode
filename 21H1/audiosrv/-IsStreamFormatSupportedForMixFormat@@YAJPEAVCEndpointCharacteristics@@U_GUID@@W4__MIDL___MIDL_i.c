/*
 * XREFs of ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001E950
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000D070 (AudioServerIsFormatSupported.c)
 *     wil::details::functor_wrapper_void__lambda_0e6163ff1b327aa0d4e45e7e06fa9bf3__&_::Run @ 0x180047350 (wil--details--functor_wrapper_void__lambda_0e6163ff1b327aa0d4e45e7e06fa9bf3__-_--Run.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D68D8 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800D71EC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180012BA0 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001FAE0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180020540 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$CComPtr@UICompositeSystemEffect@@@ATL@@QEAA@XZ @ 0x1800211C8 (--1-$CComPtr@UICompositeSystemEffect@@@ATL@@QEAA@XZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180023530 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180023A30 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?RemoveAll@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAXXZ @ 0x180032860 (-RemoveAll@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqual.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180032900 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x180032D00 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18004C3C8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180052D20 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052DD0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069B20 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ABC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBC68 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z @ 0x180119428 (--$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z.c)
 *     ??0fail_fast@gsl@@QEAA@QEBD@Z @ 0x1801194F8 (--0fail_fast@gsl@@QEAA@QEBD@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18011D214 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=81
__int64 __fastcall IsStreamFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        __int32 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  unsigned __int64 v7; // r14
  struct CEndpointCharacteristics *v8; // r15
  __int64 cbSize; // rbx
  struct tWAVEFORMATEX *v10; // rax
  struct tWAVEFORMATEX *v11; // r12
  __int64 v12; // rbx
  struct tWAVEFORMATEX *v13; // rax
  struct tWAVEFORMATEX *v14; // rdi
  WORD wFormatTag; // ax
  __int64 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // rsi
  struct _RTL_CRITICAL_SECTION *v21; // r13
  volatile signed __int32 **v22; // rdi
  volatile signed __int32 *v23; // rbx
  int v24; // r14d
  int v25; // r12d
  __int64 v26; // r15
  __int64 v27; // r13
  __int64 v28; // rax
  volatile signed __int32 **v29; // rcx
  __int64 v30; // rax
  int Lfx; // r12d
  int v32; // r14d
  volatile signed __int32 **v33; // r15
  __int64 v34; // rbx
  struct _RTL_CRITICAL_SECTION *v35; // rdi
  char *v36; // rsi
  __int64 v37; // r14
  unsigned int v38; // r15d
  unsigned int v39; // r15d
  __int64 v40; // r14
  struct _RTL_CRITICAL_SECTION *v41; // r13
  volatile signed __int32 **v42; // rdi
  volatile signed __int32 *v43; // rbx
  int v44; // esi
  __int64 v45; // r15
  __int64 v46; // r13
  __int64 v47; // rax
  volatile signed __int32 **v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rsi
  volatile signed __int32 **v51; // r15
  __int64 v52; // r14
  __int64 v53; // rsi
  volatile signed __int32 *v54; // rbx
  int v55; // edi
  int v56; // r13d
  __int64 v57; // r15
  __int64 v58; // rax
  _QWORD *v59; // rcx
  __int64 v60; // rax
  volatile signed __int32 **v61; // rdi
  __int64 v62; // r15
  struct _RTL_CRITICAL_SECTION *v63; // rcx
  __int64 v64; // rbx
  struct _RTL_CRITICAL_SECTION *v65; // rdi
  char *v66; // rsi
  __int64 v67; // r14
  unsigned int v68; // r15d
  unsigned int v69; // r15d
  __int64 v70; // r14
  volatile signed __int32 *v71; // rbx
  __int64 v72; // rdi
  int v73; // esi
  int v74; // r13d
  __int64 v75; // r15
  __int64 v76; // rax
  volatile signed __int32 *v77; // rcx
  __int64 v78; // rax
  volatile signed __int32 **v79; // rsi
  volatile signed __int32 *v80; // r15
  BOOL v81; // ebx
  __int64 v82; // rcx
  int v83; // ecx
  struct _GUID *v84; // rsi
  struct _GUID v85; // xmm0
  __int64 v86; // rax
  __int64 v87; // rbx
  BOOL v88; // eax
  int v89; // edi
  __int64 v90; // rsi
  int v91; // ecx
  __int64 v92; // rdi
  __int64 v93; // r9
  int v94; // r8d
  int v95; // r11d
  __int64 v96; // r10
  __int64 v97; // rax
  __int64 v98; // r11
  __int64 v99; // rcx
  int v100; // eax
  int v101; // ecx
  __int64 v102; // r9
  int v103; // r8d
  int v104; // r11d
  __int64 v105; // r10
  __int64 v106; // rax
  int v107; // eax
  void *v108; // rbx
  bool v109; // zf
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rcx
  void *v113; // rax
  int v114; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v115; // r14d
  int v116; // eax
  struct tWAVEFORMATEX *v117; // rsi
  int v118; // eax
  struct IAudioMediaType *v119; // rbx
  struct IAudioMediaType *v120; // rdi
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v122; // eax
  bool v123; // di
  void *v124; // rcx
  const struct tWAVEFORMATEX *v125; // r14
  __int64 v126; // rdi
  struct tWAVEFORMATEX *v127; // rax
  void *v128; // rcx
  int v130; // ecx
  int v131; // ecx
  SystemEffectChainDescriptor **v132; // rax
  int v133; // eax
  __int64 v134; // rax
  SystemEffectChainDescriptor **v135; // rax
  int v136; // eax
  char *v137; // rbx
  SystemEffectChainDescriptor **v138; // rax
  int v139; // eax
  SystemEffectChainDescriptor **v140; // rax
  int v141; // eax
  __int64 v142; // rax
  SystemEffectChainDescriptor **v143; // rax
  int v144; // eax
  char *v145; // rbx
  SystemEffectChainDescriptor **v146; // rax
  int v147; // eax
  _QWORD *v148; // rax
  _QWORD *v149; // rax
  volatile signed __int32 *v150; // rdi
  _QWORD *v151; // rax
  _QWORD *v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  struct IAudioSystemEffects2 **v163; // [rsp+20h] [rbp-E0h]
  int v164; // [rsp+20h] [rbp-E0h]
  bool v165; // [rsp+40h] [rbp-C0h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+48h] [rbp-B8h]
  struct IAudioProcessingObject *v167; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v168; // [rsp+58h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX *v169; // [rsp+60h] [rbp-A0h]
  volatile signed __int32 *v170; // [rsp+68h] [rbp-98h] BYREF
  __int64 v171; // [rsp+70h] [rbp-90h]
  __int64 v172; // [rsp+78h] [rbp-88h] BYREF
  __int64 v173; // [rsp+80h] [rbp-80h]
  volatile signed __int32 **v174; // [rsp+88h] [rbp-78h] BYREF
  __int64 v175; // [rsp+90h] [rbp-70h]
  volatile signed __int32 **v176; // [rsp+98h] [rbp-68h] BYREF
  __int64 v177; // [rsp+A0h] [rbp-60h]
  void *v178; // [rsp+A8h] [rbp-58h]
  __int64 v179; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v180; // [rsp+B8h] [rbp-48h] BYREF
  char *v181; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v182; // [rsp+C8h] [rbp-38h]
  char *v183; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v184; // [rsp+D8h] [rbp-28h]
  int v185; // [rsp+E0h] [rbp-20h]
  void *v186; // [rsp+E8h] [rbp-18h]
  struct IAudioMediaType *v187; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v188; // [rsp+F8h] [rbp-8h]
  struct IAudioMediaType *v189; // [rsp+100h] [rbp+0h] BYREF
  LPVOID pv; // [rsp+108h] [rbp+8h]
  int v191; // [rsp+110h] [rbp+10h] BYREF
  int v192; // [rsp+118h] [rbp+18h] BYREF
  int v193; // [rsp+120h] [rbp+20h] BYREF
  int v194; // [rsp+128h] [rbp+28h] BYREF
  struct tWAVEFORMATEX *v195; // [rsp+130h] [rbp+30h]
  unsigned int v196[2]; // [rsp+138h] [rbp+38h]
  struct tWAVEFORMATEX *v197; // [rsp+140h] [rbp+40h]
  LPVOID *v198; // [rsp+148h] [rbp+48h]
  struct tWAVEFORMATEX *v199; // [rsp+150h] [rbp+50h] BYREF
  char v200; // [rsp+158h] [rbp+58h]
  void *v201; // [rsp+160h] [rbp+60h]
  struct _GUID v202; // [rsp+170h] [rbp+70h] BYREF
  struct _GUID v203; // [rsp+180h] [rbp+80h] BYREF
  PROPVARIANT pvar[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v205; // [rsp+1A0h] [rbp+A0h]
  __int128 v206; // [rsp+1A8h] [rbp+A8h]
  __int128 v207; // [rsp+1B8h] [rbp+B8h]
  __int64 v208; // [rsp+1C8h] [rbp+C8h]
  __int64 v209; // [rsp+1D0h] [rbp+D0h]
  __int64 v210; // [rsp+1D8h] [rbp+D8h]
  __int64 v211; // [rsp+1E0h] [rbp+E0h]
  __int64 v212; // [rsp+1E8h] [rbp+E8h]
  __int64 v213; // [rsp+1F0h] [rbp+F0h]
  struct _GUID v214; // [rsp+200h] [rbp+100h] BYREF
  struct _GUID v215; // [rsp+210h] [rbp+110h] BYREF
  struct _GUID v216; // [rsp+220h] [rbp+120h] BYREF
  struct _GUID v217; // [rsp+230h] [rbp+130h] BYREF
  struct _GUID v218; // [rsp+240h] [rbp+140h] BYREF
  __int64 v219; // [rsp+250h] [rbp+150h]
  __int64 v220; // [rsp+258h] [rbp+158h]
  char v221[24]; // [rsp+260h] [rbp+160h] BYREF
  char v222[24]; // [rsp+278h] [rbp+178h] BYREF
  char v223[24]; // [rsp+290h] [rbp+190h] BYREF
  char v224[24]; // [rsp+2A8h] [rbp+1A8h] BYREF
  char v225[24]; // [rsp+2C0h] [rbp+1C0h] BYREF
  char v226[24]; // [rsp+2D8h] [rbp+1D8h] BYREF
  char v227[24]; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v228[24]; // [rsp+308h] [rbp+208h] BYREF
  char v229[24]; // [rsp+320h] [rbp+220h] BYREF
  char v230[88]; // [rsp+338h] [rbp+238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+398h] [rbp+298h]

  v7 = a3;
  v8 = a1;
  v167 = 0LL;
  v165 = 1;
  v195 = 0LL;
  pv = 0LL;
  cbSize = Src->cbSize;
  v10 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v11 = v10;
  v169 = v10;
  if ( !v10 )
  {
    v195 = 0LL;
    goto LABEL_459;
  }
  memcpy_0(v10, Src, cbSize + 18);
  v195 = v11;
  v12 = a4->cbSize;
  v13 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v12 + 18);
  v14 = v13;
  v197 = v13;
  if ( !v13 )
  {
    pv = 0LL;
LABEL_459:
    Lfx = -2147024882;
    goto LABEL_460;
  }
  memcpy_0(v13, a4, v12 + 18);
  pv = v14;
  if ( (v11->wBitsPerSample & 0xFFF8u) > 0x100 )
  {
    Lfx = -2004287480;
LABEL_460:
    v117 = v169;
    goto LABEL_270;
  }
  wFormatTag = v11->wFormatTag;
  LODWORD(v16) = 65534;
  if ( v11->wFormatTag == 0xFFFE )
    v165 = (v11[1].wFormatTag & 7) == 0;
  if ( wFormatTag == 1 )
  {
    v11->wFormatTag = 3;
LABEL_276:
    v11->wBitsPerSample = 32;
    v130 = (unsigned __int16)(4 * v11->nChannels);
    v11->nBlockAlign = v130;
    v11->nAvgBytesPerSec = v130 * v11->nSamplesPerSec;
    goto LABEL_11;
  }
  if ( wFormatTag == 0xFFFE )
  {
    v17 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&v11[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v11[1].nSamplesPerSec + 2) )
      v17 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v11[1].wBitsPerSample;
    if ( !v17 && (v11[1].wFormatTag & 7) == 0 )
    {
      *(GUID *)((char *)&v11[1].nSamplesPerSec + 2) = GUID_00000003_0000_0010_8000_00aa00389b71;
      v11[1].wFormatTag = 32;
      goto LABEL_276;
    }
  }
LABEL_11:
  if ( v14->wFormatTag == 1 )
  {
    v14->wFormatTag = 3;
    goto LABEL_283;
  }
  if ( v14->wFormatTag == 0xFFFE )
  {
    v18 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&v14[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v14[1].nSamplesPerSec + 2) )
      v18 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v14[1].wBitsPerSample;
    if ( !v18 && (v14[1].wFormatTag & 7) == 0 )
    {
      *(GUID *)((char *)&v14[1].nSamplesPerSec + 2) = GUID_00000003_0000_0010_8000_00aa00389b71;
      v14[1].wFormatTag = 32;
LABEL_283:
      v14->wBitsPerSample = 32;
      v131 = (unsigned __int16)(4 * v14->nChannels);
      v14->nBlockAlign = v131;
      v14->nAvgBytesPerSec = v131 * v14->nSamplesPerSec;
    }
  }
  v19 = v7;
  v188 = v7;
  if ( v7 >= *((_QWORD *)v8 + 207) )
  {
    v162 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v230,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v162);
  }
  v20 = *((_QWORD *)v8 + 208) + 96 * v7;
  if ( *(_BYTE *)(v20 + 52) )
  {
    v21 = (struct _RTL_CRITICAL_SECTION *)(v20 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v20 + 56));
    v219 = v20 + 56;
    v22 = 0LL;
    v176 = 0LL;
    v23 = 0LL;
    v177 = 0LL;
    v24 = 0;
    v25 = 0;
    if ( *(int *)(v20 + 40) > 0 )
    {
      v26 = 0LL;
      while ( 1 )
      {
        if ( v26 < 0 || v25 >= *(_DWORD *)(v20 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
          __debugbreak();
        }
        v27 = *(_QWORD *)(v20 + 32);
        if ( (_DWORD)v23 == v24 )
        {
          if ( v24 )
          {
            v24 = 2 * (_DWORD)v23;
            if ( ((unsigned int)v23 & 0x40000000) != 0 )
              goto LABEL_285;
          }
          else
          {
            v24 = 1;
          }
          if ( (unsigned __int64)v24 > 0x7FFFFFF
            || (v28 = _o__recalloc(v22, v24, 16LL), (v22 = (volatile signed __int32 **)v28) == 0LL) )
          {
LABEL_285:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F6,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)v163);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v176);
            if ( v20 != -56 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v20 + 56));
            Lfx = 0;
            goto LABEL_49;
          }
          HIDWORD(v177) = v24;
          v176 = (volatile signed __int32 **)v28;
        }
        v29 = &v22[2 * (int)v23];
        if ( v29 )
        {
          *v29 = 0LL;
          v29[1] = 0LL;
          v30 = *(_QWORD *)(v26 + v27 + 8);
          if ( v30 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
            v24 = HIDWORD(v177);
            LODWORD(v23) = v177;
            v22 = v176;
          }
          *v29 = *(volatile signed __int32 **)(v26 + v27);
          v29[1] = *(volatile signed __int32 **)(v26 + v27 + 8);
        }
        v23 = (volatile signed __int32 *)(unsigned int)((_DWORD)v23 + 1);
        LODWORD(v177) = (_DWORD)v23;
        ++v25;
        v26 += 16LL;
        if ( v25 >= *(_DWORD *)(v20 + 40) )
        {
          v21 = (struct _RTL_CRITICAL_SECTION *)(v20 + 56);
          break;
        }
      }
    }
    Lfx = 0;
    v32 = 0;
    if ( (int)v23 <= 0 )
    {
LABEL_39:
      if ( v22 )
      {
        if ( (int)v23 > 0 )
        {
          ++v22;
          v20 = (unsigned int)v23;
          do
          {
            v23 = *v22;
            if ( *v22 && _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_294:
              (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v23);
            }
            v22 += 2;
            --v20;
          }
          while ( v20 );
          v22 = v176;
        }
        free(v22);
        v176 = 0LL;
      }
      v177 = 0LL;
      if ( v21 )
LABEL_48:
        LeaveCriticalSection(v21);
    }
    else
    {
      v33 = v22;
      while ( 1 )
      {
        if ( v32 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
          goto LABEL_294;
        }
        if ( *((_BYTE *)*v33 + 20) )
        {
          v132 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   &v176,
                                                   (unsigned int)v32);
          v133 = SystemEffectChainDescriptor::Resolve(*v132, (struct SystemEffectDescriptor *)v20);
          if ( v133 < 0 )
            break;
        }
        ++v32;
        v33 += 2;
        if ( v32 >= (int)v23 )
          goto LABEL_39;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v133,
        (int)v163);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v176);
      if ( v21 )
        goto LABEL_48;
    }
LABEL_49:
    v19 = v188;
    v8 = a1;
  }
  else
  {
    Lfx = 0;
  }
  if ( v19 >= *((_QWORD *)v8 + 209) )
  {
    v161 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v229,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v161);
  }
  v34 = *((_QWORD *)v8 + 210) + 96 * v19;
  if ( !*(_BYTE *)(v34 + 52) )
    goto LABEL_58;
  v35 = (struct _RTL_CRITICAL_SECTION *)(v34 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(v34 + 56));
  v210 = v34 + 56;
  v36 = 0LL;
  v183 = 0LL;
  v37 = 0LL;
  v184 = 0LL;
  v38 = 0;
  if ( *(int *)(v34 + 40) > 0 )
  {
    while ( 1 )
    {
      v134 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v34 + 32, v38);
      if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                            &v183,
                            v134) )
        break;
      if ( (signed int)++v38 >= *(_DWORD *)(v34 + 40) )
      {
        v37 = (unsigned int)v184;
        v36 = v183;
        goto LABEL_53;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F6,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      (int)v163);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v183);
    if ( v34 == -56 )
      goto LABEL_57;
  }
  else
  {
LABEL_53:
    v39 = 0;
    if ( (int)v37 > 0 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v183, v39)
                      + 20LL) )
        {
          v135 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   &v183,
                                                   v39);
          v136 = SystemEffectChainDescriptor::Resolve(*v135, (struct SystemEffectDescriptor *)v34);
          if ( v136 < 0 )
            break;
        }
        if ( (int)++v39 >= (int)v37 )
          goto LABEL_54;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v136,
        (int)v163);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v183);
      if ( v34 == -56 )
        goto LABEL_57;
    }
    else
    {
LABEL_54:
      if ( v36 )
      {
        if ( (int)v37 > 0 )
        {
          v137 = v36;
          do
          {
            std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v137);
            v137 += 16;
            --v37;
          }
          while ( v37 );
        }
        free(v36);
        v183 = 0LL;
      }
      v184 = 0LL;
      if ( !v35 )
        goto LABEL_57;
    }
  }
  LeaveCriticalSection(v35);
LABEL_57:
  v8 = a1;
LABEL_58:
  if ( v19 >= *((_QWORD *)v8 + 211) )
  {
    v160 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v228,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v160);
  }
  v40 = *((_QWORD *)v8 + 212) + 96 * v19;
  if ( *(_BYTE *)(v40 + 52) )
  {
    v41 = (struct _RTL_CRITICAL_SECTION *)(v40 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v40 + 56));
    v209 = v40 + 56;
    v42 = 0LL;
    v174 = 0LL;
    v43 = 0LL;
    v175 = 0LL;
    v44 = 0;
    if ( *(int *)(v40 + 40) > 0 )
    {
      v45 = 0LL;
      while ( 1 )
      {
        if ( v45 < 0 || Lfx >= *(_DWORD *)(v40 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
          __debugbreak();
        }
        v46 = *(_QWORD *)(v40 + 32);
        if ( (_DWORD)v43 == v44 )
        {
          if ( v44 )
          {
            v44 = 2 * (_DWORD)v43;
            if ( ((unsigned int)v43 & 0x40000000) != 0 )
              goto LABEL_312;
          }
          else
          {
            v44 = 1;
          }
          if ( (unsigned __int64)v44 > 0x7FFFFFF
            || (v47 = _o__recalloc(v42, v44, 16LL), (v42 = (volatile signed __int32 **)v47) == 0LL) )
          {
LABEL_312:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F6,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)v163);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v174);
            if ( v40 != -56 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v40 + 56));
            Lfx = 0;
            goto LABEL_91;
          }
          HIDWORD(v175) = v44;
          v174 = (volatile signed __int32 **)v47;
        }
        v48 = &v42[2 * (int)v43];
        if ( v48 )
        {
          *v48 = 0LL;
          v48[1] = 0LL;
          v49 = *(_QWORD *)(v45 + v46 + 8);
          if ( v49 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v49 + 8));
            v44 = HIDWORD(v175);
            LODWORD(v43) = v175;
            v42 = v174;
          }
          *v48 = *(volatile signed __int32 **)(v45 + v46);
          v48[1] = *(volatile signed __int32 **)(v45 + v46 + 8);
        }
        v43 = (volatile signed __int32 *)(unsigned int)((_DWORD)v43 + 1);
        LODWORD(v175) = (_DWORD)v43;
        ++Lfx;
        v45 += 16LL;
        if ( Lfx >= *(_DWORD *)(v40 + 40) )
        {
          v41 = (struct _RTL_CRITICAL_SECTION *)(v40 + 56);
          break;
        }
      }
    }
    Lfx = 0;
    v50 = 0LL;
    if ( (int)v43 <= 0 )
    {
LABEL_81:
      if ( v42 )
      {
        if ( (int)v43 > 0 )
        {
          ++v42;
          v50 = (unsigned int)v43;
          do
          {
            v43 = *v42;
            if ( *v42 && _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_321:
              (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v43);
            }
            v42 += 2;
            --v50;
          }
          while ( v50 );
          v42 = v174;
          v41 = (struct _RTL_CRITICAL_SECTION *)(v40 + 56);
        }
        free(v42);
        v174 = 0LL;
      }
      v175 = 0LL;
      if ( v41 )
LABEL_90:
        LeaveCriticalSection(v41);
    }
    else
    {
      v51 = v42;
      while ( 1 )
      {
        if ( (int)v50 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
          goto LABEL_321;
        }
        if ( *((_BYTE *)*v51 + 20) )
        {
          v138 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   &v174,
                                                   (unsigned int)v50);
          v139 = SystemEffectChainDescriptor::Resolve(*v138, (struct SystemEffectDescriptor *)v40);
          if ( v139 < 0 )
            break;
        }
        v50 = (unsigned int)(v50 + 1);
        v51 += 2;
        if ( (int)v50 >= (int)v43 )
          goto LABEL_81;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v139,
        (int)v163);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v174);
      if ( v41 )
        goto LABEL_90;
    }
LABEL_91:
    v19 = v188;
    v8 = a1;
  }
  if ( v19 >= *((_QWORD *)v8 + 8) )
  {
    v159 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v227,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v159);
  }
  if ( !*(_DWORD *)(*((_QWORD *)v8 + 9) + 4 * v19) )
  {
    v115 = a3;
    Lfx = CEndpointCharacteristics::GetLfx(
            v8,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
            0LL,
            &v167,
            v163);
    goto LABEL_242;
  }
  v185 = 0;
  v167 = 0LL;
  if ( v19 >= *((_QWORD *)v8 + 207) )
  {
    v158 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v226,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v158);
  }
  v52 = *((_QWORD *)v8 + 208) + 96 * v19;
  if ( !*(_BYTE *)(v52 + 52) )
    goto LABEL_127;
  EnterCriticalSection((LPCRITICAL_SECTION)(v52 + 56));
  v208 = v52 + 56;
  v53 = 0LL;
  v172 = 0LL;
  v54 = 0LL;
  v173 = 0LL;
  v55 = 0;
  v56 = 0;
  if ( *(int *)(v52 + 40) <= 0 )
  {
LABEL_111:
    v61 = 0LL;
    if ( (int)v54 <= 0 )
    {
LABEL_116:
      if ( v53 )
      {
        if ( (int)v54 > 0 )
        {
          v61 = (volatile signed __int32 **)(v53 + 8);
          v53 = (unsigned int)v54;
          do
          {
            v54 = *v61;
            if ( *v61 && _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_331:
              (**(void (__fastcall ***)(volatile signed __int32 *))v54)(v54);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v54);
            }
            v61 += 2;
            --v53;
          }
          while ( v53 );
          v53 = v172;
          Lfx = v185;
        }
        free((void *)v53);
        v172 = 0LL;
      }
      v173 = 0LL;
      v63 = (struct _RTL_CRITICAL_SECTION *)(v52 + 56);
      if ( v52 == -56 )
        goto LABEL_126;
    }
    else
    {
      v62 = v53;
      while ( 1 )
      {
        if ( (int)v61 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
          goto LABEL_331;
        }
        if ( *(_BYTE *)(*(_QWORD *)v62 + 20LL) )
        {
          v140 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   &v172,
                                                   (unsigned int)v61);
          v141 = SystemEffectChainDescriptor::Resolve(*v140, (struct SystemEffectDescriptor *)v52);
          if ( v141 < 0 )
            break;
        }
        v61 = (volatile signed __int32 **)(unsigned int)((_DWORD)v61 + 1);
        v62 += 16LL;
        if ( (int)v61 >= (int)v54 )
          goto LABEL_116;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v141,
        (int)v163);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v172);
      v63 = (struct _RTL_CRITICAL_SECTION *)(v52 + 56);
      if ( v52 == -56 )
        goto LABEL_126;
    }
LABEL_125:
    LeaveCriticalSection(v63);
    goto LABEL_126;
  }
  v57 = 0LL;
  while ( 1 )
  {
    if ( v57 < 0 || v56 >= *(_DWORD *)(v52 + 40) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
      __debugbreak();
    }
    v16 = *(__int64 **)(v52 + 32);
    *(_QWORD *)v196 = v16;
    if ( (_DWORD)v54 != v55 )
      goto LABEL_106;
    if ( v55 )
    {
      v55 = 2 * (_DWORD)v54;
      if ( ((unsigned int)v54 & 0x40000000) != 0 )
        break;
    }
    else
    {
      v55 = 1;
    }
    if ( (unsigned __int64)v55 > 0x7FFFFFF )
      break;
    v58 = _o__recalloc(v53, v55, 16LL);
    v53 = v58;
    if ( !v58 )
      break;
    HIDWORD(v173) = v55;
    v172 = v58;
    v16 = *(__int64 **)v196;
LABEL_106:
    v59 = (_QWORD *)(v53 + 16LL * (int)v54);
    if ( v59 )
    {
      *v59 = 0LL;
      v59[1] = 0LL;
      v60 = v16[v57 + 1];
      if ( v60 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v60 + 8));
        v55 = HIDWORD(v173);
        LODWORD(v54) = v173;
        v53 = v172;
      }
      *v59 = v16[v57];
      v59[1] = v16[v57 + 1];
    }
    v54 = (volatile signed __int32 *)(unsigned int)((_DWORD)v54 + 1);
    LODWORD(v173) = (_DWORD)v54;
    ++v56;
    v57 += 2LL;
    if ( v56 >= *(_DWORD *)(v52 + 40) )
      goto LABEL_111;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F6,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    (int)v163);
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v172);
  v63 = (struct _RTL_CRITICAL_SECTION *)(v52 + 56);
  if ( v52 != -56 )
    goto LABEL_125;
LABEL_126:
  v19 = v188;
  v8 = a1;
LABEL_127:
  if ( v19 >= *((_QWORD *)v8 + 209) )
  {
    v157 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v225,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v157);
  }
  v64 = *((_QWORD *)v8 + 210) + 96 * v19;
  if ( !*(_BYTE *)(v64 + 52) )
    goto LABEL_135;
  v65 = (struct _RTL_CRITICAL_SECTION *)(v64 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(v64 + 56));
  v220 = v64 + 56;
  v66 = 0LL;
  v181 = 0LL;
  v67 = 0LL;
  v182 = 0LL;
  v68 = 0;
  if ( *(int *)(v64 + 40) > 0 )
  {
    while ( 1 )
    {
      v142 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v64 + 32, v68);
      if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                            &v181,
                            v142) )
        break;
      if ( (signed int)++v68 >= *(_DWORD *)(v64 + 40) )
      {
        v67 = (unsigned int)v182;
        v66 = v181;
        goto LABEL_130;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F6,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      (int)v163);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v181);
    if ( v64 == -56 )
      goto LABEL_134;
LABEL_133:
    LeaveCriticalSection(v65);
    goto LABEL_134;
  }
LABEL_130:
  v69 = 0;
  if ( (int)v67 > 0 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v181, v69)
                    + 20LL) )
      {
        v143 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 &v181,
                                                 v69);
        v144 = SystemEffectChainDescriptor::Resolve(*v143, (struct SystemEffectDescriptor *)v64);
        if ( v144 < 0 )
          break;
      }
      if ( (int)++v69 >= (int)v67 )
        goto LABEL_131;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v144,
      (int)v163);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v181);
    if ( v64 == -56 )
      goto LABEL_134;
    goto LABEL_133;
  }
LABEL_131:
  if ( v66 )
  {
    if ( (int)v67 > 0 )
    {
      v145 = v66;
      do
      {
        std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v145);
        v145 += 16;
        --v67;
      }
      while ( v67 );
    }
    free(v66);
    v181 = 0LL;
  }
  v182 = 0LL;
  if ( v65 )
    goto LABEL_133;
LABEL_134:
  v8 = a1;
LABEL_135:
  if ( v19 >= *((_QWORD *)v8 + 211) )
  {
    v156 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v224,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v156);
  }
  v70 = *((_QWORD *)v8 + 212) + 96 * v19;
  if ( *(_BYTE *)(v70 + 52) )
  {
    lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)(v70 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v70 + 56));
    v213 = v70 + 56;
    v71 = 0LL;
    v170 = 0LL;
    v72 = 0LL;
    v171 = 0LL;
    v73 = 0;
    v74 = 0;
    if ( *(int *)(v70 + 40) > 0 )
    {
      v75 = 0LL;
      do
      {
        if ( v75 < 0 || v74 >= *(_DWORD *)(v70 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
          __debugbreak();
        }
        v16 = *(__int64 **)(v70 + 32);
        *(_QWORD *)v196 = v16;
        if ( (_DWORD)v72 == v73 )
        {
          if ( v73 )
          {
            v73 = 2 * v72;
            if ( (v72 & 0x40000000) != 0 )
              goto LABEL_348;
          }
          else
          {
            v73 = 1;
          }
          if ( (unsigned __int64)v73 > 0x7FFFFFF
            || (v76 = _o__recalloc(v71, v73, 16LL), (v71 = (volatile signed __int32 *)v76) == 0LL) )
          {
LABEL_348:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F6,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)v163);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v170);
            goto LABEL_350;
          }
          HIDWORD(v171) = v73;
          v170 = (volatile signed __int32 *)v76;
          v16 = *(__int64 **)v196;
        }
        v77 = &v71[4 * (int)v72];
        if ( v77 )
        {
          *(_QWORD *)v77 = 0LL;
          *((_QWORD *)v77 + 1) = 0LL;
          v78 = v16[v75 + 1];
          if ( v78 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v78 + 8));
            v73 = HIDWORD(v171);
            LODWORD(v72) = v171;
            v71 = v170;
          }
          *(_QWORD *)v77 = v16[v75];
          *((_QWORD *)v77 + 1) = v16[v75 + 1];
        }
        v72 = (unsigned int)(v72 + 1);
        LODWORD(v171) = v72;
        ++v74;
        v75 += 2LL;
      }
      while ( v74 < *(_DWORD *)(v70 + 40) );
    }
    v79 = 0LL;
    if ( (int)v72 <= 0 )
    {
LABEL_157:
      if ( v71 )
      {
        if ( (int)v72 > 0 )
        {
          v79 = (volatile signed __int32 **)(v71 + 2);
          do
          {
            v71 = *v79;
            if ( *v79 && _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_357:
              (**(void (__fastcall ***)(volatile signed __int32 *))v71)(v71);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v71);
            }
            v79 += 2;
            --v72;
          }
          while ( v72 );
          v71 = v170;
          Lfx = v185;
        }
        free((void *)v71);
        v170 = 0LL;
      }
      v171 = 0LL;
      if ( v70 != -56 )
        LeaveCriticalSection(lpCriticalSection);
    }
    else
    {
      v80 = v71;
      while ( 1 )
      {
        if ( (int)v79 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
          goto LABEL_357;
        }
        if ( *(_BYTE *)(*(_QWORD *)v80 + 20LL) )
        {
          v146 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   &v170,
                                                   (unsigned int)v79);
          v147 = SystemEffectChainDescriptor::Resolve(*v146, (struct SystemEffectDescriptor *)v70);
          if ( v147 < 0 )
            break;
        }
        v79 = (volatile signed __int32 **)(unsigned int)((_DWORD)v79 + 1);
        v80 += 4;
        if ( (int)v79 >= (int)v72 )
          goto LABEL_157;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v147,
        (int)v163);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v170);
LABEL_350:
      if ( v70 != -56 )
        LeaveCriticalSection(lpCriticalSection);
    }
    v19 = v188;
    v8 = a1;
  }
  if ( v19 >= *((_QWORD *)v8 + 8) )
  {
    v155 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v223,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v155);
  }
  if ( !*(_DWORD *)(*((_QWORD *)v8 + 9) + 4 * v19) )
    goto LABEL_241;
  v81 = 1;
  v82 = *((_QWORD *)v8 + 10);
  if ( !v82 )
    goto LABEL_175;
  *(_OWORD *)pvar = 0LL;
  v205 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v82 + 40LL))(
         v82,
         &PKEY_AudioEndpoint_Disable_SysFx,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    v81 = LODWORD(pvar[1]) == 0;
  }
  PropVariantClear(pvar);
  if ( v81 || (v83 = 0, a3 == 3) )
LABEL_175:
    v83 = 1;
  v84 = a2;
  v85 = *a2;
  v214 = *a2;
  if ( v19 >= *((_QWORD *)v8 + 207) )
  {
    v154 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v222,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v154);
  }
  v86 = *((_QWORD *)v8 + 208);
  v87 = v86 + 96 * v19;
  if ( !v83 )
  {
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v86 + 96 * v19, &v214) != -1 )
      goto LABEL_201;
    goto LABEL_241;
  }
  v88 = *(_BYTE *)(v87 + 52) == 0;
  v215 = v85;
  v202 = v85;
  if ( v88 || (v89 = 0, *(int *)(v87 + 40) <= 0) )
  {
LABEL_186:
    v91 = 0;
    LODWORD(v92) = *(_DWORD *)(v87 + 40);
    if ( (int)v92 <= 0 )
      goto LABEL_373;
    v93 = 0LL;
    while ( 1 )
    {
      if ( v93 < 0 || v91 >= (int)v92 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
        goto LABEL_387;
      }
      v16 = *(__int64 **)(v93 + *(_QWORD *)(v87 + 32));
      v94 = 0;
      v95 = *((_DWORD *)v16 + 2);
      if ( v95 > 0 )
      {
        v96 = *v16;
        while ( 1 )
        {
          LODWORD(v16) = 2 * v94;
          v97 = *(_QWORD *)(v96 + 16LL * v94) - *(_QWORD *)&v202.Data1;
          if ( !v97 )
            v97 = *(_QWORD *)(v96 + 16LL * v94 + 8) - *(_QWORD *)v202.Data4;
          if ( !v97 )
            break;
          if ( ++v94 >= v95 )
            goto LABEL_383;
        }
        if ( v94 != -1 )
          break;
      }
LABEL_383:
      ++v91;
      v93 += 16LL;
      if ( v91 >= (int)v92 )
        goto LABEL_373;
    }
    if ( v91 == -1 )
      goto LABEL_373;
    if ( v91 < 0 || v91 >= (int)v92 )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
      __debugbreak();
    }
    v98 = *(_QWORD *)(*(_QWORD *)(v87 + 32) + 16LL * v91);
  }
  else
  {
    v90 = 0LL;
    while ( 1 )
    {
      if ( v89 < 0 || v89 >= *(_DWORD *)(v87 + 40) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
        __debugbreak();
      }
      if ( *(_BYTE *)(*(_QWORD *)(v90 + *(_QWORD *)(v87 + 32)) + 20LL) )
      {
        v148 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           v87 + 32,
                           (unsigned int)v89);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v148, &v202) != -1 )
          break;
      }
      ++v89;
      v90 += 16LL;
      if ( v89 >= *(_DWORD *)(v87 + 40) )
        goto LABEL_185;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(v87 + 56));
    v211 = v87 + 56;
    v149 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                       v87 + 32,
                       (unsigned int)v89);
    v206 = 0LL;
    v150 = (volatile signed __int32 *)v149[1];
    if ( v150 )
    {
      _InterlockedIncrement(v150 + 2);
      v150 = (volatile signed __int32 *)v149[1];
    }
    *(_QWORD *)&v206 = *v149;
    *((_QWORD *)&v206 + 1) = v150;
    if ( (int)SystemEffectChainDescriptor::Resolve(
                (SystemEffectChainDescriptor *)v206,
                (struct SystemEffectDescriptor *)v87) >= 0 )
    {
      if ( v150 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v150);
      if ( v87 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v87 + 56));
LABEL_185:
      v84 = a2;
      goto LABEL_186;
    }
    if ( v150 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v150);
    if ( v87 != -56 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v87 + 56));
    v84 = a2;
LABEL_373:
    if ( !*(_QWORD *)(v87 + 16)
      || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*(_QWORD *)(v87 + 16), &v215) == -1 )
    {
      v98 = 0LL;
    }
  }
  if ( !v98 )
    goto LABEL_241;
LABEL_201:
  if ( v19 >= *((_QWORD *)v8 + 207) )
  {
    v153 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v221,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v153);
  }
  v99 = *((_QWORD *)v8 + 208);
  v179 = 0LL;
  v167 = 0LL;
  v87 = v99 + 96 * v19;
  if ( !v87 )
    goto LABEL_238;
  v178 = 0LL;
  v216 = *v84;
  v203 = v216;
  v92 = 0LL;
  v100 = *(_DWORD *)(v87 + 40);
  if ( v100 > 0 )
  {
    v84 = 0LL;
    while ( 1 )
    {
      if ( (int)v92 < 0 || (int)v92 >= *(_DWORD *)(v87 + 40) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
        __debugbreak();
      }
      if ( *(_BYTE *)(*(_QWORD *)((char *)&v84->Data1 + *(_QWORD *)(v87 + 32)) + 20LL) )
      {
LABEL_387:
        v151 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           v87 + 32,
                           (unsigned int)v92);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v151, &v203) != -1 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(v87 + 56));
          v212 = v87 + 56;
          v152 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             v87 + 32,
                             (unsigned int)v92);
          v207 = 0LL;
          v92 = v152[1];
          if ( v92 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v92 + 8));
            v92 = v152[1];
          }
          *(_QWORD *)&v207 = *v152;
          *((_QWORD *)&v207 + 1) = v92;
          if ( (int)SystemEffectChainDescriptor::Resolve(
                      (SystemEffectChainDescriptor *)v207,
                      (struct SystemEffectDescriptor *)v87) >= 0 )
          {
            if ( v92 )
              std::_Ref_count_base::_Decref((std::_Ref_count_base *)v92);
            if ( v87 != -56 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v87 + 56));
            v100 = *(_DWORD *)(v87 + 40);
LABEL_209:
            v84 = a2;
            break;
          }
          if ( v92 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v92);
          if ( v87 != -56 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v87 + 56));
          v84 = a2;
LABEL_396:
          v92 = *(_QWORD *)(v87 + 16);
          if ( !v92
            || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               *(_QWORD *)(v87 + 16),
                               &v216) == -1 )
          {
            v92 = 0LL;
          }
          goto LABEL_224;
        }
      }
      v92 = (unsigned int)(v92 + 1);
      ++v84;
      v100 = *(_DWORD *)(v87 + 40);
      if ( (int)v92 >= v100 )
        goto LABEL_209;
    }
  }
  v101 = 0;
  if ( v100 <= 0 )
    goto LABEL_396;
  v102 = 0LL;
  while ( 1 )
  {
    if ( v102 < 0 || v101 >= *(_DWORD *)(v87 + 40) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
      goto LABEL_410;
    }
    v16 = *(__int64 **)(v102 + *(_QWORD *)(v87 + 32));
    v103 = 0;
    v104 = *((_DWORD *)v16 + 2);
    if ( v104 > 0 )
    {
      v105 = *v16;
      while ( 1 )
      {
        LODWORD(v16) = 2 * v103;
        v106 = *(_QWORD *)(v105 + 16LL * v103) - *(_QWORD *)&v203.Data1;
        if ( !v106 )
          v106 = *(_QWORD *)(v105 + 16LL * v103 + 8) - *(_QWORD *)v203.Data4;
        if ( !v106 )
          break;
        if ( ++v103 >= v104 )
          goto LABEL_406;
      }
      if ( v103 != -1 )
        break;
    }
LABEL_406:
    ++v101;
    v102 += 16LL;
    if ( v101 >= *(_DWORD *)(v87 + 40) )
      goto LABEL_396;
  }
  if ( v101 == -1 )
    goto LABEL_396;
  if ( v101 < 0 || v101 >= *(_DWORD *)(v87 + 40) )
  {
    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
    __debugbreak();
  }
  v92 = *(_QWORD *)(*(_QWORD *)(v87 + 32) + 16LL * v101);
LABEL_224:
  v107 = 0;
  v108 = 0LL;
  v178 = 0LL;
  if ( !v92 )
    goto LABEL_233;
  v107 = *(_DWORD *)(v92 + 48);
  v109 = v107 == 0;
  if ( v107 <= 0 )
    goto LABEL_234;
  v186 = 0LL;
  v110 = *(int *)(v92 + 48);
  if ( !*(_DWORD *)(v92 + 48) )
  {
LABEL_410:
    LODWORD(v112) = 0;
LABEL_231:
    v113 = CoTaskMemAlloc((unsigned int)v112);
    v108 = v113;
    v186 = v113;
    if ( !v113 )
      goto LABEL_412;
    memcpy_0(v113, *(const void **)(v92 + 40), 16LL * *(int *)(v92 + 48));
    v186 = 0LL;
    v178 = v108;
    CoTaskMemFree(0LL);
    v186 = 0LL;
    v107 = *(_DWORD *)(v92 + 48);
LABEL_233:
    v109 = v107 == 0;
LABEL_234:
    if ( !v109 )
    {
      v193 = 0;
      v201 = v108;
      v191 = v107;
      v192 = *((_DWORD *)v8 + 47);
      v194 = 1;
      v114 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
               &v179,
               &v194,
               &v193,
               &v192);
      Lfx = v114;
      if ( v114 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4B3,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v114,
          (int)&v191);
        CoTaskMemFree(v108);
        v178 = 0LL;
        ATL::CComPtr<ICompositeSystemEffect>::~CComPtr<ICompositeSystemEffect>(&v179);
        goto LABEL_241;
      }
      v217 = *v84;
      v115 = a3;
      v116 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _GUID *, _QWORD))(*(_QWORD *)v179 + 24LL))(
               v179,
               *((_QWORD *)v8 + 2),
               &v217,
               0LL);
      Lfx = v116;
      if ( v116 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4B7,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v116,
          a3);
        CoTaskMemFree(v108);
        v178 = 0LL;
        ATL::CComPtr<ICompositeSystemEffect>::~CComPtr<ICompositeSystemEffect>(&v179);
        goto LABEL_242;
      }
    }
    CoTaskMemFree(v108);
    v178 = 0LL;
LABEL_238:
    if ( v179 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v179 + 16LL))(v179);
    Lfx = 0;
    goto LABEL_241;
  }
  v111 = -1LL;
  if ( v110 != 1 )
    v111 = 0xFFFFFFFFFFFFFFFFuLL / v110;
  if ( v111 >= 0x10 )
  {
    v112 = 16 * v110;
    if ( v112 <= 0x7FFFFFFF )
      goto LABEL_231;
    v108 = 0LL;
    v186 = 0LL;
  }
LABEL_412:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x272,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    (int)v163);
  CoTaskMemFree(v108);
  v186 = 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4A9,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8007000ELL,
    v164);
  CoTaskMemFree(0LL);
  v178 = 0LL;
  ATL::CComPtr<ICompositeSystemEffect>::~CComPtr<ICompositeSystemEffect>(&v179);
  Lfx = -2147024882;
LABEL_241:
  v115 = a3;
LABEL_242:
  if ( Lfx < 0 )
    goto LABEL_460;
  if ( !v167 )
  {
    v117 = v169;
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(v169) )
    {
      Lfx = -2004287480;
    }
    else
    {
      if ( v117->nSamplesPerSec != v197->nSamplesPerSec
        || v117->nChannels != v197->nChannels
        || !v165
        || (unsigned int)ValidateWaveFormatEx(Src) )
      {
        Lfx = 1;
        goto LABEL_257;
      }
      Lfx = 0;
    }
    goto LABEL_270;
  }
  v187 = 0LL;
  v189 = 0LL;
  v180 = 0LL;
  Lfx = CAudioMediaType::Create(v197, (unsigned int)v197->cbSize + 18, &v187, 0.0, 0);
  if ( Lfx < 0 )
  {
    if ( v180 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v180 + 16LL))(v180);
    if ( v187 )
      ((void (__fastcall *)(struct IAudioMediaType *))v187->lpVtbl->Release)(v187);
    goto LABEL_460;
  }
  v117 = v169;
  Lfx = CAudioMediaType::Create(v169, (unsigned int)v169->cbSize + 18, &v189, 0.0, 0);
  if ( Lfx < 0 )
  {
    if ( v180 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v180 + 16LL))(v180);
    if ( v189 )
      ((void (__fastcall *)(struct IAudioMediaType *))v189->lpVtbl->Release)(v189);
    if ( v187 )
      ((void (__fastcall *)(struct IAudioMediaType *))v187->lpVtbl->Release)(v187);
  }
  else
  {
    v118 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v8 + 56LL))(v8);
    v119 = v189;
    v120 = v187;
    v109 = v118 == 0;
    lpVtbl = v167->lpVtbl;
    if ( v109 )
      v122 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))lpVtbl->IsInputFormatSupported)(
               v167,
               v187,
               v189,
               &v180);
    else
      v122 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))lpVtbl->IsOutputFormatSupported)(
               v167,
               v187,
               v189,
               &v180);
    Lfx = v122;
    if ( v122 < 0 )
    {
      if ( v180 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v180 + 16LL))(v180);
      if ( v119 )
        ((void (__fastcall *)(struct IAudioMediaType *))v119->lpVtbl->Release)(v119);
      if ( v120 )
        ((void (__fastcall *)(struct IAudioMediaType *))v120->lpVtbl->Release)(v120);
    }
    else
    {
      if ( v122 == 1 || (unsigned int)ValidateWaveFormatEx(Src) )
        Lfx = 1;
      if ( v180 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v180 + 16LL))(v180);
      if ( v119 )
        ((void (__fastcall *)(struct IAudioMediaType *))v119->lpVtbl->Release)(v119);
      if ( v120 )
        ((void (__fastcall *)(struct IAudioMediaType *))v120->lpVtbl->Release)(v120);
LABEL_257:
      if ( a6 && Lfx )
      {
        v168 = 0LL;
        v198 = &v168;
        v199 = 0LL;
        v200 = 1;
        v218 = *a2;
        v123 = (int)CEndpointCharacteristics::TryGetOverridingMixFormat(v8, v115, &v218, &v199) >= 0 && v168;
        if ( v200 )
        {
          v124 = *v198;
          *v198 = v199;
          if ( v124 )
            CoTaskMemFree(v124);
        }
        if ( v123 )
          v125 = (const struct tWAVEFORMATEX *)v168;
        else
          v125 = a4;
        v126 = v125->cbSize;
        v127 = (struct tWAVEFORMATEX *)operator new[](v126 + 18, (const struct std::nothrow_t *)&std::nothrow);
        *a6 = v127;
        if ( v127 )
        {
          memcpy_0(v127, v125, v126 + 18);
          Lfx = 1;
          v128 = v168;
          v168 = 0LL;
          if ( v128 )
            goto LABEL_269;
        }
        else
        {
          Lfx = -2147024882;
          v128 = v168;
          v168 = 0LL;
          if ( v128 )
LABEL_269:
            CoTaskMemFree(v128);
        }
      }
    }
  }
LABEL_270:
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v117);
  v195 = 0LL;
  if ( v167 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v167->lpVtbl->Release)(v167);
  return (unsigned int)Lfx;
}
