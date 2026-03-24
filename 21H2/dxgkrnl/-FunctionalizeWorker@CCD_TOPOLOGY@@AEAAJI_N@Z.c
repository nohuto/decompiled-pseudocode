/*
 * XREFs of ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C013AEF4
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C0163908 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C0009FFC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019134 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C001ACFC (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C0131E04 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C0134A0C (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0135980 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01359F0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0136844 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x1C0136FD8 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C013AD40 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0148380 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0148F5C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0162C24 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01690F4 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C016C204 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1686::__AUTO_USING_PM_PathChangeReason1686 @ 0x1C016D1F0 (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1686--__AUTO.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C02EB4A0 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C02EB550 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FunctionalizeWorker(CCD_TOPOLOGY *this, __int64 a2, __int64 a3)
{
  int v4; // r15d
  __int64 v5; // rcx
  char v6; // si
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
  __int64 v30; // r8
  int PathModalityForAdapter; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  __int64 v37; // rax
  unsigned __int16 v38; // di
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // edi
  __int64 v51; // rsi
  __int64 v52; // rdx
  CCD_TOPOLOGY *v53; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD *v57; // rax
  DXGADAPTER *v58[2]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v59; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v60; // [rsp+48h] [rbp-41h]
  _BYTE v61[144]; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int16 v62; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v63; // [rsp+F8h] [rbp+6Fh]

  v63 = a2;
  v4 = 0;
  v5 = *((_QWORD *)this + 8);
  v6 = a3;
  v7 = *(unsigned __int16 *)(v5 + 20);
  v59 = v5 + 48;
  v60 = v7;
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
      v38 = 8;
      CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v61, 8u, 0);
      v62 = 8;
      while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v61, v38, v39, v40) >= v38 )
      {
        v45 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v61, 1, v6, 1, &v62);
        if ( v45 != -1073741789 )
          goto LABEL_44;
        v38 = v62;
      }
      v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v41, v43, v44);
      v48[3] = v38;
      v48[4] = this;
      v47 = *((_QWORD *)this + 8);
      v48[5] = v47;
      v45 = -1073741801;
LABEL_44:
      if ( v45 >= 0 )
      {
        v49 = *((_QWORD *)this + 8);
        v50 = 0;
        if ( *(_WORD *)(v49 + 20) )
        {
          while ( 1 )
          {
            v51 = 272LL * v50;
            v58[0] = 0LL;
            if ( !DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v58, (struct _LUID *)(v51 + v49 + 64)) )
              break;
            if ( *(_BYTE *)(v51 + *((_QWORD *)this + 8) + 177) )
            {
              if ( *((_QWORD *)v58[0] + 338) )
              {
                if ( !ADAPTER_DISPLAY::ForceIHVScaling(*((ADAPTER_DISPLAY **)v58[0] + 337)) )
                {
                  v54 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v51 + v52 + 48);
                  if ( (*(_DWORD *)v54 & 0x20101) == 0x20000LL )
                    CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v53, v54, (const struct CCD_TOPOLOGY *)v61);
                }
              }
            }
            DXGADAPTER_REFERENCE::Assign(v58, 0LL);
            v49 = *((_QWORD *)this + 8);
            if ( ++v50 >= *(unsigned __int16 *)(v49 + 20) )
              goto LABEL_56;
          }
          v16 = 0;
          DXGADAPTER_REFERENCE::Assign(v58, 0LL);
        }
      }
      else
      {
        WdLogNewEntry5_WdTrace(v47, v46, v39, v40);
        v16 = 0;
      }
LABEL_56:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v61);
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
        v30 = v63;
        LOBYTE(v30) = *((_BYTE *)this + 76) & 1;
        PathModalityForAdapter = BmlGetPathModalityForAdapter(
                                   *((_QWORD *)this + 8),
                                   v29 + *((_QWORD *)this + 8) + 64LL,
                                   v30,
                                   *((unsigned int *)this + 20),
                                   v63);
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
        WdLogNewEntry5_WdTrace(v33, v32, v55, v56);
      }
      v4 = 0;
      if ( PathModalityForAdapter >= 0 )
        goto LABEL_28;
LABEL_63:
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
      v57[3] = v14;
      v57[4] = *((_QWORD *)this + 8);
      v57[5] = v22;
      v57[6] = *(int *)(272LL * v22 + *((_QWORD *)this + 8) + 68);
      v57[7] = *(unsigned int *)(272LL * v22 + *((_QWORD *)this + 8) + 64);
      goto LABEL_65;
    }
LABEL_29:
    CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000LL);
    v34 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
    v14 = v34;
    if ( v34 < 0
      || (CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000LL),
          v35 = CCD_TOPOLOGY::AdjustDesktopLayout(this, 0LL),
          v14 = v35,
          v35 < 0) )
    {
LABEL_64:
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v57[3] = *((_QWORD *)this + 8);
      v57[4] = v14;
LABEL_65:
      WdLogEvent5_WdError(v57);
      goto LABEL_32;
    }
    CCD_TOPOLOGY::FillScalingIntent(this);
    CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
    LODWORD(v14) = 0;
  }
  else
  {
    v37 = WdLogNewEntry5_WdWarning(v5, a2, a3);
    *(_QWORD *)(v37 + 24) = this;
    *(_QWORD *)(v37 + 32) = *((_QWORD *)this + 8);
    WdLogEvent5_WdWarning(v37);
    LODWORD(v14) = -1073741823;
  }
LABEL_32:
  CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1686::__AUTO_USING_PM_PathChangeReason1686(&v59);
  return (unsigned int)v14;
}
