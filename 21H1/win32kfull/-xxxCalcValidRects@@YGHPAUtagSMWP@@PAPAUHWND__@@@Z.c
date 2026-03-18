/*
 * XREFs of ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A
 * Callers:
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 * Callees:
 *     ?SetTopmostEnum@@YGXPAUtagWND@@HH@Z @ 0x176E4 (-SetTopmostEnum@@YGXPAUtagWND@@HH@Z.c)
 *     ?FindValidWindowPos@@YGPAUtagWINDOWPOS@@PAUtagSMWP@@@Z @ 0x327CC (-FindValidWindowPos@@YGPAUtagWINDOWPOS@@PAUtagSMWP@@@Z.c)
 *     ?CheckTopmost@@YGHPAUtagWINDOWPOS@@@Z @ 0x32CDC (-CheckTopmost@@YGHPAUtagWINDOWPOS@@@Z.c)
 *     _GetMonitorRectForDpiContext@8 @ 0x3356A (_GetMonitorRectForDpiContext@8.c)
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YGHPAUtagWND@@@Z @ 0x388D6 (-IsChildWindowCoordinateSpaceBoundary@@YGHPAUtagWND@@@Z.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?IsStillWindowC@@YGHPAUHWND__@@@Z @ 0x3D284 (-IsStillWindowC@@YGHPAUHWND__@@@Z.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 *     ?ValidateZorder@@YGHPAUtagCVR@@@Z @ 0x93140 (-ValidateZorder@@YGHPAUtagCVR@@@Z.c)
 *     _LogicalToPhysicalInPlaceRectWithSubpixel@12 @ 0x9B5AE (_LogicalToPhysicalInPlaceRectWithSubpixel@12.c)
 *     _PhysicalToLogicalInPlaceRectWithSubpixel@12 @ 0x9B600 (_PhysicalToLogicalInPlaceRectWithSubpixel@12.c)
 *     _IsWindowBroadcastingDpiToChildrenX@4 @ 0x9B752 (_IsWindowBroadcastingDpiToChildrenX@4.c)
 *     __FChildVisible@4 @ 0x9DDDE (__FChildVisible@4.c)
 *     ?GetWindowCoordinateSpaceDpi@@YGGPAUtagWND@@@Z @ 0xA3A82 (-GetWindowCoordinateSpaceDpi@@YGGPAUtagWND@@@Z.c)
 *     _GetAppCompatFlags@4 @ 0xA6D98 (_GetAppCompatFlags@4.c)
 *     ?CuratedWindowHidden@NotifyShell@@YGXPAUtagWND@@@Z @ 0xAC8F6 (-CuratedWindowHidden@NotifyShell@@YGXPAUtagWND@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z @ 0x13F619 (-ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z.c)
 *     ??9?$RedirectedFieldleft@J@RedirectedRecttagMONITORrcMonitorReal@tagMONITOR@@QBEEABJ@Z @ 0x14FA99 (--9-$RedirectedFieldleft@J@RedirectedRecttagMONITORrcMonitorReal@tagMONITOR@@QBEEABJ@Z.c)
 *     ??9?$RedirectedFieldtop@J@RedirectedRecttagMONITORrcMonitorReal@tagMONITOR@@QBEEABJ@Z @ 0x14FAB0 (--9-$RedirectedFieldtop@J@RedirectedRecttagMONITORrcMonitorReal@tagMONITOR@@QBEEABJ@Z.c)
 *     _xxxAppAdjustDpiCandidateRect@16 @ 0x151E6B (_xxxAppAdjustDpiCandidateRect@16.c)
 */

