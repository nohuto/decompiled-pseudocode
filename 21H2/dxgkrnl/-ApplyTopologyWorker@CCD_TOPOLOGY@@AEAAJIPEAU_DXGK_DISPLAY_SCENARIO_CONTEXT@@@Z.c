/*
 * XREFs of ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BF100
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C07FC (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C00138AC (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C01A4390 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C01AB974 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01ABA6C (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01ADE34 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01ADEA8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01AEBD8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BBB3C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ @ 0x1C01BFEEC (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01C02B8 (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C01C02FC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex3012::__AUTO_USING_PM_PrimaryClonePathIndex3012 @ 0x1C01C0394 (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PrimaryClonePathIndex3012--__AUTO_USING.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged3014::__AUTO_USING_PM_PathChanged3014 @ 0x1C01C03D0 (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PathChanged3014--__AUTO_USING_PM_PathCh.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C01C040C (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C01C0654 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C01C0738 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C01C26A0 (DxgkStatusChangeNotify.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C0203160 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C03A97A4 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C03A98E0 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyWorker(
        CCD_TOPOLOGY *this,
        DWORD a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned __int16 v4; // si
  __int64 v5; // rbx
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // r14
  unsigned int v8; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGPROCESS *v18; // r12
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rsi
  unsigned int v24; // edx
  _DWORD *v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // ecx
  _DWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // edx
  _DWORD *v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // ecx
  _DWORD *v35; // rax
  __int64 v36; // rdx
  DXGGLOBAL *Global; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // r9
  unsigned __int64 MaximumAdapterCountInSession; // kr00_8
  __int64 v41; // rax
  DXGGLOBAL *v42; // rax
  __int64 v43; // rbx
  unsigned __int16 v44; // ax
  unsigned __int16 v45; // r10
  unsigned __int16 v46; // cx
  unsigned __int16 v47; // r9
  __int64 v48; // r8
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int16 v51; // r9
  unsigned __int16 v52; // r11
  __int64 v53; // r11
  __int64 v54; // r8
  unsigned __int16 v55; // r10
  __int64 v56; // rdx
  unsigned __int16 v57; // cx
  __int64 v58; // r9
  unsigned __int16 v59; // r8
  __int64 v60; // rdx
  unsigned __int16 v61; // r11
  __int64 v62; // rcx
  unsigned __int16 v63; // r11
  unsigned __int16 v64; // ax
  unsigned int v65; // r8d
  unsigned int v66; // r9d
  __int64 v67; // r8
  __int64 v68; // r10
  int v69; // edx
  __int64 v70; // rax
  unsigned __int16 v71; // r15
  unsigned __int16 v72; // ax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned int v76; // r9d
  __int64 v77; // r10
  __int64 v78; // r8
  __int64 v79; // rbx
  __int64 v80; // rsi
  __int64 v81; // r8
  int v82; // edx
  __int64 v83; // rax
  unsigned int v84; // edx
  __int64 v85; // rax
  int v86; // eax
  unsigned int v87; // ebx
  char v88; // r13
  DWORD LowPart; // r15d
  int v90; // eax
  __int64 v91; // rsi
  int v92; // r14d
  int v93; // eax
  struct DXGGLOBAL *v94; // rax
  __int64 v95; // rcx
  unsigned __int16 v96; // si
  __int64 v97; // rdx
  __int64 v98; // rbx
  unsigned int v99; // r15d
  __int64 v100; // rax
  LONG v101; // ecx
  int v102; // eax
  int v103; // r12d
  __int64 v104; // rdx
  int v105; // r10d
  unsigned int v106; // r8d
  unsigned int v107; // r9d
  __int64 v108; // rdx
  __int64 v109; // rcx
  struct DXGGLOBAL *v110; // rax
  __int64 v111; // rcx
  struct DXGGLOBAL *v112; // rsi
  unsigned __int16 j; // bx
  __int64 v114; // rdx
  int v115; // eax
  __int64 CurrentProcessSessionId; // rdx
  __int64 v118; // rbx
  __int64 v119; // r11
  __int64 v120; // r10
  __int64 v121; // rbx
  __int64 v122; // rcx
  int v123; // eax
  __int64 v124; // rdx
  unsigned __int16 i; // [rsp+30h] [rbp-D0h] BYREF
  struct _LUID Luid; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v127; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-B0h]
  __int64 v129; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v130; // [rsp+60h] [rbp-A0h]
  __int64 v131; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v132; // [rsp+70h] [rbp-90h]
  __int64 v133; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v134; // [rsp+80h] [rbp-80h]
  __int64 v135; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v136; // [rsp+90h] [rbp-70h]
  _BYTE v137[64]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v138; // [rsp+E0h] [rbp-20h]
  int v139; // [rsp+F4h] [rbp-Ch]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+10h] BYREF
  char v141; // [rsp+140h] [rbp+40h]

  *(_QWORD *)&v127.left = a3;
  Luid.LowPart = a2;
  v141 = 0;
  v4 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v137, 8u, 0);
  v5 = -1073741811LL;
  v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v7
    || (v8 = PsGetCurrentProcessSessionId(v6),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, v8),
        LODWORD(v7) = 0,
        !SessionDataForSpecifiedSession) )
  {
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v6);
    goto LABEL_163;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2331));
  Current = DXGPROCESS::GetCurrent(v11, v10, v12, v13);
  v18 = Current;
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    goto LABEL_119;
  }
  if ( !(unsigned int)DxgIsSessionUsingWddmMonitors(v15, v14, v16, v17) )
  {
    WdLogSingleEntry1(2LL, Current);
    LODWORD(v5) = -1073741790;
    goto LABEL_119;
  }
  for ( i = 8; ; v4 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v137, v4, v19, v20) < v4 )
    {
      WdLogSingleEntry2(6LL, *((_QWORD *)this + 8), v4);
      LODWORD(v5) = -1073741801;
      goto LABEL_119;
    }
    v139 |= 3u;
    v21 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v137, 0, 1, 1, &i);
    v5 = v21;
    if ( v21 != -1073741789 )
      break;
  }
  if ( v21 < 0 )
  {
    CurrentProcessSessionId = *((_QWORD *)this + 8);
LABEL_163:
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, v5);
    goto LABEL_119;
  }
  v22 = *((_QWORD *)this + 8);
  v23 = v138;
  v24 = *(unsigned __int16 *)(v22 + 20);
  v135 = v22 + 56;
  v136 = v24;
  if ( v24 )
  {
    v25 = (_DWORD *)(v22 + 312);
    v26 = v24;
    do
    {
      *v25 |= 4u;
      v25[3] = 0;
      v25 += 74;
      --v26;
    }
    while ( v26 );
  }
  v27 = *(unsigned __int16 *)(v23 + 20);
  v133 = v23 + 56;
  v134 = v27;
  if ( v27 )
  {
    v28 = (_DWORD *)(v23 + 312);
    v29 = v27;
    do
    {
      *v28 |= 4u;
      v28[3] = 0;
      v28 += 74;
      --v29;
    }
    while ( v29 );
  }
  v30 = *((_QWORD *)this + 8);
  v31 = *(unsigned __int16 *)(v30 + 20);
  v131 = v30 + 56;
  v132 = v31;
  if ( v31 )
  {
    v32 = (_DWORD *)(v30 + 312);
    v33 = v31;
    do
    {
      *v32 |= 0x10u;
      v32[4] = 0;
      v32 += 74;
      --v33;
    }
    while ( v33 );
  }
  v34 = *(unsigned __int16 *)(v23 + 20);
  v129 = v23 + 56;
  v130 = v34;
  if ( v34 )
  {
    v35 = (_DWORD *)(v23 + 312);
    v36 = v34;
    do
    {
      *v35 |= 0x10u;
      v35[4] = 0;
      v35 += 74;
      --v36;
    }
    while ( v36 );
  }
  CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(this);
  CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)v137);
  Global = DXGGLOBAL_GetGlobal();
  MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
  v38 = 340 * MaximumAdapterCountInSession;
  if ( !is_mul_ok(MaximumAdapterCountInSession, 0x154uLL) )
    v38 = -1LL;
  *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) = operator new[](v38, 0x63644356u, 256LL, v39);
  v41 = *((_QWORD *)this + 8);
  if ( !*(_QWORD *)(v41 + 48) )
  {
    WdLogSingleEntry2(6LL, this, *((_QWORD *)this + 8));
    LODWORD(v5) = -1073741801;
    goto LABEL_118;
  }
  *(_WORD *)(v41 + 28) = 0;
  while ( 1 )
  {
    v42 = DXGGLOBAL_GetGlobal();
    if ( (unsigned int)v7 >= DXGGLOBAL::GetMaximumAdapterCountInSession(v42) )
      break;
    v43 = 340LL * (unsigned int)v7;
    memset((void *)(v43 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)), 0, 0x154uLL);
    memset((void *)(v43 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 8LL), 255, 0x40uLL);
    LODWORD(v7) = (_DWORD)v7 + 1;
  }
  DxgkRemoveAllSessionViewForCurrentSession();
  v44 = *(_WORD *)(v23 + 20);
  LODWORD(v7) = 0;
  v45 = 0;
  if ( v44 )
  {
    v46 = 0;
    do
    {
      v47 = 0;
      v48 = v23 + 296LL * v46;
      *(_DWORD *)(v48 + 328) = 0;
      v49 = *((_QWORD *)this + 8);
      if ( *(_WORD *)(v49 + 20) )
      {
        while ( !CCD_TOPOLOGY::IsMatchingSource(
                   (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v48 + 56),
                   (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * v47 + v49 + 56))
             || *(_DWORD *)(v48 + 84) != *(_DWORD *)(v50 + 28) )
        {
          v47 = v51 + 1;
          if ( v47 >= v52 )
            goto LABEL_34;
        }
        if ( !CCD_TOPOLOGY::IsMatchingSource(
                (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v48 + 324) + v23 + 56),
                (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v50 + 268) + v49 + 56)) )
        {
          *(_DWORD *)(v53 + v23 + 328) = 1;
          *(_QWORD *)(296LL * *(unsigned int *)(v48 + 324) + v23 + 252) = 0LL;
        }
      }
LABEL_34:
      if ( v47 >= *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
      {
        *(_DWORD *)(296LL * *(unsigned int *)(v48 + 324) + v23 + 328) = 1;
        *(_QWORD *)(296LL * *(unsigned int *)(v48 + 324) + v23 + 252) = 0LL;
      }
      v44 = *(_WORD *)(v23 + 20);
      v46 = ++v45;
    }
    while ( v45 < v44 );
  }
  v54 = *((_QWORD *)this + 8);
  v55 = 0;
  v56 = v54;
  if ( *(_WORD *)(v54 + 20) )
  {
    v57 = 0;
    do
    {
      v58 = v54 + 296LL * v57;
      v59 = 0;
      *(_DWORD *)(v58 + 328) = 0;
      if ( *(_WORD *)(v23 + 20) )
      {
        while ( !CCD_TOPOLOGY::IsMatchingSource(
                   (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v58 + 56),
                   (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * v59 + v23 + 56))
             || *(_DWORD *)(v60 + 28) != *(_DWORD *)(v58 + 84) )
        {
          if ( ++v59 >= v61 )
            goto LABEL_45;
        }
        v62 = *(unsigned int *)(v60 + 268);
        if ( (_DWORD)v62 == v59 && *(_DWORD *)(v58 + 324) == v55 )
        {
          *(_QWORD *)(v58 + 252) = *(_QWORD *)(v60 + 196);
        }
        else
        {
          v118 = *((_QWORD *)this + 8);
          if ( !CCD_TOPOLOGY::IsMatchingSource(
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v58 + 324) + v118 + 56),
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296 * v62 + v23 + 56)) )
          {
            *(_DWORD *)(v119 + v118 + 328) = 1;
            *(_QWORD *)(296LL * *(unsigned int *)(v58 + 324) + *((_QWORD *)this + 8) + 252) = 0LL;
          }
        }
      }
LABEL_45:
      v44 = *(_WORD *)(v23 + 20);
      if ( v59 >= v44 )
      {
        *(_DWORD *)(296LL * *(unsigned int *)(v58 + 324) + *((_QWORD *)this + 8) + 328) = 1;
        *(_QWORD *)(296LL * *(unsigned int *)(v58 + 324) + *((_QWORD *)this + 8) + 252) = 0LL;
        v44 = *(_WORD *)(v23 + 20);
      }
      v54 = *((_QWORD *)this + 8);
      v57 = ++v55;
      v56 = v54;
    }
    while ( v55 < *(_WORD *)(v54 + 20) );
  }
  v63 = 0;
  if ( v44 )
  {
    v64 = 0;
    do
    {
      v65 = *(_DWORD *)(v56 + 40);
      v66 = 0;
      if ( v65 )
      {
        v120 = *(_QWORD *)(v56 + 48);
        v121 = 296LL * v64;
        do
        {
          v122 = 340LL * v66;
          if ( *(_DWORD *)(v121 + v23 + 72) == *(_DWORD *)(v122 + v120)
            && *(_DWORD *)(v121 + v23 + 76) == *(_DWORD *)(v122 + v120 + 4) )
          {
            break;
          }
          ++v66;
        }
        while ( v66 < v65 );
        LODWORD(v7) = 0;
      }
      v67 = 340LL * v66;
      v68 = 296LL * v63;
      *(_DWORD *)(*(_QWORD *)(v56 + 48) + v67 + 80) |= 1 << *(_DWORD *)(v68 + v23 + 80);
      if ( _bittest64((const signed __int64 *)(v68 + v23 + 56), 0x24u) )
        v69 = 1 << *(_DWORD *)(v68 + v23 + 80);
      else
        v69 = 0;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v67 + 232) |= v69;
      if ( *(_DWORD *)(v68 + v23 + 328) == 1 )
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v67 + 140) |= 1 << *(_DWORD *)(v68 + v23 + 80);
      v54 = *((_QWORD *)this + 8);
      v56 = v54;
      v70 = *(unsigned int *)(v54 + 40);
      if ( v66 >= (unsigned int)v70 )
      {
        *(_QWORD *)(340 * v70 + *(_QWORD *)(v54 + 48)) = *(_QWORD *)(v68 + v23 + 72);
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 40LL);
        v54 = *((_QWORD *)this + 8);
        v56 = v54;
      }
      v64 = ++v63;
    }
    while ( v63 < *(_WORD *)(v23 + 20) );
  }
  v71 = 0;
  if ( *(_WORD *)(v54 + 20) )
  {
    v72 = 0;
    while ( 1 )
    {
      v73 = 296LL * v72;
      v74 = *(_QWORD *)(v54 + v73 + 56);
      if ( (v74 & 0x187) != 0 )
      {
        *(_QWORD *)(v54 + v73 + 56) = v74 | 0x40000000000000LL;
        *(_QWORD *)(v73 + *((_QWORD *)this + 8) + 64) |= *(_DWORD *)(v73 + *((_QWORD *)this + 8) + 56) & 0x187;
        v54 = *((_QWORD *)this + 8);
      }
      *(_DWORD *)(v54 + v73 + 248) = 0;
      v75 = *((_QWORD *)this + 8);
      v76 = *(_DWORD *)(v75 + 40);
      if ( v76 )
      {
        v77 = *(_QWORD *)(v75 + 48);
        do
        {
          v78 = 340LL * (unsigned int)v7;
          if ( *(_DWORD *)(v73 + v75 + 72) == *(_DWORD *)(v78 + v77)
            && *(_DWORD *)(v73 + v75 + 76) == *(_DWORD *)(v78 + v77 + 4) )
          {
            break;
          }
          LODWORD(v7) = (_DWORD)v7 + 1;
        }
        while ( (unsigned int)v7 < v76 );
      }
      v79 = 296LL * v71;
      v80 = 340LL * (unsigned int)v7;
      *(_DWORD *)(*(_QWORD *)(v75 + 48) + v80 + 84) |= 1 << *(_DWORD *)(v79 + v75 + 80);
      v81 = *((_QWORD *)this + 8);
      if ( _bittest64((const signed __int64 *)(v81 + v79 + 56), 0x24u) )
        v82 = 1 << *(_DWORD *)(v81 + v79 + 80);
      else
        v82 = 0;
      *(_DWORD *)(*(_QWORD *)(v81 + 48) + v80 + 232) |= v82;
      v83 = *((_QWORD *)this + 8);
      v84 = *(_DWORD *)(v83 + v79 + 324);
      if ( v84 == v71 )
      {
        *(_DWORD *)(*(_QWORD *)(v83 + 48) + v80 + 72) |= 1 << *(_DWORD *)(v83 + v79 + 80);
      }
      else if ( CCD_TOPOLOGY::IsSameCloneGroup(this, v84, v71, 1) )
      {
        goto LABEL_71;
      }
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL)
                + 4 * (85LL * (unsigned int)v7 + *(unsigned int *)(v79 + *((_QWORD *)this + 8) + 80))
                + 8) = v71;
LABEL_71:
      v54 = *((_QWORD *)this + 8);
      if ( *(_DWORD *)(v79 + v54 + 328) == 1 )
      {
        *(_DWORD *)(*(_QWORD *)(v54 + 48) + v80 + 140) |= 1 << *(_DWORD *)(v79 + v54 + 80);
        v54 = *((_QWORD *)this + 8);
      }
      v85 = *(unsigned int *)(v54 + 40);
      if ( (unsigned int)v7 >= (unsigned int)v85 )
      {
        *(_QWORD *)(340 * v85 + *(_QWORD *)(v54 + 48)) = *(_QWORD *)(v54 + v79 + 72);
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 40LL);
        v54 = *((_QWORD *)this + 8);
      }
      ++v71;
      LODWORD(v7) = 0;
      v72 = v71;
      if ( v71 >= *(_WORD *)(v54 + 20) )
      {
        v18 = Current;
        break;
      }
    }
  }
  v86 = *(_DWORD *)(v54 + 40);
  v87 = 0;
  v88 = v86 != 0;
  LOBYTE(i) = v86 != 0;
  if ( !v86 )
    goto LABEL_85;
  LowPart = Luid.LowPart;
  while ( 2 )
  {
    v90 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(this, v87);
    v91 = 340LL * v87;
    v92 = v90;
    if ( v90 < 0 )
    {
      WdLogSingleEntry4(
        2LL,
        *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v87 + 4),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v87),
        *((_QWORD *)this + 8),
        v90);
      CCD_TOPOLOGY::MarkPathsApplyFailure(
        this,
        (const struct _LUID *)(v91 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
        0xFFFFFFFF,
        v92);
      goto LABEL_149;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v91 + 80) )
    {
LABEL_149:
      LOBYTE(v7) = 0;
      goto LABEL_83;
    }
    v93 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(
            this,
            v18,
            LowPart,
            v87,
            *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v127.left);
    LOBYTE(v7) = 0;
    if ( v93 < 0 )
      WdLogSingleEntry4(
        2LL,
        *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v87 + 4),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v87),
        *((_QWORD *)this + 8),
        v93);
    else
      v88 = 0;
LABEL_83:
    if ( ++v87 < *(_DWORD *)(*((_QWORD *)this + 8) + 40LL) )
      continue;
    break;
  }
  LOBYTE(i) = v88;
LABEL_85:
  v94 = DXGGLOBAL_GetGlobal();
  QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v94 + 191), 0);
  v95 = *((_QWORD *)this + 8);
  if ( !*(_WORD *)(v95 + 20) )
    goto LABEL_99;
  v96 = 0;
  v97 = *((_QWORD *)this + 8);
  while ( 2 )
  {
    v98 = 296LL * v96;
    v99 = *(_DWORD *)(v98 + v95 + 324);
    if ( *(int *)(v98 + v95 + 248) >= 0 )
    {
      if ( v99 == v96 )
      {
LABEL_89:
        v100 = *(_QWORD *)(v97 + v98 + 56);
        if ( (v100 & 0x800) == 0 || (v100 & 0x20000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          v97 = *((_QWORD *)this + 8);
        }
        v127.left = *(_DWORD *)(v98 + v97 + 200);
        v127.right = *(_DWORD *)(v98 + v97 + 208) + v127.left;
        v127.top = *(_DWORD *)(v98 + v97 + 204);
        v101 = *(_DWORD *)(v98 + v97 + 212) + v127.top;
        Luid = 0LL;
        v127.bottom = v101;
        if ( *(_DWORD *)(v98 + v97 + 252) || *(_DWORD *)(v98 + v97 + 256) )
        {
          Luid = *(struct _LUID *)(v98 + v97 + 252);
        }
        else
        {
          if ( ZwAllocateLocallyUniqueId(&Luid) < 0 )
            WdLogSingleEntry0(1LL);
          v97 = *((_QWORD *)this + 8);
        }
        v102 = DxgkCreateSessionViewForCurrentSession(
                 (struct _LUID *)(v98 + v97 + 72),
                 *(_DWORD *)(v98 + v97 + 80),
                 &v127,
                 v99 == v96,
                 &Luid);
        v103 = v102;
        if ( v102 < 0 )
        {
          WdLogSingleEntry4(
            2LL,
            *(int *)(v98 + *((_QWORD *)this + 8) + 76),
            *(unsigned int *)(v98 + *((_QWORD *)this + 8) + 72),
            *(unsigned int *)(v98 + *((_QWORD *)this + 8) + 80),
            v102);
          *(_DWORD *)(v98 + *((_QWORD *)this + 8) + 248) = v103;
        }
        else if ( v99 == v96 )
        {
          ++*(_WORD *)(*((_QWORD *)this + 8) + 28LL);
        }
      }
      else if ( !CCD_TOPOLOGY::IsSameCloneGroup(this, v99, v96, 1) )
      {
        v97 = *((_QWORD *)this + 8);
        goto LABEL_89;
      }
      LOBYTE(v7) = 0;
    }
    v95 = *((_QWORD *)this + 8);
    ++v96;
    v97 = v95;
    if ( v96 < *(_WORD *)(v95 + 20) )
      continue;
    break;
  }
  v88 = i;
LABEL_99:
  CCD_TOPOLOGY::CleanupPrimaryPathIndex(this);
  CCD_TOPOLOGY::CleanupPrimaryPathIndex((CCD_TOPOLOGY *)v137);
  v104 = *((_QWORD *)this + 8);
  v105 = 0;
  v106 = 0;
  v107 = *(_DWORD *)(v104 + 40);
  if ( v107 )
  {
    v108 = *(_QWORD *)(v104 + 48);
    while ( 1 )
    {
      v109 = 340LL * v106;
      if ( *(_DWORD *)(v109 + v108 + 96) || *(_DWORD *)(v109 + v108 + 88) )
        break;
      if ( *(_DWORD *)(v109 + v108 + 92)
        || *(_DWORD *)(v109 + v108 + 124)
        || *(_DWORD *)(v109 + v108 + 120)
        || *(_DWORD *)(v109 + v108 + 132) )
      {
        v105 = 1;
      }
      if ( ++v106 >= v107 )
      {
        if ( v105 )
        {
          v127 = 0LL;
          v127.left = 11;
          v123 = DxgkStatusChangeNotify(&v127);
          if ( v123 < 0 )
            WdLogSingleEntry1(2LL, v123);
        }
        break;
      }
    }
  }
  v110 = DXGGLOBAL_GetGlobal();
  v111 = *((_QWORD *)this + 8);
  v112 = v110;
  if ( *(_WORD *)(v111 + 20) > 1u )
  {
    DXGGLOBAL::RecordFeatureUsage(v110, 0LL, 1LL);
    v111 = *((_QWORD *)this + 8);
  }
  if ( *(_WORD *)(v111 + 20) )
  {
    for ( j = 0; j < *(_WORD *)(v111 + 20); ++j )
    {
      v114 = 296LL * j;
      if ( *(int *)(v114 + v111 + 248) >= 0 )
      {
        v115 = *(_DWORD *)(v114 + v111 + 264);
        if ( v115 == 12 )
        {
          v124 = 4LL;
LABEL_160:
          DXGGLOBAL::RecordFeatureUsage(v112, v124, 1LL);
          goto LABEL_116;
        }
        if ( v115 == 30 )
        {
          v124 = 5LL;
          goto LABEL_160;
        }
      }
LABEL_116:
      v111 = *((_QWORD *)this + 8);
    }
  }
  LODWORD(v5) = v88 != 0 ? 0xC0000001 : 0;
LABEL_118:
  CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged3014::__AUTO_USING_PM_PathChanged3014(&v129);
  CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged3014::__AUTO_USING_PM_PathChanged3014(&v131);
  CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex3012::__AUTO_USING_PM_PrimaryClonePathIndex3012(&v133);
  CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex3012::__AUTO_USING_PM_PrimaryClonePathIndex3012(&v135);
LABEL_119:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v137);
  if ( v141 != (_BYTE)v7 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v5;
}
