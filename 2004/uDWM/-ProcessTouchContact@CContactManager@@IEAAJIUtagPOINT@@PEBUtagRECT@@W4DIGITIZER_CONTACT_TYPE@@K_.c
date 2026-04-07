/*
 * XREFs of ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800A01C4
 * Callers:
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x18009E530 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18009F384 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180035DF0 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180045CF0 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180045F0C (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047DA4 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x1800850D8 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18009CC78 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x18009D248 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z @ 0x18009D584 (-AddMultipleAndSet@-$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x18009D910 (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18009D938 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18009DC58 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ @ 0x18009E1C0 (-IsOKToCleanup@CPressTapVisual@@UEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x1800A0E58 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800A0FDC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x1800A11DC (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x1800A12D4 (-IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A12F4 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x1800A25E0 (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x1800A2614 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800A4414 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x1800A4A18 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800A52F0 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800A5838 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800ADA60 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800ADBEC (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800ADD70 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800AE09C (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x1800B81C0 (-IsHolding@CTouchPressHoldVisual@@QEAA_NXZ.c)
 *     ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x1800B81F0 (-IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ.c)
 */

__int64 __fastcall CContactManager::ProcessTouchContact(
        __int64 a1,
        unsigned int a2,
        struct tagPOINT a3,
        struct tagRECT *a4,
        int a5,
        char a6,
        unsigned __int64 a7)
{
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // r12d
  struct tagPOINT v11; // rbx
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // r14d
  __int64 v16; // rsi
  __int64 v17; // rdi
  CIndirectTouchVisual *v18; // rcx
  struct tagRECT *v19; // r8
  int v20; // r15d
  __int64 v21; // r13
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // r14d
  CContactManager *v25; // rcx
  int v26; // eax
  volatile signed __int32 *v27; // rdx
  CBaseObject *v28; // rcx
  __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // r8d
  CContactManager *v32; // rcx
  int v33; // eax
  volatile signed __int32 *v34; // rdx
  CBaseObject *v35; // rcx
  struct CTouchVisual *v36; // r14
  CDirectTouchVisual *v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rcx
  int Touch; // eax
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // r9d
  CContactManager *v44; // rcx
  CDirectTouchVisual *v45; // rcx
  CTouchDragVisual *v46; // rcx
  struct tagRECT *v47; // rax
  float *v48; // rcx
  CIndirectTouchVisual *v49; // rcx
  CTetherVisual *v50; // rcx
  CTextTetherVisual *v51; // rcx
  __int64 v52; // rcx
  struct CTouchVisual *v53; // r14
  int v54; // r14d
  int v55; // edx
  __int64 v56; // rcx
  __int64 v57; // r8
  char v58; // al
  int started; // eax
  __int64 v60; // rdx
  __int64 v61; // r13
  unsigned int v62; // eax
  unsigned int v63; // r8d
  int v64; // r14d
  CContactManager *v65; // rcx
  int v66; // eax
  volatile signed __int32 *v67; // rdx
  struct CTouchVisual *v68; // r14
  __int64 v69; // r15
  bool v70; // r14
  __int64 v71; // rcx
  __int64 v72; // rax
  unsigned int v73; // edx
  int v74; // r14d
  int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // edx
  volatile signed __int32 *v78; // rdx
  int v79; // eax
  CBaseObject *v80; // rcx
  __int64 v81; // rdx
  unsigned int v82; // eax
  unsigned int v83; // r8d
  int v84; // r14d
  CContactManager *v85; // rcx
  int v86; // eax
  volatile signed __int32 *v87; // rdx
  CBaseObject *v88; // rcx
  __int64 v89; // rdx
  unsigned int v90; // eax
  unsigned int v91; // r8d
  int v92; // r14d
  CContactManager *v93; // rcx
  int v94; // eax
  volatile signed __int32 *v95; // rdx
  CBaseObject *v96; // rcx
  struct CTouchVisual *v97; // r14
  CContactManager *v98; // rcx
  unsigned int v99; // eax
  unsigned int v100; // edx
  int v101; // eax
  CBaseObject *v102; // rcx
  void *v103; // rdx
  struct tagRECT v104; // xmm0
  CContactManager *v105; // rcx
  CContactManager *v106; // rcx
  unsigned int v108; // [rsp+20h] [rbp-E0h]
  char v109; // [rsp+40h] [rbp-C0h]
  __int64 v110; // [rsp+48h] [rbp-B8h] BYREF
  struct tagPOINT v111; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v112; // [rsp+58h] [rbp-A8h]
  struct tagRECT *v113; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v114; // [rsp+68h] [rbp-98h] BYREF
  __int64 v115; // [rsp+70h] [rbp-90h] BYREF
  __int64 v116; // [rsp+78h] [rbp-88h] BYREF
  __int64 v117; // [rsp+80h] [rbp-80h] BYREF
  struct CTouchVisual *v118; // [rsp+88h] [rbp-78h] BYREF
  __int128 v119; // [rsp+90h] [rbp-70h] BYREF
  __int128 v120; // [rsp+A0h] [rbp-60h] BYREF
  struct tagPOINT v121; // [rsp+B0h] [rbp-50h]
  struct tagRECT v122; // [rsp+B8h] [rbp-48h]
  unsigned int v123; // [rsp+C8h] [rbp-38h]
  int v124; // [rsp+CCh] [rbp-34h]
  struct CVisual *v125[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v126; // [rsp+E0h] [rbp-20h]
  __int64 v127; // [rsp+E8h] [rbp-18h]
  __int128 v128; // [rsp+F0h] [rbp-10h]
  __int64 v129; // [rsp+100h] [rbp+0h]
  char v130; // [rsp+108h] [rbp+8h]
  char v131; // [rsp+109h] [rbp+9h]
  int v132; // [rsp+10Ah] [rbp+Ah]
  __int16 v133; // [rsp+10Eh] [rbp+Eh]

  v8 = 0xFFFFFFFFLL;
  v9 = 0;
  v113 = a4;
  v10 = 0;
  v110 = a1;
  v11 = a3;
  v13 = a1;
  v111 = a3;
  v112 = -1;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v14 = *(_QWORD *)(a1 + 56);
    while ( 1 )
    {
      a1 = 112LL * v9;
      if ( *(_DWORD *)(a1 + v14) == a2 )
        break;
      if ( ++v9 >= *(_DWORD *)(v13 + 80) )
      {
        v8 = v112;
        goto LABEL_7;
      }
    }
    v8 = v9;
    v112 = v9;
  }
LABEL_7:
  v15 = a5;
  if ( (a6 & 0x80) == 0 && a5 == 1 )
    v15 = 3;
  if ( (int)v8 < 0 )
  {
    if ( v15 != 2 && (v15 != 1 || (a6 & 0x80) == 0) )
      return v10;
    if ( a6 < 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) == 0 )
        goto LABEL_190;
      v103 = &UdwmIndirectTouchVisual_Received_Info;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) == 0 )
        goto LABEL_190;
      v103 = &UdwmDirectTouchDownAnimation_Start;
    }
    McTemplateU0q_EtwEventWriteTransfer(a1, (__int64)v103, a2);