int __fastcall xxxCalcValidRects(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  struct tagWINDOWPOS *ValidWindowPos; // eax
  int result; // eax
  PKTHREAD CurrentThread; // edi
  int *ThreadWin32Thread; // eax
  void (*v8)(void); // ecx
  unsigned int *v9; // ebx
  unsigned int v10; // eax
  _DWORD *v11; // edi
  int v12; // esi
  int *v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  __int16 v20; // si
  int v21; // eax
  int *v22; // esi
  _DWORD *v23; // esi
  unsigned __int16 WindowCoordinateSpaceDpi; // ax
  ULONG_PTR v25; // edi
  int v26; // eax
  INT *MonitorRectForDpiContext; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // edi
  unsigned int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // edi
  int v35; // ecx
  _DWORD *v36; // eax
  int v37; // edi
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int *v43; // edi
  bool v44; // zf
  int v45; // edx
  int v46; // eax
  int v47; // edi
  unsigned int v48; // ecx
  int v49; // edi
  int v50; // eax
  int v51; // ecx
  int v52; // edx
  int v53; // eax
  struct tagMONITOR *v54; // edi
  LONG v55; // ecx
  LONG v56; // edx
  LONG v57; // eax
  struct tagMONITOR *NewMonitor; // eax
  int v59; // edx
  unsigned int v60; // ecx
  int v61; // eax
  __int16 v62; // dx
  int v63; // eax
  int v64; // edi
  int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // ecx
  unsigned int v68; // edx
  int v69; // edi
  int v70; // edi
  unsigned int v71; // edi
  int v72; // ecx
  unsigned int v73; // edx
  unsigned int v74; // eax
  int v75; // edi
  int DesktopWindow; // eax
  unsigned int v77; // eax
  int v78; // edx
  int v79; // edi
  int v80; // esi
  int v81; // eax
  _DWORD *v82; // ecx
  int v83; // eax
  int v84; // ecx
  unsigned int v85; // ecx
  void (*v86)(void); // ebx
  NotifyShell *v87; // [esp+0h] [ebp-128h]
  struct tagWND *v88; // [esp+0h] [ebp-128h]
  struct tagWND *v89; // [esp+4h] [ebp-124h]
  INT v90[5]; // [esp+10h] [ebp-118h] BYREF
  _BYTE v91[28]; // [esp+24h] [ebp-104h] BYREF
  INT v92; // [esp+40h] [ebp-E8h] BYREF
  _DWORD v93[3]; // [esp+44h] [ebp-E4h] BYREF
  int v94; // [esp+50h] [ebp-D8h] BYREF
  _DWORD *v95; // [esp+54h] [ebp-D4h]
  int v96; // [esp+58h] [ebp-D0h]
  _DWORD v97[3]; // [esp+5Ch] [ebp-CCh] BYREF
  struct tagRECT v98; // [esp+68h] [ebp-C0h] BYREF
  int v99; // [esp+78h] [ebp-B0h] BYREF
  unsigned int v100; // [esp+7Ch] [ebp-ACh]
  int v101; // [esp+80h] [ebp-A8h]
  int v102; // [esp+84h] [ebp-A4h]
  _DWORD *v103; // [esp+88h] [ebp-A0h]
  int v104; // [esp+8Ch] [ebp-9Ch]
  int (__stdcall *v105)(unsigned int); // [esp+90h] [ebp-98h]
  int (__stdcall *v106)(_DWORD); // [esp+94h] [ebp-94h]
  void (__stdcall *v107)(_DWORD *); // [esp+98h] [ebp-90h]
  int (__stdcall *v108)(int); // [esp+9Ch] [ebp-8Ch]
  int (*v109)(void); // [esp+A0h] [ebp-88h]
  int v110; // [esp+A4h] [ebp-84h]
  int v111; // [esp+A8h] [ebp-80h]
  int v112; // [esp+ACh] [ebp-7Ch]
  int v113; // [esp+B0h] [ebp-78h]
  int v114; // [esp+B4h] [ebp-74h]
  int v115; // [esp+B8h] [ebp-70h]
  int v116; // [esp+BCh] [ebp-6Ch]
  int v117; // [esp+C0h] [ebp-68h]
  void (*v118)(void); // [esp+C4h] [ebp-64h]
  unsigned int v119; // [esp+C8h] [ebp-60h]
  int v120; // [esp+CCh] [ebp-5Ch]
  int v121; // [esp+D0h] [ebp-58h]
  unsigned int v122; // [esp+D4h] [ebp-54h]
  char v123; // [esp+DBh] [ebp-4Dh]
  int v124; // [esp+DCh] [ebp-4Ch]
  ULONG_PTR BugCheckParameter2; // [esp+E0h] [ebp-48h]
  int v126; // [esp+E4h] [ebp-44h]
  int v127; // [esp+E8h] [ebp-40h]
  int v128; // [esp+ECh] [ebp-3Ch] BYREF
  int v129[13]; // [esp+F0h] [ebp-38h] BYREF

  v2 = 0;
  v103 = a2;
  v111 = 0;
  v113 = (int)a1;
  memset(v129, 0, sizeof(v129));
  v97[2] = 0;
  v110 = 0;
  v94 = 0;
  v115 = 0;
  v95 = 0;
  v96 = 0;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0;
  v124 = *(_DWORD *)(_HMObjectFromHandle(*(_DWORD *)ValidWindowPos) + 56);
  v109 = (int (*)(void))KeGetCurrentThread;
  CurrentThread = KeGetCurrentThread();
  v108 = PsGetThreadWin32Thread;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  v97[0] = *(_DWORD *)(v2 + 228);
  *(_DWORD *)(v2 + 228) = v97;
  v97[1] = v124;
  v107 = (void (__stdcall *)(_DWORD *))HMLockObject;
  if ( v124 )
    HMLockObject(v124);
  v8 = (void (*)(void))ThreadUnlock1;
  v9 = (unsigned int *)a1[6];
  v112 = 1;
  v118 = (void (*)(void))ThreadUnlock1;
  v113 = *(_DWORD *)(v113 + 16) - 1;
  if ( v113 >= 0 )
  {
    v105 = ValidateHmonitor;
    v106 = ValidateHmonitorNoRip;
    while ( 1 )
    {
      v10 = *v9;
      v117 = v10;
      if ( v10 )
        break;
LABEL_180:
      v9 += 32;
      if ( --v113 < 0 )
      {
        v8 = v118;
        goto LABEL_182;
      }
    }
    v11 = (_DWORD *)HMValidateHandleNoSecure(v10, 1);
    BugCheckParameter2 = (ULONG_PTR)v11;
    if ( !v11 || !IsStillWindowC((HWND)v87) )
    {
      *v9 = 0;
      v9[6] = 6159;
      goto LABEL_180;
    }
    v128 = v109();
    v12 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      v13 = (int *)v108(v128);
      if ( v13 )
        v12 = *v13;
    }
    v94 = *(_DWORD *)(v12 + 228);
    *(_DWORD *)(v12 + 228) = &v94;
    v95 = v11;
    v107(v11);
    v120 = 0;
    if ( !v111 && (v9[6] & 0x10) == 0 )
      v111 = *v11;
    v14 = v9[6];
    if ( (v14 & 0x400) == 0 )
    {
      v119 = v9[1];
      v121 = v14 & 4;
      v15 = v14 & 0x750000;
      v16 = v14 & 0x40;
      v127 = v15;
      if ( (((unsigned int)&loc_3FFFD + 3) & *(_DWORD *)(_gptiCurrent + 688)) == 0 || _gptiCurrent == v11[2] )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((ULONG_PTR)v11, 0, (int)v9, 0, 0, 0, 1, 0);
      }
      else if ( *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 288) != 1 )
      {
        v128 = 0;
        xxxSendTransformableMessageTimeout((ULONG_PTR)v11, 0, (int)v9, 2u, 50, (int)&v128, 1, 0);
      }
      v17 = v127 | v9[6];
      v9[6] = v17;
      LOBYTE(v18) = v17;
      if ( v16 && (v17 & 0x40) == 0 )
      {
        NotifyShell::CuratedWindowHidden(v87, v89);
        v18 = v9[6];
      }
      v19 = v9[30];
      if ( (v19 & 0x20) == 0 && (v18 & 3) != 3 )
      {
        v9[24] = *(_DWORD *)(v11[5] + 164);
        v9[30] = v19 | 0x20;
      }
      *v9 = v117;
      if ( (v18 & 4) == 0 )
      {
        v20 = v119;
        if ( v121 || *((_WORD *)v9 + 2) != (_WORD)v119 )
        {
          if ( !IsStillWindowC((HWND)v87) )
            goto LABEL_183;
          if ( *((_WORD *)v9 + 2) != v20 || v9[1] >= 0xFFFFFFFE )
          {
            v21 = CheckTopmost(v9);
            if ( v21 )
            {
              if ( *(_DWORD *)(v11[5] + 148) == 1 )
                SetTopmostEnum(v21 == 1, (struct tagWND *)((v9[6] >> 9) & 1), (int)v87, (int)v89);
            }
          }
        }
      }
    }
    v22 = (int *)(*(_DWORD *)(v124 + 20) + 68);
    v99 = *v22++;
    v100 = *v22++;
    v101 = *v22;
    v102 = v22[1];
    v23 = (_DWORD *)BugCheckParameter2;
    if ( IsChildWindowCoordinateSpaceBoundary((_DWORD *)BugCheckParameter2) )
    {
      WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(v87);
      v25 = BugCheckParameter2;
      if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(v88) )
      {
LABEL_45:
        LogicalToPhysicalInPlaceRectWithSubpixel(v124, &v99, 0);
        v23 = (_DWORD *)BugCheckParameter2;
        PhysicalToLogicalInPlaceRectWithSubpixel(BugCheckParameter2, &v99, 0);
        goto LABEL_47;
      }
      v23 = (_DWORD *)v25;
      v26 = v106(*(_DWORD *)(*(_DWORD *)(v25 + 20) + 164));
      v128 = v26;
      if ( v26 )
      {
        MonitorRectForDpiContext = GetMonitorRectForDpiContext(v26, *(_DWORD *)(*(_DWORD *)(v25 + 20) + 184), v90);
        v92 = *MonitorRectForDpiContext;
        v93[0] = MonitorRectForDpiContext[1];
        v93[1] = MonitorRectForDpiContext[2];
        v93[2] = MonitorRectForDpiContext[3];
        if ( !(unsigned __int8)tagMONITOR::RedirectedRecttagMONITORrcMonitorReal::RedirectedFieldleft<long>::operator!=(&v92)
          && !(unsigned __int8)tagMONITOR::RedirectedRecttagMONITORrcMonitorReal::RedirectedFieldtop<long>::operator!=(v93) )
        {
          v23 = (_DWORD *)BugCheckParameter2;
          goto LABEL_47;
        }
        goto LABEL_45;
      }
    }
