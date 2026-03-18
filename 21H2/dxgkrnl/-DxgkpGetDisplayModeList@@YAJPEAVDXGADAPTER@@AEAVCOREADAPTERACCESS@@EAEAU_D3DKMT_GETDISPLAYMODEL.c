/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01D2768
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C015B6D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01D2560 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01D2768 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     DxgkGetDisplayModeList @ 0x1C01EBFF0 (DxgkGetDisplayModeList.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C01A25F8 (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01A3618 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01A48E4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01B631C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01D2410 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01D2768 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01D2B4C (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01D2E58 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01D2F7C (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     _CombineModeList @ 0x1C02F8944 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C0347FB0 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        struct DXGADAPTER *a1,
        struct COREADAPTERACCESS *a2,
        char a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        const struct _D3DKMT_DISPLAYMODE **a5,
        unsigned __int8 *a6)
{
  COREADAPTERACCESS *v6; // rbx
  const struct _D3DKMT_DISPLAYMODE **v7; // rdi
  unsigned __int8 *v9; // rax
  char v10; // r15
  struct DXGADAPTER *v11; // rsi
  int v12; // r12d
  void *v13; // r13
  int CachedModeList; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // ecx
  const struct _D3DKMT_DISPLAYMODE *v19; // rsi
  int v20; // r8d
  UINT Width; // r11d
  UINT Height; // r10d
  UINT ModeCount; // r9d
  unsigned int v24; // edx
  COREADAPTERACCESS *pModeList; // rcx
  unsigned int *v26; // rdi
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // edx
  struct SESSION_VIEW *SessionViewOwner; // rax
  SESSION_VIEW *v32; // r15
  int v33; // eax
  int v34; // eax
  int ModeList; // eax
  unsigned __int8 *v36; // rbx
  int v37; // eax
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  struct DISPLAY_SOURCE *NextDisplaySource; // rsi
  unsigned int v40; // r11d
  unsigned int v41; // r13d
  __int64 v42; // rcx
  struct DXGADAPTER *v43; // rdi
  int v44; // eax
  bool v45; // al
  int DisplayModeList; // eax
  D3DKMT_DISPLAYMODE **p_pModeList; // rsi
  UINT *p_ModeCount; // rdi
  int v49; // eax
  D3DKMT_DISPLAYMODE *v50; // rcx
  UINT v51; // edx
  __int64 v52; // rax
  UINT i; // edx
  __int64 v54; // rax
  unsigned __int8 v55; // [rsp+50h] [rbp-B0h]
  char v56; // [rsp+51h] [rbp-AFh] BYREF
  char v57; // [rsp+52h] [rbp-AEh] BYREF
  unsigned __int8 v58; // [rsp+53h] [rbp-ADh] BYREF
  int v59; // [rsp+54h] [rbp-ACh] BYREF
  BOOL v60; // [rsp+58h] [rbp-A8h]
  struct DXGADAPTER *v61; // [rsp+60h] [rbp-A0h]
  int v62; // [rsp+68h] [rbp-98h] BYREF
  COREADAPTERACCESS *v63; // [rsp+70h] [rbp-90h]
  void *v64; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 *v65; // [rsp+80h] [rbp-80h]
  const struct _D3DKMT_DISPLAYMODE **v66; // [rsp+88h] [rbp-78h]
  struct _D3DKMT_GETDISPLAYMODELIST v67; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v68[144]; // [rsp+B0h] [rbp-50h] BYREF

  v7 = a5;
  v9 = a6;
  v10 = a3;
  v66 = a5;
  v11 = a1;
  v65 = a6;
  v12 = 0;
  v55 = a3;
  v63 = a2;
  v61 = a1;
  while ( 1 )
  {
    v13 = 0LL;
    v59 = 0;
    v62 = 0;
    LOBYTE(v6) = 0;
    v60 = (int)v6;
    v64 = 0LL;
    *v9 = 0;
    if ( v7 )
      *v7 = 0LL;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(
                (__int64)v11,
                *(_DWORD *)(4000LL * a4->VidPnSourceId + *(_QWORD *)(*((_QWORD *)v11 + 349) + 128LL) + 1088),
                &v59) >= 0 )
      v60 = v59 != 0;
    CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)v11 + 349), a4);
    LODWORD(v6) = CachedModeList;
    if ( (int)(CachedModeList + 0x80000000) >= 0 && CachedModeList != -1073741275 )
    {
      WdLogSingleEntry3(7LL, a4->VidPnSourceId, v11, CachedModeList);
      return (unsigned int)v6;
    }
    if ( CachedModeList == -1073741275 )
    {
      v28 = 4000LL * a4->VidPnSourceId;
      v29 = *((_QWORD *)v11 + 349);
      v57 = 0;
      v30 = *(_DWORD *)(v28 + *(_QWORD *)(v29 + 128) + 1088);
      if ( v30 != -1
        && (int)DxgkQueryMonitorTypeLockHeld((__int64)v11, v30, 0LL, 0LL, 0LL, &v57, 0LL, 0LL, 0LL, 0LL) < 0 )
      {
        WdLogSingleEntry1(1LL, 5424LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 5424LL, 0LL, 0LL, 0LL, 0LL);
      }
      v6 = v63;
      if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v63 + 11)) )
        COREADAPTERACCESS::Release(v6);
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)v11 + 349), a4->VidPnSourceId);
      v32 = SessionViewOwner;
      if ( SessionViewOwner
        && *((_DWORD *)SessionViewOwner + 10) > 1u
        && (SESSION_VIEW::IsCrossAdapterView(SessionViewOwner) || v55) )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v32);
        if ( PrimaryDisplaySource == (const struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)v11 + 349) + 128LL)
                                                                   + 4000LL * a4->VidPnSourceId) )
        {
          NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v32, PrimaryDisplaySource);
          if ( NextDisplaySource )
          {
            v12 = 0;
            v41 = v40;
            while ( 1 )
            {
              v42 = *((_QWORD *)NextDisplaySource + 1);
              v56 = 0;
              v43 = *(struct DXGADAPTER **)(v42 + 16);
              v58 = 0;
              memset(&v67, 0, sizeof(v67));
              COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v68, v43, 0LL);
              v44 = COREADAPTERACCESS::AcquireExclusive((__int64)v68);
              LODWORD(v6) = v44;
              if ( v44 < 0 )
              {
                WdLogSingleEntry2(7LL, v43, v44);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
                return (unsigned int)v6;
              }
              if ( (int)MonitorGetMonitorOrientationsFromTarget(
                          (__int64)v43,
                          *((_DWORD *)NextDisplaySource + 272),
                          &v59) >= 0 )
              {
                v45 = v60;
                if ( v59 )
                  v45 = v41;
                LOBYTE(v60) = v45;
              }
              if ( (int)DxgkQueryMonitorTypeLockHeld(
                          (__int64)v43,
                          *((_DWORD *)NextDisplaySource + 272),
                          0LL,
                          0LL,
                          0LL,
                          &v56,
                          0LL,
                          0LL,
                          0LL,
                          0LL) < 0 )
              {
                WdLogSingleEntry1(v41, 5506LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 5506LL, 0LL, 0LL, 0LL, 0LL);
              }
              if ( v57 == v56 )
              {
                v67.VidPnSourceId = *((_DWORD *)NextDisplaySource + 4);
                DisplayModeList = DxgkpGetDisplayModeList(v43, (struct COREADAPTERACCESS *)v68, v55, &v67, 0LL, &v58);
                v6 = (COREADAPTERACCESS *)DisplayModeList;
                if ( DisplayModeList < 0 )
                {
                  if ( DisplayModeList == -1071775483 )
                  {
                    WdLogSingleEntry1(v41, 5525LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"Status != STATUS_GRAPHICS_TRY_AGAIN_NOW",
                      5525LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
LABEL_76:
                  WdLogSingleEntry3(7LL, v43, v67.VidPnSourceId, v6);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
                  v13 = v64;
LABEL_81:
                  v10 = v55;
                  goto LABEL_53;
                }
                v6 = (COREADAPTERACCESS *)(int)CombineModeList(
                                                 (unsigned int)&v62,
                                                 (unsigned int)&v64,
                                                 v67.ModeCount,
                                                 v67.pModeList,
                                                 v41);
                if ( v58 )
                  operator delete[](v67.pModeList);
                if ( (int)v6 < 0 )
                  goto LABEL_76;
              }
              NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v32, NextDisplaySource);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
              if ( !NextDisplaySource )
              {
                v12 = v62;
                v13 = v64;
                v6 = v63;
                break;
              }
            }
          }
          v11 = v61;
        }
      }
      v33 = COREADAPTERACCESS::AcquireExclusive((__int64)v6);
      LODWORD(v6) = v33;
      if ( v33 < 0 )
      {
        WdLogSingleEntry1(7LL, v33);
LABEL_80:
        v12 = 0;
        goto LABEL_81;
      }
      v34 = ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)v11 + 349), a4);
      LODWORD(v6) = v34;
      if ( v34 >= 0 )
        goto LABEL_80;
      if ( v34 != -1073741275 )
      {
        WdLogSingleEntry3(7LL, a4->VidPnSourceId, v11, v34);
        goto LABEL_80;
      }
      v10 = v55;
      ModeList = ADAPTER_DISPLAY::CreateModeList(*((ADAPTER_DISPLAY **)v11 + 349), v55, a4);
      v6 = (COREADAPTERACCESS *)ModeList;
      if ( ModeList < 0 )
      {
        v12 = 0;
        if ( v55 && ModeList == -1071775483 )
        {
          WdLogSingleEntry1(1LL, 5600LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"!ForceCrossAdapterClone || (Status != STATUS_GRAPHICS_TRY_AGAIN_NOW)",
            5600LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        WdLogSingleEntry2(7LL, a4->VidPnSourceId, v6);
      }
      else
      {
        if ( v12 )
        {
          p_pModeList = &a4->pModeList;
          p_ModeCount = &a4->ModeCount;
          v49 = CombineModeList((int)a4 + 16, (int)a4 + 8, v12, (_DWORD)v13, 1);
          v12 = 0;
          LODWORD(v6) = v49;
          if ( v49 < 0 )
          {
            WdLogSingleEntry3(7LL, v61, a4->VidPnSourceId, v49);
            v50 = *p_pModeList;
            *p_ModeCount = 0;
            operator delete[](v50);
            *p_pModeList = 0LL;
            goto LABEL_53;
          }
          v51 = 0;
          if ( *p_ModeCount )
          {
            do
            {
              v52 = v51++;
              *((_DWORD *)&(*p_pModeList)[v52].Flags + 1) &= ~0x80u;
            }
            while ( v51 < *p_ModeCount );
            v11 = v61;
            v10 = v55;
          }
          else
          {
            v11 = v61;
          }
        }
        else
        {
          v12 = 0;
        }
        v36 = v65;
        *v65 = 1;
        if ( v60 )
        {
          for ( i = 0; i < a4->ModeCount; *((_DWORD *)&a4->pModeList[v54].Flags + 1) &= ~0x80u )
            v54 = i++;
        }
        v37 = ADAPTER_DISPLAY::SetCachedModeList(*((ADAPTER_DISPLAY **)v11 + 349), a4);
        if ( v37 < 0 )
          WdLogSingleEntry3(7LL, a4->VidPnSourceId, a4, v37);
        else
          *v36 = 0;
        LODWORD(v6) = 0;
      }
LABEL_53:
      if ( v13 )
        operator delete[](v13);
      v11 = v61;
      v7 = v66;
    }
    else
    {
      v12 = 0;
    }
    if ( (_DWORD)v6 != -1071775483 )
      break;
    if ( v10 )
      return (unsigned int)v6;
    v9 = v65;
    if ( *v65 )
    {
      LODWORD(v6) = 5682;
      WdLogSingleEntry1(1LL, 5682LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!*FreeModeList", 5682LL, 0LL, 0LL, 0LL, 0LL);
      v9 = v65;
    }
    v10 = 1;
    v55 = 1;
  }
  if ( (int)v6 < 0 || !v7 )
    return (unsigned int)v6;
  v15 = 4000LL * a4->VidPnSourceId;
  v16 = *(_QWORD *)(*((_QWORD *)v11 + 349) + 128LL);
  v17 = *(_DWORD *)(v15 + v16 + 1120);
  if ( v17 != 1 )
    *v7 = (const struct _D3DKMT_DISPLAYMODE *)(v16 + v15 + 644);
  if ( v17 != -1 )
    return (unsigned int)v6;
  v19 = *v7;
  v20 = 1;
  Width = (*v7)->Width;
  if ( !Width )
    goto LABEL_35;
  Height = v19->Height;
  if ( !Height )
    goto LABEL_35;
  ModeCount = a4->ModeCount;
  v24 = 0;
  v20 = 0;
  if ( !ModeCount )
    goto LABEL_35;
  pModeList = (COREADAPTERACCESS *)a4->pModeList;
  v63 = pModeList;
  while ( 1 )
  {
    v26 = (unsigned int *)((char *)pModeList + 44 * v24);
    v27 = *v26;
    if ( (_DWORD)v27 != Width
      || *(_QWORD *)(v26 + 1) != __PAIR64__(v19->Format, Height)
      || v26[3] != v19->IntegerRefreshRate
      || v26[7] != v19->DisplayOrientation
      || v26[8] != v19->DisplayFixedOutput
      || v26[6] != v19->ScanLineOrdering )
    {
      goto LABEL_23;
    }
    if ( ((*((_BYTE *)&v19->Flags + 4) ^ *((_BYTE *)v26 + 40)) & 0x10) == 0
      && ((*(_BYTE *)&v19->Flags ^ *((_BYTE *)v26 + 36)) & 2) == 0 )
    {
      break;
    }
    pModeList = v63;
LABEL_23:
    if ( ++v24 >= ModeCount )
    {
      v20 = 0;
      goto LABEL_35;
    }
  }
  if ( v26[4] != v19->RefreshRate.Numerator || v26[5] != v19->RefreshRate.Denominator )
  {
    WdLogSingleEntry4(7LL, v27, v26[1], (int)v26[2], v26[3]);
    WdLogSingleEntry4(7LL, v26[4], v26[5], v19->RefreshRate.Numerator, v19->RefreshRate.Denominator);
  }
  v20 = 1;
  *v66 = 0LL;
LABEL_35:
  *(_DWORD *)(4000LL * a4->VidPnSourceId + *(_QWORD *)(*((_QWORD *)v61 + 349) + 128LL) + 1120) = v20;
  return (unsigned int)v6;
}
