/*
 * XREFs of ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C00E2A98
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C013304C (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00098FC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000F0BC (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C001A3FC (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DEF58 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x1C00E2CF0 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00E2E60 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00E8464 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00E8F0C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00E8F7C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00EB9E8 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C00EBADC (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0135F0C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C013B23C (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C014F578 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0157454 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1686::__AUTO_USING_PM_PathChangeReason1686 @ 0x1C01583E4 (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1686--__AUTO.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C02E6BD0 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C02E6C80 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FunctionalizeWorker(CCD_TOPOLOGY *this, __int64 a2, _BOOL8 a3)
{
  int v4; // r15d
  __int64 v5; // rcx
  bool v6; // si
  unsigned int v7; // r9d
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int16 v10; // ax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  int v16; // r14d
  unsigned int i; // ecx
  unsigned __int16 v18; // ax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // esi
  unsigned __int16 v23; // r8
  __int64 v24; // rcx
  int v25; // r10d
  int v26; // r9d
  __int64 v27; // rcx
  bool v28; // al
  __int64 v29; // r13
  int PathModalityForAdapter; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  __int64 v36; // rax
  unsigned __int16 v37; // di
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // edi
  __int64 v50; // rsi
  __int64 v51; // rdx
  CCD_TOPOLOGY *v52; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  _QWORD *v56; // rax
  DXGADAPTER *v57[2]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v58; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v59; // [rsp+48h] [rbp-41h]
  _BYTE v60[144]; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int16 v61; // [rsp+F0h] [rbp+67h] BYREF
  int v62; // [rsp+F8h] [rbp+6Fh]

  v62 = a2;
  v4 = 0;
  v5 = *((_QWORD *)this + 8);
  v6 = a3;
  v7 = *(unsigned __int16 *)(v5 + 20);
  v58 = v5 + 48;
  v59 = v7;
  if ( v7 )
  {
    v8 = (_DWORD *)(v5 + 280);
    v9 = v7;
    do
    {
      *v8 |= 1u;
      v8[1] = 0;
      v8 += 68;
      --v9;
    }
    while ( v9 );
    v5 = *((_QWORD *)this + 8);
  }
  if ( v5 )
    v10 = *(_WORD *)(v5 + 20);
  else
    v10 = 0;
  if ( v10 )
  {
    CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
    v11 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
    v14 = v11;
    if ( v11 < 0 )
      goto LABEL_64;
    v15 = *((_QWORD *)this + 8);
    v16 = 0;
    for ( i = 0; ; ++i )
    {
      v18 = v15 ? *(_WORD *)(v15 + 20) : 0;
      if ( i >= v18 )
        break;
      v19 = 272LL * i;
      if ( *(_BYTE *)(v19 + v15 + 177) )
      {
        v20 = *(_QWORD *)(v19 + v15 + 48);
        if ( (v20 & 0x101) == 0 && (v20 & 0x20000) != 0 )
          v16 = 1;
      }
    }
    if ( v16 )
    {
      v37 = 8;
      CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v60, 8u, 0);
      v61 = 8;
      while ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v60, v37) >= v37 )
      {
        v42 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v60, 1, v6, 1, &v61);
        if ( v42 != -1073741789 )
          goto LABEL_44;
        v37 = v61;
      }
      v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v39, v38, v40, v41);
      v47[3] = v37;
      v47[4] = this;
      v44 = *((_QWORD *)this + 8);
      v47[5] = v44;
      v42 = -1073741801;
LABEL_44:
      if ( v42 >= 0 )
      {
        v48 = *((_QWORD *)this + 8);
        v49 = 0;
        if ( *(_WORD *)(v48 + 20) )
        {
          while ( 1 )
          {
            v50 = 272LL * v49;
            v57[0] = 0LL;
            if ( !DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v57, (struct _LUID *)(v50 + v48 + 64)) )
              break;
            if ( *(_BYTE *)(v50 + *((_QWORD *)this + 8) + 177) )
            {
              if ( *((_QWORD *)v57[0] + 335) )
              {
                if ( !ADAPTER_DISPLAY::ForceIHVScaling(*((ADAPTER_DISPLAY **)v57[0] + 334)) )
                {
                  v53 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v50 + v51 + 48);
                  if ( (*(_DWORD *)v53 & 0x20101) == 0x20000LL )
                    CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v52, v53, (const struct CCD_TOPOLOGY *)v60);
                }
              }
            }
            DXGADAPTER_REFERENCE::Assign(v57, 0LL);
            v48 = *((_QWORD *)this + 8);
            if ( ++v49 >= *(unsigned __int16 *)(v48 + 20) )
              goto LABEL_56;
          }
          v16 = 0;
          DXGADAPTER_REFERENCE::Assign(v57, 0LL);
        }
      }
      else
      {
        WdLogNewEntry5_WdTrace(v44, v43, v45, v46);
        v16 = 0;
      }
LABEL_56:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v60);
    }
    CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
    v21 = *((_QWORD *)this + 8);
    v22 = 0;
    if ( *(_WORD *)(v21 + 20) )
    {
      while ( 1 )
      {
        if ( v21 && *(_WORD *)(v21 + 20) )
        {
          v23 = 0;
          v24 = 272LL * v22;
          v25 = *(_DWORD *)(v24 + v21 + 64);
          v26 = *(_DWORD *)(v24 + v21 + 68);
          while ( 1 )
          {
            v27 = 272LL * v23;
            if ( *(_DWORD *)(v27 + v21 + 64) == v25 && *(_DWORD *)(v27 + v21 + 68) == v26 )
              break;
            ++v23;
          }
          v28 = v23 == v22;
        }
        else
        {
          v28 = 0;
        }
        if ( v28 )
          break;
LABEL_28:
        v21 = *((_QWORD *)this + 8);
        if ( ++v22 >= *(unsigned __int16 *)(v21 + 20) )
          goto LABEL_29;
      }
      v29 = 272LL * v22;
      while ( 1 )
      {
        PathModalityForAdapter = BmlGetPathModalityForAdapter(
                                   *((_QWORD *)this + 8),
                                   (struct _LUID *)(v29 + *((_QWORD *)this + 8) + 64LL),
                                   *((_BYTE *)this + 76) & 1,
                                   *((_DWORD *)this + 20),
                                   v62);
        v14 = PathModalityForAdapter;
        if ( PathModalityForAdapter != -1071774970 )
          break;
        if ( !v16
          || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                              this,
                              (const struct _LUID *)(v29 + *((_QWORD *)this + 8) + 64LL))
          || v4 )
        {
          goto LABEL_63;
        }
        v4 = 1;
        WdLogNewEntry5_WdTrace(v32, v31, v54, v55);
      }
      v4 = 0;
      if ( PathModalityForAdapter >= 0 )
        goto LABEL_28;
LABEL_63:
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
      v56[3] = v14;
      v56[4] = *((_QWORD *)this + 8);
      v56[5] = v22;
      v56[6] = *(int *)(272LL * v22 + *((_QWORD *)this + 8) + 68);
      v56[7] = *(unsigned int *)(272LL * v22 + *((_QWORD *)this + 8) + 64);
      goto LABEL_65;
    }
LABEL_29:
    CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000uLL);
    v33 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
    v14 = v33;
    if ( v33 < 0
      || (CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000uLL),
          v34 = CCD_TOPOLOGY::AdjustDesktopLayout(this, 0),
          v14 = v34,
          v34 < 0) )
    {
LABEL_64:
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v56[3] = *((_QWORD *)this + 8);
      v56[4] = v14;
LABEL_65:
      WdLogEvent5_WdError(v56);
      goto LABEL_32;
    }
    CCD_TOPOLOGY::FillScalingIntent(this);
    CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
    LODWORD(v14) = 0;
  }
  else
  {
    v36 = WdLogNewEntry5_WdWarning(v5, a2, a3);
    *(_QWORD *)(v36 + 24) = this;
    *(_QWORD *)(v36 + 32) = *((_QWORD *)this + 8);
    WdLogEvent5_WdWarning(v36);
    LODWORD(v14) = -1073741823;
  }
LABEL_32:
  CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1686::__AUTO_USING_PM_PathChangeReason1686(&v58);
  return (unsigned int)v14;
}
