/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C015B6D4
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000969C (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013C94 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C015BA8C (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C015BB68 (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01A30A0 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C01A6260 (MonitorGetLinkInfoFromTarget.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01D2768 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(
        struct _LUID a1,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  DWORD LowPart; // ebx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v9; // rsi
  struct DXGADAPTER **v10; // rax
  struct DXGADAPTER *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  bool v16; // di
  int v17; // eax
  int LinkInfoFromTarget; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  unsigned int v21; // r9d
  __int64 v22; // r8
  int v23; // eax
  int CachedStereoStates; // eax
  __int64 HighPart; // rdi
  _QWORD *v27; // rax
  bool v28; // zf
  unsigned __int8 v29[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v30; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v31[3]; // [rsp+55h] [rbp-ABh] BYREF
  unsigned __int8 v32[8]; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v33; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  struct _LUID v35; // [rsp+70h] [rbp-90h] BYREF
  _D3DKMT_GETDISPLAYMODELIST v36; // [rsp+78h] [rbp-88h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  int v38; // [rsp+98h] [rbp-68h]
  struct DXGADAPTER *v39[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v40[8]; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGADAPTER *v41; // [rsp+B8h] [rbp-48h]
  char v42; // [rsp+C0h] [rbp-40h]
  _BYTE v43[88]; // [rsp+D0h] [rbp-30h] BYREF
  DXGADAPTER *v44; // [rsp+128h] [rbp+28h]

  v35 = a1;
  LowPart = a1.LowPart;
  if ( !a4 || !a3 )
  {
    WdLogSingleEntry1(1LL, 9151LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAnyStereoExists && pCurModeSupportsStereo",
      9151LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  *a3 = 0;
  v9 = Current;
  *a4 = 0;
  if ( !Current )
  {
    LODWORD(v11) = -1073741811;
    WdLogSingleEntry4(2LL, 0LL, a3, a4, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Exception encountered validating process or input. pProcess=0x%I64x, pAnyStereoExists=0x%I64x, pCurModeSu"
                "pportsStereo=0x%I64x. Returning 0x%I64x",
      0LL,
      (__int64)a3,
      (__int64)a4,
      -1073741811LL,
      0LL);
    return (unsigned int)v11;
  }
  v39[0] = 0LL;
  memset(&v36, 0, sizeof(v36));
  v36.VidPnSourceId = a2;
  if ( !DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v39, &v35) )
  {
    HighPart = v35.HighPart;
    WdLogSingleEntry2(2LL, v35.HighPart, LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkpAdapterCheckStereoMode function.",
      HighPart,
      LowPart,
      0LL,
      0LL,
      0LL);
    LODWORD(v11) = -1073741811;
    goto LABEL_39;
  }
  v33 = 0LL;
  v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v33);
  v11 = v39[0];
  if ( (int)DxgkpGetPairingAdapters(v39[0], v36.VidPnSourceId, 0LL, 0LL, v10, &v34, 0) >= 0 )
  {
    if ( !v33 )
    {
      WdLogSingleEntry1(1LL, 9182LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter.Get() != NULL", 9182LL, 0LL, 0LL, 0LL, 0LL);
    }
    v31[0] = 0;
    v14 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v31, 0);
    v15 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v11) = v15;
LABEL_36:
      if ( v31[0] )
        DxgkReleaseSessionModeChangeLock();
      goto LABEL_38;
    }
    v41 = v33;
    v42 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v33, 0LL);
    if ( *((_DWORD *)v33 + 50) != 1 )
    {
      LODWORD(v11) = -1073741130;
      WdLogSingleEntry4(7LL, v9, v36.hAdapter, v33 != 0LL, -1073741130LL);
      goto LABEL_34;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v33 + 349), v36.VidPnSourceId) )
    {
      LODWORD(v11) = -1071774238;
      WdLogSingleEntry3(7LL, v33 != 0LL, v36.VidPnSourceId, -1071774238LL);
      goto LABEL_34;
    }
    *(_WORD *)v29 = 0;
    v16 = 0;
    LODWORD(v11) = ADAPTER_DISPLAY::GetCachedStereoStates(
                     *((ADAPTER_DISPLAY **)v33 + 349),
                     v36.VidPnSourceId,
                     v29,
                     &v29[1]);
    if ( (_DWORD)v11 != -1073741275 )
      goto LABEL_22;
    v35.LowPart = -1;
    v17 = DmmEnumClientVidPnPathTargetsFromSource(v33, v36.VidPnSourceId, 0LL, (unsigned int *const)&v35);
    v11 = (struct DXGADAPTER *)v17;
    if ( v17 >= 0 )
    {
      v37 = 0LL;
      v38 = 0;
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(v33, v35.LowPart, &v37);
      v11 = (struct DXGADAPTER *)LinkInfoFromTarget;
      if ( LinkInfoFromTarget >= 0 )
      {
        if ( (v37 & 0x100000000LL) == 0 )
          *(_WORD *)v29 = 0;
        LODWORD(v11) = (v37 & 0x100000000LL) != 0 ? 0xC0000225 : 0;
        v16 = !(v37 & 0x100000000LL);
LABEL_50:
        if ( (_DWORD)v11 == -1073741275 )
          goto LABEL_15;
LABEL_22:
        if ( (int)v11 < 0 )
          goto LABEL_34;
        if ( !v16 )
          goto LABEL_32;
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v44) )
        {
          if ( DXGADAPTER::IsCoreResourceSharedOwner(v44) )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v43);
          v23 = COREADAPTERACCESS::AcquireExclusive((__int64)v43);
          if ( v23 < 0 )
            WdLogSingleEntry1(7LL, v23);
        }
        *(_WORD *)v32 = 0;
        CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(
                               *((ADAPTER_DISPLAY **)v33 + 349),
                               v36.VidPnSourceId,
                               v32,
                               &v32[1]);
        LODWORD(v11) = CachedStereoStates;
        if ( CachedStereoStates >= 0 )
        {
          *(_WORD *)v29 = *(_WORD *)v32;
LABEL_32:
          *a3 = v29[0];
          *a4 = v29[1];
          goto LABEL_34;
        }
        if ( CachedStereoStates == -1073741275 )
        {
          LODWORD(v11) = ADAPTER_DISPLAY::SetCachedStereoStates(
                           *((_QWORD *)v33 + 349),
                           v36.VidPnSourceId,
                           v29[1] != 0,
                           v29[0] != 0);
          if ( (int)v11 >= 0 )
            goto LABEL_32;
        }
LABEL_34:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
        if ( v42 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
        goto LABEL_36;
      }
      if ( LinkInfoFromTarget == -1073741275 )
      {
LABEL_15:
        v30 = 0;
        LODWORD(v11) = DxgkpGetDisplayModeList(v33, (struct COREADAPTERACCESS *)v43, 0, &v36, 0LL, &v30);
        if ( (int)v11 < 0 )
        {
          pModeList = v36.pModeList;
        }
        else
        {
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v33 + 349), v36.VidPnSourceId);
          pModeList = v36.pModeList;
          v21 = 0;
          if ( v36.ModeCount )
          {
            while ( 1 )
            {
              v22 = v21;
              if ( (*((_DWORD *)&v36.pModeList[v22].Flags + 1) & 0x10) != 0 )
              {
                v29[1] = 1;
                if ( v36.pModeList[v22].Width == *(_DWORD *)DisplayModeInfo
                  && v36.pModeList[v22].Height == *((_DWORD *)DisplayModeInfo + 1)
                  && v36.pModeList[v22].Format == *((_DWORD *)DisplayModeInfo + 2) )
                {
                  break;
                }
              }
              if ( ++v21 >= v36.ModeCount )
                goto LABEL_19;
            }
            v29[0] = 1;
          }
LABEL_19:
          v16 = 1;
        }
        if ( v30 )
        {
          operator delete[](pModeList);
          v36.pModeList = 0LL;
        }
        goto LABEL_22;
      }
    }
    WdLogSingleEntry1(7LL, v11);
    goto LABEL_50;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
  v28 = v11 == 0LL;
  LODWORD(v11) = 0;
  v27[3] = !v28;
  v27[4] = v36.VidPnSourceId;
  v27[5] = 0LL;
LABEL_38:
  DXGADAPTER_REFERENCE::Assign(&v33, 0LL);
LABEL_39:
  DXGADAPTER_REFERENCE::Assign(v39, 0LL);
  return (unsigned int)v11;
}
