/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C01582AC
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00DD284 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01580D0 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C01582AC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     DxgkGetDisplayModeList @ 0x1C016C5A0 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024A0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C01215B4 (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C012D71C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0132764 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C014BAEC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C01582AC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C015850C (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0158808 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C015890C (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0159450 (DxgkQueryMonitorTypeLockHeld.c)
 *     _CombineModeList @ 0x1C025DDDC (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C029E9F8 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
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
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  int ModeList; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  void *v32; // r15
  bool v33; // zf
  int v34; // eax
  __int64 v35; // rbx
  __int64 v36; // rax
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  struct DISPLAY_SOURCE *NextDisplaySource; // rsi
  __int64 v39; // rcx
  struct DXGADAPTER *v40; // r14
  unsigned int v41; // r11d
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  char v45; // al
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  int DisplayModeList; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  _QWORD *v56; // rax
  __int64 v57; // rax
  D3DKMT_DISPLAYMODE **p_pModeList; // r14
  UINT *p_ModeCount; // rsi
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rax
  D3DKMT_DISPLAYMODE *v64; // rcx
  UINT v65; // edx
  __int64 v66; // rax
  UINT i; // edx
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned __int8 v74; // [rsp+50h] [rbp-B0h]
  char v75; // [rsp+51h] [rbp-AFh] BYREF
  char v76; // [rsp+52h] [rbp-AEh] BYREF
  unsigned __int8 v77[5]; // [rsp+53h] [rbp-ADh] BYREF
  void *v78; // [rsp+58h] [rbp-A8h] BYREF
  int v79; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v80; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 *v81; // [rsp+68h] [rbp-98h]
  int v82; // [rsp+70h] [rbp-90h] BYREF
  struct COREADAPTERACCESS *v83; // [rsp+78h] [rbp-88h]
  struct _D3DKMT_GETDISPLAYMODELIST v84; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v85[144]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a5;
  v81 = a5;
  v8 = a3;
  v74 = a3;
  v9 = a2;
  v83 = a2;
  while ( 1 )
  {
    v79 = 0;
    v11 = 0;
    LOBYTE(v5) = 0;
    v78 = 0LL;
    *v6 = 0;
    v12 = 3968LL * a4->VidPnSourceId;
    v13 = *((_QWORD *)a1 + 337);
    v80 = v5;
    v82 = 0;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(
                (__int64)a1,
                *(unsigned int *)(v12 + *(_QWORD *)(v13 + 112) + 1068),
                &v79) >= 0 )
      v80 = v79 != 0;
    CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)a1 + 337), a4);
    v5 = CachedModeList;
    v16 = CachedModeList + 0x80000000;
    if ( (int)v16 >= 0 && CachedModeList != -1073741275 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16, v15);
      v71[3] = a4->VidPnSourceId;
      v71[4] = a1;
      v71[5] = v5;
      WdLogEvent5_WdDmmEvent(v71);
      return (unsigned int)v5;
    }
    if ( CachedModeList == -1073741275 )
      break;
