/*
 * XREFs of ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02EA94C
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1C0295190 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C001ACFC (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011F70C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C0131E04 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0135980 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01359F0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0136844 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C013AD40 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0162C24 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C016C204 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1686::__AUTO_USING_PM_PathChangeReason1686 @ 0x1C016D1F0 (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1686--__AUTO.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C02EB4A0 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C02EB550 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C02EB7C0 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02EBBB0 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 */

__int64 __fastcall CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
        CCD_TOPOLOGY **this,
        int a2,
        unsigned int a3,
        struct CCD_MODE_RESULT_SET *a4)
{
  PVOID v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // r8
  CCD_TOPOLOGY *v14; // rcx
  __int64 v15; // rdx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  CCD_TOPOLOGY *v26; // rdx
  int v27; // esi
  unsigned int i; // ecx
  unsigned __int16 v29; // ax
  __int64 v30; // rax
  unsigned __int16 v31; // di
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // eax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v39; // rdx
  CCD_TOPOLOGY *v40; // rcx
  _QWORD *v41; // rax
  unsigned int j; // edi
  CCD_TOPOLOGY *v43; // r14
  unsigned __int16 v44; // ax
  __int64 v45; // r15
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v47; // rax
  __int64 v48; // r14
  unsigned __int8 v49; // r12
  DXGADAPTER *v50; // rdx
  CCD_TOPOLOGY *v51; // r12
  int v52; // r14d
  __int64 v53; // r13
  __int64 v54; // r15
  int PathModeListForAdapter; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int16 v60; // [rsp+38h] [rbp-59h] BYREF
  __int64 v61; // [rsp+40h] [rbp-51h] BYREF
  int v62; // [rsp+48h] [rbp-49h]
  unsigned __int64 v63; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v64[144]; // [rsp+58h] [rbp-39h] BYREF

  v6 = operator new[](0x2580uLL, 0x4B677844u, PagedPool);
  if ( v6 )
  {
    memset(v6, 0, 0x2580uLL);
    CCD_TOPOLOGY::SwapPathsDescriptors((CCD_TOPOLOGY *)this, a3, *((unsigned __int16 *)this[8] + 10) - 1);
    v14 = this[8];
    v15 = *((unsigned __int16 *)v14 + 10);
    v61 = (__int64)v14 + 48;
    v62 = v15;
    if ( (_DWORD)v15 )
    {
      v16 = (_DWORD *)((char *)v14 + 280);
      v17 = (unsigned int)v15;
      do
      {
        *v16 |= 1u;
        v16[1] = 0;
        v16 += 68;
        --v17;
      }
      while ( v17 );
      v14 = this[8];
    }
    if ( v14 )
      v18 = *((_WORD *)v14 + 10);
    else
      v18 = 0;
    if ( v18 )
    {
      CCD_TOPOLOGY::ValidateIncomingPathModalityFlags((CCD_TOPOLOGY *)this);
      v22 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath((CCD_TOPOLOGY *)this, v21);
      v20 = v22;
      if ( v22 >= 0 )
      {
        v26 = this[8];
        v27 = 0;
        for ( i = 0; ; ++i )
        {
          v29 = v26 ? *((_WORD *)v26 + 10) : 0;
          if ( i >= (unsigned int)v29 - 1 )
            break;
          v30 = 272LL * i;
          if ( *((_BYTE *)v26 + v30 + 177) )
          {
            if ( (*(_DWORD *)((_BYTE *)v26 + v30 + 48) & 0x20101) == 0x20000LL )
              v27 = 1;
          }
        }
        if ( v27 )
        {
          v31 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v64, 8u, 0);
          v60 = 8;
          while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v64, v31, v32, v33) >= v31 )
          {
            v38 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v64, 1, 0, 1, &v60);
            if ( v38 != -1073741789 )
              goto LABEL_29;
            v31 = v60;
          }
          v41 = (_QWORD *)WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
          v41[3] = v31;
          v41[4] = this;
          v40 = this[8];
          v41[5] = v40;
          v38 = -1073741801;
LABEL_29:
          if ( v38 >= 0 )
          {
            for ( j = 0; ; ++j )
            {
              v43 = this[8];
              v44 = v43 ? *((_WORD *)v43 + 10) : 0;
              if ( j >= (unsigned int)v44 - 1 )
                break;
              v45 = 272LL * j;
              Global = DXGGLOBAL::GetGlobal((__int64)v40, (__int64)v39);
              v47 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)v43 + v45 + 64), &v63);
              if ( !v47 )
                goto LABEL_43;
              v48 = *((_QWORD *)v47 + 338);
              v49 = ADAPTER_DISPLAY::ForceIHVScaling(*((ADAPTER_DISPLAY **)v47 + 337));
              DXGADAPTER::ReleaseReference(v50);
              v40 = this[8];
              if ( *((_BYTE *)v40 + v45 + 177) )
              {
                if ( v48 )
                {
                  if ( !v49 )
                  {
                    v39 = (CCD_TOPOLOGY *)((char *)v40 + v45 + 48);
                    if ( (*(_DWORD *)v39 & 0x20101) == 0x20000LL )
                      CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v40, v39, (const struct CCD_TOPOLOGY *)v64);
                  }
                }
              }
            }
          }
          else
          {
            WdLogNewEntry5_WdTrace(v40, v39, v32, v33);
LABEL_43:
            v27 = 0;
          }
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v64);
        }
        CCD_TOPOLOGY::LogFunctionalizePacket((CCD_TOPOLOGY *)this, 1);
        v51 = this[8];
        v52 = 0;
        v53 = 272LL * *((unsigned __int16 *)v51 + 10);
        v54 = (__int64)v51 + v53;
        while ( 1 )
        {
          PathModeListForAdapter = BmlGetPathModeListForAdapter(
                                     this[8],
                                     *(_QWORD *)(v54 - 208),
                                     *((_DWORD *)this + 19) & 1,
                                     *((unsigned int *)this + 20),
                                     a2,
                                     a4);
          v20 = PathModeListForAdapter;
          if ( PathModeListForAdapter != -1071774970 )
            break;
          if ( !v27
            || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                                (CCD_TOPOLOGY *)this,
                                (const struct _LUID *)(v54 - 208))
            || v52 )
          {
            goto LABEL_52;
          }
          v52 = 1;
          WdLogNewEntry5_WdTrace(v57, v56, v58, v59);
        }
        if ( PathModeListForAdapter < 0 )
        {
LABEL_52:
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56);
          v25[3] = v20;
          v25[4] = this[8];
          v25[5] = *((unsigned __int16 *)this[8] + 10) - 1LL;
          v25[6] = *(int *)((char *)v51 + v53 - 204);
          v25[7] = *(unsigned int *)(v54 - 208);
          goto LABEL_53;
        }
        CCD_TOPOLOGY::LogFunctionalizePacket((CCD_TOPOLOGY *)this, 0);
      }
      else
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
        v25[3] = this[8];
        v25[4] = v20;
LABEL_53:
        WdLogEvent5_WdError(v25);
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdWarning(v14, v15, v13);
      *(_QWORD *)(v19 + 24) = this;
      *(_QWORD *)(v19 + 32) = this[8];
      WdLogEvent5_WdWarning(v19);
      LODWORD(v20) = -1073741823;
    }
    CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1686::__AUTO_USING_PM_PathChangeReason1686(&v61);
    return (unsigned int)v20;
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 1677LL;
    WdLogEvent5_WdLowResource(v11);
    return 3221225495LL;
  }
}
