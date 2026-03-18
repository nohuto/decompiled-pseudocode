/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D5870
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C01176F0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00098FC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009A48 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001188C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011D30 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001AB20 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001ABB4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C0034730 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C00D5DD4 (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C00D5E60 (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C00EF904 (MonitorGetLinkInfoFromTarget.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C0129954 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C01358BC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(struct _LUID a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  __int64 v4; // rdi
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v7; // r14d
  DWORD LowPart; // ebx
  __int64 v9; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct DXGADAPTER **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // r8d
  unsigned int v30; // r14d
  _QWORD *v31; // rax
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  char v33; // si
  __int64 v34; // rbx
  int v35; // eax
  int LinkInfoFromTarget; // eax
  int v37; // esi
  __int64 v38; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r10
  UINT v40; // r9d
  __int64 v41; // r8
  int v42; // eax
  __int64 v43; // rbx
  __int64 v44; // rax
  int CachedStereoStates; // eax
  _QWORD *v46; // rax
  unsigned __int8 v48[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v49; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v50[3]; // [rsp+45h] [rbp-BBh] BYREF
  unsigned __int8 v51[8]; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *v52; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-A8h] BYREF
  _D3DKMT_GETDISPLAYMODELIST v54; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v55; // [rsp+78h] [rbp-88h] BYREF
  struct _LUID v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  int v58; // [rsp+90h] [rbp-70h]
  struct DXGADAPTER *v59[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v60[8]; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGADAPTER *v61; // [rsp+B0h] [rbp-50h]
  char v62; // [rsp+B8h] [rbp-48h]
  _BYTE v63[88]; // [rsp+C0h] [rbp-40h] BYREF
  DXGADAPTER *v64; // [rsp+118h] [rbp+18h]

  v4 = 0LL;
  v56 = a1;
  v7 = a2;
  LowPart = a1.LowPart;
  if ( !a4 || !a3 )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(a1, a2);
    *(_QWORD *)(v9 + 24) = 8700LL;
    WdLogEvent5_WdAssertion(v9);
  }
  Current = DXGPROCESS::GetCurrent();
  *a3 = 0;
  v13 = Current;
  *a4 = 0;
  if ( !Current )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v46[3] = 0LL;
    LODWORD(v4) = -1073741811;
    v46[6] = -1073741811LL;
    v46[4] = a3;
    v46[5] = a4;
    WdLogEvent5_WdError(v46);
    return (unsigned int)v4;
  }
  v59[0] = 0LL;
  memset(&v54, 0, sizeof(v54));
  v54.VidPnSourceId = v7;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v59, &v56) )
  {
    v52 = 0LL;
    v17 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v52, v14);
    if ( (int)DxgkpGetPairingAdapters(v59[0], v54.VidPnSourceId, 0LL, 0LL, v17, &v53, 0) < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      v22[3] = v59[0] != 0LL;
      v22[4] = v54.VidPnSourceId;
      v22[5] = 0LL;
LABEL_56:
      DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(&v52);
      goto LABEL_57;
    }
    if ( !v52 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v19, v18);
      *(_QWORD *)(v23 + 24) = 8731LL;
      WdLogEvent5_WdAssertion(v23);
    }
    v50[0] = 0;
    v24 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v50, 0);
    v27 = v24;
    if ( v24 < 0 )
    {
      v28 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v28 + 24) = v27;
      WdLogEvent5_WdError(v28);
      LODWORD(v4) = v27;
