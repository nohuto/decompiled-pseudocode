/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C01358BC
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D5870 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01356E0 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C01358BC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     DxgkGetDisplayModeList @ 0x1C015CB40 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E8A34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C0115F20 (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C0127CEC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0127D0C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C01358BC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0135B1C (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01514D0 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0159200 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0159F68 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     _CombineModeList @ 0x1C0259ADC (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C029A508 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        struct DXGADAPTER *a1,
        struct COREADAPTERACCESS *a2,
        unsigned __int8 a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        unsigned __int8 *a5)
{
  __int64 v5; // rbx
  unsigned __int8 *v6; // r14
  unsigned __int8 v8; // si
  struct COREADAPTERACCESS *v9; // r15
  int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rax
  int CachedModeList; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int **SessionViewOwner; // rax
  SESSION_VIEW *v24; // r15
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int ModeList; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  void *v31; // r15
  bool v32; // zf
  int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rax
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  struct DISPLAY_SOURCE *NextDisplaySource; // rsi
  __int64 v38; // rcx
  struct DXGADAPTER *v39; // r14
  unsigned int v40; // r11d
  unsigned int v41; // r8d
  int v42; // eax
  __int64 v43; // rcx
  char v44; // al
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  int DisplayModeList; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rax
  __int64 v56; // rax
  D3DKMT_DISPLAYMODE **p_pModeList; // r14
  UINT *p_ModeCount; // rsi
  int v59; // eax
  __int64 v60; // rcx
  _QWORD *v61; // rax
  D3DKMT_DISPLAYMODE *v62; // rcx
  UINT v63; // edx
  __int64 v64; // rax
  UINT i; // edx
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int8 v72; // [rsp+50h] [rbp-B0h]
  char v73; // [rsp+51h] [rbp-AFh] BYREF
  char v74; // [rsp+52h] [rbp-AEh] BYREF
  unsigned __int8 v75[5]; // [rsp+53h] [rbp-ADh] BYREF
  void *v76; // [rsp+58h] [rbp-A8h] BYREF
  int v77; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v78; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 *v79; // [rsp+68h] [rbp-98h]
  int v80; // [rsp+70h] [rbp-90h] BYREF
  struct COREADAPTERACCESS *v81; // [rsp+78h] [rbp-88h]
  struct _D3DKMT_GETDISPLAYMODELIST v82; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v83[144]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a5;
  v79 = a5;
  v8 = a3;
  v72 = a3;
  v9 = a2;
  v81 = a2;
  while ( 1 )
  {
    v77 = 0;
    v11 = 0;
    LOBYTE(v5) = 0;
    v76 = 0LL;
    *v6 = 0;
    v12 = 3968LL * a4->VidPnSourceId;
    v13 = *((_QWORD *)a1 + 334);
    v78 = v5;
    v80 = 0;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(
                (__int64)a1,
                *(unsigned int *)(v12 + *(_QWORD *)(v13 + 112) + 1068),
                &v77) >= 0 )
      v78 = v77 != 0;
    CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)a1 + 334), a4);
    v5 = CachedModeList;
    v16 = CachedModeList + 0x80000000;
    if ( (int)v16 >= 0 && CachedModeList != -1073741275 )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16);
      v69[3] = a4->VidPnSourceId;
      v69[4] = a1;
      v69[5] = v5;
      WdLogEvent5_WdDmmEvent(v69);
      return (unsigned int)v5;
    }
    if ( CachedModeList == -1073741275 )
      break;
LABEL_6:
    if ( (_DWORD)v5 != -1071775483 || v8 )
      return (unsigned int)v5;
    if ( *v6 )
    {
      v68 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v68 + 24) = 5530LL;
      WdLogEvent5_WdAssertion(v68);
    }
    v8 = 1;
    v72 = 1;
  }
  v18 = 3968LL * a4->VidPnSourceId;
  v19 = *((_QWORD *)a1 + 334);
  v74 = 0;
  v20 = *(_DWORD *)(v18 + *(_QWORD *)(v19 + 112) + 1068);
  if ( v20 != -1 && (int)DxgkQueryMonitorTypeLockHeld((_DWORD)a1, v20, 0, 0, 0LL, (__int64)&v74, 0LL, 0LL, 0LL) < 0 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v22, v21);
    *(_QWORD *)(v35 + 24) = 5274LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v9 + 11)) )
    COREADAPTERACCESS::Release(v9);
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)a1 + 334), a4->VidPnSourceId);
  v24 = (SESSION_VIEW *)SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || !SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner) && !v8
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v24),
        PrimaryDisplaySource != (const struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)a1 + 334) + 112LL)
                                                              + 3968LL * a4->VidPnSourceId)) )
  {
LABEL_17:
    v25 = COREADAPTERACCESS::AcquireExclusive((__int64)v81, 1LL, 0);
    v5 = v25;
    if ( v25 < 0 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v26);
      v55[3] = v5;
    }
    else
    {
      v27 = ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)a1 + 334), a4);
      v5 = v27;
      if ( v27 >= 0 )
      {
LABEL_49:
        v31 = v76;
        goto LABEL_27;
      }
      if ( v27 == -1073741275 )
      {
        ModeList = ADAPTER_DISPLAY::CreateModeList(*((ADAPTER_DISPLAY **)a1 + 334), v8, a4);
        v5 = ModeList;
        if ( ModeList >= 0 )
        {
          if ( !v11 )
          {
            v31 = v76;
LABEL_23:
            v32 = !v78;
            *v6 = 1;
            if ( !v32 )
            {
              for ( i = 0; i < a4->ModeCount; *((_DWORD *)&a4->pModeList[v66].Flags + 1) &= ~0x80u )
                v66 = i++;
            }
            v33 = ADAPTER_DISPLAY::SetCachedModeList(*((ADAPTER_DISPLAY **)a1 + 334), a4);
            v34 = v33;
            if ( v33 < 0 )
            {
              v67 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16);
              v67[3] = a4->VidPnSourceId;
              v67[4] = a4;
              v67[5] = v34;
              WdLogEvent5_WdDmmEvent(v67);
            }
            else
            {
              *v6 = 0;
            }
            LODWORD(v5) = 0;
            goto LABEL_27;
          }
          p_pModeList = &a4->pModeList;
          v31 = v76;
          p_ModeCount = &a4->ModeCount;
          v59 = CombineModeList((int)a4 + 16, (int)a4 + 8, v11, (_DWORD)v76, 1);
          v5 = v59;
          if ( v59 >= 0 )
          {
            v63 = 0;
            if ( *p_ModeCount )
            {
              do
              {
                v64 = v63++;
                *((_DWORD *)&(*p_pModeList)[v64].Flags + 1) &= ~0x80u;
              }
              while ( v63 < *p_ModeCount );
              v31 = v76;
            }
            v6 = v79;
            goto LABEL_23;
          }
          v61 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v60);
          v61[3] = a1;
          v61[4] = a4->VidPnSourceId;
          v61[5] = v5;
          WdLogEvent5_WdDmmEvent(v61);
          v62 = *p_pModeList;
          *p_ModeCount = 0;
          operator delete[](v62);
          *p_pModeList = 0LL;
          v6 = v79;
