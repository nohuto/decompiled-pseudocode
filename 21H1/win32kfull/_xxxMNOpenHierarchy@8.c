/*
 * XREFs of _xxxMNOpenHierarchy@8 @ 0x199664
 * Callers:
 *     _xxxMNButtonDown@16 @ 0x1979D7 (_xxxMNButtonDown@16.c)
 *     _xxxMNButtonUp@16 @ 0x197A96 (_xxxMNButtonUp@16.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxMNKeyFilter@12 @ 0x1ACE4B (_xxxMNKeyFilter@12.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ @ 0x411E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     ?xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z @ 0x7D436 (-xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _xxxPlayEventSound@4 @ 0xA95E6 (_xxxPlayEventSound@4.c)
 *     _xxxEnableChildWindowDpiMessageX@8 @ 0xA9806 (_xxxEnableChildWindowDpiMessageX@8.c)
 *     _MNMarkDelayedFreePopup@8 @ 0x1846F6 (_MNMarkDelayedFreePopup@8.c)
 *     _xxxUserModeCallback@20 @ 0x1950A7 (_xxxUserModeCallback@20.c)
 *     ?MNGetPopupBoundsRect@@YGXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z @ 0x19685B (-MNGetPopupBoundsRect@@YGXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMONITOR@@@Z @ 0x196F8F (-xxxMNPositionHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMON.c)
 *     _LockPopupMenu@12 @ 0x197533 (_LockPopupMenu@12.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YG_NXZ @ 0x1A159A (-GetMenuRightAlignHint@MenuHelpers@@YG_NXZ.c)
 *     _MNClearCachedPopupSizes@4 @ 0x1AB7D1 (_MNClearCachedPopupSizes@4.c)
 *     _MNRefreshUAHCachedSizes@4 @ 0x1AB841 (_MNRefreshUAHCachedSizes@4.c)
 */

