/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0FB0
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02F07A8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C0011BD0 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01AC3A8 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01ACA7C (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01ADE34 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01ADEA8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01AEBD8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01B6AE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01C08BC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C2A0C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01DAF7C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01E3C20 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C02F02C0 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C02F0AB0 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C02F0D58 (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C02F0E5C (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02F2744 (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE3333@Z @ 0x1C02F28C8 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C03A96F4 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C03A9A88 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePath@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C03A9DF4 (-RemovePath@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C03AA4E8 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall HandleMonitorArrival(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v9; // rdi
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rbx
  struct CCD_BTL *v16; // rax
  int v17; // eax
  __int64 v18; // r14
  unsigned int v19; // ebx
  int v20; // eax
  __int64 v21; // rbx
  unsigned __int8 v22; // al
  int v23; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v24; // r14d
  unsigned int v25; // edx
  __int64 v26; // r14
  unsigned int i; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  int v29; // eax
  int v30; // eax
  __int64 v31; // r15
  int v32; // eax
  __int64 v33; // r14
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  unsigned int v36; // edx
  unsigned __int8 v37; // bl
  unsigned int v38; // ebx
  struct _LUID *v39; // rax
  __int64 v40; // r8
  char IsPortraitFirstTarget; // al
  char v42; // r15
  __int16 v43; // r12
  __int64 v44; // r8
  __int64 v45; // r9
  int UnusedVidpnSourceId; // eax
  unsigned __int16 v47; // cx
  int v48; // eax
  __int64 v49; // r14
  unsigned int j; // ebx
  __int64 v51; // rcx
  unsigned __int16 v52; // ax
  __int16 v53; // r14
  unsigned __int16 v54; // r14
  int v55; // eax
  __int64 v56; // r15
  unsigned int v57; // ebx
  char v58; // al
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v59; // rax
  __int64 v60; // rdx
  _OWORD *v61; // rcx
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int64 v71; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v72; // rcx
  __int64 v73; // rdx
  _OWORD *v74; // rax
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int64 v84; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v85; // rax
  __int64 v86; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v87; // r14
  bool v88; // cf
  bool v89; // zf
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v90; // rax
  __int64 v91; // rcx
  int v92; // eax
  int v93; // eax
  __int64 v94; // r15
  int v95; // eax
  int v96; // eax
  __int64 v97; // r15
  struct CCD_BTL *v98; // rax
  int v99; // eax
  __int64 v100; // rbx
  unsigned __int8 v101[4]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v102[4]; // [rsp+5Ch] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v103; // [rsp+60h] [rbp-A8h] BYREF
  int v104; // [rsp+64h] [rbp-A4h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v105[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v106; // [rsp+70h] [rbp-98h]
  unsigned int v107; // [rsp+78h] [rbp-90h] BYREF
  int v108; // [rsp+7Ch] [rbp-8Ch]
  struct D3DKMT_GETPATHSMODALITY *v109[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v110; // [rsp+C8h] [rbp-40h]
  int v111; // [rsp+D4h] [rbp-34h]
  int v112; // [rsp+D8h] [rbp-30h]
  __int64 v113; // [rsp+F8h] [rbp-10h]
  struct D3DKMT_GETPATHSMODALITY *v114[14]; // [rsp+108h] [rbp+0h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v115[14]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v116[304]; // [rsp+1E8h] [rbp+E0h] BYREF

  v6 = a5;
  v7 = a4;
  v9 = a3;
  if ( a5 == 4 )
  {
    *(_BYTE *)(a1 + 26) = 0;
    return 0LL;
  }
  v12 = DisplayConfigHandleMonitorInvalidation(3LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
  v13 = v9;
  v106 = v9;
  v113 = v7;
  v14 = v7;
  if ( v12 < 0 )
  {
    v15 = v12;
    WdLogSingleEntry5(2LL, v12, a2->HighPart, a2->LowPart, v9, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to invalidate path-persistence invariance. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_"
                "IncomingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      v15,
      a2->HighPart,
      a2->LowPart,
      v9,
      v14);
  }
  if ( *(_BYTE *)(a1 + 24) )
  {
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v109, 8u, 0);
    v16 = CCD_BTL::Global();
    v17 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v109, (struct CCD_BTL *)((char *)v16 + 8));
    v18 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry5(2LL, v17, a2->HighPart, a2->LowPart, v9, v14);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unable to get copy of most recent topology. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_Inco"
                  "mingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
        v18,
        a2->HighPart,
        a2->LowPart,
        v9,
        v14);
      DxgkLogCodePointPacket(0x3Eu, 0, v18, 0, (__int64)*a2);
LABEL_11:
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
LABEL_137:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v109);
      return 0LL;
    }
    v19 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 486);
    if ( v19 > 1 )
    {
      WdLogSingleEntry1(3LL, 3541LL);
      DxgkLogCodePointPacket(0x52u, v19, 1u, 0, (__int64)*a2);
      goto LABEL_11;
    }
    if ( !v110 || !*(_WORD *)(v110 + 20) )
    {
      DxgkLogCodePointPacket(0x3Eu, 1u, 0, 0, (__int64)*a2);
      *(_BYTE *)(a1 + 26) = 1;
      goto LABEL_137;
    }
    v101[3] = 1;
    v104 = 0;
    v103 = D3DKMDT_VOT_HD15;
    v105[1] = D3DKMDT_VOT_HD15;
    v102[0] = 0;
    v102[2] = 0;
    v101[1] = 0;
    v101[2] = 0;
    v20 = QueryMonitorType(
            a2,
            a3,
            (enum _DMM_VIDPN_MONITOR_TYPE *)&v104,
            &v103,
            &v105[1],
            v102,
            &v101[3],
            &v102[2],
            &v101[1],
            &v101[2]);
    if ( v20 >= 0 )
    {
      v23 = v104;
      v22 = v101[1];
      v102[1] = v101[2];
    }
    else
    {
      v21 = v20;
      WdLogSingleEntry5(2LL, v20, a2->HighPart, a2->LowPart, v9, v14);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unable to query monitor type - assumed DMM_VMT_UNINITIALIZED. (_NtStatus = 0x%I64x, i_AdapterLuid = 0x%"
                  "I64x%08I64x, i_IncomingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
        v21,
        a2->HighPart,
        a2->LowPart,
        v9,
        v14);
      v22 = 0;
      v103 = D3DKMDT_VOT_UNINITIALIZED;
      v23 = 0;
      v101[1] = 0;
      v104 = 0;
      v102[0] = 0;
      v101[3] = 0;
      v102[2] = 0;
      v102[1] = 0;
      v101[2] = 0;
    }
    v101[0] = v22;
    v105[0] = GetLaptopSpecialCaseFlags(
                (const struct CCD_TOPOLOGY *)v109,
                a2,
                a3,
                v103,
                (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
    v24 = v105[0];
    if ( v105[0] )
    {
      if ( v105[0] == D3DKMDT_VOT_SVIDEO )
      {
        *(_BYTE *)(a1 + 27) = 1;
      }
      else if ( v105[0] == D3DKMDT_VOT_D_JPN )
      {
        *(_BYTE *)(a1 + 28) = 1;
      }
      else
      {
        WdLogSingleEntry1(1LL, 3622LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Invalid laptop special case flags!",
          3622LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v115, 8u, 0);
    if ( v24 && v23 == 1 )
      v25 = v24 | 0x86;
    else
      v25 = 143;
    LODWORD(v26) = CCD_TOPOLOGY::RetrievePersisted(v115, v25, 0LL);
    if ( (int)v26 >= 0 )
    {
      if ( v105[1] == D3DKMDT_VOT_MIRACAST )
      {
        for ( i = 0; i < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v115); ++i )
        {
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v115, i);
          if ( *((_DWORD *)PathDescriptor + 7) == a3
            && *((_DWORD *)PathDescriptor + 4) == a2->LowPart
            && *((_DWORD *)PathDescriptor + 5) == a2->HighPart )
          {
            goto LABEL_36;
          }
        }
        WdLogSingleEntry1(2LL, 3672LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Miracast monitor was not active in CCD database so adding as new monitor",
          3672LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v26) = -1073741823;
      }
LABEL_36:
      if ( IsValidCloneConfiguration(v115[8]) )
      {
        if ( (int)v26 >= 0 )
        {
          v29 = CCD_TOPOLOGY::Persist(v115, 0LL);
          v26 = v29;
          if ( v29 < 0 )
          {
            WdLogSingleEntry5(2LL, v29, a2->HighPart, a2->LowPart, v106, v14);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Unable to persist most recent topology. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_In"
                        "comingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
              v26,
              a2->HighPart,
              a2->LowPart,
              v106,
              v14);
            DxgkLogCodePointPacket(0x3Eu, 2u, v26, 0, (__int64)*a2);
          }
          *(_DWORD *)(a1 + 32) |= 0x40u;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, 3682LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The persisted topology requires cross-adapter clone support however it does not support Virtual Mode."
                    " Therefore the new monitor will be added in extend mode.",
          3682LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v26) = -1073741823;
      }
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v115);
    if ( (int)v26 >= 0 )
    {
      v6 = a5;
      v13 = v106;
      WdLogSingleEntry5(4LL, a2->HighPart, a2->LowPart, v106, v14, a5);
LABEL_132:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v109);
      goto LABEL_133;
    }
    if ( (_DWORD)v26 == -1073741266 )
    {
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
      goto LABEL_131;
    }
    WdLogSingleEntry5(4LL, (int)v26, a2->HighPart, a2->LowPart, v106, v14);
    *(_BYTE *)(a1 + 26) = 1;
    *(_BYTE *)(a1 + 31) = 1;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v114, 8u, 0);
    v30 = CCD_TOPOLOGY::CopyInheritScope((CCD_TOPOLOGY *)v114, (const struct CCD_TOPOLOGY *)v109);
    v31 = v30;
    if ( v30 < 0 )
    {
      WdLogSingleEntry2(2LL, v30, v109);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unable to create copy of io_pNewTopologySet - will keep current topology. (NtStatus = 0x%I64x, io_pNewT"
                  "opologySet = 0x%I64x)",
        v31,
        (__int64)v109,
        0LL,
        0LL,
        0LL);
      v32 = CCD_TOPOLOGY::Persist(v109, 0LL);
      v33 = v32;
      if ( v32 < 0 )
      {
        WdLogSingleEntry2(2LL, v32, v109);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, io_"
                    "pNewTopologySet = 0x%I64x)",
          v33,
          (__int64)v109,
          0LL,
          0LL,
          0LL);
      }
      v34 = v33;
      v35 = v31;
      v36 = 3;
      goto LABEL_49;
    }
    v107 = 0;
    if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v109, a2, a3, &v107) >= 0 )
      CCD_TOPOLOGY::RemovePath((CCD_TOPOLOGY *)v109, v107);
    if ( !v110 || !*(_WORD *)(v110 + 20) )
    {
      v98 = CCD_BTL::Global();
      CCD_TOPOLOGY::Clear((struct CCD_BTL *)((char *)v98 + 8));
      goto LABEL_129;
    }
    v37 = v101[0];
    v42 = 0;
    if ( !v101[0] && !v101[3] )
    {
      if ( v102[0]
        || (v38 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v109, 0) + 7),
            v39 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v109, 0),
            IsPortraitFirstTarget = DxgkIsPortraitFirstTarget(v39[2], v38, v40),
            v37 = 0,
            IsPortraitFirstTarget) )
      {
        v42 = 1;
      }
    }
    v43 = DetermineDefaultTopology(v105[0], v42);
    if ( v43 == 3 )
    {
      if ( v37 && *((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v109, 0) + 129)
        || a2->LowPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v109, 0) + 4)
        && a2->HighPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v109, 0) + 5) )
      {
        if ( !v37 )
        {
          v108 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v109, 0) + 6);
          goto LABEL_89;
        }
      }
      else
      {
        v43 = 4;
      }
    }
    else if ( (unsigned __int16)(v43 - 4) > 1u )
    {
      WdLogSingleEntry1(1LL, 3825LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(defaultTopology == MultiScreenDefaultShellTopology::Cloned) || (defaultTopology == MultiScreenDefaultS"
                  "hellTopology::Conjoined) || (defaultTopology == MultiScreenDefaultShellTopology::Disjoint)",
        3825LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v109, a2);
    v44 = 16LL;
    v108 = UnusedVidpnSourceId;
    if ( UnusedVidpnSourceId == 16 )
    {
      if ( v110 )
        v47 = *(_WORD *)(v110 + 20);
      else
        v47 = 0;
      WdLogSingleEntry2(4LL, v47, 16LL);
      v48 = CCD_TOPOLOGY::Persist(v114, 0LL);
      v49 = v48;
      if ( v48 < 0 )
      {
        WdLogSingleEntry2(2LL, v48, v114);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &Or"
                    "iginalTopologySet = 0x%I64x)",
          v49,
          (__int64)v114,
          0LL,
          0LL,
          0LL);
      }
      v34 = 0;
      v36 = 4;
      goto LABEL_77;
    }
    if ( v43 == 3 )
    {
      if ( !v37 )
      {
        WdLogSingleEntry1(1LL, 3902LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"IncomingTargetSupportsVirtualTopologies",
          3902LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      for ( j = 0; ; ++j )
      {
        v51 = v110;
        v52 = v110 ? *(_WORD *)(v110 + 20) : 0;
        if ( j >= v52 )
          break;
        if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v109, j) + 129) )
        {
          v43 = 4;
          goto LABEL_89;
        }
      }
LABEL_90:
      if ( v51 )
        v53 = *(_WORD *)(v51 + 20);
      else
        v53 = 0;
      v54 = v53 + 1;
      if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v109, v54, v44, v45) < v54 )
      {
        WdLogSingleEntry1(6LL, v54);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Unable to allocate 0x%I64x paths for newly added monitor topology - will keep current topology. (NumP"
                    "athsToReserve = 0x%I64u)",
          v54,
          0LL,
          0LL,
          0LL,
          0LL);
        v55 = CCD_TOPOLOGY::Persist(v114, 0LL);
        v56 = v55;
        if ( v55 < 0 )
        {
          WdLogSingleEntry2(2LL, v55, v114);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &"
                      "OriginalTopologySet = 0x%I64x)",
            v56,
            (__int64)v114,
            0LL,
            0LL,
            0LL);
        }
        v35 = v54;
        v34 = v56;
        v36 = 5;
        goto LABEL_49;
      }
      v57 = v54 - 1;
      if ( !v101[0] )
      {
        v58 = v105[0];
        if ( v105[0] )
        {
          if ( v54 != 2 )
          {
            WdLogSingleEntry1(1LL, 3965LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumPathsToReserve == 2", 3965LL, 0LL, 0LL, 0LL, 0LL);
            v58 = v105[0];
          }
          if ( v42 )
            v57 = !IsInternalVideoOutput(v103);
          else
            v57 = ((unsigned __int8)~v58 >> 3) & 1;
          if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v109, 0) + 31) )
          {
            WdLogSingleEntry1(1LL, 3997LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"io_pNewTopologySet->GetPathDescriptor(0)->pDevMode == NULL",
              3997LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v59 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v109, 0);
          v60 = 2LL;
          v61 = v116;
          do
          {
            v62 = *((_OWORD *)v59 + 1);
            *v61 = *(_OWORD *)v59;
            v63 = *((_OWORD *)v59 + 2);
            v61[1] = v62;
            v64 = *((_OWORD *)v59 + 3);
            v61[2] = v63;
            v65 = *((_OWORD *)v59 + 4);
            v61[3] = v64;
            v66 = *((_OWORD *)v59 + 5);
            v61[4] = v65;
            v67 = *((_OWORD *)v59 + 6);
            v61[5] = v66;
            v68 = *((_OWORD *)v59 + 7);
            v59 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v59 + 128);
            v61[6] = v67;
            v61 += 8;
            *(v61 - 1) = v68;
            --v60;
          }
          while ( v60 );
          v69 = *(_OWORD *)v59;
          v70 = *((_OWORD *)v59 + 1);
          v71 = *((_QWORD *)v59 + 4);
          *v61 = v69;
          v61[1] = v70;
          *((_QWORD *)v61 + 4) = v71;
          v72 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v109, 1u);
          v73 = 2LL;
          v74 = v116;
          do
          {
            v75 = v74[1];
            *(_OWORD *)v72 = *v74;
            v76 = v74[2];
            *((_OWORD *)v72 + 1) = v75;
            v77 = v74[3];
            *((_OWORD *)v72 + 2) = v76;
            v78 = v74[4];
            *((_OWORD *)v72 + 3) = v77;
            v79 = v74[5];
            *((_OWORD *)v72 + 4) = v78;
            v80 = v74[6];
            *((_OWORD *)v72 + 5) = v79;
            v81 = v74[7];
            v74 += 8;
            *((_OWORD *)v72 + 6) = v80;
            v72 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v72 + 128);
            *((_OWORD *)v72 - 1) = v81;
            --v73;
          }
          while ( v73 );
          v82 = *v74;
          v83 = v74[1];
          v84 = *((_QWORD *)v74 + 4);
          *(_OWORD *)v72 = v82;
          *((_OWORD *)v72 + 1) = v83;
          *((_QWORD *)v72 + 4) = v84;
          *(_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v109, 1 - v57) = 0xCF00000000000LL;
        }
      }
      v85 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v109, v57);
      v86 = (__int64)*a2;
      v87 = v85;
      v88 = v102[1] != 0;
      v102[1] = -v102[1];
      *((_QWORD *)v85 + 2) = v86;
      *((_DWORD *)v85 + 6) = v108;
      *((_DWORD *)v85 + 7) = a3;
      v89 = v102[2] == 0;
      *((_DWORD *)v85 + 22) = v103;
      *((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v85 + 23) = v105[1];
      *((_BYTE *)v85 + 129) = (v88 ? 4 : 0) | (v101[0] != 0 ? 2 : 0) | !v89;
      *(_QWORD *)v85 = 0x8F00000000000LL;
      ++*(_WORD *)(v110 + 20);
      if ( v43 == 3 )
      {
        if ( !v110 || *(_WORD *)(v110 + 20) != 2 )
        {
          WdLogSingleEntry1(1LL, 4039LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"io_pNewTopologySet->GetPathsCount() == 2",
            4039LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v90 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v109, v57 == 0);
        v91 = *((_QWORD *)v90 + 19);
        *(_QWORD *)v87 |= 0x20000uLL;
        *((_QWORD *)v87 + 19) = v91;
        *((_DWORD *)v87 + 46) = *((_DWORD *)v90 + 46);
        *(_QWORD *)v87 |= 0x4000000000000uLL;
      }
      else
      {
        CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v109, v57);
      }
      v111 = 1;
      v112 = 4;
      v92 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v109, 0, 0);
      v49 = v92;
      if ( v92 >= 0 )
      {
        v95 = CCD_TOPOLOGY::Persist(v109, 1LL);
        v49 = v95;
        if ( v95 == -1073741266 )
        {
          v34 = 0;
          v35 = -1073741266;
          v36 = 7;
          goto LABEL_49;
        }
        if ( v95 >= 0 )
        {
          *(_BYTE *)(a1 + 31) = 0;
          goto LABEL_129;
        }
        WdLogSingleEntry2(2LL, v95, v110);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to persist the newly created topology for newly added monitor - will keep current topology. (N"
                    "tStatus = 0x%I64x, io_pNewTopologySet->GetPathsModality() = 0x%I64x)",
          v49,
          v110,
          0LL,
          0LL,
          0LL);
        v96 = CCD_TOPOLOGY::Persist(v114, 0LL);
        v97 = v96;
        if ( v96 < 0 )
        {
          WdLogSingleEntry2(2LL, v96, v114);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &"
                      "OriginalTopologySet = 0x%I64x)",
            v97,
            (__int64)v114,
            0LL,
            0LL,
            0LL);
        }
        v34 = v97;
        v36 = 8;
      }
      else
      {
        WdLogSingleEntry2(2LL, v92, v110);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to functionalize topology with newly added monitor - will keep current topology. (NtStatus = 0"
                    "x%I64x, io_pNewTopologySet->GetPathsModality() = 0x%I64x)",
          v49,
          v110,
          0LL,
          0LL,
          0LL);
        v93 = CCD_TOPOLOGY::Persist(v114, 0LL);
        v94 = v93;
        if ( v93 < 0 )
        {
          WdLogSingleEntry2(2LL, v93, v114);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &"
                      "OriginalTopologySet = 0x%I64x)",
            v94,
            (__int64)v114,
            0LL,
            0LL,
            0LL);
        }
        v34 = v94;
        v36 = 6;
      }
LABEL_77:
      v35 = v49;
LABEL_49:
      DxgkLogCodePointPacket(0x3Eu, v36, v35, v34, (__int64)*a2);
LABEL_129:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v114);
      v14 = v113;
LABEL_131:
      v6 = a5;
      v13 = v106;
      goto LABEL_132;
    }
LABEL_89:
    v51 = v110;
    goto LABEL_90;
  }
LABEL_133:
  v99 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
  v100 = v99;
  if ( v99 < 0 )
  {
    WdLogSingleEntry5(2LL, v99, a2->HighPart, a2->LowPart, v13, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to invalidate path-persistence/emergency-monitors invariance.(NtStatus = 0x%I64x, i_AdapterLuid = "
                "0x%I64x%08I64x, i_IncomingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      v100,
      a2->HighPart,
      a2->LowPart,
      v13,
      v14);
    LODWORD(v100) = 0;
  }
  WdLogSingleEntry5(4LL, a2->HighPart, a2->LowPart, v13, v14, v6);
  return (unsigned int)v100;
}
