/*
 * XREFs of ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C012DF78
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C012C4A8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00099D0 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000ADD0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0010C44 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0011544 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C001168C (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C00116C4 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0011738 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00119BC (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00DFE28 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00E8A90 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012B788 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C012B8C0 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C012EBF8 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C012EDA4 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x1C02E49EC (-GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C02E4A6C (-IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
        VIDPN_MGR *this,
        __int64 a2,
        VIDPN_MGR **a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _DXGK_SET_TIMING_PATH_INFO **a6,
        unsigned int **a7,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a8,
        unsigned int **a9)
{
  __int64 v9; // rax
  struct D3DKMT_VIDPN_SOURCE_MASKS *v10; // rsi
  unsigned int v13; // ebx
  unsigned int *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  DMMVIDPNTOPOLOGY *v17; // rdi
  DMMVIDPNTOPOLOGY *v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  unsigned int v22; // eax
  unsigned __int64 v23; // r14
  SIZE_T v24; // rax
  unsigned __int64 v25; // kr00_8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _DXGK_SET_TIMING_PATH_INFO *v30; // r13
  SIZE_T v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _DWORD *v36; // rbx
  unsigned __int64 v37; // rdx
  struct DMMVIDPN *v38; // r11
  _QWORD *v39; // rax
  unsigned int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r14
  unsigned int v43; // eax
  __int64 v44; // r9
  int v45; // r15d
  int v46; // eax
  __int64 v47; // r12
  __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // r11
  __int64 v51; // rax
  UINT v52; // ebx
  bool v53; // di
  __int64 v54; // rax
  __int64 v55; // rax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v57; // r11d
  struct DMMVIDPNPRESENTPATH *v58; // r13
  UINT v59; // edi
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v64; // eax
  unsigned int v65; // edx
  char v66; // al
  unsigned __int8 v67; // al
  int v68; // r8d
  DXGADAPTER ***v69; // r14
  char v70; // r12
  char v71; // r8
  DMMVIDPNPRESENTPATH *v72; // r12
  int v73; // ecx
  int v74; // eax
  char v75; // bl
  int v76; // eax
  int v77; // eax
  _QWORD *v78; // rax
  _QWORD *v79; // rbx
  DMMVIDPNPRESENTPATH *v80; // rbx
  DMMVIDPNPRESENTPATH *v81; // r12
  __int64 v82; // r13
  __int64 v83; // rdi
  __int64 v84; // rdx
  __int64 v85; // rcx
  unsigned __int64 v86; // rax
  unsigned int v87; // r14d
  int v88; // r15d
  int v89; // eax
  int v90; // edx
  int v91; // ecx
  DMMVIDPNTOPOLOGY *v92; // rax
  DMMVIDPNTOPOLOGY *v93; // r12
  unsigned int v94; // edi
  unsigned int v95; // ebx
  __int64 v96; // r15
  __int64 v97; // rax
  int v98; // esi
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v100; // rdx
  __int64 v101; // rcx
  int v102; // r14d
  unsigned __int8 IsVidPnSourceActive; // al
  int v104; // r13d
  __int64 v105; // rcx
  unsigned int *v106; // r9
  UINT *p_InputFlags; // r8
  __int64 v108; // r10
  unsigned int v109; // ecx
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rcx
  unsigned int *v114; // rcx
  int v115; // eax
  unsigned int v116; // edx
  int v117; // r8d
  int v118; // edx
  int v119; // ecx
  struct DMMVIDPNPRESENTPATH *v121; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v122; // eax
  unsigned int v123; // edx
  char v124; // al
  struct _DXGK_SET_TIMING_PATH_INFO *v125; // r14
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v126; // edi
  __int64 v127; // rax
  __int64 v128; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v129; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v130; // eax
  DMMVIDEOPRESENTTARGET *v131; // r13
  unsigned int v132; // edx
  char v133; // al
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  unsigned int v138; // eax
  unsigned __int8 v139; // cl
  int v140; // ecx
  unsigned int v141; // edx
  char v142; // al
  int v143; // r12d
  int v144; // edi
  unsigned int v145; // ecx
  int NumPathsFromSource; // eax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rax
  unsigned int *v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  unsigned int *v155; // rdi
  __int64 i; // rcx
  __int64 v157; // rcx
  __int64 v158; // rdi
  __int64 v159; // rax
  _QWORD *v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rax
  int v164; // r9d
  int v165; // r10d
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  int v180; // [rsp+30h] [rbp-D0h]
  unsigned int v181; // [rsp+34h] [rbp-CCh]
  unsigned int v182; // [rsp+38h] [rbp-C8h]
  unsigned int v183; // [rsp+3Ch] [rbp-C4h]
  unsigned int v184; // [rsp+40h] [rbp-C0h]
  bool v185; // [rsp+44h] [rbp-BCh]
  int v186; // [rsp+48h] [rbp-B8h]
  struct _DXGK_SET_TIMING_PATH_INFO *v187; // [rsp+50h] [rbp-B0h]
  int v188; // [rsp+58h] [rbp-A8h]
  int v189; // [rsp+5Ch] [rbp-A4h]
  unsigned int v190; // [rsp+5Ch] [rbp-A4h]
  int v191; // [rsp+60h] [rbp-A0h]
  int v192; // [rsp+64h] [rbp-9Ch]
  int v193; // [rsp+68h] [rbp-98h]
  int v194; // [rsp+68h] [rbp-98h]
  int v195; // [rsp+6Ch] [rbp-94h]
  int v196; // [rsp+6Ch] [rbp-94h]
  int v197; // [rsp+70h] [rbp-90h]
  int v198; // [rsp+74h] [rbp-8Ch]
  int v199; // [rsp+78h] [rbp-88h]
  int v200; // [rsp+7Ch] [rbp-84h]
  DMMVIDPNPRESENTPATH *v201; // [rsp+80h] [rbp-80h]
  unsigned int v202; // [rsp+88h] [rbp-78h]
  int v203; // [rsp+8Ch] [rbp-74h]
  int v204; // [rsp+90h] [rbp-70h]
  int v205; // [rsp+94h] [rbp-6Ch]
  int v206; // [rsp+98h] [rbp-68h]
  unsigned int v207; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v208; // [rsp+A0h] [rbp-60h]
  __int64 v209; // [rsp+A8h] [rbp-58h]
  unsigned int *v210; // [rsp+B0h] [rbp-50h]
  unsigned int *v211; // [rsp+B8h] [rbp-48h]
  DMMVIDEOPRESENTTARGET *v212; // [rsp+C0h] [rbp-40h]
  __int64 v213; // [rsp+C8h] [rbp-38h]
  DMMVIDPNTOPOLOGY *v214; // [rsp+D0h] [rbp-30h]
  unsigned int v215; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v216; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v217; // [rsp+E8h] [rbp-18h] BYREF
  struct _D3DDDI_RATIONAL v218; // [rsp+F0h] [rbp-10h] BYREF
  DMMVIDPNTOPOLOGY *v219; // [rsp+F8h] [rbp-8h]
  int v220; // [rsp+100h] [rbp+0h]
  __int64 v221; // [rsp+108h] [rbp+8h] BYREF
  __int64 v222; // [rsp+110h] [rbp+10h] BYREF
  __int64 v223; // [rsp+118h] [rbp+18h] BYREF
  _QWORD *v224; // [rsp+120h] [rbp+20h]
  __int64 v225; // [rsp+128h] [rbp+28h] BYREF
  DMMVIDPNPRESENTPATH *v226[2]; // [rsp+130h] [rbp+30h]
  int Value; // [rsp+190h] [rbp+90h]
  int v229; // [rsp+198h] [rbp+98h]
  unsigned int *v231; // [rsp+1A8h] [rbp+A8h]

  v231 = a4;
  v229 = a2;
  v9 = *((_QWORD *)this + 1);
  v10 = a8;
  v184 = 0;
  v211 = 0LL;
  v182 = 0;
  v13 = 0;
  v202 = 0;
  v14 = 0LL;
  v189 = 0;
  v180 = 0;
  v188 = 0;
  v193 = 0;
  v183 = 0;
  v203 = 0;
  v200 = 0;
  v186 = 0;
  v195 = 0;
  v204 = 0;
  v198 = 0;
  v199 = 0;
  v197 = 0;
  v205 = 0;
  *(_OWORD *)v226 = 0LL;
  if ( !v9 )
  {
    v134 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v134);
    v9 = *((_QWORD *)this + 1);
    a4 = v231;
  }
  v209 = *(_QWORD *)(v9 + 16);
  if ( a3 && a3[6] != this )
  {
    v135 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v135 + 24) = a3;
    *(_QWORD *)(v135 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v135);
    return 3221225485LL;
  }
  v15 = *((_QWORD *)this + 11);
  if ( !v15 )
  {
    v221 = 0LL;
    goto LABEL_165;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
  v16 = *((_QWORD *)this + 11);
  v221 = v16;
  if ( !v16 )
  {
LABEL_165:
    v17 = 0LL;
    goto LABEL_8;
  }
  v17 = (DMMVIDPNTOPOLOGY *)(v16 + 96);
LABEL_8:
  v219 = v17;
  v18 = (DMMVIDPNTOPOLOGY *)((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL));
  LODWORD(v19) = 0;
  v214 = v18;
  if ( v17 )
    v19 = *((_QWORD *)v17 + 5);
  LODWORD(v20) = 0;
  if ( v18 )
    v20 = *(_QWORD *)(((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL)) + 0x28);
  v21 = (_DWORD)v19 + (_DWORD)v20 == 0;
  v22 = v19 + v20;
  v215 = v22;
  if ( v21 )
  {
    *a4 = 0;
    *a5 = 0;
    *a6 = 0LL;
    *a7 = 0LL;
    if ( a9 )
      *a9 = 0LL;
  }
  else
  {
    v23 = v22;
    v25 = v22;
    v24 = 56LL * v22;
    if ( !is_mul_ok(v25, 0x38uLL) )
      v24 = -1LL;
    v187 = (struct _DXGK_SET_TIMING_PATH_INFO *)operator new[](v24, 0x4E506456u, PagedPool);
    v30 = v187;
    if ( v187 )
    {
      v31 = 4 * v23;
      if ( !is_mul_ok(v23, 4uLL) )
        v31 = -1LL;
      v210 = (unsigned int *)operator new[](v31, 0x4E506456u, PagedPool);
      v36 = v210;
      if ( !v210 )
      {
        v13 = -1073741801;
        v137 = WdLogNewEntry5_WdLowResource(v33, v32, v34, v35);
        *(_QWORD *)(v137 + 24) = v23;
        *(_QWORD *)(v137 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v137);
        goto LABEL_146;
      }
      memset(v187, 0, 56 * v23);
      memset(v210, 0, 4LL * (unsigned int)v23);
      v38 = 0LL;
      if ( v17 )
      {
        v39 = (_QWORD *)*((_QWORD *)v17 + 3);
        v224 = (_QWORD *)((char *)v17 + 24);
        if ( v39 != (_QWORD *)((char *)v17 + 24) )
        {
          v37 = (unsigned __int64)(v39 - 1);
          v201 = (DMMVIDPNPRESENTPATH *)(v39 - 1);
          if ( v39 != (_QWORD *)8 )
          {
            v40 = 0;
            while ( 1 )
            {
              v220 = v186;
              v41 = v40;
              v42 = 56LL * v40;
              v43 = *(_DWORD *)(*(_QWORD *)(v37 + 88) + 24LL);
              v36[v41] = v43;
              v44 = *(_QWORD *)(v37 + 96);
              v45 = 1 << v43;
              v182 |= 1 << v43;
              v181 = v43;
              v46 = 1 << v43;
              v47 = *(_QWORD *)(v44 + 96);
              v208 = v42;
              v213 = v44;
              v212 = (DMMVIDEOPRESENTTARGET *)v47;
              if ( (*(_BYTE *)(v47 + 556) & 0x40) != 0 )
                v46 = 0;
              v198 |= v46;
              v197 |= *(_BYTE *)(*(_QWORD *)(v47 + 536) + 172LL) != 0 ? v45 : 0;
              v21 = (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v47, 0LL) == 13;
              v191 = 4;
              v51 = *(_QWORD *)(v49 + 104);
              v52 = v50;
              v53 = v21;
              v185 = v21;
              if ( v51 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v51 + 96));
                v54 = *(_QWORD *)(v49 + 104);
              }
              else
              {
                v54 = v50;
              }
              v222 = v54;
              v55 = *(_QWORD *)(v54 + 144);
              if ( v55 )
              {
                v52 = *(_DWORD *)(v55 + 132);
                v191 = *(_DWORD *)(v55 + 136);
              }
              auto_rc<DMMVIDPNTARGETMODESET>::reset(&v222, v48);
              if ( !v214 )
              {
                v122 = *(_DWORD *)(v213 + 24);
                *(UINT *)((char *)&v30->InputFlags + v42) &= 0xFFFFFFFC;
                *(D3DDDI_VIDEO_PRESENT_TARGET_ID *)((char *)&v30->VidPnTargetId + v42) = v122;
                *(UINT *)((char *)&v30->InputFlags + v42) ^= (*(UINT *)((char *)&v30->InputFlags + v42) ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v47))) & 4;
                v123 = *(UINT *)((_BYTE *)&v30->InputFlags + v42) & 0xFFFFFFF7 | (*(_BYTE *)(v47 + 415) == 0 ? 8 : 0);
                *(UINT *)((char *)&v30->InputFlags + v42) = v123;
                v124 = v123 ^ (16 * *(_BYTE *)(v47 + 416));
                *(D3DDDI_COLOR_SPACE_TYPE *)((char *)&v30->OutputColorSpace + v42) = v191;
                *(UINT *)((char *)&v30->SelectedWireFormat.Value + v42) = v52;
                *(UINT *)((char *)&v30->InputFlags + v42) = v123 ^ v124 & 0x10;
                if ( (DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v47) == 0) != (*(_BYTE *)(v47 + 418) == 0) )
                {
                  v186 |= v45;
                  v75 = v181;
                  if ( v53 )
                    *(UINT *)((char *)&v30->InputFlags + v42) = *(UINT *)((_BYTE *)&v30->InputFlags + v42) & 0xFFFFFFFC | 1;
                  goto LABEL_64;
                }
                if ( v53
                  || (v229 & 0x4000) != 0
                  || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v209 + 2672), v181)
                  || *(_BYTE *)(v47 + 414) )
                {
                  v180 |= v45;
                  *(UINT *)((char *)&v30->InputFlags + v42) = *(UINT *)((_BYTE *)&v30->InputFlags + v42) & 0xFFFFFFFC | (!v53 + 1);
                }
                goto LABEL_63;
              }
              v206 = !v53 + 1;
              PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v214, *(_DWORD *)(*((_QWORD *)v201 + 12) + 24LL));
              v192 = 4;
              v58 = PathFromTarget;
              v59 = 0;
              if ( PathFromTarget )
              {
                v60 = *((_QWORD *)PathFromTarget + 12);
                v61 = *(_QWORD *)(v60 + 104);
                if ( v61 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v61 + 96));
                  v62 = *(_QWORD *)(v60 + 104);
                }
                else
                {
                  v62 = 0LL;
                }
                v223 = v62;
                v63 = *(_QWORD *)(v62 + 144);
                if ( v63 )
                {
                  v59 = *(_DWORD *)(v63 + 132);
                  v192 = *(_DWORD *)(v63 + 136);
                }
                auto_rc<DMMVIDPNTARGETMODESET>::reset(&v223, 0LL);
                if ( *(_DWORD *)(*((_QWORD *)v58 + 11) + 24LL) == v181 )
                {
                  v64 = *(_DWORD *)(v213 + 24);
                  *(UINT *)((char *)&v187->InputFlags + v42) &= 0xFFFFFFFC;
                  *(D3DDDI_VIDEO_PRESENT_TARGET_ID *)((char *)&v187->VidPnTargetId + v42) = v64;
                  *(UINT *)((char *)&v187->InputFlags + v42) ^= (*(UINT *)((char *)&v187->InputFlags + v42) ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v47))) & 4;
                  v65 = *(UINT *)((_BYTE *)&v187->InputFlags + v42) & 0xFFFFFFF7 | (*(_BYTE *)(v47 + 415) == 0 ? 8 : 0);
                  *(UINT *)((char *)&v187->InputFlags + v42) = v65;
                  v66 = v65 ^ (16 * *(_BYTE *)(v47 + 416));
                  *(UINT *)((char *)&v187->SelectedWireFormat.Value + v42) = v59;
                  *(UINT *)((char *)&v187->InputFlags + v42) = v65 ^ v66 & 0x10;
                  *(D3DDDI_COLOR_SPACE_TYPE *)((char *)&v187->OutputColorSpace + v42) = v192;
                  if ( (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v47, 0LL) == 13 )
                    v180 |= v45;
                  v67 = DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v47);
                  v68 = v45 | v220;
                  if ( (v67 == 0) == (*(_BYTE *)(v47 + 418) == 0) )
                    v68 = v220;
                  v186 = v68;
                  if ( !*(_BYTE *)(v209 + 2505) || (v229 & 0x400000) == 0 )
                  {
                    v69 = (DXGADAPTER ***)(v209 + 2672);
                    if ( *(_BYTE *)(*(_QWORD *)(v209 + 2672) + 249LL) )
                      goto LABEL_43;
                    goto LABEL_161;
                  }
                  v69 = (DXGADAPTER ***)(v209 + 2672);
LABEL_43:
                  v70 = 1;
                  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*v69, v181) )
LABEL_161:
                    v70 = 0;
                  if ( v185
                    || (v229 & 0x4000) != 0
                    || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*v69, v181)
                    || *((_BYTE *)v212 + 414) )
                  {
                    v72 = v201;
                  }
                  else
                  {
                    v71 = v70;
                    v72 = v201;
                    if ( DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(v201, v58, v71) )
                    {
                      v73 = v191;
                      if ( v52 != v59 || v191 != v192 )
                        goto LABEL_180;
                      if ( *((_DWORD *)v201 + 29) == *((_DWORD *)v58 + 29) )
                      {
                        if ( !*((_BYTE *)this + 464) )
                          goto LABEL_53;
LABEL_180:
                        v180 |= v45;
                      }
                      else
                      {
                        v193 |= v45;
                      }
LABEL_53:
                      v74 = v180;
                      v42 = v208;
LABEL_54:
                      if ( (v45 & v74) == 0
                        && (*((_DWORD *)v72 + 26) != *((_DWORD *)v58 + 26)
                         || *((_WORD *)v72 + 54) != *((_WORD *)v58 + 54)) )
                      {
                        v195 |= v45;
                      }
                      if ( *((_BYTE *)v212 + 413) )
                      {
                        v204 |= v45;
                        *((_BYTE *)v212 + 413) = 0;
                      }
                      if ( v52 == v59 && v73 == v192 )
                        DMMVIDPNPRESENTPATH::SetGammaRamp(v58, *((const struct DXGK_GAMMA_RAMP **)v72 + 23));
                      else
                        DMMVIDPNPRESENTPATH::UpdateGammaRamp(v58);
                      v30 = v187;
LABEL_63:
                      v75 = v181;
                      goto LABEL_64;
                    }
                  }
                  v42 = v208;
                  *(UINT *)((char *)&v187->InputFlags + v208) = v206 | *(UINT *)((_BYTE *)&v187->InputFlags + v208) & 0xFFFFFFFC;
                  v73 = v191;
                  v74 = v45 | v180;
                  v180 |= v45;
                  goto LABEL_54;
                }
                v57 = v206;
              }
              *(D3DDDI_VIDEO_PRESENT_TARGET_ID *)((char *)&v187->VidPnTargetId + v42) = *(_DWORD *)(v213 + 24);
              if ( !v58 )
                v57 = 3;
              v138 = v57 | *(UINT *)((_BYTE *)&v187->InputFlags + v42) & 0xFFFFFFFC;
              *(UINT *)((char *)&v187->InputFlags + v42) = v138;
              if ( v58 )
              {
                v139 = DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v47);
                v138 = *(UINT *)((char *)&v187->InputFlags + v42);
              }
              else
              {
                v139 = 0;
              }
              v140 = v138 ^ ((unsigned __int8)v138 ^ (unsigned __int8)(4 * v139)) & 4;
              *(UINT *)((char *)&v187->InputFlags + v42) = v140;
              v141 = v140 & 0xFFFFFFF7 | (*(_BYTE *)(v47 + 415) == 0 ? 8 : 0);
              *(UINT *)((char *)&v187->InputFlags + v42) = v141;
              v142 = *(_BYTE *)(v47 + 416);
              v143 = v45 | v188;
              *(UINT *)((char *)&v187->SelectedWireFormat.Value + v42) = v59;
              v144 = v180;
              v188 |= v45;
              *(UINT *)((char *)&v187->InputFlags + v42) = v141 ^ ((unsigned __int8)v141 ^ (unsigned __int8)(16 * v142)) & 0x10;
              *(D3DDDI_COLOR_SPACE_TYPE *)((char *)&v187->OutputColorSpace + v42) = v192;
              if ( v58 )
              {
                v145 = *(_DWORD *)(*((_QWORD *)v58 + 11) + 24LL);
                v144 = (1 << v145) | v180;
                v210[v184] = v145;
                v180 = v144;
                v188 = (1 << v145) | v143;
                DMMVIDPNPRESENTPATH::UpdateGammaRamp(v58);
              }
              v216 = 0LL;
              v75 = v181;
              NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v214, v181, &v216);
              v38 = 0LL;
              if ( NumPathsFromSource < 0 )
              {
                if ( NumPathsFromSource == -1071774919 && !v216 )
                {
LABEL_207:
                  v203 |= v45;
LABEL_208:
                  v30 = v187;
                  goto LABEL_65;
                }
                v149 = WdLogNewEntry5_WdAssertion(v148, v147);
                WdLogEvent5_WdAssertion(v149);
                v38 = 0LL;
              }
              if ( !v216 )
                goto LABEL_207;
              v189 |= v45;
              v14 = v211;
              v180 = v45 | v144;
              if ( !a9 )
                goto LABEL_202;
              if ( !v211 )
                break;
LABEL_203:
              v157 = 0LL;
              while ( 1 )
              {
                v158 = (unsigned int)v157 + 16 * v181;
                if ( v14[v158] == -1 )
                  break;
                v157 = (unsigned int)(v157 + 1);
                if ( (unsigned int)v157 >= 0x10 )
                  goto LABEL_210;
              }
              v14[v158] = *(_DWORD *)(v213 + 24);
LABEL_210:
              if ( (unsigned int)v157 < 0x10 )
                goto LABEL_208;
              v159 = WdLogNewEntry5_WdAssertion(v157, 2 * v181);
              WdLogEvent5_WdAssertion(v159);
              v30 = v187;
LABEL_64:
              v38 = 0LL;
LABEL_65:
              v76 = *(D3DDDI_COLOR_SPACE_TYPE *)((char *)&v30->OutputColorSpace + v42);
              if ( v76 == 12 || (v21 = v76 == 32, v77 = 0, v21) )
                v77 = 1;
              v205 |= v77 << v75;
              v78 = (_QWORD *)*((_QWORD *)v201 + 1);
              v37 = (unsigned __int64)(v78 - 1);
              if ( v78 == v224 )
                v37 = 0LL;
              v40 = v184 + 1;
              v201 = (DMMVIDPNPRESENTPATH *)v37;
              ++v184;
              if ( !v37 )
              {
                v18 = v214;
                goto LABEL_71;
              }
              v36 = v210;
            }
            v150 = (unsigned int *)operator new[](0x400uLL, 0x4E506456u, PagedPool);
            v38 = 0LL;
            v211 = v150;
            v14 = v150;
            if ( !v150 )
            {
              v13 = -1073741801;
              v160 = (_QWORD *)WdLogNewEntry5_WdLowResource(v152, v151, v153, v154);
              v161 = v209;
              v160[3] = *(int *)(v209 + 320);
              v160[4] = *(unsigned int *)(v161 + 316);
              v160[5] = -1073741801LL;
              WdLogEvent5_WdLowResource(v160);
              v30 = v187;
              goto LABEL_146;
            }
            v155 = v150;
            for ( i = 256LL; i; --i )
              *v155++ = -1;
LABEL_202:
            if ( !v14 )
              goto LABEL_208;
            goto LABEL_203;
          }
        }
      }
LABEL_71:
      if ( !v18 || (v79 = (_QWORD *)*((_QWORD *)v18 + 3), v79 == (_QWORD *)((char *)v18 + 24)) )
        v80 = 0LL;
      else
        v80 = (DMMVIDPNPRESENTPATH *)(v79 - 1);
      if ( v80 )
      {
        v81 = v226[1];
        do
        {
          v217 = (unsigned __int64)v38;
          v82 = *((_QWORD *)v80 + 12);
          v83 = *(unsigned int *)(*((_QWORD *)v80 + 11) + 24LL);
          v212 = *(DMMVIDEOPRESENTTARGET **)(v82 + 96);
          if ( (unsigned int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v18, v83, &v217) || (v86 = v217) == 0 )
          {
            v162 = WdLogNewEntry5_WdAssertion(v85, v84);
            WdLogEvent5_WdAssertion(v162);
            v86 = v217;
          }
          v87 = v86 != 1;
          v88 = 1 << v83;
          v89 = 1 << v83;
          v202 |= 1 << v83;
          v90 = *((_DWORD *)v212 + 139);
          if ( (v90 & 0x40) != 0 )
            v89 = 0;
          v198 |= v89;
          v91 = v183 | v88;
          v197 |= *(_BYTE *)(*((_QWORD *)v212 + 67) + 172LL) != 0 ? v88 : 0;
          if ( (v182 & v88) != 0 )
            v91 = v183;
          v183 = v91;
          if ( (v90 & 0x100) != 0 && (v199 & 2) == 0 )
          {
            if ( !v81 || DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(v81, v80) )
            {
              if ( !*((_DWORD *)a8 + 59) )
              {
                v226[1] = v80;
                *((_DWORD *)a8 + 60) = v83;
                v81 = v80;
                *((_DWORD *)a8 + 61) = 1;
                v218 = 0LL;
                DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate(v80, &v218);
                *((_DWORD *)a8 + 62) = 1000000 * (unsigned __int64)v218.Denominator / v218.Numerator;
              }
              *((_DWORD *)a8 + v83 + 39) = *((_DWORD *)a8 + v83 + 39) & 0xFFFFFFF8 | 1;
              *((_DWORD *)a8 + 59) |= v88;
            }
            else
            {
              v199 |= 2u;
              DxgkLogCodePointPacket(0x65u, v83, 1u, v87, *(_QWORD *)(v209 + 316));
            }
          }
          v38 = 0LL;
          if ( !v219 || !DMMVIDPNTOPOLOGY::GetPathFromTarget(v219, *(_DWORD *)(v82 + 24)) )
          {
            v210[v184] = v83;
            v125 = &v187[v184];
            v126.Value = (unsigned int)v38;
            v127 = *(_QWORD *)(v82 + 104);
            ++v184;
            Value = 4;
            if ( v127 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v127 + 96));
              v128 = *(_QWORD *)(v82 + 104);
              v81 = v226[1];
            }
            else
            {
              v128 = (__int64)v38;
            }
            v225 = v128;
            v129 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v128 + 144);
            if ( v129 )
            {
              v126.0 = v129[33].0;
              Value = v129[34].Value;
            }
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v225, 0LL);
            v130 = *(_DWORD *)(v82 + 24);
            v131 = v212;
            v125->VidPnTargetId = v130;
            v125->InputFlags = v125->InputFlags & 0xFFFFFFFC | 1;
            v125->InputFlags ^= (v125->InputFlags ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive(v131))) & 4;
            v180 |= v88;
            v188 |= v88;
            v132 = v125->InputFlags & 0xFFFFFFF7 | (*((_BYTE *)v131 + 415) == 0 ? 8 : 0);
            v125->InputFlags = v132;
            v133 = v132 ^ (16 * *((_BYTE *)v131 + 416));
            v125->SelectedWireFormat = v126;
            v125->InputFlags = v132 ^ v133 & 0x10;
            v125->OutputColorSpace = Value;
            DMMVIDPNPRESENTPATH::UpdateGammaRamp(v80);
            v38 = 0LL;
            *((_BYTE *)v131 + 413) = 0;
          }
          v92 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v80 + 1);
          v18 = v214;
          v80 = (DMMVIDPNTOPOLOGY *)((char *)v92 - 8);
          if ( v92 == (DMMVIDPNTOPOLOGY *)((char *)v214 + 24) )
            v80 = v38;
        }
        while ( v80 );
        v30 = v187;
      }
      v93 = v219;
      v94 = v182;
      v95 = (unsigned int)v38;
      if ( v18 )
      {
        v94 = v202;
        v93 = v18;
      }
      v96 = v209;
      v97 = *(_QWORD *)(v209 + 2672);
      if ( *(_DWORD *)(v97 + 80) > (unsigned int)v38 )
      {
        v98 = 0;
        while ( 1 )
        {
          v207 = (unsigned int)v38;
          MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v93, v95, &v207);
          v102 = MostImportantVidPnPathTargetsFromSource;
          if ( MostImportantVidPnPathTargetsFromSource >= 0 )
          {
            v37 = v207;
            if ( v207 != -1 )
            {
              v121 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v93, v207);
              IsVidPnSourceActive = DMMVIDEOPRESENTTARGET::NeedToBeActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)v121 + 12) + 96LL));
LABEL_97:
              v38 = 0LL;
              if ( IsVidPnSourceActive )
                v98 |= 1 << v95;
              goto LABEL_99;
            }
          }
          else
          {
            if ( MostImportantVidPnPathTargetsFromSource == -1071774919 )
              goto LABEL_96;
            v163 = WdLogNewEntry5_WdAssertion(v101, v100);
            WdLogEvent5_WdAssertion(v163);
          }
          if ( v102 == -1071774919 )
          {
LABEL_96:
            IsVidPnSourceActive = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v96 + 2672), v95);
            goto LABEL_97;
          }
          v38 = 0LL;
LABEL_99:
          v97 = *(_QWORD *)(v96 + 2672);
          if ( ++v95 >= *(_DWORD *)(v97 + 80) )
          {
            v30 = v187;
            v200 = v98;
            v10 = a8;
            break;
          }
        }
      }
      if ( a3 != (VIDPN_MGR **)v38 )
      {
        v37 = (unsigned int)v38;
        if ( *(_DWORD *)(v97 + 80) > (unsigned int)v38 )
        {
          v104 = v199;
          do
          {
            v105 = *((_DWORD *)v10 + (unsigned int)v37 + 39) & 7;
            if ( (*((_DWORD *)v10 + (unsigned int)v37 + 39) & 7) != 0 )
            {
              v164 = 1 << (*((_BYTE *)v10 + 4 * (unsigned int)v37 + 156) & 7);
              if ( (v164 & v104) != 0 || (v165 = *((_DWORD *)v10 + 4 * v105 + 55)) != 0 && ((v165 - 1) & v165) == 0 )
              {
                v166 = 2 * v105;
                *((_DWORD *)v10 + (unsigned int)v37 + 39) &= 0xFFFFFFF8;
                v104 |= v164;
                *((_DWORD *)v10 + 2 * v166 + 55) = 0;
                *((_DWORD *)v10 + 2 * v166 + 57) = 0;
              }
            }
            v37 = (unsigned int)(v37 + 1);
          }
          while ( (unsigned int)v37 < *(_DWORD *)(*(_QWORD *)(v96 + 2672) + 80LL) );
          v30 = v187;
        }
        if ( v184 )
        {
          v106 = v210;
          p_InputFlags = &v30->InputFlags;
          v108 = v184;
          do
          {
            v109 = *((_DWORD *)v10 + *v106 + 39) & 7;
            if ( v109 )
            {
              v37 = (32 * v109) | *p_InputFlags & 0xFFFFFF1F;
              *p_InputFlags = v37;
              *p_InputFlags = v37 ^ ((unsigned __int16)v37 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v10
                                                                                                  + 4 * v109
                                                                                                  + 57) << 8)) & 0xF00;
            }
            ++v106;
            p_InputFlags += 14;
            --v108;
          }
          while ( v108 );
        }
      }
      v190 = ~v203 & v189;
      v110 = v190;
      if ( ((unsigned int)v110 & v180) != (_DWORD)v110 )
      {
        v167 = WdLogNewEntry5_WdAssertion(v190, v37);
        WdLogEvent5_WdAssertion(v167);
      }
      if ( (v203 & v180) != 0 )
      {
        v168 = WdLogNewEntry5_WdAssertion(v110, v37);
        WdLogEvent5_WdAssertion(v168);
      }
      v194 = ~v180 & v193;
      if ( (v203 & v194) != 0 )
      {
        v169 = WdLogNewEntry5_WdAssertion(v110, v37);
        WdLogEvent5_WdAssertion(v169);
      }
      if ( (v188 & v203) != v203 )
      {
        v170 = WdLogNewEntry5_WdAssertion(v110, v37);
        WdLogEvent5_WdAssertion(v170);
      }
      if ( (v190 & v188) != v190 )
      {
        v171 = WdLogNewEntry5_WdAssertion(v110, v37);
        WdLogEvent5_WdAssertion(v171);
      }
      if ( (v188 & (v180 | v203)) != v188 )
      {
        v172 = WdLogNewEntry5_WdAssertion(v110, v37);
        WdLogEvent5_WdAssertion(v172);
      }
      v111 = v183;
      if ( (v180 & v183) != v183 )
      {
        v173 = WdLogNewEntry5_WdAssertion(v183, v37);
        WdLogEvent5_WdAssertion(v173);
        v111 = v183;
      }
      if ( (v188 & (unsigned int)v111) != (_DWORD)v111 )
      {
        v174 = WdLogNewEntry5_WdAssertion(v111, v37);
        WdLogEvent5_WdAssertion(v174);
        v111 = v183;
      }
      if ( ((unsigned int)v111 & v182) != 0 )
      {
        v175 = WdLogNewEntry5_WdAssertion(v111, v37);
        WdLogEvent5_WdAssertion(v175);
      }
      if ( (v94 & v203) != 0 )
      {
        v176 = WdLogNewEntry5_WdAssertion(v111, v37);
        WdLogEvent5_WdAssertion(v176);
      }
      v112 = v182;
      v113 = v203 | v94;
      if ( (v182 | v183) != (_DWORD)v113 )
      {
        v177 = WdLogNewEntry5_WdAssertion(v113, v182);
        WdLogEvent5_WdAssertion(v177);
        v112 = v182;
      }
      v196 = ~v180 & v195;
      v13 = 0;
      *v231 = v215;
      v114 = v210;
      *a5 = v184;
      *a6 = v30;
      v30 = 0LL;
      *a7 = v114;
      if ( *(_DWORD *)v10 && *(_DWORD *)v10 != (_DWORD)v112 )
      {
        v178 = WdLogNewEntry5_WdAssertion(v114, v112);
        WdLogEvent5_WdAssertion(v178);
      }
      v115 = *((_DWORD *)v10 + 1);
      v116 = v182;
      *(_DWORD *)v10 = v182;
      if ( v115 && v115 != v94 )
      {
        v179 = WdLogNewEntry5_WdAssertion(v114, v182);
        WdLogEvent5_WdAssertion(v179);
        v116 = v182;
      }
      *((_DWORD *)v10 + 10) = v194;
      *((_DWORD *)v10 + 4) = v183;
      *((_DWORD *)v10 + 13) = v190;
      *((_DWORD *)v10 + 5) = v200;
      *((_DWORD *)v10 + 6) = v186;
      *((_DWORD *)v10 + 12) = v196;
      *((_DWORD *)v10 + 38) = v197;
      *((_DWORD *)v10 + 63) = v205;
      *((_DWORD *)v10 + 1) = v94;
      *((_DWORD *)v10 + 2) = v180;
      *((_DWORD *)v10 + 7) = v188;
      *((_DWORD *)v10 + 3) = v203;
      *((_DWORD *)v10 + 16) = v204;
      *((_DWORD *)v10 + 20) = 0;
      *((_DWORD *)v10 + 17) = 0;
      if ( (v229 & 0x10000) != 0 )
      {
        *((_DWORD *)v10 + 14) = -1;
      }
      else
      {
        v117 = ~(v116 | v94) | v198;
        v118 = v180 & v117;
        v119 = v204 | *((_DWORD *)v10 + 14) | v188 | ((v188 & v117) != 0 ? v117 : 0);
        *((_DWORD *)v10 + 14) = v119;
        if ( (((v180 & v117) - 1) & v180 & v117) != 0 )
        {
          *((_DWORD *)v10 + 14) = v117 | v119;
        }
        else if ( v118 )
        {
          *((_DWORD *)v10 + 14) = v119 | v117 & ~v118;
        }
      }
      FillFailedStatus(v10, 0);
      if ( a9 )
      {
        v14 = 0LL;
        *a9 = v211;
      }
      else
      {
        v14 = v211;
      }
LABEL_146:
      if ( v30 )
        operator delete[](v30);
      if ( v14 )
        operator delete[](v14);
    }
    else
    {
      v13 = -1073741801;
      v136 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
      *(_QWORD *)(v136 + 24) = v23;
      *(_QWORD *)(v136 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v136);
    }
  }
  auto_rc<DMMVIDPN const>::reset(&v221, 0LL);
  return v13;
}