LABEL_6:
    if ( (_DWORD)v5 != -1071775483 || v8 )
      return (unsigned int)v5;
    if ( *v6 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v70 + 24) = 5530LL;
      WdLogEvent5_WdAssertion(v70);
    }
    v8 = 1;
    v74 = 1;
  }
  v18 = 3968LL * a4->VidPnSourceId;
  v19 = *((_QWORD *)a1 + 337);
  v76 = 0;
  v20 = *(_DWORD *)(v18 + *(_QWORD *)(v19 + 112) + 1068);
  if ( v20 != -1 && (int)DxgkQueryMonitorTypeLockHeld((_DWORD)a1, v20, 0, 0, 0LL, (__int64)&v76, 0LL, 0LL, 0LL) < 0 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v22, v21);
    *(_QWORD *)(v36 + 24) = 5274LL;
    WdLogEvent5_WdAssertion(v36);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v9 + 11)) )
    COREADAPTERACCESS::Release(v9);
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)a1 + 337), a4->VidPnSourceId);
  v24 = (SESSION_VIEW *)SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || !SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner) && !v8
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v24),
        PrimaryDisplaySource != (const struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)a1 + 337) + 112LL)
                                                              + 3968LL * a4->VidPnSourceId)) )
  {
LABEL_17:
    v25 = COREADAPTERACCESS::AcquireExclusive((__int64)v83, 1LL);
    v5 = v25;
    if ( v25 < 0 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v27, v26);
      v56[3] = v5;
    }
    else
    {
      v28 = ADAPTER_DISPLAY::GetCachedModeList(*((ADAPTER_DISPLAY **)a1 + 337), a4);
      v5 = v28;
      if ( v28 >= 0 )
      {
LABEL_49:
        v32 = v78;
        goto LABEL_27;
      }
      if ( v28 == -1073741275 )
      {
        ModeList = ADAPTER_DISPLAY::CreateModeList(*((ADAPTER_DISPLAY **)a1 + 337), v8, a4);
        v5 = ModeList;
        if ( ModeList >= 0 )
        {
          if ( !v11 )
          {
            v32 = v78;
LABEL_23:
            v33 = !v80;
            *v6 = 1;
            if ( !v33 )
            {
              for ( i = 0; i < a4->ModeCount; *((_DWORD *)&a4->pModeList[v68].Flags + 1) &= ~0x80u )
                v68 = i++;
            }
            v34 = ADAPTER_DISPLAY::SetCachedModeList(*((ADAPTER_DISPLAY **)a1 + 337), a4);
            v35 = v34;
            if ( v34 < 0 )
            {
              v69 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16, v15);
              v69[3] = a4->VidPnSourceId;
              v69[4] = a4;
              v69[5] = v35;
              WdLogEvent5_WdDmmEvent(v69);
            }
            else
            {
              *v6 = 0;
            }
            LODWORD(v5) = 0;
            goto LABEL_27;
          }
          p_pModeList = &a4->pModeList;
          v32 = v78;
          p_ModeCount = &a4->ModeCount;
          v60 = CombineModeList((int)a4 + 16, (int)a4 + 8, v11, (_DWORD)v78, 1);
          v5 = v60;
          if ( v60 >= 0 )
          {
            v65 = 0;
            if ( *p_ModeCount )
            {
              do
              {
                v66 = v65++;
                *((_DWORD *)&(*p_pModeList)[v66].Flags + 1) &= ~0x80u;
              }
              while ( v65 < *p_ModeCount );
              v32 = v78;
            }
            v6 = v81;
            goto LABEL_23;
          }
          v63 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v62, v61);
          v63[3] = a1;
          v63[4] = a4->VidPnSourceId;
          v63[5] = v5;
          WdLogEvent5_WdDmmEvent(v63);
          v64 = *p_pModeList;
          *p_ModeCount = 0;
          operator delete[](v64);
          *p_pModeList = 0LL;
          v6 = v81;
LABEL_27:
          if ( v32 )
            operator delete[](v32);
          v9 = v83;
          v8 = v74;
          goto LABEL_6;
        }
        if ( v8 && ModeList == -1071775483 )
        {
          v57 = WdLogNewEntry5_WdAssertion(v31, v30);
          *(_QWORD *)(v57 + 24) = 5448LL;
          WdLogEvent5_WdAssertion(v57);
        }
        v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v31, v30);
        v56[3] = a4->VidPnSourceId;
        v56[4] = v5;
      }
      else
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16, v15);
        v56[3] = a4->VidPnSourceId;
        v56[4] = a1;
        v56[5] = v5;
      }
    }
    WdLogEvent5_WdDmmEvent(v56);
    goto LABEL_49;
  }
  NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v24, PrimaryDisplaySource);
  if ( !NextDisplaySource )
  {
LABEL_53:
    v8 = v74;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v39 = *((_QWORD *)NextDisplaySource + 1);
    v75 = 0;
    v40 = *(struct DXGADAPTER **)(v39 + 16);
    v77[0] = 0;
    memset(&v84, 0, sizeof(v84));
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v85, v40, 0LL);
    v42 = COREADAPTERACCESS::AcquireExclusive((__int64)v85, v41);
    v5 = v42;
    if ( v42 < 0 )
      break;
    if ( (int)MonitorGetMonitorOrientationsFromTarget((__int64)v40, *((unsigned int *)NextDisplaySource + 267), &v79) >= 0 )
    {
      v45 = v80;
      if ( v79 )
        v45 = 1;
      LOBYTE(v80) = v45;
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                (_DWORD)v40,
                *((_DWORD *)NextDisplaySource + 267),
                0,
                0,
                0LL,
                (__int64)&v75,
                0LL,
                0LL,
                0LL) < 0 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v47, v46);
      *(_QWORD *)(v48 + 24) = 5355LL;
      WdLogEvent5_WdAssertion(v48);
    }
    if ( v76 == v75 )
    {
      v84.VidPnSourceId = *((_DWORD *)NextDisplaySource + 4);
      DisplayModeList = DxgkpGetDisplayModeList(v40, (struct COREADAPTERACCESS *)v85, v74, &v84, v77);
      v5 = DisplayModeList;
      if ( DisplayModeList < 0 )
      {
        if ( DisplayModeList == -1071775483 )
        {
          v53 = WdLogNewEntry5_WdAssertion(v51, v50);
          *(_QWORD *)(v53 + 24) = 5373LL;
          WdLogEvent5_WdAssertion(v53);
        }
LABEL_48:
        v54 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v51, v50);
        v54[3] = v40;
        v54[4] = v84.VidPnSourceId;
        v54[5] = v5;
        WdLogEvent5_WdDmmEvent(v54);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v85, v55);
        v6 = v81;
        goto LABEL_49;
      }
      v5 = (int)CombineModeList((unsigned int)&v82, (unsigned int)&v78, v84.ModeCount, v84.pModeList, 1);
      if ( v77[0] )
        operator delete[](v84.pModeList);
      if ( (int)v5 < 0 )
        goto LABEL_48;
    }
    NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v24, NextDisplaySource);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v85, v52);
    if ( !NextDisplaySource )
    {
      v11 = v82;
      v6 = v81;
      goto LABEL_53;
    }
  }
  v72 = WdLogNewEntry5_WdDmmEvent(v44, v43);
  *(_QWORD *)(v72 + 24) = v40;
  *(_QWORD *)(v72 + 32) = v5;
  WdLogEvent5_WdDmmEvent(v72);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v85, v73);
  return (unsigned int)v5;
}
