/*
 * XREFs of ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C013DF30
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013C4DC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00054DC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A3B8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C000B664 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000B74C (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000B784 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C000B7F8 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B958 (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C0123CE0 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C0132740 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C0139470 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C013BC38 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C013F174 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C013F3C4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x1C02E8F5C (-GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C02E8FDC (-IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
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
  unsigned int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  DMMVIDPNTOPOLOGY *v20; // rdi
  DMMVIDPNTOPOLOGY *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rax
  bool v24; // zf
  unsigned int v25; // eax
  unsigned __int64 v26; // r14
  SIZE_T v27; // rax
  unsigned __int64 v28; // kr00_8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct _DXGK_SET_TIMING_PATH_INFO *v33; // r13
  __int64 v34; // rax
  SIZE_T v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _DWORD *v40; // rbx
  __int64 v41; // rax
  unsigned int *v42; // r14
  unsigned __int64 v43; // rdx
  struct DMMVIDPN *v44; // r11
  _QWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r12
  unsigned int v48; // eax
  __int64 *v49; // r9
  int v50; // r15d
  int v51; // eax
  __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // r9
  __int64 v55; // r11
  __int64 v56; // rax
  UINT v57; // ebx
  bool v58; // di
  __int64 v59; // rax
  __int64 v60; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v61; // eax
  unsigned int v62; // edx
  char v63; // al
  char v64; // bl
  int v65; // eax
  int v66; // eax
  _QWORD *v67; // rax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  int v69; // r11d
  struct DMMVIDPNPRESENTPATH *v70; // r13
  UINT v71; // edi
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v76; // eax
  unsigned int v77; // edx
  char v78; // al
  unsigned __int8 v79; // al
  int v80; // r8d
  DXGADAPTER ***v81; // r14
  char v82; // r12
  unsigned __int8 v83; // al
  __int64 v84; // r14
  int v85; // edx
  DMMVIDPNPRESENTPATH *v86; // rcx
  int v87; // eax
  unsigned int v88; // eax
  unsigned __int8 v89; // cl
  int v90; // ecx
  unsigned int v91; // edx
  char v92; // al
  int v93; // edi
  int v94; // edx
  unsigned int v95; // ecx
  int NumPathsFromSource; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  unsigned int *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  unsigned int *v105; // rdi
  __int64 i; // rcx
  __int64 v107; // rcx
  __int64 v108; // rdi
  __int64 v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rdx
  _QWORD *v112; // rbx
  DMMVIDPNPRESENTPATH *v113; // rbx
  DMMVIDPNPRESENTPATH *v114; // r12
  __int64 v115; // r13
  __int64 v116; // rdi
  __int64 v117; // rdx
  __int64 v118; // rcx
  unsigned __int64 v119; // rax
  __int64 v120; // rax
  unsigned int v121; // r14d
  int v122; // r15d
  int v123; // eax
  int v124; // edx
  int v125; // ecx
  struct _DXGK_SET_TIMING_PATH_INFO *v126; // r14
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v127; // edi
  __int64 v128; // rax
  __int64 v129; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v130; // rax
  unsigned int v131; // edx
  char v132; // al
  DMMVIDPNTOPOLOGY *v133; // rax
  DMMVIDPNTOPOLOGY *v134; // r12
  unsigned int v135; // edi
  unsigned int v136; // ebx
  __int64 v137; // r15
  __int64 v138; // rax
  int v139; // esi
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v141; // rdx
  __int64 v142; // rcx
  int v143; // r14d
  __int64 v144; // rax
  unsigned __int8 IsVidPnSourceActive; // al
  struct DMMVIDPNPRESENTPATH *v146; // rax
  int v147; // r13d
  __int64 v148; // rcx
  int v149; // r9d
  int v150; // r10d
  __int64 v151; // rcx
  unsigned int *v152; // r9
  UINT *p_InputFlags; // r8
  __int64 v154; // r10
  unsigned int v155; // ecx
  __int64 v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rax
  unsigned int *v171; // rcx
  __int64 v172; // rax
  int v173; // eax
  unsigned int v174; // edx
  __int64 v175; // rax
  int v176; // r8d
  int v177; // edx
  int v178; // ecx
  int v179; // [rsp+30h] [rbp-D0h]
  unsigned int v180; // [rsp+34h] [rbp-CCh]
  unsigned int v181; // [rsp+38h] [rbp-C8h]
  unsigned int v182; // [rsp+3Ch] [rbp-C4h]
  bool v183; // [rsp+40h] [rbp-C0h]
  unsigned int v184; // [rsp+44h] [rbp-BCh]
  int v185; // [rsp+48h] [rbp-B8h]
  struct _DXGK_SET_TIMING_PATH_INFO *v186; // [rsp+50h] [rbp-B0h]
  int v187; // [rsp+58h] [rbp-A8h]
  int v188; // [rsp+5Ch] [rbp-A4h]
  unsigned int v189; // [rsp+5Ch] [rbp-A4h]
  int v190; // [rsp+60h] [rbp-A0h]
  int v191; // [rsp+64h] [rbp-9Ch]
  int v192; // [rsp+68h] [rbp-98h]
  int v193; // [rsp+68h] [rbp-98h]
  int v194; // [rsp+6Ch] [rbp-94h]
  int v195; // [rsp+6Ch] [rbp-94h]
  int v196; // [rsp+70h] [rbp-90h]
  int v197; // [rsp+74h] [rbp-8Ch]
  int v198; // [rsp+78h] [rbp-88h]
  int v199; // [rsp+7Ch] [rbp-84h]
  unsigned int v200; // [rsp+80h] [rbp-80h]
  int v201; // [rsp+84h] [rbp-7Ch]
  int v202; // [rsp+88h] [rbp-78h]
  int v203; // [rsp+8Ch] [rbp-74h]
  DMMVIDPNPRESENTPATH *v204; // [rsp+90h] [rbp-70h]
  DMMVIDEOPRESENTTARGET *v205; // [rsp+98h] [rbp-68h]
  DMMVIDEOPRESENTTARGET *v206; // [rsp+98h] [rbp-68h]
  unsigned int *v207; // [rsp+A0h] [rbp-60h]
  int v208; // [rsp+A8h] [rbp-58h]
  unsigned int v209; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v210; // [rsp+B0h] [rbp-50h]
  __int64 v211; // [rsp+B8h] [rbp-48h]
  unsigned int *v212; // [rsp+C0h] [rbp-40h]
  __int64 v213; // [rsp+C8h] [rbp-38h]
  DMMVIDPNTOPOLOGY *v214; // [rsp+D0h] [rbp-30h]
  int v215; // [rsp+D8h] [rbp-28h]
  unsigned int v216; // [rsp+DCh] [rbp-24h]
  unsigned __int64 v217; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v218; // [rsp+E8h] [rbp-18h] BYREF
  struct _D3DDDI_RATIONAL v219; // [rsp+F0h] [rbp-10h] BYREF
  DMMVIDPNTOPOLOGY *v220; // [rsp+F8h] [rbp-8h]
  __int64 v221; // [rsp+100h] [rbp+0h] BYREF
  __int64 v222; // [rsp+108h] [rbp+8h] BYREF
  __int64 v223; // [rsp+110h] [rbp+10h] BYREF
  _QWORD *v224; // [rsp+118h] [rbp+18h]
  __int64 v225; // [rsp+120h] [rbp+20h] BYREF
  DMMVIDPNPRESENTPATH *v226[2]; // [rsp+128h] [rbp+28h]
  int Value; // [rsp+190h] [rbp+90h]
  int v229; // [rsp+198h] [rbp+98h]
  unsigned int *v231; // [rsp+1A8h] [rbp+A8h]

  v231 = a4;
  v229 = a2;
  v9 = *((_QWORD *)this + 1);
  v10 = a8;
  v184 = 0;
  v207 = 0LL;
  v181 = 0;
  v13 = 0;
  v200 = 0;
  v14 = 0;
  v188 = 0;
  v179 = 0;
  v187 = 0;
  v192 = 0;
  v182 = 0;
  v201 = 0;
  v199 = 0;
  v185 = 0;
  v194 = 0;
  v202 = 0;
  v197 = 0;
  v198 = 0;
  v196 = 0;
  v203 = 0;
  *(_OWORD *)v226 = 0LL;
  if ( !v9 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v15);
    v9 = *((_QWORD *)this + 1);
    a4 = v231;
  }
  v211 = *(_QWORD *)(v9 + 16);
  if ( a3 && a3[6] != this )
  {
    v16 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v16 + 24) = a3;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  v18 = *((_QWORD *)this + 11);
  if ( !v18 )
  {
    v221 = 0LL;
LABEL_9:
    v20 = 0LL;
    goto LABEL_11;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 32));
  v19 = *((_QWORD *)this + 11);
  v221 = v19;
  if ( !v19 )
    goto LABEL_9;
  v20 = (DMMVIDPNTOPOLOGY *)(v19 + 96);
LABEL_11:
  v220 = v20;
  v21 = (DMMVIDPNTOPOLOGY *)((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL));
  LODWORD(v22) = 0;
  v214 = v21;
  if ( v20 )
    v22 = *((_QWORD *)v20 + 5);
  LODWORD(v23) = 0;
  if ( v21 )
    v23 = *(_QWORD *)(((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL)) + 0x28);
  v24 = (_DWORD)v22 + (_DWORD)v23 == 0;
  v25 = v22 + v23;
  v216 = v25;
  if ( v24 )
  {
    *a4 = 0;
    *a5 = 0;
    *a6 = 0LL;
    *a7 = 0LL;
    if ( a9 )
      *a9 = 0LL;
    goto LABEL_234;
  }
  v26 = v25;
  v28 = v25;
  v27 = 56LL * v25;
  if ( !is_mul_ok(v28, 0x38uLL) )
    v27 = -1LL;
  v186 = (struct _DXGK_SET_TIMING_PATH_INFO *)operator new[](v27, 0x4E506456u, PagedPool);
  v33 = v186;
  if ( v186 )
  {
    v35 = 4 * v26;
    if ( !is_mul_ok(v26, 4uLL) )
      v35 = -1LL;
    v212 = (unsigned int *)operator new[](v35, 0x4E506456u, PagedPool);
    v40 = v212;
    if ( !v212 )
    {
      v13 = -1073741801;
      v41 = WdLogNewEntry5_WdLowResource(v37, v36, v38, v39);
      *(_QWORD *)(v41 + 24) = v26;
      *(_QWORD *)(v41 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v41);
      v42 = 0LL;
      goto LABEL_230;
    }
    memset(v186, 0, 56 * v26);
    memset(v212, 0, 4 * v26);
    v44 = 0LL;
    if ( v20 )
    {
      v45 = (_QWORD *)*((_QWORD *)v20 + 3);
      v224 = (_QWORD *)((char *)v20 + 24);
      if ( v45 != (_QWORD *)((char *)v20 + 24) )
      {
        v43 = (unsigned __int64)(v45 - 1);
        v204 = (DMMVIDPNPRESENTPATH *)(v45 - 1);
        if ( v45 != (_QWORD *)8 )
        {
          while ( 1 )
          {
            v215 = v185;
            v46 = v14;
            v47 = 56LL * v14;
            v48 = *(_DWORD *)(*(_QWORD *)(v43 + 88) + 24LL);
            v40[v46] = v48;
            v49 = *(__int64 **)(v43 + 96);
            v50 = 1 << v48;
            v181 |= 1 << v48;
            v180 = v48;
            v51 = 1 << v48;
            v52 = v49[12];
            v210 = v47;
            v205 = (DMMVIDEOPRESENTTARGET *)v49;
            v213 = v52;
            if ( (*(_BYTE *)(v52 + 556) & 0x40) != 0 )
              v51 = 0;
            v197 |= v51;
            v196 |= *(_BYTE *)(*(_QWORD *)(v52 + 536) + 172LL) != 0 ? v50 : 0;
            v24 = (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v52, 0LL) == 13;
            v190 = 4;
            v56 = *(_QWORD *)(v54 + 104);
            v57 = v55;
            v58 = v24;
            v183 = v24;
            if ( v56 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v56 + 96));
              v59 = *(_QWORD *)(v54 + 104);
            }
            else
            {
              v59 = v55;
            }
            v222 = v59;
            v60 = *(_QWORD *)(v59 + 144);
            if ( v60 )
            {
              v57 = *(_DWORD *)(v60 + 132);
              v190 = *(_DWORD *)(v60 + 136);
            }
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v222, v53);
            if ( !v214 )
            {
              v61 = *((_DWORD *)v205 + 6);
              *(UINT *)((char *)&v33->InputFlags + v47) &= 0xFFFFFFFC;
              *(D3DDDI_VIDEO_PRESENT_TARGET_ID *)((char *)&v33->VidPnTargetId + v47) = v61;
              *(UINT *)((char *)&v33->InputFlags + v47) ^= (*(UINT *)((char *)&v33->InputFlags + v47) ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v52))) & 4;
              v62 = *(UINT *)((_BYTE *)&v33->InputFlags + v47) & 0xFFFFFFF7 | (*(_BYTE *)(v52 + 415) == 0 ? 8 : 0);
              *(UINT *)((char *)&v33->InputFlags + v47) = v62;
              v63 = v62 ^ (16 * *(_BYTE *)(v52 + 416));
              *(UINT *)((char *)&v33->SelectedWireFormat.Value + v47) = v57;
              *(UINT *)((char *)&v33->InputFlags + v47) = v62 ^ v63 & 0x10;
              *(D3DDDI_COLOR_SPACE_TYPE *)((char *)&v33->OutputColorSpace + v47) = v190;
              if ( (DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v52) == 0) != (*(_BYTE *)(v52 + 418) == 0) )
              {
                v185 |= v50;
                v64 = v180;
                if ( v58 )
                  *(UINT *)((char *)&v33->InputFlags + v47) = *(UINT *)((_BYTE *)&v33->InputFlags + v47) & 0xFFFFFFFC | 1;
                goto LABEL_46;
              }
              if ( v58
                || (v229 & 0x4000) != 0
                || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v211 + 2696), v180)
                || *(_BYTE *)(v52 + 414) )
              {
                v179 |= v50;
                *(UINT *)((char *)&v33->InputFlags + v47) = *(UINT *)((_BYTE *)&v33->InputFlags + v47) & 0xFFFFFFFC | (!v58 + 1);
              }
              goto LABEL_45;
            }
            v208 = !v58 + 1;
            PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v214, *(_DWORD *)(*((_QWORD *)v204 + 12) + 24LL));
            v191 = 4;
            v70 = PathFromTarget;
            v71 = 0;
            if ( PathFromTarget )
            {
              v72 = *((_QWORD *)PathFromTarget + 12);
              v73 = *(_QWORD *)(v72 + 104);
              if ( v73 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v73 + 96));
                v74 = *(_QWORD *)(v72 + 104);
              }
              else
              {
                v74 = 0LL;
              }
              v223 = v74;
              v75 = *(_QWORD *)(v74 + 144);
              if ( v75 )
              {
                v71 = *(_DWORD *)(v75 + 132);
                v191 = *(_DWORD *)(v75 + 136);
              }
              auto_rc<DMMVIDPNTARGETMODESET>::reset(&v223, 0LL);
              if ( *(_DWORD *)(*((_QWORD *)v70 + 11) + 24LL) == v180 )
              {
                v76 = *((_DWORD *)v205 + 6);
                *(UINT *)((char *)&v186->InputFlags + v47) &= 0xFFFFFFFC;
                *(D3DDDI_VIDEO_PRESENT_TARGET_ID *)((char *)&v186->VidPnTargetId + v47) = v76;
                *(UINT *)((char *)&v186->InputFlags + v47) ^= (*(UINT *)((char *)&v186->InputFlags + v47) ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v52))) & 4;
                v77 = *(UINT *)((_BYTE *)&v186->InputFlags + v47) & 0xFFFFFFF7 | (*(_BYTE *)(v52 + 415) == 0 ? 8 : 0);
                *(UINT *)((char *)&v186->InputFlags + v47) = v77;
                v78 = v77 ^ (16 * *(_BYTE *)(v52 + 416));
                *(UINT *)((char *)&v186->SelectedWireFormat.Value + v47) = v71;
                *(UINT *)((char *)&v186->InputFlags + v47) = v77 ^ v78 & 0x10;
                *(D3DDDI_COLOR_SPACE_TYPE *)((char *)&v186->OutputColorSpace + v47) = v191;
                if ( (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v52, 0LL) == 13 )
                  v179 |= v50;
                v79 = DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v52);
                v80 = v50 | v215;
                if ( (v79 == 0) == (*(_BYTE *)(v52 + 418) == 0) )
                  v80 = v215;
                v185 = v80;
                if ( *(_BYTE *)(v211 + 2529) && (v229 & 0x400000) != 0 )
                {
                  v81 = (DXGADAPTER ***)(v211 + 2696);
                  goto LABEL_69;
                }
                v81 = (DXGADAPTER ***)(v211 + 2696);
                if ( *(_BYTE *)(*(_QWORD *)(v211 + 2696) + 249LL) )
                {
LABEL_69:
                  v82 = 1;
                  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*v81, v180) )
                    goto LABEL_70;
                }
                else
                {
LABEL_70:
                  v82 = 0;
                }
                if ( v183 || (v229 & 0x4000) != 0 )
                {
                  v84 = v213;
                }
                else
                {
                  v83 = ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*v81, v180);
                  v84 = v213;
                  if ( !v83
                    && !*(_BYTE *)(v213 + 414)
                    && !*(_BYTE *)(v213 + 420)
                    && DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(v204, v70, v82) )
                  {
                    v85 = v190;
                    if ( v57 == v71 && v190 == v191 )
                    {
                      v86 = v204;
                      if ( *((_DWORD *)v204 + 29) == *((_DWORD *)v70 + 29) )
                      {
                        if ( *((_BYTE *)this + 464) )
                          v179 |= v50;
                      }
                      else
                      {
                        v192 |= v50;
                      }
                    }
                    else
                    {
                      v179 |= v50;
                      v86 = v204;
                    }
                    v87 = v179;
                    v47 = v210;
LABEL_82:
                    if ( (v50 & v87) == 0
                      && (*((_DWORD *)v86 + 26) != *((_DWORD *)v70 + 26) || *((_WORD *)v86 + 54) != *((_WORD *)v70 + 54)) )
                    {
                      v194 |= v50;
                    }
                    if ( *(_BYTE *)(v84 + 413) )
                    {
                      v202 |= v50;
                      *(_BYTE *)(v84 + 413) = 0;
                    }
                    if ( v57 == v71 && v85 == v191 )
                      DMMVIDPNPRESENTPATH::SetGammaRamp(v70, *((const struct DXGK_GAMMA_RAMP **)v86 + 23));
                    else
                      DMMVIDPNPRESENTPATH::UpdateGammaRamp(v70);
                    v33 = v186;
LABEL_45:
                    v64 = v180;
                    goto LABEL_46;
                  }
                }
                v47 = v210;
                v85 = v190;
                *(UINT *)((char *)&v186->InputFlags + v210) = v208 | *(UINT *)((_BYTE *)&v186->InputFlags + v210) & 0xFFFFFFFC;
                v86 = v204;
                v87 = v50 | v179;
                v179 |= v50;
                goto LABEL_82;
              }
              v69 = v208;
            }
            *(D3DDDI_VIDEO_PRESENT_TARGET_ID *)((char *)&v186->VidPnTargetId + v47) = *((_DWORD *)v205 + 6);
            if ( !v70 )
              v69 = 3;
            v88 = v69 | *(UINT *)((_BYTE *)&v186->InputFlags + v47) & 0xFFFFFFFC;
            *(UINT *)((char *)&v186->InputFlags + v47) = v88;
            if ( v70 )
            {
              v89 = DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v52);
              v88 = *(UINT *)((char *)&v186->InputFlags + v47);
            }
            else
            {
              v89 = 0;
            }
            v90 = v88 ^ ((unsigned __int8)v88 ^ (unsigned __int8)(4 * v89)) & 4;
            *(UINT *)((char *)&v186->InputFlags + v47) = v90;
            v91 = v90 & 0xFFFFFFF7 | (*(_BYTE *)(v52 + 415) == 0 ? 8 : 0);
            *(UINT *)((char *)&v186->InputFlags + v47) = v91;
            v92 = v91 ^ (16 * *(_BYTE *)(v52 + 416));
            *(UINT *)((char *)&v186->SelectedWireFormat.Value + v47) = v71;
            v93 = v179;
            *(UINT *)((char *)&v186->InputFlags + v47) = v91 ^ v92 & 0x10;
            v94 = v50 | v187;
            *(D3DDDI_COLOR_SPACE_TYPE *)((char *)&v186->OutputColorSpace + v47) = v191;
            v187 |= v50;
            if ( v70 )
            {
              v95 = *(_DWORD *)(*((_QWORD *)v70 + 11) + 24LL);
              v93 = (1 << v95) | v179;
              v212[v184] = v95;
              v179 = v93;
              v187 = (1 << v95) | v94;
              DMMVIDPNPRESENTPATH::UpdateGammaRamp(v70);
            }
            v217 = 0LL;
            v64 = v180;
            NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v214, v180, &v217);
            v44 = 0LL;
            if ( NumPathsFromSource < 0 )
            {
              if ( NumPathsFromSource == -1071774919 && !v217 )
              {
LABEL_111:
                v201 |= v50;
LABEL_112:
                v33 = v186;
                goto LABEL_47;
              }
              v99 = WdLogNewEntry5_WdAssertion(v98, v97);
              WdLogEvent5_WdAssertion(v99);
              v44 = 0LL;
            }
            if ( !v217 )
              goto LABEL_111;
            v188 |= v50;
            v42 = v207;
            v179 = v50 | v93;
            if ( !a9 )
              goto LABEL_119;
            if ( !v207 )
              break;
LABEL_120:
            v107 = 0LL;
            while ( 1 )
            {
              v108 = (unsigned int)v107 + 16 * v180;
              if ( v42[v108] == -1 )
                break;
              v107 = (unsigned int)(v107 + 1);
              if ( (unsigned int)v107 >= 0x10 )
                goto LABEL_125;
            }
            v42[v108] = *((_DWORD *)v205 + 6);
LABEL_125:
            if ( (unsigned int)v107 < 0x10 )
              goto LABEL_112;
            v109 = WdLogNewEntry5_WdAssertion(v107, 2 * v180);
            WdLogEvent5_WdAssertion(v109);
            v33 = v186;
LABEL_46:
            v44 = 0LL;
LABEL_47:
            v65 = *(D3DDDI_COLOR_SPACE_TYPE *)((char *)&v33->OutputColorSpace + v47);
            if ( v65 == 12 || (v24 = v65 == 32, v66 = 0, v24) )
              v66 = 1;
            v203 |= v66 << v64;
            v67 = (_QWORD *)*((_QWORD *)v204 + 1);
            v43 = (unsigned __int64)(v67 - 1);
            if ( v67 == v224 )
              v43 = 0LL;
            v14 = v184 + 1;
            v204 = (DMMVIDPNPRESENTPATH *)v43;
            ++v184;
            if ( !v43 )
            {
              v21 = v214;
              goto LABEL_129;
            }
            v40 = v212;
          }
          v100 = (unsigned int *)operator new[](0x400uLL, 0x4E506456u, PagedPool);
          v44 = 0LL;
          v207 = v100;
          v42 = v100;
          if ( !v100 )
          {
            v13 = -1073741801;
            v110 = (_QWORD *)WdLogNewEntry5_WdLowResource(v102, v101, v103, v104);
            v111 = v211;
            v110[3] = *(int *)(v211 + 320);
            v110[4] = *(unsigned int *)(v111 + 316);
            v110[5] = -1073741801LL;
            WdLogEvent5_WdLowResource(v110);
            v33 = v186;
            goto LABEL_230;
          }
          v105 = v100;
          for ( i = 256LL; i; --i )
            *v105++ = -1;
LABEL_119:
          if ( !v42 )
            goto LABEL_112;
          goto LABEL_120;
        }
      }
    }
LABEL_129:
    if ( !v21 || (v112 = (_QWORD *)*((_QWORD *)v21 + 3), v112 == (_QWORD *)((char *)v21 + 24)) )
      v113 = 0LL;
    else
      v113 = (DMMVIDPNPRESENTPATH *)(v112 - 1);
    if ( v113 )
    {
      v114 = v226[1];
      do
      {
        v218 = (unsigned __int64)v44;
        v115 = *((_QWORD *)v113 + 12);
        v116 = *(unsigned int *)(*((_QWORD *)v113 + 11) + 24LL);
        v206 = *(DMMVIDEOPRESENTTARGET **)(v115 + 96);
        if ( (unsigned int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(
                             v21,
                             *(_DWORD *)(*((_QWORD *)v113 + 11) + 24LL),
                             &v218)
          || (v119 = v218) == 0 )
        {
          v120 = WdLogNewEntry5_WdAssertion(v118, v117);
          WdLogEvent5_WdAssertion(v120);
          v119 = v218;
        }
        v121 = v119 != 1;
        v122 = 1 << v116;
        v123 = 1 << v116;
        v200 |= 1 << v116;
        v124 = *((_DWORD *)v206 + 139);
        if ( (v124 & 0x40) != 0 )
          v123 = 0;
        v197 |= v123;
        v125 = v182 | v122;
        v196 |= *(_BYTE *)(*((_QWORD *)v206 + 67) + 172LL) != 0 ? v122 : 0;
        if ( (v181 & v122) != 0 )
          v125 = v182;
        v182 = v125;
        if ( (v124 & 0x100) != 0 && (v198 & 2) == 0 )
        {
          if ( !v114 || DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(v114, v113) )
          {
            if ( !*((_DWORD *)a8 + 59) )
            {
              v226[1] = v113;
              *((_DWORD *)a8 + 60) = v116;
              v114 = v113;
              *((_DWORD *)a8 + 61) = 1;
              v219 = 0LL;
              DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate(v113, &v219);
              *((_DWORD *)a8 + 62) = 1000000 * (unsigned __int64)v219.Denominator / v219.Numerator;
            }
            *((_DWORD *)a8 + v116 + 39) = *((_DWORD *)a8 + v116 + 39) & 0xFFFFFFF8 | 1;
            *((_DWORD *)a8 + 59) |= v122;
          }
          else
          {
            v198 |= 2u;
            DxgkLogCodePointPacket(0x65u, v116, 1u, v121, *(_QWORD *)(v211 + 316));
          }
        }
        v44 = 0LL;
        if ( !v220 || !DMMVIDPNTOPOLOGY::GetPathFromTarget(v220, *(_DWORD *)(v115 + 24)) )
        {
          v212[v184] = v116;
          v126 = &v186[v184];
          v127.Value = (unsigned int)v44;
          v128 = *(_QWORD *)(v115 + 104);
          ++v184;
          Value = 4;
          if ( v128 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v128 + 96));
            v129 = *(_QWORD *)(v115 + 104);
            v114 = v226[1];
          }
          else
          {
            v129 = (__int64)v44;
          }
          v225 = v129;
          v130 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v129 + 144);
          if ( v130 )
          {
            v127.0 = v130[33].0;
            Value = v130[34].Value;
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v225, 0LL);
          v126->VidPnTargetId = *(_DWORD *)(v115 + 24);
          v126->InputFlags = v126->InputFlags & 0xFFFFFFFC | 1;
          v126->InputFlags ^= (v126->InputFlags ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive(v206))) & 4;
          v179 |= v122;
          v187 |= v122;
          v131 = v126->InputFlags & 0xFFFFFFF7 | (*((_BYTE *)v206 + 415) == 0 ? 8 : 0);
          v126->InputFlags = v131;
          v132 = v131 ^ (16 * *((_BYTE *)v206 + 416));
          v126->SelectedWireFormat = v127;
          v126->InputFlags = v131 ^ v132 & 0x10;
          v126->OutputColorSpace = Value;
          DMMVIDPNPRESENTPATH::UpdateGammaRamp(v113);
          v44 = 0LL;
          *((_BYTE *)v206 + 413) = 0;
        }
        v133 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v113 + 1);
        v21 = v214;
        v113 = (DMMVIDPNTOPOLOGY *)((char *)v133 - 8);
        if ( v133 == (DMMVIDPNTOPOLOGY *)((char *)v214 + 24) )
          v113 = v44;
      }
      while ( v113 );
      v33 = v186;
    }
    v134 = v220;
    v135 = v181;
    v136 = (unsigned int)v44;
    if ( v21 )
    {
      v135 = v200;
      v134 = v21;
    }
    v137 = v211;
    v138 = *(_QWORD *)(v211 + 2696);
    if ( *(_DWORD *)(v138 + 80) <= (unsigned int)v44 )
    {
LABEL_178:
      if ( a3 != (VIDPN_MGR **)v44 )
      {
        v43 = (unsigned int)v44;
        if ( *(_DWORD *)(v138 + 80) > (unsigned int)v44 )
        {
          v147 = v198;
          do
          {
            v148 = *((_DWORD *)v10 + (unsigned int)v43 + 39) & 7;
            if ( (*((_DWORD *)v10 + (unsigned int)v43 + 39) & 7) != 0 )
            {
              v149 = 1 << (*((_BYTE *)v10 + 4 * (unsigned int)v43 + 156) & 7);
              if ( (v149 & v147) != 0
                || (v150 = *((_DWORD *)v10 + 4 * (unsigned int)v148 + 55)) != 0 && ((v150 - 1) & v150) == 0 )
              {
                v151 = 2 * v148;
                *((_DWORD *)v10 + (unsigned int)v43 + 39) &= 0xFFFFFFF8;
                v147 |= v149;
                *((_DWORD *)v10 + 2 * v151 + 55) = 0;
                *((_DWORD *)v10 + 2 * v151 + 57) = 0;
              }
            }
            v43 = (unsigned int)(v43 + 1);
          }
          while ( (unsigned int)v43 < *(_DWORD *)(*(_QWORD *)(v137 + 2696) + 80LL) );
          v33 = v186;
        }
        if ( v184 )
        {
          v152 = v212;
          p_InputFlags = &v33->InputFlags;
          v154 = v184;
          do
          {
            v155 = *((_DWORD *)v10 + *v152 + 39) & 7;
            if ( v155 )
            {
              v43 = (32 * v155) | *p_InputFlags & 0xFFFFFF1F;
              *p_InputFlags = v43;
              *p_InputFlags = v43 ^ ((unsigned __int16)v43 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v10
                                                                                                  + 4 * v155
                                                                                                  + 57) << 8)) & 0xF00;
            }
            ++v152;
            p_InputFlags += 14;
            --v154;
          }
          while ( v154 );
        }
      }
      v189 = ~v201 & v188;
      v156 = v189;
      if ( ((unsigned int)v156 & v179) != (_DWORD)v156 )
      {
        v157 = WdLogNewEntry5_WdAssertion(v189, v43);
        WdLogEvent5_WdAssertion(v157);
      }
      if ( (v201 & v179) != 0 )
      {
        v158 = WdLogNewEntry5_WdAssertion(v156, v43);
        WdLogEvent5_WdAssertion(v158);
      }
      v193 = ~v179 & v192;
      if ( (v201 & v193) != 0 )
      {
        v159 = WdLogNewEntry5_WdAssertion(v156, v43);
        WdLogEvent5_WdAssertion(v159);
      }
      if ( (v187 & v201) != v201 )
      {
        v160 = WdLogNewEntry5_WdAssertion(v156, v43);
        WdLogEvent5_WdAssertion(v160);
      }
      if ( (v189 & v187) != v189 )
      {
        v161 = WdLogNewEntry5_WdAssertion(v156, v43);
        WdLogEvent5_WdAssertion(v161);
      }
      if ( (v187 & (v179 | v201)) != v187 )
      {
        v162 = WdLogNewEntry5_WdAssertion(v156, v43);
        WdLogEvent5_WdAssertion(v162);
      }
      v163 = v182;
      if ( (v179 & v182) != v182 )
      {
        v164 = WdLogNewEntry5_WdAssertion(v182, v43);
        WdLogEvent5_WdAssertion(v164);
        v163 = v182;
      }
      if ( (v187 & (unsigned int)v163) != (_DWORD)v163 )
      {
        v165 = WdLogNewEntry5_WdAssertion(v163, v43);
        WdLogEvent5_WdAssertion(v165);
        v163 = v182;
      }
      if ( ((unsigned int)v163 & v181) != 0 )
      {
        v166 = WdLogNewEntry5_WdAssertion(v163, v43);
        WdLogEvent5_WdAssertion(v166);
      }
      if ( (v135 & v201) != 0 )
      {
        v167 = WdLogNewEntry5_WdAssertion(v163, v43);
        WdLogEvent5_WdAssertion(v167);
      }
      v168 = v181;
      v169 = v201 | v135;
      if ( (v181 | v182) != (_DWORD)v169 )
      {
        v170 = WdLogNewEntry5_WdAssertion(v169, v181);
        WdLogEvent5_WdAssertion(v170);
        v168 = v181;
      }
      v195 = ~v179 & v194;
      v13 = 0;
      *v231 = v216;
      v171 = v212;
      *a5 = v184;
      *a6 = v33;
      v33 = 0LL;
      *a7 = v171;
      if ( *(_DWORD *)v10 && *(_DWORD *)v10 != (_DWORD)v168 )
      {
        v172 = WdLogNewEntry5_WdAssertion(v171, v168);
        WdLogEvent5_WdAssertion(v172);
      }
      v173 = *((_DWORD *)v10 + 1);
      v174 = v181;
      *(_DWORD *)v10 = v181;
      if ( v173 && v173 != v135 )
      {
        v175 = WdLogNewEntry5_WdAssertion(v171, v181);
        WdLogEvent5_WdAssertion(v175);
        v174 = v181;
      }
      *((_DWORD *)v10 + 10) = v193;
      *((_DWORD *)v10 + 4) = v182;
      *((_DWORD *)v10 + 13) = v189;
      *((_DWORD *)v10 + 5) = v199;
      *((_DWORD *)v10 + 6) = v185;
      *((_DWORD *)v10 + 12) = v195;
      *((_DWORD *)v10 + 38) = v196;
      *((_DWORD *)v10 + 63) = v203;
      *((_DWORD *)v10 + 1) = v135;
      *((_DWORD *)v10 + 2) = v179;
      *((_DWORD *)v10 + 7) = v187;
      *((_DWORD *)v10 + 3) = v201;
      *((_DWORD *)v10 + 16) = v202;
      *((_DWORD *)v10 + 20) = 0;
      *((_DWORD *)v10 + 17) = 0;
      if ( (v229 & 0x10000) != 0 )
      {
        *((_DWORD *)v10 + 14) = -1;
      }
      else
      {
        v176 = ~(v174 | v135) | v197;
        v177 = v179 & v176;
        v178 = v202 | *((_DWORD *)v10 + 14) | v187 | ((v187 & v176) != 0 ? v176 : 0);
        *((_DWORD *)v10 + 14) = v178;
        if ( (((v179 & v176) - 1) & v179 & v176) != 0 )
        {
          *((_DWORD *)v10 + 14) = v176 | v178;
        }
        else if ( v177 )
        {
          *((_DWORD *)v10 + 14) = v178 | v176 & ~v177;
        }
      }
      FillFailedStatus(v10, 0);
      if ( a9 )
      {
        v42 = 0LL;
        *a9 = v207;
      }
      else
      {
        v42 = v207;
      }
LABEL_230:
      if ( v33 )
        operator delete[](v33);
      if ( v42 )
        operator delete[](v42);
      goto LABEL_234;
    }
    v139 = 0;
    while ( 1 )
    {
      v209 = (unsigned int)v44;
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v134, v136, &v209);
      v143 = MostImportantVidPnPathTargetsFromSource;
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        v43 = v209;
        if ( v209 != -1 )
        {
          v146 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v134, v209);
          IsVidPnSourceActive = DMMVIDEOPRESENTTARGET::NeedToBeActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)v146 + 12)
                                                                                                + 96LL));
LABEL_173:
          v44 = 0LL;
          if ( IsVidPnSourceActive )
            v139 |= 1 << v136;
          goto LABEL_176;
        }
      }
      else
      {
        if ( MostImportantVidPnPathTargetsFromSource == -1071774919 )
          goto LABEL_170;
        v144 = WdLogNewEntry5_WdAssertion(v142, v141);
        WdLogEvent5_WdAssertion(v144);
      }
      if ( v143 == -1071774919 )
      {
LABEL_170:
        IsVidPnSourceActive = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v137 + 2696), v136);
        goto LABEL_173;
      }
      v44 = 0LL;
LABEL_176:
      v138 = *(_QWORD *)(v137 + 2696);
      if ( ++v136 >= *(_DWORD *)(v138 + 80) )
      {
        v33 = v186;
        v199 = v139;
        v10 = a8;
        goto LABEL_178;
      }
    }
  }
  v13 = -1073741801;
  v34 = WdLogNewEntry5_WdLowResource(v30, v29, v31, v32);
  *(_QWORD *)(v34 + 24) = v26;
  *(_QWORD *)(v34 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v34);
LABEL_234:
  auto_rc<DMMVIDPN const>::reset(&v221, 0LL);
  return v13;
}
