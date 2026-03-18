/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0294D8C
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02946B8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C000A1A0 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DF268 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0130164 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0130A2C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0130A78 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0131130 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01311A0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0131FF4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0132DA4 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0159010 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C015D7A8 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0163894 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C0294288 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0294958 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C0294B58 (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C0294C2C (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0296144 (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C02962E0 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02E9A48 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02E9E18 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C02EA140 (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02EF5CC (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall HandleMonitorArrival(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // rdi
  __int64 v8; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r13
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct CCD_BTL *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  _QWORD *v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // r8d
  unsigned int v28; // ecx
  __int64 v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // r8
  __int64 v32; // rax
  __int16 v33; // cx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  _QWORD *v38; // rax
  unsigned __int8 v39; // al
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v40; // ebx
  __int64 v41; // rdx
  int v42; // r12d
  __int64 v43; // rax
  unsigned int v44; // edx
  int Persisted; // r14d
  __int64 v46; // rbx
  char v47; // r12
  unsigned int i; // ebx
  __int64 v49; // rdx
  __int64 PathsCount; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // r14
  _QWORD *v67; // rax
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r14
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // rax
  unsigned int v80; // edx
  unsigned int v81; // r8d
  unsigned int v82; // r9d
  __int64 v83; // rdx
  __int64 v84; // rcx
  struct CCD_BTL *v85; // rax
  unsigned __int8 v86; // bl
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v87; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v88; // rax
  __int64 v89; // r8
  unsigned __int8 IsPortraitFirstTarget; // al
  char v91; // al
  unsigned __int16 v92; // ax
  __int64 v93; // rdx
  __int16 v94; // r12
  __int64 v95; // rax
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rcx
  unsigned __int16 v101; // dx
  __int64 v102; // r8
  __int64 v103; // r9
  int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rbx
  __int64 v108; // rax
  __int64 v109; // rax
  unsigned int j; // ebx
  __int64 v111; // rcx
  unsigned __int16 v112; // ax
  __int16 v113; // r14
  unsigned __int16 v114; // r14
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  __int64 v120; // r8
  __int64 v121; // r9
  int v122; // eax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rax
  unsigned int v126; // ebx
  char v127; // al
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v132; // r14
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v133; // rax
  __int64 v134; // rcx
  __int128 v135; // xmm1
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v136; // r14
  __int64 v137; // rdx
  bool v138; // zf
  __int64 v139; // rcx
  __int64 v140; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v141; // rax
  __int64 v142; // rcx
  int v143; // eax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rax
  __int64 v149; // r8
  __int64 v150; // r9
  int v151; // eax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rax
  int v155; // eax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // rbx
  __int64 v159; // rax
  __int64 v160; // r8
  __int64 v161; // r9
  int v162; // eax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r14
  __int64 v166; // rax
  int v167; // eax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rbx
  _QWORD *v171; // rax
  _QWORD *v172; // rax
  unsigned __int8 v173[4]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v174[4]; // [rsp+5Ch] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v175; // [rsp+60h] [rbp-A8h] BYREF
  int LaptopSpecialCaseFlags; // [rsp+64h] [rbp-A4h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v177[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v178; // [rsp+70h] [rbp-98h]
  unsigned int v179[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v180; // [rsp+80h] [rbp-88h]
  struct D3DKMT_GETPATHSMODALITY *v181[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v182; // [rsp+C8h] [rbp-40h]
  int v183; // [rsp+D4h] [rbp-34h]
  int v184; // [rsp+D8h] [rbp-30h]
  struct D3DKMT_GETPATHSMODALITY *v185[12]; // [rsp+E8h] [rbp-20h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v186[12]; // [rsp+148h] [rbp+40h] BYREF

  v6 = a4;
  v8 = a3;
  if ( a5 == 4 )
  {
    *(_BYTE *)(a1 + 26) = 0;
    return 0LL;
  }
  v11 = DisplayConfigHandleMonitorInvalidation(3LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
  v14 = v6;
  v178 = v6;
  v15 = v11;
  v180 = v8;
  v16 = v8;
  if ( v11 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v17[3] = v15;
    v17[4] = a2->HighPart;
    v17[5] = a2->LowPart;
    v17[6] = v8;
    v17[7] = v6;
    WdLogEvent5_WdError(v17);
  }
  if ( !*(_BYTE *)(a1 + 24) )
  {
    v66 = a5;
    goto LABEL_146;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v181, 8u, 0);
  v20 = CCD_BTL::Global(v19, v18);
  v21 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v181, (struct CCD_BTL *)((char *)v20 + 8));
  v24 = v21;
  if ( v21 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v25[3] = v24;
    v25[4] = a2->HighPart;
    v25[5] = a2->LowPart;
    v25[6] = v8;
    v25[7] = v6;
    WdLogEvent5_WdError(v25);
    v26 = 0;
    v27 = v24;
    v28 = 62;
LABEL_11:
    DxgkLogCodePointPacket(v28, v26, v27, 0, (__int64)*a2);
    *(_BYTE *)(a1 + 26) = 1;
    *(_BYTE *)(a1 + 31) = 1;
LABEL_17:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v181);
    return 0LL;
  }
  v30 = *((_DWORD *)DXGGLOBAL::GetGlobal(v23, v22) + 442);
  if ( v30 > 1 )
  {
    v32 = WdLogNewEntry5_WdWarning(v29, 1LL, v31);
    *(_QWORD *)(v32 + 24) = 3515LL;
    WdLogEvent5_WdWarning(v32);
    v27 = 1;
    v26 = v30;
    v28 = 82;
    goto LABEL_11;
  }
  if ( v182 )
    v33 = *(_WORD *)(v182 + 20);
  else
    v33 = 0;
  if ( !v33 )
  {
    DxgkLogCodePointPacket(0x3Eu, 1u, 0, 0, (__int64)*a2);
    *(_BYTE *)(a1 + 26) = 1;
    goto LABEL_17;
  }
  v173[2] = 1;
  v177[0] = D3DKMDT_VOT_HD15;
  v175 = D3DKMDT_VOT_HD15;
  v177[1] = D3DKMDT_VOT_HD15;
  v173[3] = 0;
  v174[0] = 0;
  v173[1] = 0;
  v34 = QueryMonitorType(
          a2,
          v8,
          (enum _DMM_VIDPN_MONITOR_TYPE *)v177,
          &v175,
          &v177[1],
          &v173[3],
          &v173[2],
          v174,
          &v173[1]);
  v37 = v34;
  if ( v34 >= 0 )
  {
    v40 = v177[0];
    v39 = v173[1];
  }
  else
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
    v38[3] = v37;
    v38[4] = a2->HighPart;
    v38[5] = a2->LowPart;
    v38[6] = v8;
    v38[7] = v6;
    WdLogEvent5_WdError(v38);
    v39 = 0;
    v175 = D3DKMDT_VOT_UNINITIALIZED;
    v40 = D3DKMDT_VOT_HD15;
    v173[1] = 0;
    v177[0] = D3DKMDT_VOT_HD15;
    v173[3] = 0;
    v173[2] = 0;
    v174[0] = 0;
  }
  v173[0] = v39;
  LaptopSpecialCaseFlags = GetLaptopSpecialCaseFlags(
                             (const struct CCD_TOPOLOGY *)v181,
                             a2,
                             v8,
                             v175,
                             (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
  v42 = LaptopSpecialCaseFlags;
  if ( LaptopSpecialCaseFlags )
  {
    if ( LaptopSpecialCaseFlags == 1 )
    {
      *(_BYTE *)(a1 + 27) = 1;
    }
    else if ( LaptopSpecialCaseFlags == 8 )
    {
      *(_BYTE *)(a1 + 28) = 1;
    }
    else
    {
      v43 = WdLogNewEntry5_WdAssertion((unsigned int)(LaptopSpecialCaseFlags - 1), v41);
      *(_QWORD *)(v43 + 24) = 3593LL;
      WdLogEvent5_WdAssertion(v43);
    }
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v186, 8u, 0);
  if ( v42 && v40 == D3DKMDT_VOT_SVIDEO )
    v44 = v42 | 0x86;
  else
    v44 = 143;
  Persisted = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v186, v44, 0LL);
  LODWORD(v46) = Persisted;
  if ( Persisted < 0 )
    goto LABEL_50;
  if ( v177[1] == D3DKMDT_VOT_MIRACAST )
  {
    v47 = 0;
    for ( i = 0; ; ++i )
    {
      PathsCount = (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v186);
      if ( i >= (unsigned int)PathsCount )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v186, i);
      if ( *((_DWORD *)PathDescriptor + 7) == a3 && *((_DWORD *)PathDescriptor + 4) == a2->LowPart )
      {
        PathsCount = (unsigned int)a2->HighPart;
        if ( *((_DWORD *)PathDescriptor + 5) == (_DWORD)PathsCount )
        {
          v47 = 1;
          break;
        }
      }
    }
    LODWORD(v46) = Persisted;
    if ( !v47 )
    {
      v52 = WdLogNewEntry5_WdError(PathsCount, v49);
      *(_QWORD *)(v52 + 24) = 3643LL;
      WdLogEvent5_WdError(v52);
      LODWORD(v46) = -1073741823;
    }
    v42 = LaptopSpecialCaseFlags;
  }
  if ( !IsValidCloneConfiguration(v186[8]) )
  {
    v57 = WdLogNewEntry5_WdError(v54, v53);
    *(_QWORD *)(v57 + 24) = 3653LL;
    WdLogEvent5_WdError(v57);
    LODWORD(v46) = -1073741823;
  }
  if ( (int)v46 < 0 )
  {
LABEL_50:
    v62 = v178;
  }
  else
  {
    v58 = CCD_TOPOLOGY::Persist(v186, 0LL, v55, v56);
    v46 = v58;
    if ( v58 >= 0 )
    {
      v62 = v178;
    }
    else
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59);
      v62 = v178;
      v61[3] = v46;
      v61[4] = a2->HighPart;
      v61[5] = a2->LowPart;
      v61[6] = v180;
      v61[7] = v62;
      WdLogEvent5_WdError(v61);
      DxgkLogCodePointPacket(0x3Eu, 2u, v46, 0, (__int64)*a2);
    }
    *(_DWORD *)(a1 + 32) |= 0x40u;
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v186);
  if ( (int)v46 < 0 )
  {
    if ( (_DWORD)v46 == -1073741266 )
    {
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
      goto LABEL_143;
    }
    v67 = (_QWORD *)WdLogNewEntry5_WdEvent(v64, v63);
    v67[3] = (int)v46;
    v67[4] = a2->HighPart;
    v67[5] = a2->LowPart;
    v67[6] = v180;
    v67[7] = v62;
    WdLogEvent5_WdEvent(v67);
    *(_BYTE *)(a1 + 26) = 1;
    *(_BYTE *)(a1 + 31) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v185, 8u, 0);
    v68 = CCD_TOPOLOGY::CopyInheritScope((CCD_TOPOLOGY *)v185, (const struct CCD_TOPOLOGY *)v181);
    v71 = v68;
    if ( v68 < 0 )
    {
      v72 = WdLogNewEntry5_WdError(v70, v69);
      *(_QWORD *)(v72 + 32) = v181;
      *(_QWORD *)(v72 + 24) = v71;
      WdLogEvent5_WdError(v72);
      v75 = CCD_TOPOLOGY::Persist(v181, 0LL, v73, v74);
      v78 = v75;
      if ( v75 < 0 )
      {
        v79 = WdLogNewEntry5_WdError(v77, v76);
        *(_QWORD *)(v79 + 32) = v181;
        *(_QWORD *)(v79 + 24) = v78;
        WdLogEvent5_WdError(v79);
      }
      v80 = 3;
      goto LABEL_58;
    }
    v179[0] = 0;
    if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v181, a2, a3, v179) >= 0 )
      CCD_TOPOLOGY::RemovePath((CCD_TOPOLOGY *)v181, v179[0]);
    if ( v182 )
      v84 = *(unsigned __int16 *)(v182 + 20);
    else
      v84 = 0LL;
    if ( !(_WORD)v84 )
    {
      v85 = CCD_BTL::Global(v84, v83);
      CCD_TOPOLOGY::Clear((struct CCD_BTL *)((char *)v85 + 8));
      goto LABEL_141;
    }
    v86 = v173[0];
    v91 = 0;
    if ( !v173[0] && !v173[2] )
    {
      if ( v173[3]
        || (v87 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v181, 0LL),
            v88 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v181, 0LL),
            IsPortraitFirstTarget = DxgkIsPortraitFirstTarget(
                                      *(struct _LUID *)((char *)v88 + 16),
                                      *((_DWORD *)v87 + 7),
                                      v89),
            v86 = 0,
            IsPortraitFirstTarget) )
      {
        v91 = 1;
      }
    }
    v174[1] = v91;
    v92 = DetermineDefaultTopology(v42, v91);
    v94 = v92;
    if ( v92 == 3 )
    {
      if ( v86 && *((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v181, 0LL) + 129)
        || a2->LowPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v181, 0LL) + 4)
        && a2->HighPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v181, 0LL) + 5) )
      {
        if ( !v86 )
        {
          v179[1] = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v181, 0LL) + 6);
          goto LABEL_102;
        }
      }
      else
      {
        v94 = 4;
      }
    }
    else if ( (unsigned __int16)(v92 - 4) > 1u )
    {
      v95 = WdLogNewEntry5_WdAssertion((unsigned int)v92 - 4, v93);
      *(_QWORD *)(v95 + 24) = 3796LL;
      WdLogEvent5_WdAssertion(v95);
    }
    v179[1] = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v181, a2);
    if ( v179[1] == 16 )
    {
      v100 = WdLogNewEntry5_WdEvent(v99, v98);
      if ( v182 )
        v101 = *(_WORD *)(v182 + 20);
      else
        v101 = 0;
      *(_QWORD *)(v100 + 24) = v101;
      *(_QWORD *)(v100 + 32) = 16LL;
      WdLogEvent5_WdEvent(v100);
      v104 = CCD_TOPOLOGY::Persist(v185, 0LL, v102, v103);
      v107 = v104;
      if ( v104 < 0 )
      {
        v108 = WdLogNewEntry5_WdError(v106, v105);
        *(_QWORD *)(v108 + 32) = v185;
        *(_QWORD *)(v108 + 24) = v107;
        WdLogEvent5_WdError(v108);
      }
      v82 = 0;
      v81 = v107;
      v80 = 4;
      goto LABEL_60;
    }
    if ( v94 == 3 )
    {
      if ( !v86 )
      {
        v109 = WdLogNewEntry5_WdAssertion(v99, v98);
        *(_QWORD *)(v109 + 24) = 3873LL;
        WdLogEvent5_WdAssertion(v109);
      }
      for ( j = 0; ; ++j )
      {
        v111 = v182;
        v112 = v182 ? *(_WORD *)(v182 + 20) : 0;
        if ( j >= v112 )
          break;
        if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v181, j) + 129) )
        {
          v94 = 4;
          goto LABEL_102;
        }
      }
      goto LABEL_103;
    }