LABEL_190:
    v104 = *a4;
    v124 = 0;
    v132 = 0;
    v133 = 0;
    v123 = -1;
    v127 = 0LL;
    v126 = 0LL;
    v129 = 0LL;
    LODWORD(v120) = a2;
    DWORD1(v120) = v15 == 2;
    *((struct tagPOINT *)&v120 + 1) = v11;
    v121 = v11;
    *(_OWORD *)v125 = 0LL;
    v130 = 0;
    v122 = v104;
    v128 = 0LL;
    if ( a6 < 0 )
    {
      v131 = 0;
      Touch = CreateTouchVisual<CIndirectTouchVisual>(a7, &v125[1]);
      v10 = Touch;
      if ( Touch < 0 )
      {
        v108 = 1510;
        goto LABEL_59;
      }
      *((_DWORD *)v125[1] + 104) = a2;
      CContactManager::AddToTouchNode(v106, a7, v125[1]);
      if ( v15 == 1 )
        CIndirectTouchVisual::StartHover(v125[1], &v111, v123);
      else
        CIndirectTouchVisual::StartEngage(v125[1], &v111, v123);
    }
    else
    {
      v131 = 1;
      Touch = CreateTouchVisual<CDirectTouchVisual>(a7, v125);
      v10 = Touch;
      if ( Touch < 0 )
      {
        v108 = 1504;
        goto LABEL_59;
      }
      CContactManager::AddToTouchNode(v105, a7, v125[0]);
      CDirectTouchVisual::StartDown(v125[0], &v111, a4, v123);
    }
    DynArray<CTouchContact,0>::AddMultipleAndSet(v110 + 56, &v120);
    return v10;
  }
  v16 = *(_QWORD *)(v13 + 56);
  v17 = 112 * v8;
  if ( v15 == 1 )
  {
    v18 = *(CIndirectTouchVisual **)(v17 + v16 + 56);
    if ( v18 )
    {
      if ( *(_DWORD *)(v17 + v16 + 4) )
      {
        CIndirectTouchVisual::StartHover(v18, &v111, *(unsigned int *)(v17 + v16 + 40));
        v19 = *(struct tagRECT **)(v17 + v16 + 72);
        *(_DWORD *)(v17 + v16 + 4) = 0;
        v20 = -2147024362;
        v21 = v110;
        if ( v19 )
        {
          v113 = v19;
          v22 = *(_DWORD *)(v110 + 176);
          v23 = v22 + 1;
          if ( v22 + 1 >= v22 )
          {
            v24 = 0;
            if ( v23 > *(_DWORD *)(v110 + 172) )
            {
              v26 = DynArrayImpl<0>::AddMultipleAndSet(v110 + 152, 8u, 1, &v113);
              v24 = v26;
              if ( v26 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0xC0u);
            }
            else
            {
              v25 = (CContactManager *)*(unsigned int *)(v110 + 176);
              *(_QWORD *)(*(_QWORD *)(v110 + 152) + 8LL * (_QWORD)v25) = v19;
              *(_DWORD *)(v21 + 176) = v23;
            }
          }
          else
          {
            v24 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          }
          v27 = *(volatile signed __int32 **)(v17 + v16 + 72);
          if ( v24 < 0 )
          {
            CContactManager::StopAndRemoveFromRootNode(v25, (struct CTouchVisual *)v27);
          }
          else
          {
            _InterlockedIncrement(v27 + 2);
            CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v17 + v16 + 72));
          }
          v28 = *(CBaseObject **)(v17 + v16 + 72);
          if ( v28 )
          {
            CBaseObject::Release(v28);
            *(_QWORD *)(v17 + v16 + 72) = 0LL;
          }
        }
        v29 = *(_QWORD *)(v17 + v16 + 80);
        if ( v29 )
        {
          v110 = *(_QWORD *)(v17 + v16 + 80);
          v30 = *(_DWORD *)(v21 + 176);
          v31 = v30 + 1;
          if ( v30 + 1 >= v30 )
          {
            v20 = 0;
            if ( v31 > *(_DWORD *)(v21 + 172) )
            {
              v33 = DynArrayImpl<0>::AddMultipleAndSet(v21 + 152, 8u, 1, &v110);
              v20 = v33;
              if ( v33 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0xC0u);
            }
            else
            {
              v32 = (CContactManager *)*(unsigned int *)(v21 + 176);
              *(_QWORD *)(*(_QWORD *)(v21 + 152) + 8LL * (_QWORD)v32) = v29;
              *(_DWORD *)(v21 + 176) = v31;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          }
          v34 = *(volatile signed __int32 **)(v17 + v16 + 80);
          if ( v20 < 0 )
          {
            CContactManager::StopAndRemoveFromRootNode(v32, (struct CTouchVisual *)v34);
          }
          else
          {
            _InterlockedIncrement(v34 + 2);
            CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v17 + v16 + 80));
          }
          v35 = *(CBaseObject **)(v17 + v16 + 80);
          if ( v35 )
          {
            CBaseObject::Release(v35);
            *(_QWORD *)(v17 + v16 + 80) = 0LL;
          }
        }
      }
      else
      {
        CIndirectTouchVisual::UpdateLocation(v18, &v111);
      }
    }
    return v10;
  }
  if ( v15 != 2 )
  {
    if ( v15 != 3 )
    {
      v10 = -2147024809;
      v108 = 1468;
      v43 = -2147024809;
      goto LABEL_60;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    {
      McTemplateU0q_EtwEventWriteTransfer(a1, (__int64)&UdwmTouchUpReceived_Info, a2);
      v13 = v110;
    }
    CContactManager::CleanupFinishedAnimations((CContactManager *)v13);
    v52 = 2147942934LL;
    if ( *(_BYTE *)(v17 + v16 + 105) )
    {
      v53 = *(struct CTouchVisual **)(v17 + v16 + 48);
      if ( !v53 || (v109 = 1, !CDirectTouchVisual::IsInInitialDelay(*(CDirectTouchVisual **)(v17 + v16 + 48))) )
        v109 = 0;
      CContactManager::StopAndRemoveFromRootNode((CContactManager *)v52, v53);
      if ( v53 )
        CBaseObject::Release(v53);
      v54 = *(_DWORD *)(v17 + v16 + 40);
      if ( !CContactManager::CheckShowContact(v110, v54, 2)
        || !*(_DWORD *)(v17 + v16 + 4)
        || *(_QWORD *)(v17 + v16 + 88) && CContactManager::CheckShowContact(v52, v54, 4)
        || *(_QWORD *)(v17 + v16 + 64)
        || *(_QWORD *)(v17 + v16 + 96)
        || (int)CContactManager::FindStationaryAnimation(v52, a2, 2) >= 0
        || (int)CContactManager::FindStationaryAnimation(v52, v55, 3) >= 0 )
      {
        v61 = v52;
      }
      else
      {
        if ( !CContactManager::CheckShowContact(v52, v54, 1) || v109 )
          v58 = v57;
        else
          v58 = 0;
        started = CContactManager::StartStationaryAnimationWithDelay(v56, a2, v57, &v111, v113, a7, v58);
        v10 = started;
        if ( started < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x54Fu);
          return v10;
        }
        v61 = v110;
      }
    }
    else
    {
      v60 = *(_QWORD *)(v17 + v16 + 56);
      v61 = v110;
      if ( v60 )
      {
        v114 = *(_QWORD *)(v17 + v16 + 56);
        v62 = *(_DWORD *)(v110 + 176);
        v63 = v62 + 1;
        if ( v62 + 1 >= v62 )
        {
          v64 = 0;
          if ( v63 > *(_DWORD *)(v110 + 172) )
          {
            v66 = DynArrayImpl<0>::AddMultipleAndSet(v110 + 152, 8u, 1, &v114);
            v64 = v66;
            if ( v66 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v66, 0xC0u);
          }
          else
          {
            v65 = (CContactManager *)*(unsigned int *)(v110 + 176);
            *(_QWORD *)(*(_QWORD *)(v110 + 152) + 8LL * (_QWORD)v65) = v60;
            *(_DWORD *)(v61 + 176) = v63;
          }
        }
        else
        {
          v64 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        v67 = *(volatile signed __int32 **)(v17 + v16 + 56);
        if ( v64 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v65, (struct CTouchVisual *)v67);
        }
        else
        {
          _InterlockedIncrement(v67 + 2);
          CIndirectTouchVisual::StartIdle(*(_QWORD *)(v17 + v16 + 56), &v111, *(unsigned int *)(v17 + v16 + 40));
        }
        v52 = *(_QWORD *)(v17 + v16 + 56);
        if ( v52 )
          CBaseObject::Release((CBaseObject *)v52);
      }
    }
    v68 = *(struct CTouchVisual **)(v17 + v16 + 88);
    CContactManager::StopAndRemoveFromRootNode((CContactManager *)v52, v68);
    if ( v68 )
      CBaseObject::Release(v68);
    v69 = *(_QWORD *)(v17 + v16 + 64);
    if ( !v69 )
    {
LABEL_142:
      v81 = *(_QWORD *)(v17 + v16 + 72);
      if ( v81 )
      {
        v116 = *(_QWORD *)(v17 + v16 + 72);
        v82 = *(_DWORD *)(v61 + 176);
        v83 = v82 + 1;
        if ( v82 + 1 >= v82 )
        {
          v84 = 0;
          if ( v83 > *(_DWORD *)(v61 + 172) )
          {
            v86 = DynArrayImpl<0>::AddMultipleAndSet(v61 + 152, 8u, 1, &v116);
            v84 = v86;
            if ( v86 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v86, 0xC0u);
          }
          else
          {
            v85 = (CContactManager *)*(unsigned int *)(v61 + 176);
            *(_QWORD *)(*(_QWORD *)(v61 + 152) + 8LL * (_QWORD)v85) = v81;
            *(_DWORD *)(v61 + 176) = v83;
          }
        }
        else
        {
          v84 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        v87 = *(volatile signed __int32 **)(v17 + v16 + 72);
        if ( v84 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v85, (struct CTouchVisual *)v87);
        }
        else
        {
          _InterlockedIncrement(v87 + 2);
          CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v17 + v16 + 72));
        }
        v88 = *(CBaseObject **)(v17 + v16 + 72);
        if ( v88 )
          CBaseObject::Release(v88);
      }
      v89 = *(_QWORD *)(v17 + v16 + 80);
      if ( v89 )
      {
        v117 = *(_QWORD *)(v17 + v16 + 80);
        v90 = *(_DWORD *)(v61 + 176);
        v91 = v90 + 1;
        if ( v90 + 1 >= v90 )
        {
          v92 = 0;
          if ( v91 > *(_DWORD *)(v61 + 172) )
          {
            v94 = DynArrayImpl<0>::AddMultipleAndSet(v61 + 152, 8u, 1, &v117);
            v92 = v94;
            if ( v94 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v94, 0xC0u);
          }
          else
          {
            v93 = (CContactManager *)*(unsigned int *)(v61 + 176);
            *(_QWORD *)(*(_QWORD *)(v61 + 152) + 8LL * (_QWORD)v93) = v89;
            *(_DWORD *)(v61 + 176) = v91;
          }
        }
        else
        {
          v92 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        v95 = *(volatile signed __int32 **)(v17 + v16 + 80);
        if ( v92 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v93, (struct CTouchVisual *)v95);
        }
        else
        {
          _InterlockedIncrement(v95 + 2);
          CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v17 + v16 + 80));
        }
        v96 = *(CBaseObject **)(v17 + v16 + 80);
        if ( v96 )
          CBaseObject::Release(v96);
      }
      v97 = *(struct CTouchVisual **)(v17 + v16 + 96);
      if ( !v97 )
        goto LABEL_179;
      if ( CPressTapVisual::IsOKToCleanup(*(CPressTapVisual **)(v17 + v16 + 96)) )
        goto LABEL_176;
      v118 = v97;
      v99 = *(_DWORD *)(v61 + 176);
      v100 = v99 + 1;
      if ( v99 + 1 < v99 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_175:
        v97 = *(struct CTouchVisual **)(v17 + v16 + 96);
LABEL_176:
        CContactManager::StopAndRemoveFromRootNode(v98, v97);
LABEL_177:
        v102 = *(CBaseObject **)(v17 + v16 + 96);
        if ( v102 )
          CBaseObject::Release(v102);
LABEL_179:
        DynArray<CTouchContact,0>::RemoveAt(v61 + 56, v112);
        return v10;
      }
      if ( v100 > *(_DWORD *)(v61 + 172) )
      {
        v101 = DynArrayImpl<0>::AddMultipleAndSet(v61 + 152, 8u, 1, &v118);
        if ( v101 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v101, 0xC0u);
          goto LABEL_175;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v61 + 152) + 8LL * *(unsigned int *)(v61 + 176)) = v97;
        *(_DWORD *)(v61 + 176) = v100;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + v16 + 96) + 8LL));
      goto LABEL_177;
    }
    v70 = 0;
    if ( CTouchPressHoldVisual::IsHolding(*(CTouchPressHoldVisual **)(v17 + v16 + 64)) )
    {
      LODWORD(v119) = *(_DWORD *)(v17 + v16);
      v72 = *(unsigned int *)(v61 + 304);
      *((_QWORD *)&v119 + 1) = v69;
      v73 = v72 + 1;
      if ( (int)v72 + 1 >= (unsigned int)v72 )
      {
        v74 = 0;
        if ( v73 > *(_DWORD *)(v61 + 300) )
        {
          v75 = DynArrayImpl<0>::AddMultipleAndSet(v61 + 280, 0x10u, 1, &v119);
          v74 = v75;
          if ( v75 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v75, 0xC0u);
        }
        else
        {
          v71 = 2 * v72;
          *(_OWORD *)(*(_QWORD *)(v61 + 280) + 16 * v72) = v119;
          *(_DWORD *)(v61 + 304) = v73;
        }
      }
      else
      {
        v74 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      v70 = v74 >= 0;
      goto LABEL_134;
    }
    if ( *(_DWORD *)(v69 + 296) != 1 && !CTouchPressHoldVisual::IsOKToCleanup((CTouchPressHoldVisual *)v71) )
    {
      v115 = v69;
      v76 = *(_DWORD *)(v61 + 176);
      v77 = v76 + 1;
      if ( v76 + 1 < v76 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        goto LABEL_134;
      }
      if ( v77 <= *(_DWORD *)(v61 + 172) )
      {
        v71 = *(unsigned int *)(v61 + 176);
        *(_QWORD *)(*(_QWORD *)(v61 + 152) + 8 * v71) = v69;
        *(_DWORD *)(v61 + 176) = v77;
LABEL_133:
        v70 = 1;
        goto LABEL_134;
      }
      v79 = DynArrayImpl<0>::AddMultipleAndSet(v61 + 152, 8u, 1, &v115);
      if ( v79 >= 0 )
        goto LABEL_133;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v79, 0xC0u);
    }