LABEL_47:
    v28 = v23[5];
    v29 = 0;
    v30 = *(_DWORD *)(v28 + 52);
    v31 = *(_DWORD *)(v28 + 56);
    v122 = v31;
    v9[17] = v30;
    v9[18] = v31;
    v32 = v23[3];
    v114 = v30;
    v126 = v30;
    if ( v32 )
    {
      v33 = *(_DWORD *)(v32 + 4);
      if ( v33 )
        v29 = *(_DWORD *)(v33 + 12);
    }
    v128 = v101;
    v119 = v100;
    v121 = v99;
    if ( v124 != v29 )
    {
      v122 -= v100;
      v34 = v30 - v99;
      v114 = v34;
      if ( (*(_BYTE *)(*(_DWORD *)(v124 + 20) + 18) & 0x40) != 0
        && (v35 = v23[5], (*(_BYTE *)(v35 + 23) & 0xC0) == 0x40) )
      {
        v115 = 1;
        v126 = v101 - *(_DWORD *)(v35 + 60);
      }
      else
      {
        v115 = 0;
        v126 = v34;
      }
    }
    v36 = (_DWORD *)v23[5];
    v37 = v9[6] | 0x1800;
    v38 = v37;
    v117 = v36[15] - v36[13];
    v39 = v36[16] - v36[14];
    v9[6] = v37;
    v40 = v23[5];
    v127 = v39;
    v41 = v37;
    if ( (*(_BYTE *)(v40 + 145) & 3) != 0 && (v37 & 0x100000) != 0 )
    {
      ExtendArrangedRectangleByFrameMargin(v87, v89);
      v38 = v9[6];
      v41 = v38;
    }
    v42 = v126;
    v43 = (int *)(v9 + 2);
    if ( (v38 & 2) != 0 )
    {
      v9[30] |= 0x100u;
      *v43 = v42;
      v9[3] = v122;
    }
    else
    {
      if ( *v43 == v126 && v9[3] == v122 )
      {
        v44 = v115 == 0;
        v9[6] = v38 | 2;
        if ( !v44 )
          v110 = 1;
      }
      if ( (*(_BYTE *)(v23[5] + 23) & 0x20) != 0 && IsTrayWindow(v23) )
      {
        *v43 = -32000;
        v9[3] = -32000;
      }
      v38 = v9[6];
      v41 = v38;
    }
    if ( (v38 & 1) != 0 )
    {
      v45 = v117;
      v47 = v127;
      v9[4] = v117;
      v9[5] = v47;
      goto LABEL_82;
    }
    if ( (*(_BYTE *)(v23[5] + 23) & 0x20) != 0 )
    {
      if ( _GetProp(1) )
      {
        v45 = *(_DWORD *)(_gpsi + 1724);
        v9[4] = v45;
        v41 = v9[6];
        v46 = *(_DWORD *)(_gpsi + 1728);
        v9[5] = v46;
LABEL_77:
        if ( v45 == v117 && v46 == v127 )
        {
          v41 = v9[6] | 1;
          v9[6] = v41;
          if ( (*(_BYTE *)(v23[5] + 13) & 1) == 0 )
            v120 = 1;
        }
LABEL_82:
        if ( v115 )
          v9[2] = v128 - v9[2] - v45 - v121;
        if ( (*(_BYTE *)(v23[5] + 23) & 0x10) != 0 )
        {
          v48 = v41 & 0xFFFFFFBF;
        }
        else
        {
          v48 = v41 & 0xFFFFFF7F;
          v126 = v48;
          v9[6] = v48;
          if ( (v48 & 0x40) != 0 )
            goto LABEL_89;
          v48 |= 8u;
        }
        v9[6] = v48;
        v126 = v48;
LABEL_89:
        v49 = v23[5];
        v50 = v48;
        if ( (*(_BYTE *)(v49 + 19) & 2) == 0 )
        {
          v128 = v48;
          if ( GetStyleWindow((int)v23, 2818) )
          {
            v50 = v126 | 0x100;
            v9[6] = v126 | 0x100;
            v49 = v23[5];
          }
          else
          {
            v50 = v128;
          }
        }
        if ( (*(_BYTE *)(v49 + 12) & 0x20) != 0 )
        {
          v50 &= ~4u;
          v9[1] = 1;
          v9[6] = v50;
        }
        if ( v112 )
        {
          if ( (v50 & 4) == 0 )
          {
            v112 = 0;
            if ( (*(_BYTE *)(v23[5] + 11) & 4) == 0 )
            {
              if ( ValidateZorder(v87) )
              {
                v9[6] |= 4u;
                v112 = 1;
              }
            }
          }
        }
        v51 = v9[6];
        LOBYTE(v52) = v51;
        v128 = v51;
        if ( (v51 & 8) == 0 )
        {
          if ( (v51 & 0x18E7) == 0x1807 )
          {
LABEL_104:
            LOBYTE(v52) = v51 | 8;
            v9[6] = v51 | 8;
            goto LABEL_105;
          }
          if ( !_FChildVisible(v23) )
          {
            v51 = v52;
            goto LABEL_104;
          }
        }
LABEL_105:
        if ( (v52 & 2) == 0
          && (*(_BYTE *)(v23[5] + 13) & 1) == 0
          && ((unsigned int)&loc_20000 & GetAppCompatFlags(0)) != 0 )
        {
          v120 = 1;
        }
        if ( (v9[30] & 0x20) != 0 && IsWindowBroadcastingDpiToChildrenX(v23) )
        {
          v53 = v105(v9[24]);
          v54 = (struct tagMONITOR *)v53;
          v127 = v53 ? *(unsigned __int16 *)(*(_DWORD *)(v53 + 20) + 52) : 0;
          v55 = v9[2];
          v56 = v9[3];
          v98.right = v55 + v9[4];
          v57 = v56 + v9[5];
          v98.left = v55;
          v98.top = v56;
          v98.bottom = v57;
          NewMonitor = GetNewMonitor((int)v23, &v98, 0);
          if ( NewMonitor )
          {
            if ( v54 != NewMonitor )
            {
              v59 = *(unsigned __int16 *)(*((_DWORD *)NewMonitor + 5) + 52);
              if ( (_WORD)v127 != (_WORD)v59 )
                v9[30] ^= (v9[30] ^ (xxxAppAdjustDpiCandidateRect(v23, v59, &v98, v9 + 25) << 7)) & 0x80;
            }
          }
        }
        v60 = v9[6];
        if ( (v60 & 0x21) == 1 && !v120 )
          goto LABEL_142;
        v9[30] |= 4u;
        memset(v91, 0, sizeof(v91));
        v61 = v23[5];
        if ( (*(_BYTE *)(v61 + 23) & 0x40) == 0 && *(char *)(v61 + 16) >= 0 )
          xxxCheckFullScreen(v23, v9 + 2);
        qmemcpy(v91, v9, sizeof(v91));
        v23 = (_DWORD *)BugCheckParameter2;
        v129[12] = (int)v91;
        v129[0] = v9[2];
        v129[2] = v129[0] + v9[4];
        v129[1] = v9[3];
        v129[3] = v129[1] + v9[5];
        GetRect(66);
        GetRect(65);
        v104 = v129[8];
        v127 = v129[10] - v129[8];
        v116 = v129[9];
        v120 = v129[11] - v129[9];
        _InterlockedIncrement(&glSendMessage);
        v126 = xxxSendTransformableMessageTimeout((ULONG_PTR)v23, 1u, (int)v129, 0, 0, 0, 1, 0);
        if ( !IsStillWindowC((HWND)v87) )
        {
LABEL_183:
          v86 = v118;
          v118();
          v86();
          return 0;
        }
        v62 = v126;
        if ( v126 < 16 || v126 > 1024 )
        {
          v129[4] = v129[0];
          v62 = 48;
          v126 = 48;
          v129[5] = v129[1];
          v129[6] = v129[2];
          v129[7] = v129[3];
          v23 = (_DWORD *)BugCheckParameter2;
        }
        if ( (*(_BYTE *)(v23[5] + 18) & 0x40) != 0 )
          v63 = v129[6] - v129[10];
        else
          v63 = v129[4] - v129[8];
        v9[15] = v63;
        v9[16] = v129[5] - v129[9];
        v9[7] = v129[0];
        v9[8] = v129[1];
        v64 = v129[2] - v129[0];
        v9[9] = v129[2] - v129[0];
        v65 = v129[3] - v129[1];
        v9[10] = v129[3] - v129[1];
        v128 = v65;
        if ( v104 != v129[0] || v116 != v129[1] )
          v9[6] &= ~0x1000u;
        v60 = v9[6];
        v66 = v60;
        if ( v127 != v64 || (v62 = v126, v120 != v128) )
        {
          LOWORD(v60) = v60 & 0xF7FF;
          v9[6] = v66 & 0xFFFFF7FF;
        }
        if ( (v60 & 0x100) == 0 && !v110 )
        {
          v116 = v23[5];
          if ( (*(_BYTE *)(v116 + 16) & 0x20) == 0 )
          {
            if ( (v60 & 0x821) == 0x801 && v9[15] == v9[2] - v114 && v9[16] == v9[3] - v122 )
            {
LABEL_142:
              if ( (v60 & 0x100) != 0 )
              {
                v9[11] = 0;
                v9[12] = 0;
                v9[13] = 0;
                v9[14] = 0;
                v67 = v9[2];
              }
              else
              {
                v67 = v9[2];
                v68 = v9[3];
                v127 = 0;
                v9[11] = v67;
                v9[12] = v68;
                v69 = v23[3];
                if ( v69 )
                {
                  v70 = *(_DWORD *)(v69 + 4);
                  if ( v70 )
                    v127 = *(_DWORD *)(v70 + 12);
                }
                v71 = v67;
                v23 = (_DWORD *)BugCheckParameter2;
                if ( v124 != v127 )
                {
                  v71 = v67 + v121;
                  v68 += v119;
                  v9[11] = v67 + v121;
                  v9[12] = v68;
                }
                v9[13] = v71 + v9[4];
                v9[14] = v68 + v9[5];
              }
              if ( (*(_BYTE *)(v23[5] + 18) & 0x40) != 0 )
                v72 = v9[4] + v67 - v117 - v114;
              else
                v72 = v67 - v114;
              v9[15] = v72;
              v73 = v9[3] - v122;
              v74 = v9[6];
              v9[16] = v73;
              if ( (v74 & 2) == 0 )
              {
                v9[6] = v74 & 0xFFFFEFFF;
                v75 = v72 + *(_DWORD *)(v23[5] + 68);
                v9[7] = v75;
                v116 = v73 + *(_DWORD *)(v23[5] + 72);
                v9[8] = v116;
                DesktopWindow = _GetDesktopWindow(v23);
                if ( v124 != DesktopWindow )
                {
                  v77 = v116 - v119;
                  v9[7] = v75 - v121;
                  v9[8] = v77;
                }
                v9[9] = *(_DWORD *)(v23[5] + 76) - *(_DWORD *)(v23[5] + 68);
                v9[10] = *(_DWORD *)(v23[5] + 80) - *(_DWORD *)(v23[5] + 72);
              }
              goto LABEL_178;
            }
            if ( (v127 == v64 || (v62 & 0x100) == 0 && (*(_BYTE *)(*(_DWORD *)(v23[19] + 4) + 8) & 2) == 0)
              && (v120 == v128 || (v62 & 0x200) == 0 && (*(_BYTE *)(*(_DWORD *)(v23[19] + 4) + 8) & 1) == 0) )
            {
              v78 = v129[10] - v129[8];
              v79 = v129[4];
              v80 = v129[6] - v129[4];
              v128 = v129[11] - v129[9];
              v127 = v129[7] - v129[5];
              v44 = (*(_BYTE *)(v116 + 18) & 0x40) == 0;
              v123 = *(_BYTE *)(v116 + 18) & 0x40;
              if ( !v44 != (((unsigned int)v126 >> 7) & 1) )
              {
                if ( v123 && v78 > v80 )
                  v81 = v78 - v80;
                else
                  v81 = v80 - v78;
                v79 = v81 + v129[4];
                v129[4] += v81;
              }
              if ( (v126 & 0x40) != 0 )
                v129[5] += v127 - v128;
              if ( v78 < v80 )
                v129[6] = v79 + v78;
              if ( v128 < v127 )
                v129[7] = v128 + v129[5];
              v82 = (_DWORD *)BugCheckParameter2;
              v9[11] = v129[4];
              v9[12] = v129[5];
              v9[13] = v129[6];
              v9[14] = v129[7];
              v83 = _GetDesktopWindow(v82);
              if ( v124 != v83 )
              {
                v84 = v121;
                v9[11] += v121;
                v9[13] += v84;
                v85 = v119;
                v9[14] += v119;
                v9[12] += v85;
              }
              goto LABEL_178;
            }
          }
        }
        v9[11] = 0;
        v9[12] = 0;
        v9[13] = 0;
        v9[14] = 0;
LABEL_178:
        v118();
        goto LABEL_180;
      }
      v41 = v9[6];
    }
    v45 = v9[4];
    if ( v45 < 0 )
    {
      v9[4] = 0;
      v45 = 0;
    }
    v46 = v9[5];
    if ( v46 < 0 )
    {
      v9[5] = 0;
      v46 = 0;
    }
    goto LABEL_77;
  }
LABEL_182:
  v8();
  result = 1;
  *v103 = v111;
  return result;
}
