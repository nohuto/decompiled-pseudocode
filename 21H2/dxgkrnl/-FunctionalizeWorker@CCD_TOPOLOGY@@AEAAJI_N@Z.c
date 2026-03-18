/*
 * XREFs of ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01B5124
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01C08BC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C001EC4C (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C01AB444 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C01AB974 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01ADE34 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01ADEA8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01AEBD8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x1C01AEE60 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C01B4F70 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01BC760 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01D5D78 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01D7494 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01DFA98 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01E5F2C (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1942::__AUTO_USING_PM_PathChangeReason1942 @ 0x1C01E7F04 (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1942--__AUTO.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C03A9E54 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C03A9EFC (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FunctionalizeWorker(CCD_TOPOLOGY *this, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  __int64 v7; // rax
  _DWORD *v8; // r8
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // r15d
  unsigned int i; // edx
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r14d
  __int64 v25; // rcx
  int v26; // r10d
  __int64 v27; // rcx
  int v28; // r12d
  __int64 v29; // rdx
  __int64 v30; // r8
  int PathModalityForAdapter; // eax
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v39; // rdx
  unsigned __int16 v40; // si
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  int Active; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned int v49; // esi
  __int64 v50; // r14
  __int64 v51; // rdx
  CCD_TOPOLOGY *v52; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v53; // rdx
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  DXGADAPTER *v57[2]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v58; // [rsp+50h] [rbp-59h] BYREF
  int v59; // [rsp+58h] [rbp-51h]
  _BYTE v60[160]; // [rsp+60h] [rbp-49h] BYREF
  __int64 j; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v62; // [rsp+118h] [rbp+6Fh]

  v62 = a2;
  v3 = 0;
  v5 = *((_QWORD *)this + 8);
  v58 = v5 + 56;
  v7 = *(unsigned __int16 *)(v5 + 20);
  v59 = v7;
  if ( (_DWORD)v7 )
  {
    v8 = (_DWORD *)(v5 + 312);
    do
    {
      *v8 |= 1u;
      v8[1] = 0;
      v8 += 74;
      --v7;
    }
    while ( v7 );
    v5 = *((_QWORD *)this + 8);
  }
  if ( !v5 || !*(_WORD *)(v5 + 20) )
  {
    WdLogSingleEntry2(3LL, this, v5);
    LODWORD(v13) = -1073741823;
    goto LABEL_65;
  }
  CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
  v9 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
  v12 = *((_QWORD *)this + 8);
  v13 = v9;
  if ( v9 < 0 )
  {
    v39 = *((_QWORD *)this + 8);
    goto LABEL_35;
  }
  v14 = 0;
  for ( i = 0; ; ++i )
  {
    v16 = v12 ? *(_WORD *)(v12 + 20) : 0;
    if ( i >= v16 )
      break;
    v10 = 296LL * i;
    if ( *(_BYTE *)(v10 + v12 + 185) )
    {
      v17 = *(_QWORD *)(v10 + v12 + 56);
      if ( (v17 & 0x101) == 0 && (v17 & 0x20000) != 0 )
        v14 = 1;
    }
  }
  if ( !v14 )
    goto LABEL_16;
  v40 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v60, 8u, 0);
  LOWORD(j) = 8;
  while ( 1 )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v60, v40, v41, v42) < v40 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdTrace(v44, v43);
      v54[3] = v40;
      v54[4] = this;
      v47 = *((_QWORD *)this + 8);
      v54[5] = v47;
      goto LABEL_56;
    }
    Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v60, 1, a3, 1, (unsigned __int16 *)&j);
    if ( Active != -1073741789 )
      break;
    v40 = j;
  }
  if ( Active < 0 )
  {
LABEL_56:
    WdLogNewEntry5_WdTrace(v47, v46);
    v14 = 0;
    goto LABEL_57;
  }
  v48 = *((_QWORD *)this + 8);
  v49 = 0;
  if ( *(_WORD *)(v48 + 20) )
  {
    while ( 1 )
    {
      v50 = 296LL * v49;
      v57[0] = 0LL;
      if ( !DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v57, (struct _LUID *)(v50 + v48 + 72)) )
        break;
      if ( *(_BYTE *)(v50 + *((_QWORD *)this + 8) + 185) )
      {
        if ( *((_QWORD *)v57[0] + 350) )
        {
          if ( !ADAPTER_DISPLAY::ForceIHVScaling(*((ADAPTER_DISPLAY **)v57[0] + 349)) )
          {
            v53 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v50 + v51 + 56);
            if ( (*(_DWORD *)v53 & 0x20101) == 0x20000LL )
              CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v52, v53, (const struct CCD_TOPOLOGY *)v60);
          }
        }
      }
      DXGADAPTER_REFERENCE::Assign(v57, 0LL);
      v48 = *((_QWORD *)this + 8);
      if ( ++v49 >= *(unsigned __int16 *)(v48 + 20) )
        goto LABEL_57;
    }
    v14 = 0;
    DXGADAPTER_REFERENCE::Assign(v57, 0LL);
  }
LABEL_57:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v60);
LABEL_16:
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 1, v10, v11);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_UniformDpiProgrammingModel__private_reporting,
    0x13C839Fu,
    v18,
    v19,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
    0);
  v21 = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) = 0;
  v22 = *((_QWORD *)this + 8);
  if ( *(_WORD *)(v22 + 20) )
  {
    do
    {
      v23 = (unsigned int)v21;
      v21 = (unsigned int)(v21 + 1);
      *(_DWORD *)(296 * v23 + v22 + 276) = 0;
      v22 = *((_QWORD *)this + 8);
    }
    while ( (unsigned int)v21 < *(unsigned __int16 *)(v22 + 20) );
  }
  v24 = 0;
  if ( !*(_WORD *)(v22 + 20) )
  {
LABEL_29:
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_UniformDpiProgrammingModel__private_reporting,
      0x13C839Fu,
      v21,
      v20,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
      0);
    CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000LL);
    v32 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
    v13 = v32;
    if ( v32 >= 0 )
    {
      CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000LL);
      v35 = CCD_TOPOLOGY::AdjustDesktopLayout(this, 0LL, v33, v34);
      v13 = v35;
      if ( v35 >= 0 )
      {
        CCD_TOPOLOGY::FillScalingIntent(this);
        CCD_TOPOLOGY::LogFunctionalizePacket(this, 0, v36, v37);
        goto LABEL_32;
      }
    }
    v39 = *((_QWORD *)this + 8);
LABEL_35:
    WdLogSingleEntry2(2LL, v39, v13);
    goto LABEL_65;
  }
  while ( 1 )
  {
    if ( v22 && *(_WORD *)(v22 + 20) )
    {
      v21 = 0LL;
      v25 = 296LL * v24;
      v26 = *(_DWORD *)(v25 + v22 + 72);
      v20 = *(unsigned int *)(v25 + v22 + 76);
      while ( 1 )
      {
        v27 = 296LL * (unsigned __int16)v21;
        if ( *(_DWORD *)(v27 + v22 + 72) == v26 && *(_DWORD *)(v27 + v22 + 76) == (_DWORD)v20 )
          break;
        LOWORD(v21) = v21 + 1;
      }
      if ( (unsigned __int16)v21 == v24 )
        break;
    }
LABEL_28:
    v22 = *((_QWORD *)this + 8);
    if ( ++v24 >= *(unsigned __int16 *)(v22 + 20) )
      goto LABEL_29;
  }
  v28 = 0;
  v29 = 296LL * v24;
  for ( j = v29; ; v29 = j )
  {
    v30 = v62;
    LOBYTE(v30) = *((_BYTE *)this + 76) & 1;
    PathModalityForAdapter = BmlGetPathModalityForAdapter(
                               *((_QWORD *)this + 8),
                               *((_QWORD *)this + 8) + v29 + 72,
                               v30,
                               *((unsigned int *)this + 20),
                               v62);
    v13 = PathModalityForAdapter;
    if ( PathModalityForAdapter != -1071774970 )
      break;
    if ( !v14
      || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                          this,
                          (const struct _LUID *)(j + 72 + *((_QWORD *)this + 8)))
      || v28 )
    {
      goto LABEL_63;
    }
    v28 = 1;
    WdLogNewEntry5_WdTrace(v56, v55);
  }
  if ( PathModalityForAdapter >= 0 )
    goto LABEL_28;
LABEL_63:
  WdLogSingleEntry5(
    2LL,
    v13,
    *((_QWORD *)this + 8),
    v24,
    *(int *)(296LL * v24 + *((_QWORD *)this + 8) + 76),
    *(unsigned int *)(296LL * v24 + *((_QWORD *)this + 8) + 72));
LABEL_65:
  v3 = v13;
LABEL_32:
  CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1942::__AUTO_USING_PM_PathChangeReason1942(&v58);
  return v3;
}