LABEL_102:
    v111 = v182;
LABEL_103:
    if ( v111 )
      v113 = *(_WORD *)(v111 + 20);
    else
      v113 = 0;
    v114 = v113 + 1;
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v181, v114, v96, v97) < v114 )
    {
      v119 = WdLogNewEntry5_WdLowResource(v116, v115, v117, v118);
      *(_QWORD *)(v119 + 24) = v114;
      WdLogEvent5_WdLowResource(v119);
      v122 = CCD_TOPOLOGY::Persist(v185, 0LL, v120, v121);
      v78 = v122;
      if ( v122 < 0 )
      {
        v125 = WdLogNewEntry5_WdError(v124, v123);
        *(_QWORD *)(v125 + 32) = v185;
        *(_QWORD *)(v125 + 24) = v78;
        WdLogEvent5_WdError(v125);
      }
      v81 = v114;
      v80 = 5;
      goto LABEL_59;
    }
    v126 = v114 - 1;
    if ( !v173[0] )
    {
      v127 = LaptopSpecialCaseFlags;
      if ( LaptopSpecialCaseFlags )
      {
        if ( v114 != 2 )
        {
          v128 = WdLogNewEntry5_WdAssertion(1LL, 2LL);
          *(_QWORD *)(v128 + 24) = 3936LL;
          WdLogEvent5_WdAssertion(v128);
          v127 = LaptopSpecialCaseFlags;
        }
        if ( v174[1] )
          v126 = !IsInternalVideoOutput(v175);
        else
          v126 = ((unsigned __int8)~v127 >> 3) & 1;
        if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v181, 0LL) + 28) )
        {
          v131 = WdLogNewEntry5_WdAssertion(v130, v129);
          *(_QWORD *)(v131 + 24) = 3968LL;
          WdLogEvent5_WdAssertion(v131);
        }
        v132 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v181, 0LL);
        v133 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v181, 1LL);
        v134 = 2LL;
        do
        {
          *(_OWORD *)v133 = *(_OWORD *)v132;
          *((_OWORD *)v133 + 1) = *((_OWORD *)v132 + 1);
          *((_OWORD *)v133 + 2) = *((_OWORD *)v132 + 2);
          *((_OWORD *)v133 + 3) = *((_OWORD *)v132 + 3);
          *((_OWORD *)v133 + 4) = *((_OWORD *)v132 + 4);
          *((_OWORD *)v133 + 5) = *((_OWORD *)v132 + 5);
          *((_OWORD *)v133 + 6) = *((_OWORD *)v132 + 6);
          v133 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v133 + 128);
          v135 = *((_OWORD *)v132 + 7);
          v132 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v132 + 128);
          *((_OWORD *)v133 - 1) = v135;
          --v134;
        }
        while ( v134 );
        *(_OWORD *)v133 = *(_OWORD *)v132;
        *(_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v181, 1 - v126) = 0xCF00000000000LL;
      }
    }
    v136 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v181, v126);
    *((struct _LUID *)v136 + 2) = *a2;
    LOBYTE(v137) = v173[0] != 0 ? 2 : 0;
    v138 = v174[0] == 0;
    *((_DWORD *)v136 + 6) = v179[1];
    *((_DWORD *)v136 + 7) = a3;
    *((_DWORD *)v136 + 22) = v175;
    *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v136 + 23) = v177[1];
    *((_BYTE *)v136 + 129) = v137 | !v138;
    *(_QWORD *)v136 = 0x8F00000000000LL;
    ++*(_WORD *)(v182 + 20);
    if ( v94 == 3 )
    {
      if ( v182 )
        v139 = *(unsigned __int16 *)(v182 + 20);
      else
        v139 = 0LL;
      if ( (_WORD)v139 != 2 )
      {
        v140 = WdLogNewEntry5_WdAssertion(v139, v137);
        *(_QWORD *)(v140 + 24) = 4009LL;
        WdLogEvent5_WdAssertion(v140);
      }
      v141 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v181, v126 == 0);
      v142 = *((_QWORD *)v141 + 19);
      *(_QWORD *)v136 |= 0x20000uLL;
      *((_QWORD *)v136 + 19) = v142;
      *((_DWORD *)v136 + 46) = *((_DWORD *)v141 + 46);
      *(_QWORD *)v136 |= 0x4000000000000uLL;
    }
    else
    {
      CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v181, v126);
    }
    v183 = 1;
    v184 = 4;
    v143 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v181, 0, 0);
    v71 = v143;
    if ( v143 >= 0 )
    {
      v155 = CCD_TOPOLOGY::Persist(v181, 1LL, v146, v147);
      v158 = v155;
      if ( v155 == -1073741266 )
      {
        v82 = 0;
        v81 = -1073741266;
        v80 = 7;
      }
      else
      {
        if ( v155 >= 0 )
        {
          *(_BYTE *)(a1 + 31) = 0;
          goto LABEL_141;
        }
        v159 = WdLogNewEntry5_WdError(v157, v156);
        *(_QWORD *)(v159 + 24) = v158;
        *(_QWORD *)(v159 + 32) = v182;
        WdLogEvent5_WdError(v159);
        v162 = CCD_TOPOLOGY::Persist(v185, 0LL, v160, v161);
        v165 = v162;
        if ( v162 < 0 )
        {
          v166 = WdLogNewEntry5_WdError(v164, v163);
          *(_QWORD *)(v166 + 32) = v185;
          *(_QWORD *)(v166 + 24) = v165;
          WdLogEvent5_WdError(v166);
        }
        v82 = v165;
        v81 = v158;
        v80 = 8;
      }
      goto LABEL_60;
    }
    v148 = WdLogNewEntry5_WdError(v145, v144);
    *(_QWORD *)(v148 + 24) = v71;
    *(_QWORD *)(v148 + 32) = v182;
    WdLogEvent5_WdError(v148);
    v151 = CCD_TOPOLOGY::Persist(v185, 0LL, v149, v150);
    v78 = v151;
    if ( v151 < 0 )
    {
      v154 = WdLogNewEntry5_WdError(v153, v152);
      *(_QWORD *)(v154 + 32) = v185;
      *(_QWORD *)(v154 + 24) = v78;
      WdLogEvent5_WdError(v154);
    }
    v80 = 6;
