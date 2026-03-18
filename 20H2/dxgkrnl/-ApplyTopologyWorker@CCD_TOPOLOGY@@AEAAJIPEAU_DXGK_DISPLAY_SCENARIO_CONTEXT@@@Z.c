/*
 * XREFs of ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C012E940
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015D6E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CFF0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C001A0C8 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00DE094 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00DE2C8 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E0B98 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C01119C0 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C012D5B4 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C012F360 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0130610 (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0131130 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01311A0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0131FF4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01336C4 (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013E42C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     DxgkStatusChangeNotify @ 0x1C0140680 (DxgkStatusChangeNotify.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C01657D8 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2734::__AUTO_USING_PM_PathChanged2734 @ 0x1C016733C (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PathChanged2734--__AUTO_USING_PM_PathCh.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2732::__AUTO_USING_PM_PrimaryClonePathIndex2732 @ 0x1C0167378 (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PrimaryClonePathIndex2732--__AUTO_USING.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C0195C40 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C02E9AF8 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C02E9C6C (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyWorker(
        CCD_TOPOLOGY *this,
        DWORD a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned int v3; // r14d
  unsigned __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGPROCESS *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rsi
  unsigned int v30; // edx
  _DWORD *v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // ecx
  _DWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // edx
  _DWORD *v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // ecx
  _DWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  DXGGLOBAL *Global; // rax
  SIZE_T v46; // rax
  unsigned __int64 MaximumAdapterCount; // kr00_8
  PVOID v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // rax
  DXGGLOBAL *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rcx
  unsigned __int16 v59; // ax
  unsigned int v60; // r14d
  unsigned __int16 v61; // r10
  unsigned __int16 v62; // r9
  __int64 v63; // r8
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int16 v66; // r9
  unsigned __int16 v67; // r11
  __int64 v68; // r11
  __int64 v69; // r8
  unsigned __int16 v70; // r10
  __int64 v71; // rdx
  __int64 v72; // r9
  unsigned __int16 v73; // r8
  __int64 v74; // rdx
  unsigned __int16 v75; // r11
  __int64 v76; // rcx
  unsigned __int16 v77; // r11
  unsigned __int16 v78; // ax
  unsigned int v79; // r8d
  unsigned int v80; // r9d
  __int64 v81; // r8
  __int64 v82; // r10
  int v83; // edx
  __int64 v84; // rax
  unsigned __int16 v85; // r15
  unsigned __int16 v86; // ax
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rcx
  unsigned int v90; // r9d
  __int64 v91; // r10
  __int64 v92; // r8
  __int64 v93; // rbx
  __int64 v94; // rsi
  __int64 v95; // r8
  int v96; // edx
  __int64 v97; // rax
  unsigned int v98; // edx
  __int64 v99; // rax
  int v100; // eax
  unsigned int v101; // ebx
  char v102; // r12
  DWORD LowPart; // r15d
  int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // r14
  int v108; // eax
  __int64 v109; // r14
  struct DXGGLOBAL *v110; // rax
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rcx
  unsigned __int16 v114; // si
  __int64 v115; // rdx
  __int64 v116; // rbx
  unsigned int v117; // r15d
  __int64 v118; // rax
  LONG v119; // ecx
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r13
  __int64 v124; // rcx
  __int64 v125; // rdx
  int v126; // r10d
  unsigned int v127; // r8d
  unsigned int v128; // r9d
  struct DXGGLOBAL *v129; // rax
  __int64 v130; // rcx
  struct DXGGLOBAL *v131; // rsi
  unsigned __int16 j; // bx
  __int64 v133; // rdx
  int v134; // eax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rbx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rbx
  __int64 v146; // r11
  __int64 v147; // r10
  __int64 v148; // rbx
  __int64 v149; // rcx
  _QWORD *v150; // rax
  _QWORD *v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  _QWORD *v154; // rax
  int v155; // eax
  __int64 v156; // rbx
  __int64 v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rax
  unsigned __int16 i; // [rsp+30h] [rbp-D0h] BYREF
  struct _LUID Luid; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v162; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-B0h]
  __int64 v164; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v165; // [rsp+60h] [rbp-A0h]
  __int64 v166; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v167; // [rsp+70h] [rbp-90h]
  __int64 v168; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v169; // [rsp+80h] [rbp-80h]
  __int64 v170; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v171; // [rsp+90h] [rbp-70h]
  _BYTE v172[64]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v173; // [rsp+E0h] [rbp-20h]
  int v174; // [rsp+F4h] [rbp-Ch]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  char v176; // [rsp+130h] [rbp+30h]

  v3 = 0;
  *(_QWORD *)&v162.left = a3;
  Luid.LowPart = a2;
  v176 = 0;
  v5 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v172, 8u, 0);
  v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 102);
  if ( v10 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  LODWORD(v13) = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v138 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v138 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v140, v139);
    v141 = v138;
    *(_QWORD *)(v138 + 32) = -1073741811LL;
LABEL_133:
    WdLogEvent5_WdError(v141);
    goto LABEL_118;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2329));
  Current = DXGPROCESS::GetCurrent(v15, v14);
  v18 = Current;
  if ( !Current )
  {
    v142 = WdLogNewEntry5_WdError(v17, v16);
LABEL_132:
    v141 = v142;
    goto LABEL_133;
  }
  if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    for ( i = 8; ; v5 = i )
    {
      if ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v172, v5) < v5 )
      {
        v159 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
        *(_QWORD *)(v159 + 24) = *((_QWORD *)this + 8);
        *(_QWORD *)(v159 + 32) = v5;
        WdLogEvent5_WdLowResource(v159);
        LODWORD(v13) = -1073741801;
        goto LABEL_118;
      }
      v174 |= 3u;
      v25 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v172, 0, 1, 1, &i);
      v13 = v25;
      if ( v25 != -1073741789 )
        break;
    }
    if ( v25 < 0 )
    {
      v142 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v142 + 24) = *((_QWORD *)this + 8);
      *(_QWORD *)(v142 + 32) = v13;
      goto LABEL_132;
    }
    v28 = *((_QWORD *)this + 8);
    v29 = v173;
    v30 = *(unsigned __int16 *)(v28 + 20);
    v170 = v28 + 48;
    v171 = v30;
    if ( v30 )
    {
      v31 = (_DWORD *)(v28 + 280);
      v32 = v30;
      do
      {
        *v31 |= 4u;
        v31[3] = 0;
        v31 += 68;
        --v32;
      }
      while ( v32 );
    }
    v33 = *(unsigned __int16 *)(v29 + 20);
    v168 = v29 + 48;
    v169 = v33;
    if ( v33 )
    {
      v34 = (_DWORD *)(v29 + 280);
      v35 = v33;
      do
      {
        *v34 |= 4u;
        v34[3] = 0;
        v34 += 68;
        --v35;
      }
      while ( v35 );
    }
    v36 = *((_QWORD *)this + 8);
    v37 = *(unsigned __int16 *)(v36 + 20);
    v166 = v36 + 48;
    v167 = v37;
    if ( v37 )
    {
      v38 = (_DWORD *)(v36 + 280);
      v39 = v37;
      do
      {
        *v38 |= 0x10u;
        v38[4] = 0;
        v38 += 68;
        --v39;
      }
      while ( v39 );
    }
    v40 = *(unsigned __int16 *)(v29 + 20);
    v164 = v29 + 48;
    v165 = v40;
    if ( v40 )
    {
      v41 = (_DWORD *)(v29 + 280);
      v42 = v40;
      do
      {
        *v41 |= 0x10u;
        v41[4] = 0;
        v41 += 68;
        --v42;
      }
      while ( v42 );
    }
    CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(this);
    CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)v172);
    Global = DXGGLOBAL::GetGlobal(v44, v43);
    MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
    v46 = 336 * MaximumAdapterCount;
    if ( !is_mul_ok(MaximumAdapterCount, 0x150uLL) )
      v46 = -1LL;
    v48 = operator new[](v46, 0x63644356u, PagedPool);
    v52 = *((_QWORD *)this + 8);
    *(_QWORD *)(v52 + 40) = v48;
    v53 = *((_QWORD *)this + 8);
    if ( *(_QWORD *)(v53 + 40) )
    {
      *(_WORD *)(v53 + 28) = 0;
      while ( 1 )
      {
        v54 = DXGGLOBAL::GetGlobal(v52, v49);
        if ( v3 >= DXGGLOBAL::GetMaximumAdapterCount(v54) )
          break;
        v57 = 336LL * v3;
        memset((void *)(v57 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)), 0, 0x150uLL);
        memset((void *)(v57 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL), 255, 0x40uLL);
        ++v3;
      }
      DxgkRemoveAllSessionViewForCurrentSession(v56, v55);
      v59 = *(_WORD *)(v29 + 20);
      v60 = 0;
      v61 = 0;
      if ( v59 )
      {
        LOWORD(v58) = 0;
        do
        {
          v62 = 0;
          v63 = v29 + 272LL * (unsigned __int16)v58;
          *(_DWORD *)(v63 + 296) = 0;
          v64 = *((_QWORD *)this + 8);
          if ( *(_WORD *)(v64 + 20) )
          {
            while ( !CCD_TOPOLOGY::IsMatchingSource(
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v63 + 48),
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * v62 + v64 + 48))
                 || *(_DWORD *)(v63 + 76) != *(_DWORD *)(v65 + 28) )
            {
              v62 = v66 + 1;
              if ( v62 >= v67 )
                goto LABEL_35;
            }
            if ( !CCD_TOPOLOGY::IsMatchingSource(
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v63 + 292) + v29 + 48),
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v65 + 244) + v64 + 48)) )
            {
              *(_DWORD *)(v68 + v29 + 296) = 1;
              *(_QWORD *)(272LL * *(unsigned int *)(v63 + 292) + v29 + 244) = 0LL;
            }
          }
LABEL_35:
          if ( v62 >= *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
          {
            *(_DWORD *)(272LL * *(unsigned int *)(v63 + 292) + v29 + 296) = 1;
            *(_QWORD *)(272LL * *(unsigned int *)(v63 + 292) + v29 + 244) = 0LL;
          }
          v59 = *(_WORD *)(v29 + 20);
          v58 = ++v61;
        }
        while ( v61 < v59 );
      }
      v69 = *((_QWORD *)this + 8);
      v70 = 0;
      v71 = v69;
      if ( *(_WORD *)(v69 + 20) )
      {
        LOWORD(v58) = 0;
        do
        {
          v72 = v69 + 272LL * (unsigned __int16)v58;
          v73 = 0;
          *(_DWORD *)(v72 + 296) = 0;
          if ( *(_WORD *)(v29 + 20) )
          {
            while ( !CCD_TOPOLOGY::IsMatchingSource(
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v72 + 48),
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * v73 + v29 + 48))
                 || *(_DWORD *)(v74 + 28) != *(_DWORD *)(v72 + 76) )
            {
              if ( ++v73 >= v75 )
                goto LABEL_46;
            }
            v76 = *(unsigned int *)(v74 + 244);
            if ( (_DWORD)v76 == v73 && *(_DWORD *)(v72 + 292) == v70 )
            {
              *(_QWORD *)(v72 + 244) = *(_QWORD *)(v74 + 196);
            }
            else
            {
              v145 = *((_QWORD *)this + 8);
              if ( !CCD_TOPOLOGY::IsMatchingSource(
                      (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v72 + 292) + v145 + 48),
                      (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272 * v76 + v29 + 48)) )
              {
                *(_DWORD *)(v146 + v145 + 296) = 1;
                *(_QWORD *)(272LL * *(unsigned int *)(v72 + 292) + *((_QWORD *)this + 8) + 244) = 0LL;
              }
            }
          }
LABEL_46:
          v59 = *(_WORD *)(v29 + 20);
          if ( v73 >= v59 )
          {
            *(_DWORD *)(272LL * *(unsigned int *)(v72 + 292) + *((_QWORD *)this + 8) + 296) = 1;
            *(_QWORD *)(272LL * *(unsigned int *)(v72 + 292) + *((_QWORD *)this + 8) + 244) = 0LL;
            v59 = *(_WORD *)(v29 + 20);
          }
          v69 = *((_QWORD *)this + 8);
          v58 = ++v70;
          v71 = v69;
        }
        while ( v70 < *(_WORD *)(v69 + 20) );
      }
      v77 = 0;
      if ( v59 )
      {
        v78 = 0;
        do
        {
          v79 = *(_DWORD *)(v71 + 36);
          v80 = 0;
          if ( v79 )
          {
            v147 = *(_QWORD *)(v71 + 40);
            v148 = 272LL * v78;
            do
            {
              v149 = 336LL * v80;
              if ( *(_DWORD *)(v148 + v29 + 64) == *(_DWORD *)(v149 + v147)
                && *(_DWORD *)(v148 + v29 + 68) == *(_DWORD *)(v149 + v147 + 4) )
              {
                break;
              }
              ++v80;
            }
            while ( v80 < v79 );
            v60 = 0;
          }
          v81 = 336LL * v80;
          v82 = 272LL * v77;
          *(_DWORD *)(*(_QWORD *)(v71 + 40) + v81 + 80) |= 1 << *(_DWORD *)(v82 + v29 + 72);
          if ( (*(_QWORD *)(v82 + v29 + 48) & 0x1000000000LL) != 0 )
            v83 = 1 << *(_DWORD *)(v82 + v29 + 72);
          else
            v83 = 0;
          v58 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
          *(_DWORD *)(v58 + v81 + 228) |= v83;
          if ( *(_DWORD *)(v82 + v29 + 296) == 1 )
          {
            v58 = *(unsigned int *)(v82 + v29 + 72);
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v81 + 136) |= 1 << v58;
          }
          v69 = *((_QWORD *)this + 8);
          v71 = v69;
          v84 = *(unsigned int *)(v69 + 36);
          if ( v80 >= (unsigned int)v84 )
          {
            v58 = *(_QWORD *)(v69 + 40);
            *(_QWORD *)(336 * v84 + v58) = *(_QWORD *)(v82 + v29 + 64);
            ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
            v69 = *((_QWORD *)this + 8);
            v71 = v69;
          }
          v78 = ++v77;
        }
        while ( v77 < *(_WORD *)(v29 + 20) );
      }
      v85 = 0;
      if ( *(_WORD *)(v69 + 20) )
      {
        v86 = 0;
        while ( 1 )
        {
          v87 = 272LL * v86;
          v88 = *(_QWORD *)(v87 + v69 + 48);
          if ( (v88 & 0x187) != 0 )
          {
            *(_QWORD *)(v87 + v69 + 48) = v88 | 0x40000000000000LL;
            *(_QWORD *)(v87 + *((_QWORD *)this + 8) + 56) |= *(_DWORD *)(v87 + *((_QWORD *)this + 8) + 48) & 0x187;
            v69 = *((_QWORD *)this + 8);
          }
          *(_DWORD *)(v87 + v69 + 240) = 0;
          v89 = *((_QWORD *)this + 8);
          v90 = *(_DWORD *)(v89 + 36);
          if ( v90 )
          {
            v91 = *(_QWORD *)(v89 + 40);
            do
            {
              v92 = 336LL * v60;
              if ( *(_DWORD *)(v89 + v87 + 64) == *(_DWORD *)(v92 + v91)
                && *(_DWORD *)(v89 + v87 + 68) == *(_DWORD *)(v92 + v91 + 4) )
              {
                break;
              }
              ++v60;
            }
            while ( v60 < v90 );
          }
          v93 = 272LL * v85;
          v94 = 336LL * v60;
          *(_DWORD *)(*(_QWORD *)(v89 + 40) + v94 + 84) |= 1 << *(_DWORD *)(v93 + v89 + 72);
          v95 = *((_QWORD *)this + 8);
          if ( (*(_QWORD *)(v95 + v93 + 48) & 0x1000000000LL) != 0 )
            v96 = 1 << *(_DWORD *)(v95 + v93 + 72);
          else
            v96 = 0;
          *(_DWORD *)(*(_QWORD *)(v95 + 40) + v94 + 228) |= v96;
          v97 = *((_QWORD *)this + 8);
          v98 = *(_DWORD *)(v93 + v97 + 292);
          if ( v98 == v85 )
          {
            *(_DWORD *)(*(_QWORD *)(v97 + 40) + v94 + 72) |= 1 << *(_DWORD *)(v93 + v97 + 72);
          }
          else if ( CCD_TOPOLOGY::IsSameCloneGroup(this, v98, v85, 1) )
          {
            goto LABEL_72;
          }
          v58 = *((_QWORD *)this + 8);
          v71 = 84LL * v60 + *(unsigned int *)(v93 + v58 + 72);
          *(_DWORD *)(*(_QWORD *)(v58 + 40) + 4 * v71 + 8) = v85;
LABEL_72:
          v69 = *((_QWORD *)this + 8);
          if ( *(_DWORD *)(v93 + v69 + 296) == 1 )
          {
            v58 = *(unsigned int *)(v93 + v69 + 72);
            v71 = *(_QWORD *)(v69 + 40);
            *(_DWORD *)(v71 + v94 + 136) |= 1 << v58;
            v69 = *((_QWORD *)this + 8);
          }
          v99 = *(unsigned int *)(v69 + 36);
          if ( v60 >= (unsigned int)v99 )
          {
            v58 = *(_QWORD *)(v69 + 40);
            v71 = 336 * v99;
            *(_QWORD *)(336 * v99 + v58) = *(_QWORD *)(v93 + v69 + 64);
            ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
            v69 = *((_QWORD *)this + 8);
          }
          ++v85;
          v60 = 0;
          v86 = v85;
          if ( v85 >= *(_WORD *)(v69 + 20) )
          {
            v18 = Current;
            break;
          }
        }
      }
      v100 = *(_DWORD *)(v69 + 36);
      v101 = 0;
      v102 = v100 != 0;
      LOBYTE(i) = v100 != 0;
      if ( v100 )
      {
        LowPart = Luid.LowPart;
        do
        {
          v104 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(this, v101);
          v58 = v101;
          v106 = 336LL * v101;
          v107 = v104;
          if ( v104 < 0 )
          {
            v150 = (_QWORD *)WdLogNewEntry5_WdError(v101, v105);
            v150[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v106 + 4);
            v150[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336LL * v101);
            v150[5] = *((_QWORD *)this + 8);
            v150[6] = v107;
            WdLogEvent5_WdError(v150);
            CCD_TOPOLOGY::MarkPathsApplyFailure(
              this,
              (const struct _LUID *)(v106 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
              0xFFFFFFFF,
              v107);
          }
          else
          {
            v71 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
            if ( *(_QWORD *)(v71 + v106 + 80) )
            {
              v108 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(
                       this,
                       v18,
                       LowPart,
                       v101,
                       *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v162.left);
              v109 = v108;
              if ( v108 < 0 )
              {
                v151 = (_QWORD *)WdLogNewEntry5_WdError(v58, v71);
                v151[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v106 + 4);
                v151[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 336LL * v101);
                v151[5] = *((_QWORD *)this + 8);
                v151[6] = v109;
                WdLogEvent5_WdError(v151);
              }
              else
              {
                v102 = 0;
              }
            }
          }
          ++v101;
        }
        while ( v101 < *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) );
        LOBYTE(i) = v102;
      }
      v110 = DXGGLOBAL::GetGlobal(v58, v71);
      QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)v110 + 172), 0LL, v111, v112);
      v113 = *((_QWORD *)this + 8);
      if ( *(_WORD *)(v113 + 20) )
      {
        v114 = 0;
        v115 = *((_QWORD *)this + 8);
        while ( 1 )
        {
          v116 = 272LL * v114;
          v117 = *(_DWORD *)(v116 + v113 + 292);
          if ( *(int *)(v116 + v113 + 240) >= 0 )
          {
            if ( v117 == v114 )
              goto LABEL_90;
            if ( !CCD_TOPOLOGY::IsSameCloneGroup(this, v117, v114, 1) )
              break;
          }
LABEL_97:
          v113 = *((_QWORD *)this + 8);
          ++v114;
          v115 = v113;
          if ( v114 >= *(_WORD *)(v113 + 20) )
          {
            v102 = i;
            goto LABEL_99;
          }
        }
        v115 = *((_QWORD *)this + 8);
LABEL_90:
        v118 = *(_QWORD *)(v116 + v115 + 48);
        if ( (v118 & 0x800) == 0 || (v118 & 0x20000) == 0 )
        {
          v152 = WdLogNewEntry5_WdAssertion(v113, v115);
          WdLogEvent5_WdAssertion(v152);
          v115 = *((_QWORD *)this + 8);
        }
        v162.left = *(_DWORD *)(v116 + v115 + 192);
        v162.right = *(_DWORD *)(v116 + v115 + 200) + v162.left;
        v162.top = *(_DWORD *)(v116 + v115 + 196);
        v119 = *(_DWORD *)(v116 + v115 + 204) + v162.top;
        Luid = 0LL;
        v162.bottom = v119;
        if ( *(_DWORD *)(v116 + v115 + 244) || *(_DWORD *)(v116 + v115 + 248) )
        {
          Luid = *(struct _LUID *)(v116 + v115 + 244);
        }
        else
        {
          if ( ZwAllocateLocallyUniqueId(&Luid) < 0 )
          {
            v153 = WdLogNewEntry5_WdAssertion(v137, v136);
            WdLogEvent5_WdAssertion(v153);
          }
          v115 = *((_QWORD *)this + 8);
        }
        v120 = DxgkCreateSessionViewForCurrentSession(
                 (struct _LUID *)(v116 + v115 + 64),
                 *(unsigned int *)(v116 + v115 + 72),
                 &v162,
                 v117 == v114,
                 &Luid);
        v123 = v120;
        if ( v120 < 0 )
        {
          v154 = (_QWORD *)WdLogNewEntry5_WdError(v122, v121);
          v154[3] = *(int *)(v116 + *((_QWORD *)this + 8) + 68);
          v154[4] = *(unsigned int *)(v116 + *((_QWORD *)this + 8) + 64);
          v154[5] = *(unsigned int *)(v116 + *((_QWORD *)this + 8) + 72);
          v154[6] = v123;
          WdLogEvent5_WdError(v154);
          *(_DWORD *)(v116 + *((_QWORD *)this + 8) + 240) = v123;
        }
        else if ( v117 == v114 )
        {
          ++*(_WORD *)(*((_QWORD *)this + 8) + 28LL);
        }
        goto LABEL_97;
      }
LABEL_99:
      CCD_TOPOLOGY::CleanupPrimaryPathIndex(this);
      CCD_TOPOLOGY::CleanupPrimaryPathIndex((CCD_TOPOLOGY *)v172);
      v125 = *((_QWORD *)this + 8);
      v126 = 0;
      v127 = 0;
      v128 = *(_DWORD *)(v125 + 36);
      if ( v128 )
      {
        v125 = *(_QWORD *)(v125 + 40);
        while ( 1 )
        {
          v124 = 336LL * v127;
          if ( *(_DWORD *)(v124 + v125 + 96) || *(_DWORD *)(v124 + v125 + 88) )
            break;
          if ( *(_DWORD *)(v124 + v125 + 92) || *(_DWORD *)(v124 + v125 + 124) || *(_DWORD *)(v124 + v125 + 120) )
            v126 = 1;
          if ( ++v127 >= v128 )
            goto LABEL_107;
        }
        v126 = 0;
LABEL_107:
        if ( v126 )
        {
          v162 = 0LL;
          v162.left = 11;
          v155 = DxgkStatusChangeNotify(&v162);
          v156 = v155;
          if ( v155 < 0 )
          {
            v157 = WdLogNewEntry5_WdError(v124, v125);
            *(_QWORD *)(v157 + 24) = v156;
            WdLogEvent5_WdError(v157);
          }
        }
      }
      v129 = DXGGLOBAL::GetGlobal(v124, v125);
      v130 = *((_QWORD *)this + 8);
      v131 = v129;
      if ( *(_WORD *)(v130 + 20) > 1u )
      {
        DXGGLOBAL::RecordFeatureUsage(v129, 0LL, 1LL);
        v130 = *((_QWORD *)this + 8);
      }
      if ( *(_WORD *)(v130 + 20) )
      {
        for ( j = 0; j < *(_WORD *)(v130 + 20); ++j )
        {
          v133 = 272LL * j;
          if ( *(int *)(v133 + v130 + 240) >= 0 )
          {
            v134 = *(_DWORD *)(v133 + v130 + 256);
            if ( v134 == 12 )
            {
              v158 = 4LL;
LABEL_164:
              DXGGLOBAL::RecordFeatureUsage(v131, v158, 1LL);
              goto LABEL_115;
            }
            if ( v134 == 30 )
            {
              v158 = 5LL;
              goto LABEL_164;
            }
          }
LABEL_115:
          v130 = *((_QWORD *)this + 8);
        }
      }
      LODWORD(v13) = v102 != 0 ? 0xC0000001 : 0;
    }
    else
    {
      v144 = WdLogNewEntry5_WdLowResource(v52, v49, v50, v51);
      *(_QWORD *)(v144 + 24) = this;
      *(_QWORD *)(v144 + 32) = *((_QWORD *)this + 8);
      WdLogEvent5_WdLowResource(v144);
      LODWORD(v13) = -1073741801;
    }
    CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2734::__AUTO_USING_PM_PathChanged2734(&v164);
    CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2734::__AUTO_USING_PM_PathChanged2734(&v166);
    CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2732::__AUTO_USING_PM_PrimaryClonePathIndex2732(&v168);
    CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2732::__AUTO_USING_PM_PrimaryClonePathIndex2732(&v170);
  }
  else
  {
    v143 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v143 + 24) = Current;
    WdLogEvent5_WdError(v143);
    LODWORD(v13) = -1073741790;
  }
LABEL_118:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v172);
  if ( v176 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v13;
}