LABEL_134:
    v78 = *(volatile signed __int32 **)(v17 + v16 + 64);
    if ( v70 )
      _InterlockedIncrement(v78 + 2);
    else
      CContactManager::StopAndRemoveFromRootNode((CContactManager *)v71, (struct CTouchVisual *)v78);
    v80 = *(CBaseObject **)(v17 + v16 + 64);
    if ( v80 )
      CBaseObject::Release(v80);
    goto LABEL_142;
  }
  if ( *(_BYTE *)(v17 + v16 + 105) )
  {
    if ( *(_BYTE *)(v17 + v16 + 104) )
    {
      v36 = *(struct CTouchVisual **)(v17 + v16 + 88);
      CContactManager::StopAndRemoveFromRootNode((CContactManager *)a1, v36);
      if ( v36 )
        CBaseObject::Release(v36);
      *(_QWORD *)(v17 + v16 + 88) = 0LL;
      v13 = v110;
      *(_BYTE *)(v17 + v16 + 104) = 0;
    }
    if ( !*(_BYTE *)(v13 + 324)
      && !*(_QWORD *)(v17 + v16 + 72)
      && !*(_QWORD *)(v17 + v16 + 80)
      && !*(_QWORD *)(v17 + v16 + 96)
      && !*(_QWORD *)(v17 + v16 + 64) )
    {
      if ( *(_DWORD *)(v17 + v16 + 40) )
      {
        v37 = *(CDirectTouchVisual **)(v17 + v16 + 48);
        if ( !v37 || !CDirectTouchVisual::IsInInitialDelay(v37) )
        {
          v38 = v17 + v16;
          if ( !*(_QWORD *)(v17 + v16 + 88) )
          {
            v39 = (unsigned int)((v11.x - *(_DWORD *)(v17 + v16 + 16)) * (v11.x - *(_DWORD *)(v17 + v16 + 16))
                               + (v111.y - *(_DWORD *)(v17 + v16 + 20)) * (v111.y - *(_DWORD *)(v17 + v16 + 20)));
            if ( (int)v39 > (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 60) * 225.0) )
            {
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
                McTemplateU0q_EtwEventWriteTransfer(v39, (__int64)&UdwmTouchDragVisual_Start, a2);
              Touch = CreateTouchVisual<CTouchDragVisual>(a7, (CTouchDragVisual **)(v38 + 88));
              v10 = Touch;
              if ( Touch < 0 )
              {
                v108 = 1274;
LABEL_59:
                v43 = Touch;
LABEL_60:
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, v108);
                return v10;
              }
              CTouchDragVisual::UpdateShowContact(*(_QWORD *)(v38 + 88), *(unsigned int *)(v17 + v16 + 40), v41, v42);
              Touch = CContactManager::AddToTouchNode(v44, a7, *(struct CVisual **)(v38 + 88));
              v10 = Touch;
              if ( Touch < 0 )
              {
                v108 = 1276;
                goto LABEL_59;
              }
              *(_QWORD *)(*(_QWORD *)(v38 + 88) + 448LL) = v110;
              v45 = *(CDirectTouchVisual **)(v17 + v16 + 48);
              *(_BYTE *)(v17 + v16 + 104) = 0;
              if ( v45 )
                CDirectTouchVisual::FadeOut(v45);
            }
          }
          v46 = *(CTouchDragVisual **)(v38 + 88);
          if ( v46 )
          {
            CTouchDragVisual::NotifyTouchDrag(v46, &v111);
            v11 = v111;
          }
        }
      }
    }
  }
  v47 = v113;
  v48 = *(float **)(v17 + v16 + 48);
  *(struct tagPOINT *)(v17 + v16 + 8) = v11;
  *(struct tagRECT *)(v17 + v16 + 24) = *v47;
  if ( v48 )
    CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)v48, &v111, v47, v48[87]);
  v49 = *(CIndirectTouchVisual **)(v17 + v16 + 56);
  if ( v49 )
  {
    if ( *(_DWORD *)(v17 + v16 + 4) == 1 )
    {
      CIndirectTouchVisual::UpdateLocation(v49, &v111);
    }
    else
    {
      CIndirectTouchVisual::StartEngage(v49, &v111, *(unsigned int *)(v17 + v16 + 40));
      *(_DWORD *)(v17 + v16 + 4) = 1;
    }
  }
  v50 = *(CTetherVisual **)(v17 + v16 + 72);
  if ( v50 )
    CTetherVisual::UpdatePosition(v50, 0LL, &v111);
  v51 = *(CTextTetherVisual **)(v17 + v16 + 80);
  if ( v51 )
    CTextTetherVisual::SetContactPosition(v51, &v111, (const struct tagRECT *)(v17 + v16 + 24));
  return 0;
}