LABEL_58:
    v81 = v71;
LABEL_59:
    v82 = v78;
LABEL_60:
    DxgkLogCodePointPacket(0x3Eu, v80, v81, v82, (__int64)*a2);
LABEL_141:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v185);
LABEL_143:
    v66 = a5;
    v16 = v180;
    v14 = v178;
    goto LABEL_144;
  }
  v65 = (_QWORD *)WdLogNewEntry5_WdEvent(v64, v63);
  v16 = v180;
  v14 = v178;
  v66 = a5;
  v65[3] = a2->HighPart;
  v65[4] = a2->LowPart;
  v65[5] = v16;
  v65[6] = v14;
  v65[7] = a5;
  WdLogEvent5_WdEvent(v65);
LABEL_144:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v181);
LABEL_146:
  v167 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
  v170 = v167;
  if ( v167 < 0 )
  {
    v171 = (_QWORD *)WdLogNewEntry5_WdError(v169, v168);
    v171[3] = v170;
    v171[4] = a2->HighPart;
    v171[5] = a2->LowPart;
    v171[6] = v16;
    v171[7] = v14;
    WdLogEvent5_WdError(v171);
    LODWORD(v170) = 0;
  }
  v172 = (_QWORD *)WdLogNewEntry5_WdEvent(v169, v168);
  v172[3] = a2->HighPart;
  v172[4] = a2->LowPart;
  v172[5] = v16;
  v172[6] = v14;
  v172[7] = v66;
  WdLogEvent5_WdEvent(v172);
  return (unsigned int)v170;
}