int __fastcall xxxMNOpenHierarchy(int **a1, int a2)
{
  int Window; // esi
  int *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int *v11; // eax
  _DWORD *v12; // ecx
  const void *v13; // edi
  int v14; // edx
  PKTHREAD v15; // eax
  int v16; // eax
  int v17; // esi
  PKTHREAD v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edi
  int CurrentProcessWin32Process; // eax
  char v23; // si
  int *v24; // eax
  int v25; // edi
  int v26; // edx
  int v27; // ecx
  int *v28; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // edx
  MenuHelpers *v32; // ecx
  _DWORD *v33; // ecx
  int v34; // eax
  PKTHREAD v35; // eax
  int v36; // eax
  unsigned int v37; // edx
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // edi
  int v44; // edx
  _DWORD *v45; // eax
  int v46; // eax
  int v47; // edx
  _DWORD *v48; // edi
  int v49; // eax
  int v50; // edx
  int *v51; // eax
  int v52; // edx
  int v53; // esi
  int v54; // edi
  bool MenuRightAlignHint; // al
  unsigned int *v56; // ecx
  unsigned int v57; // eax
  int *v58; // eax
  int v59; // ecx
  int v60; // esi
  PKTHREAD v61; // eax
  int v62; // eax
  int v63; // edi
  int v64; // esi
  PKTHREAD v65; // eax
  int v66; // eax
  struct tagWND *v68; // [esp-20h] [ebp-138h] BYREF
  int v69; // [esp-1Ch] [ebp-134h]
  MenuHelpers *v70; // [esp-18h] [ebp-130h]
  int v71; // [esp-14h] [ebp-12Ch]
  int v72; // [esp-10h] [ebp-128h]
  int v73; // [esp-Ch] [ebp-124h]
  int v74; // [esp-8h] [ebp-120h]
  int v75; // [esp-4h] [ebp-11Ch]
  int v76[19]; // [esp+10h] [ebp-108h] BYREF
  int v77[2]; // [esp+64h] [ebp-B4h] BYREF
  int v78; // [esp+6Ch] [ebp-ACh]
  int v79; // [esp+70h] [ebp-A8h]
  int v80; // [esp+74h] [ebp-A4h] BYREF
  int v81; // [esp+78h] [ebp-A0h]
  int v82; // [esp+7Ch] [ebp-9Ch]
  _DWORD v83[3]; // [esp+80h] [ebp-98h] BYREF
  _DWORD v84[3]; // [esp+8Ch] [ebp-8Ch] BYREF
  int v85; // [esp+98h] [ebp-80h] BYREF
  int *v86; // [esp+9Ch] [ebp-7Ch]
  int v87; // [esp+A0h] [ebp-78h]
  int v88[4]; // [esp+A4h] [ebp-74h] BYREF
  int **v89[2]; // [esp+B4h] [ebp-64h] BYREF
  int v90[2]; // [esp+BCh] [ebp-5Ch] BYREF
  int v91; // [esp+C4h] [ebp-54h]
  int v92; // [esp+C8h] [ebp-50h]
  int v93; // [esp+CCh] [ebp-4Ch]
  _DWORD v94[3]; // [esp+D0h] [ebp-48h] BYREF
  unsigned int v95; // [esp+DCh] [ebp-3Ch]
  struct tagMONITOR *v96; // [esp+E0h] [ebp-38h] BYREF
  _DWORD *v97; // [esp+E4h] [ebp-34h]
  int *v98; // [esp+E8h] [ebp-30h] BYREF
  int v99; // [esp+ECh] [ebp-2Ch]
  int v100; // [esp+F0h] [ebp-28h] BYREF
  int v101; // [esp+F4h] [ebp-24h] BYREF
  int v102; // [esp+F8h] [ebp-20h]
  int v103; // [esp+FCh] [ebp-1Ch]
  int v104; // [esp+100h] [ebp-18h]
  int v105; // [esp+104h] [ebp-14h] BYREF
  int **v106; // [esp+108h] [ebp-10h]
  int v107; // [esp+10Ch] [ebp-Ch]
  int *v108[2]; // [esp+110h] [ebp-8h] BYREF

  v104 = a2;
  Window = 0;
  v107 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v108, 0);
  v105 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v4 = *a1;
  v99 = 0;
  v95 = 0;
  v96 = 0;
  v5 = *v4;
  v93 = 0;
  v106 = 0;
  if ( *(_DWORD *)(v5 + 40) != -1 && *(_DWORD *)(**a1 + 40) < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 20) + 20) + 24) )
  {
    if ( (*(_BYTE *)**a1 & 0x20) != 0 )
    {
      if ( (*(_DWORD *)**a1 & 0x4000) == 0 )
        goto LABEL_108;
      xxxMNCloseHierarchy(**a1, v104);
    }
    if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
    {
      FindTimer(*(_DWORD *)(**a1 + 8), 65534, 0, 1, 0);
      *(_DWORD *)**a1 &= ~0x2000u;
    }
    v6 = MNGetpItemFromIndex(*(_DWORD *)(**a1 + 20), *(_DWORD *)(**a1 + 40));
    v7 = v6;
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 8) )
      {
        if ( (*(_DWORD *)**a1 & 0x800) == 0 && *(_DWORD *)(**a1 + 4) )
        {
          v8 = *(_DWORD *)(**a1 + 4);
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v75 = v8;
          v101 = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = &v101;
          v102 = v8;
          HMLockObject(v75);
          v11 = *a1;
          v95 = **(_DWORD **)(v7 + 8);
          xxxSendMessage(*(void **)(**a1 + 4), v95, ((*(_DWORD *)*v11 & 4) << 14) | *(unsigned __int16 *)(**a1 + 40));
          ThreadUnlock1();
          Window = v107;
          v99 = 1;
        }
        if ( (*(_BYTE *)(v104 + 4) & 4) == 0 )
        {
          Window = -1;
          v107 = -1;
          goto LABEL_105;
        }
        if ( *(_DWORD *)(**a1 + 40) >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 20) + 20) + 24)
          || (v12 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 20) + 56) + 80 * *(_DWORD *)(**a1 + 40)),
              v97 = v12,
              v13 = (const void *)*v12,
              (*(_BYTE *)(*v12 + 4) & 3) != 0)
          || (v14 = v12[2], (v98 = (int *)v14) == 0)
          || !*(_DWORD *)(*(_DWORD *)(v14 + 20) + 24) )
        {
LABEL_105:
          if ( v99 && *(_DWORD *)(**a1 + 4) )
          {
            v64 = *(_DWORD *)(**a1 + 4);
            v65 = KeGetCurrentThread();
            v66 = W32GetThreadWin32Thread(v65);
            v75 = v64;
            v101 = *(_DWORD *)(v66 + 228);
            *(_DWORD *)(v66 + 228) = &v101;
            v102 = v64;
            HMLockObject(v75);
            xxxSendMessage(*(void **)(**a1 + 4), v95, (*(_DWORD *)**a1 & 4) << 27);
            ThreadUnlock1();
            Window = v107;
          }
          goto LABEL_108;
        }
        qmemcpy(v76, v13, sizeof(v76));
        v76[3] = v14;
        v15 = KeGetCurrentThread();
        v16 = W32GetThreadWin32Thread(v15);
        v85 = *(_DWORD *)(v16 + 228);
        *(_DWORD *)(v16 + 228) = &v85;
        v86 = v98;
        HMLockObject(v98);
        if ( *(_DWORD *)(**a1 + 4) )
        {
          v17 = *(_DWORD *)(**a1 + 4);
          v18 = KeGetCurrentThread();
          v19 = W32GetThreadWin32Thread(v18);
          v75 = v17;
          v101 = *(_DWORD *)(v19 + 228);
          *(_DWORD *)(v19 + 228) = &v101;
          v102 = v17;
          HMLockObject(v75);
          if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 184) & 0xF) == 2 )
          {
            v20 = *(_DWORD *)(ValidateHmonitor(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 164)) + 20);
            v21 = *(_DWORD *)(v20 + 16);
            v106 = *(int ***)(v20 + 20);
          }
          else
          {
            v21 = v93;
          }
          v23 = 0;
          if ( PsGetCurrentProcessWin32Process() )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
            if ( IsImmersiveAppRestricted(CurrentProcessWin32Process) )
              v23 = 1;
          }
          SmartObjStackRefBase<tagMENU>::Init(v84, 0);
          v24 = *a1;
          v84[2] = 0;
          Window = xxxCreateWindowEx(
                     385,
                     (_DWORD *)0x8000,
                     0x8000,
                     0,
                     0x80800000,
                     v21,
                     v106,
                     100,
                     100,
                     *(_DWORD **)(**a1 + 4),
                     (int)v84,
                     *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*v24 + 4) + 20) + 24),
                     0,
                     0,
                     0xA00u,
                     v23,
                     0);
          v106 = (int **)Window;
          SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v84);
          ThreadUnlock1();
        }
        else
        {
          Window = 0;
          v106 = 0;
        }
        if ( Window )
        {
          v25 = safe_cast_fnid_to_PMENUWND((_DWORD *)Window);
          if ( v25
            && (SetOrClrWF(0, Window, 0x408u, 1),
                SmartObjStackRefBase<tagPOPUPMENU>::operator=(v108, *(_DWORD *)(v25 + 4)),
                *v108[0]) )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v89, *(_DWORD *)(**a1 + 32));
            MNMarkDelayedFreePopup(v108, v89);
            SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v89);
            SetOrClrWF((*(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 18) >> 6) & 1, Window, 0xA40u, 1);
            v26 = **a1;
            v27 = *v108[0] + 4;
            v75 = *(_DWORD *)(v26 + 4);
            v74 = v27;
            HMAssignmentLock(v27, v26);
            SmartObjStackRefBase<tagMENU>::Init(v83, v76[3]);
            v83[2] = 0;
            LockPopupMenu(v108, (int *)(*v108[0] + 20), v83);
            SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v83);
            v28 = *a1;
            v73 = Window;
            v72 = *v28 + 12;
            HMAssignmentLock(v30, v29);
            *(_DWORD *)(**a1 + 44) = *(_DWORD *)(**a1 + 40);
            v31 = **a1;
            v32 = (MenuHelpers *)(*v108[0] + 16);
            v71 = *(_DWORD *)(v31 + 8);
            v70 = v32;
            HMAssignmentLock(v32, v31);
            *(_DWORD *)(*v108[0] + 32) = *(_DWORD *)(**a1 + 32);
            **(_DWORD **)v108[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v108[0]) & 2;
            v33 = (_DWORD *)**a1;
            v99 = 0;
            **(_DWORD **)v108[0] ^= (*v33 ^ **(_DWORD **)v108[0]) & 4;
            **(_DWORD **)v108[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v108[0]) & 0x800;
            **(_DWORD **)v108[0] |= (unsigned int)&loc_1FFFFC + 4;
            **(_DWORD **)v108[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v108[0]) & 0x400000;
            **(_DWORD **)v108[0] ^= (**(_DWORD **)v108[0] ^ *(_DWORD *)**a1) & 0x10;
            **(_DWORD **)v108[0] = *(_DWORD *)**a1 ^ (*(_DWORD *)**a1 ^ **(_DWORD **)v108[0]) & 0x7FFFFFFF;
            v34 = *(_DWORD *)(*(_DWORD *)(*v108[0] + 20) + 20);
            if ( (*(_BYTE *)(v104 + 4) & 0x20) != 0 )
              *(_DWORD *)(v34 + 20) |= 4u;
            else
              *(_DWORD *)(v34 + 20) &= ~4u;
            **(_DWORD **)v108[0] &= ~0x1000u;
            if ( MNIsUAHMenu(*(_DWORD **)(*v108[0] + 20))
              && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*v108[0] + 20) + 20) + 20) & 1) != 0 )
            {
              MNRefreshUAHCachedSizes(*(_DWORD *)(*v108[0] + 20), v70, v71, v72, v73, v74, v75);
            }
            v35 = KeGetCurrentThread();
            v36 = W32GetThreadWin32Thread(v35);
            v69 = Window;
            v80 = *(_DWORD *)(v36 + 228);
            *(_DWORD *)(v36 + 228) = &v80;
            v81 = Window;
            HMLockObject(v69);
            if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(Window + 8) + 232) + 464) & 0x100000) != 0
              || (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 184) & 0xF) == 2
              && ((*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 144) & 0x20000000) != 0
               || ((*(_BYTE *)**a1 & 2) != 0 || (*(_BYTE *)**a1 & 4) != 0)
               && (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 144) & 0x10000000) != 0) )
            {
              SmartObjStackRefBase<tagMENU>::Init(v94, *(_DWORD *)(*v108[0] + 20));
              v37 = 0;
              v94[2] = 0;
              if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v94[0] + 20) + 24) )
              {
                v38 = 0;
                while ( (**(_DWORD **)(v38 + *(_DWORD *)(*(_DWORD *)v94[0] + 56)) & 0x100) == 0
                     && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v94[0] + 56) + v38) + 64) != -1 )
                {
                  ++v37;
                  v38 += 80;
                  if ( v37 >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v94[0] + 20) + 24) )
                    goto LABEL_50;
                }
              }
              else
              {
LABEL_50:
                xxxEnableChildWindowDpiMessageX((_DWORD *)Window, (struct tagWND *)1);
              }
              SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v94);
            }
            v39 = *(_DWORD *)(Window + 20);
            v40 = *(_DWORD *)(v39 + 184) & 0xF;
            if ( v40 == 3 )
            {
              v41 = (*(_DWORD *)(v39 + 184) >> 8) & 0x1FF;
            }
            else if ( (*(_DWORD *)(v39 + 144) & 0x8000000) != 0 )
            {
              LOWORD(v41) = GetWindowDpiLastNotify((_DWORD *)Window);
            }
            else if ( !v40
                   && (v42 = *(_DWORD *)(*(_DWORD *)(Window + 8) + 248)) != 0
                   && (*(_BYTE *)(**(_DWORD **)(v42 + 4) + 32) & 1) != 0 )
            {
              LOWORD(v41) = 96;
            }
            else
            {
              LOWORD(v41) = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(Window + 8) + 232) + 160);
            }
            if ( (_WORD)v41 != *(_WORD *)(*(_DWORD *)(*v108[0] + 20) + 48) )
            {
              *(_WORD *)(*(_DWORD *)(*v108[0] + 20) + 48) = v41;
              MNClearCachedPopupSizes(*(_DWORD *)(*v108[0] + 20));
            }
            v43 = xxxSendMessage((void *)Window, 1u, 0);
            if ( v43 && *(_DWORD *)(**a1 + 20) && MNGetpItemIndex(*(_DWORD *)(**a1 + 20), (int)v97) != -1 )
            {
              v44 = (int)v97;
              v45 = (_DWORD *)**a1;
              v107 = (unsigned __int16)v43 + 6;
              *v45 |= 0x20u;
              v46 = xxxMNPositionHierarchy(a1, v44, (unsigned __int16)v43 + 6, HIWORD(v43) + 6, &v105, &v100, &v96);
              **(_DWORD **)v108[0] ^= (**(_DWORD **)v108[0] ^ (v46 << 23)) & 0xF800000;
              if ( (*(_BYTE *)**a1 & 1) != 0 && (_GetAsyncKeyState(1) & 0x8000u) != 0 )
              {
                v77[0] = 0;
                v77[1] = 0;
                v78 = 0;
                v79 = 0;
                v48 = *(_DWORD **)(Window + 20);
                v49 = v48[13];
                v50 = v48[14];
                v88[0] = v105;
                v88[2] = v105 - v49 + v48[15];
                v88[1] = v100;
                v88[3] = v100 - v50 + v48[16];
                v90[0] = v76[9] + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 52);
                v51 = *a1;
                v69 = v90[0];
                v68 = (struct tagWND *)v90[0];
                v52 = v76[10] + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*v51 + 8) + 20) + 56);
                v91 = v90[0] + v76[11];
                v90[1] = v52;
                v92 = v52 + v76[12];
                SmartObjStackRefBase<tagPOPUPMENU>::Init(&v68, **a1);
                MNGetPopupBoundsRect((int)v96, v77, 0, (int)v68, v69);
                if ( IntersectRect(v88, v88, v90) )
                {
                  v53 = v107 + v76[9] + v76[11] + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 52);
                  if ( v53 > v78 )
                    v53 = 0;
                  v54 = v76[9] + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 52) - v107;
                  if ( v54 < v77[0] )
                    v54 = 0;
                  MenuRightAlignHint = MenuHelpers::GetMenuRightAlignHint(v70);
                  v47 = -243269633;
                  if ( (MenuRightAlignHint || (v76[0] & 0x2000) != 0) && v54 || !v53 )
                  {
                    v105 = v76[9] + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 52) - v107;
                    v56 = (unsigned int *)*v108[0];
                    v57 = **(_DWORD **)v108[0] & 0xF07FFFFF | 0x1000000;
                  }
                  else
                  {
                    v105 = v76[9] + v76[11] + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 52);
                    v56 = (unsigned int *)*v108[0];
                    v57 = **(_DWORD **)v108[0] & 0xF07FFFFF | 0x800000;
                  }
                  Window = (int)v106;
                  *v56 = v57;
                  if ( v105 <= v77[0] )
                  {
                    v105 = v91;
                    **(_DWORD **)v108[0] = **(_DWORD **)v108[0] & 0xF07FFFFF | 0x1000000;
                  }
                }
                else
                {
                  Window = (int)v106;
                }
              }
              if ( (*(_BYTE *)**a1 & 1) != 0 )
              {
                if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                  **(_DWORD **)v108[0] |= 0x8000000u;
                if ( (*(_BYTE *)**a1 & 0x10) != 0 || (**(_DWORD **)v108[0] & 0xF800000) == 0x1000000 )
                  **(_DWORD **)v108[0] |= 0x10u;
                *(_DWORD *)**a1 |= 0x400u;
              }
              else
              {
                **(_DWORD **)v108[0] |= 0x8000000u;
                if ( (**(_DWORD **)v108[0] & 0xF800000) == 0x1000000 )
                  **(_DWORD **)v108[0] |= 0x10u;
              }
              v58 = *a1;
              v69 = Window;
              v68 = (struct tagWND *)(*(_DWORD *)(*v58 + 32) + 28);
              HMAssignmentLock(1024, v47);
              if ( *(_DWORD *)(*v108[0] + 4) )
              {
                v60 = *(_DWORD *)(*v108[0] + 4);
                v61 = KeGetCurrentThread();
                v62 = W32GetThreadWin32Thread(v61);
                v101 = *(_DWORD *)(v62 + 228);
                *(_DWORD *)(v62 + 228) = &v101;
                v102 = v60;
                HMLockObject(v60);
                xxxInternalUpdateWindow(v68, v69);
                ThreadUnlock1();
                Window = (int)v106;
              }
              v63 = v104;
              if ( (*(_DWORD *)(v104 + 4) & 0x400) != 0 )
              {
                v98 = *(int **)Window;
                xxxUserModeCallback(100, (int)&v98, 4, v59, v59);
              }
              xxxPlayEventSound(5u);
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
                *(_DWORD *)(*(_DWORD *)(Window + 20) + 184) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 184);
              xxxSetWindowPos(
                Window,
                ((*(_DWORD *)(v63 + 4) & 0x100) != 0) - 1,
                v105,
                v100,
                0,
                0,
                ~(unsigned __int8)(*(_DWORD *)(v63 + 4) >> 4) & 0x10 | 0x241);
              xxxInheritWindowMonitor((_DWORD *)Window, *(_DWORD **)(**a1 + 8), 1);
              xxxWindowEvent(6u, (struct tagEVENTHOOK *)Window, 0xFFFFFFFC, 0, 0);
              if ( *(_DWORD *)(v63 + 16) == 1 )
                xxxSendMessage((void *)Window, 0, 0);
              xxxInternalUpdateWindow(v68, v69);
              v107 = Window;
              ThreadUnlock1();
              goto LABEL_104;
            }
            if ( ThreadUnlock1() )
              xxxDestroyWindow((struct tagVWPL **)Window);
            HMAssignmentUnlock(**a1 + 12);
          }
          else
          {
            xxxDestroyWindow((struct tagVWPL **)Window);
          }
        }
        Window = v107;
LABEL_104:
        ThreadUnlock1();
        goto LABEL_105;
      }
    }
  }
LABEL_108:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v108);
  return Window;
}