LABEL_27:
          if ( v31 )
            operator delete[](v31);
          v9 = v81;
          v8 = v72;
          goto LABEL_6;
        }
        if ( v8 && ModeList == -1071775483 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v30, v29);
          *(_QWORD *)(v56 + 24) = 5448LL;
          WdLogEvent5_WdAssertion(v56);
        }
        v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30);
        v55[3] = a4->VidPnSourceId;
        v55[4] = v5;
      }
      else
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16);
        v55[3] = a4->VidPnSourceId;
        v55[4] = a1;
        v55[5] = v5;
      }
    }
    WdLogEvent5_WdDmmEvent(v55);
    goto LABEL_49;
  }
  NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v24, PrimaryDisplaySource);
  if ( !NextDisplaySource )
  {
LABEL_53:
    v8 = v72;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v38 = *((_QWORD *)NextDisplaySource + 1);
    v73 = 0;
    v39 = *(struct DXGADAPTER **)(v38 + 16);
    v75[0] = 0;
    memset(&v82, 0, sizeof(v82));
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v83, v39, 0LL);
    v42 = COREADAPTERACCESS::AcquireExclusive((__int64)v83, v40, v41);
    v5 = v42;
    if ( v42 < 0 )
      break;
    if ( (int)MonitorGetMonitorOrientationsFromTarget((__int64)v39, *((unsigned int *)NextDisplaySource + 267), &v77) >= 0 )
    {
      v44 = v78;
      if ( v77 )
        v44 = 1;
      LOBYTE(v78) = v44;
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                (_DWORD)v39,
                *((_DWORD *)NextDisplaySource + 267),
                0,
                0,
                0LL,
                (__int64)&v73,
                0LL,
                0LL,
                0LL) < 0 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v46, v45);
      *(_QWORD *)(v47 + 24) = 5355LL;
      WdLogEvent5_WdAssertion(v47);
    }
    if ( v74 == v73 )
    {
      v82.VidPnSourceId = *((_DWORD *)NextDisplaySource + 4);
      DisplayModeList = DxgkpGetDisplayModeList(v39, (struct COREADAPTERACCESS *)v83, v72, &v82, v75);
      v5 = DisplayModeList;
      if ( DisplayModeList < 0 )
      {
        if ( DisplayModeList == -1071775483 )
        {
          v52 = WdLogNewEntry5_WdAssertion(v50, v49);
          *(_QWORD *)(v52 + 24) = 5373LL;
          WdLogEvent5_WdAssertion(v52);
        }
LABEL_48:
        v53 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v50);
        v53[3] = v39;
        v53[4] = v82.VidPnSourceId;
        v53[5] = v5;
        WdLogEvent5_WdDmmEvent(v53);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v83, v54);
        v6 = v79;
        goto LABEL_49;
      }
      v5 = (int)CombineModeList((unsigned int)&v80, (unsigned int)&v76, v82.ModeCount, v82.pModeList, 1);
      if ( v75[0] )
        operator delete[](v82.pModeList);
      if ( (int)v5 < 0 )
        goto LABEL_48;
    }
    NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v24, NextDisplaySource);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v83, v51);
    if ( !NextDisplaySource )
    {
      v11 = v80;
      v6 = v79;
      goto LABEL_53;
    }
  }
  v70 = WdLogNewEntry5_WdDmmEvent(v43);
  *(_QWORD *)(v70 + 24) = v39;
  *(_QWORD *)(v70 + 32) = v5;
  WdLogEvent5_WdDmmEvent(v70);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v83, v71);
  return (unsigned int)v5;
}