LABEL_55:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v50);
      goto LABEL_56;
    }
    v61 = v52;
    v62 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, v52, 0LL);
    v30 = v29 + 1;
    if ( *((_DWORD *)v52 + 50) != v29 + 1 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v31[3] = v13;
      v31[4] = v54.hAdapter;
      LOBYTE(v4) = v52 != 0LL;
      v31[5] = v4;
      LODWORD(v4) = -1073741130;
      v31[6] = -1073741130LL;
LABEL_17:
      WdLogEvent5_WdDmmEvent(v31);
LABEL_54:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63, (__int64)pModeList);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
      goto LABEL_55;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v52 + 334), v54.VidPnSourceId) )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      LOBYTE(v4) = v52 != 0LL;
      v31[3] = v4;
      LODWORD(v4) = -1071774238;
      v31[4] = v54.VidPnSourceId;
      v31[5] = -1071774238LL;
      goto LABEL_17;
    }
    *(_WORD *)v48 = 0;
    v33 = 0;
    LODWORD(v34) = ADAPTER_DISPLAY::GetCachedStereoStates(
                     *((ADAPTER_DISPLAY **)v52 + 334),
                     v54.VidPnSourceId,
                     v48,
                     &v48[1]);
    if ( (_DWORD)v34 != -1073741275 )
      goto LABEL_40;
    v55 = -1;
    v35 = DmmEnumClientVidPnPathTargetsFromSource(v52, v54.VidPnSourceId, 0LL, &v55);
    v34 = v35;
    if ( v35 >= 0 )
    {
      v57 = 0LL;
      v58 = 0;
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(v52, v55, &v57);
      v34 = LinkInfoFromTarget;
      if ( LinkInfoFromTarget >= 0 )
      {
        v37 = v30 & HIDWORD(v57);
        if ( (v30 & HIDWORD(v57)) == 0 )
          *(_WORD *)v48 = 0;
        LODWORD(v34) = v37 != 0 ? 0xC0000225 : 0;
        v33 = v30 ^ v37;
LABEL_26:
        if ( (_DWORD)v34 == -1073741275 )
          goto LABEL_27;
LABEL_40:
        if ( (int)v34 >= 0 )
        {
          if ( v33 )
          {
            if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v64) )
            {
              if ( DXGADAPTER::IsCoreResourceSharedOwner(v64) )
                COREADAPTERACCESS::Release((COREADAPTERACCESS *)v63);
              v42 = COREADAPTERACCESS::AcquireExclusive((__int64)v63, v30, 0);
              v43 = v42;
              if ( v42 < 0 )
              {
                v44 = WdLogNewEntry5_WdDmmEvent();
                *(_QWORD *)(v44 + 24) = v43;
                WdLogEvent5_WdDmmEvent(v44);
              }
            }
            *(_WORD *)v51 = 0;
            CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(
                                   *((ADAPTER_DISPLAY **)v52 + 334),
                                   v54.VidPnSourceId,
                                   v51,
                                   &v51[1]);
            LODWORD(v34) = CachedStereoStates;
            if ( CachedStereoStates < 0 )
            {
              if ( CachedStereoStates == -1073741275 )
                LODWORD(v34) = ADAPTER_DISPLAY::SetCachedStereoStates(
                                 *((_QWORD *)v52 + 334),
                                 v54.VidPnSourceId,
                                 v48[1] != 0,
                                 v48[0] != 0);
            }
            else
            {
              *(_WORD *)v48 = *(_WORD *)v51;
            }
          }
          if ( (int)v34 >= 0 )
          {
            *a3 = v48[0];
            *a4 = v48[1];
          }
        }
        LODWORD(v4) = v34;
        goto LABEL_54;
      }
      if ( LinkInfoFromTarget == -1073741275 )
      {
LABEL_27:
        v49 = 0;
        LODWORD(v34) = DxgkpGetDisplayModeList(v52, (struct COREADAPTERACCESS *)v63, 0, &v54, &v49);
        if ( (int)v34 < 0 )
        {
          pModeList = v54.pModeList;
        }
        else
        {
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v52 + 334), v54.VidPnSourceId);
          pModeList = v54.pModeList;
          v40 = 0;
          if ( v54.ModeCount )
          {
            while ( 1 )
            {
              v41 = v40;
              if ( (*((_DWORD *)&v54.pModeList[v41].Flags + 1) & 0x10) != 0 )
              {
                v48[1] = v30;
                if ( v54.pModeList[v41].Width == *(_DWORD *)DisplayModeInfo
                  && v54.pModeList[v41].Height == *((_DWORD *)DisplayModeInfo + 1)
                  && v54.pModeList[v41].Format == *((_DWORD *)DisplayModeInfo + 2) )
                {
                  break;
                }
              }
              v40 += v30;
              if ( v40 >= v54.ModeCount )
                goto LABEL_36;
            }
            v48[0] = v30;
          }
LABEL_36:
          v33 = v30;
        }
        if ( v49 )
        {
          operator delete[](pModeList);
          v54.pModeList = 0LL;
        }
        goto LABEL_40;
      }
    }
    v38 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v38 + 24) = v34;
    WdLogEvent5_WdDmmEvent(v38);
    goto LABEL_26;
  }
  v16 = WdLogNewEntry5_WdError(v15, v14);
  *(_QWORD *)(v16 + 24) = v56.HighPart;
  *(_QWORD *)(v16 + 32) = LowPart;
  WdLogEvent5_WdError(v16);
  LODWORD(v4) = -1073741811;
LABEL_57:
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v59);
  return (unsigned int)v4;
}
