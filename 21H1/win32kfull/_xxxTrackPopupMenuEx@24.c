/*
 * XREFs of _xxxTrackPopupMenuEx@24 @ 0x1A8190
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _NtUserTrackPopupMenuEx@24 @ 0x16AB4F (_NtUserTrackPopupMenuEx@24.c)
 *     _xxxDoScrollMenu@16 @ 0x1A370F (_xxxDoScrollMenu@16.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     __MonitorFromPoint@16 @ 0x25420 (__MonitorFromPoint@16.c)
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _GetMonitorRectForWindow@8 @ 0x33538 (_GetMonitorRectForWindow@8.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ @ 0x411E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     _SubtractRect@12 @ 0x9A66A (_SubtractRect@12.c)
 *     _IsWindowBroadcastingDpiToChildrenX@4 @ 0x9B752 (_IsWindowBroadcastingDpiToChildrenX@4.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _xxxPlayEventSound@4 @ 0xA95E6 (_xxxPlayEventSound@4.c)
 *     _xxxEnableChildWindowDpiMessageX@8 @ 0xA9806 (_xxxEnableChildWindowDpiMessageX@8.c)
 *     ?xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z @ 0xAC35E (-xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z.c)
 *     _IsWindowShellCloaked@8 @ 0xC3F32 (_IsWindowShellCloaked@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _IsChildWindowDpiMessageEnabledX@4 @ 0x151284 (_IsChildWindowDpiMessageEnabledX@4.c)
 *     _IsNonClientDpiScalingEnabledX@4 @ 0x1512C0 (_IsNonClientDpiScalingEnabledX@4.c)
 *     ?xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z @ 0x184390 (-xxxUnlockMenuStateInternal@@YGHPAUtagMENUSTATE@@H@Z.c)
 *     _MNAllocMenuState@4 @ 0x1843C6 (_MNAllocMenuState@4.c)
 *     _MNMarkDelayedFreePopup@8 @ 0x1846F6 (_MNMarkDelayedFreePopup@8.c)
 *     _xxxMNEndMenuState@4 @ 0x1847C9 (_xxxMNEndMenuState@4.c)
 *     _xxxMNStartMenu@12 @ 0x1849EF (_xxxMNStartMenu@12.c)
 *     _xxxUserModeCallback@20 @ 0x1950A7 (_xxxUserModeCallback@20.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     _LockPopupMenu@12 @ 0x197533 (_LockPopupMenu@12.c)
 *     _xxxMNReleaseCapture@4 @ 0x19A19C (_xxxMNReleaseCapture@4.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YG_NXZ @ 0x1A159A (-GetMenuRightAlignHint@MenuHelpers@@YG_NXZ.c)
 *     ?Attach@MenuStateOwnerLockxxxUnlock@@QAEXPAUtagMENUSTATE@@@Z @ 0x1A7C02 (-Attach@MenuStateOwnerLockxxxUnlock@@QAEXPAUtagMENUSTATE@@@Z.c)
 *     _FindBestPos@40 @ 0x1A7CE6 (_FindBestPos@40.c)
 *     _MNAnimate@8 @ 0x1A9493 (_MNAnimate@8.c)
 *     _MNClearCachedPopupSizes@4 @ 0x1AB7D1 (_MNClearCachedPopupSizes@4.c)
 *     _GetMonitorMenuRectForWindow@8 @ 0x1B722C (_GetMonitorMenuRectForWindow@8.c)
 */

int __fastcall xxxTrackPopupMenuEx(unsigned int a1, struct tagRECT *a2, int a3, int *a4, struct tagWND *a5, _DWORD *a6)
{
  int v6; // ebx
  struct tagEVENTHOOK *v7; // esi
  int v8; // ecx
  int v9; // edi
  struct tagWND *v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int **v15; // eax
  int CurrentProcessWin32Process; // eax
  char v17; // di
  int v18; // eax
  int Window; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  unsigned int v27; // edx
  struct tagMENUSTATE *v28; // eax
  int v30; // ecx
  int v31; // esi
  PKTHREAD v32; // eax
  int v33; // eax
  _DWORD **v34; // esi
  int v35; // edx
  unsigned int v36; // edx
  int v37; // ecx
  int v38; // edx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  _DWORD *v42; // ecx
  struct tagRECT *v43; // eax
  unsigned int v44; // edx
  int *v45; // ecx
  int v46; // eax
  int *MonitorRectForWindow; // eax
  int *MonitorMenuRectForWindow; // eax
  int BestPos; // eax
  int v50; // ecx
  struct tagMENUSTATE *v51; // edx
  int *v52[2]; // [esp+0h] [ebp-D0h] BYREF
  unsigned int v53; // [esp+8h] [ebp-C8h] BYREF
  int v54; // [esp+Ch] [ebp-C4h]
  struct tagMENUSTATE *v55; // [esp+10h] [ebp-C0h] BYREF
  int v56; // [esp+14h] [ebp-BCh]
  unsigned int v57; // [esp+18h] [ebp-B8h]
  unsigned int v58; // [esp+1Ch] [ebp-B4h]
  int v59; // [esp+20h] [ebp-B0h]
  int **v60; // [esp+24h] [ebp-ACh]
  int v61; // [esp+28h] [ebp-A8h]
  int v62; // [esp+2Ch] [ebp-A4h]
  int v63; // [esp+30h] [ebp-A0h]
  int v64; // [esp+34h] [ebp-9Ch] BYREF
  int **v65; // [esp+38h] [ebp-98h] BYREF
  int v66; // [esp+3Ch] [ebp-94h]
  int *v67; // [esp+40h] [ebp-90h] BYREF
  int v68; // [esp+44h] [ebp-8Ch]
  int v69; // [esp+48h] [ebp-88h]
  int v70; // [esp+4Ch] [ebp-84h]
  _DWORD v71[2]; // [esp+54h] [ebp-7Ch] BYREF
  int v72; // [esp+5Ch] [ebp-74h] BYREF
  int v73; // [esp+60h] [ebp-70h] BYREF
  int v74; // [esp+64h] [ebp-6Ch]
  int v75; // [esp+68h] [ebp-68h] BYREF
  int v76; // [esp+6Ch] [ebp-64h]
  int v77; // [esp+70h] [ebp-60h]
  int v78; // [esp+74h] [ebp-5Ch]
  int v79; // [esp+78h] [ebp-58h] BYREF
  int v80; // [esp+7Ch] [ebp-54h]
  int v81; // [esp+80h] [ebp-50h]
  int v82; // [esp+84h] [ebp-4Ch]
  int v83[4]; // [esp+88h] [ebp-48h] BYREF
  int v84[4]; // [esp+98h] [ebp-38h] BYREF
  char v85[36]; // [esp+A8h] [ebp-28h] BYREF

  v58 = a1;
  v6 = 0;
  v57 = (unsigned int)a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(&v55, 0);
  v69 = 0;
  v70 = 0;
  v73 = 0;
  v62 = 0;
  v60 = 0;
  v59 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  if ( a6 )
  {
    if ( *a6 != 20 )
    {
LABEL_5:
      v8 = 87;
LABEL_6:
      UserSetLastError((struct _NT_TIB *)v8);
      goto LABEL_76;
    }
    v79 = a6[1];
    v80 = a6[2];
    v81 = a6[3];
    v82 = a6[4];
  }
  v7 = a5;
  v61 = _gptiCurrent;
  if ( _gptiCurrent != *((_DWORD *)a5 + 2) )
    goto LABEL_5;
  v9 = *(_DWORD *)(_gptiCurrent + 328);
  if ( v9 )
  {
    if ( (v57 & 1) == 0 )
    {
      v8 = 1446;
      goto LABEL_6;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v55, *(_DWORD *)v9);
    v10 = *(struct tagWND **)(*(_DWORD *)v55 + 4);
    if ( (*(_BYTE *)(v9 + 4) & 4) == 0
      || (**(_DWORD **)v55 & 0x8000) != 0
      || !v10
      || v10 != a5
      || *(_DWORD *)(v9 + 24) != *((_DWORD *)v10 + 2) )
    {
      goto LABEL_76;
    }
    MNAnimate(v9, 0);
    v11 = safe_cast_fnid_to_PMENUWND(*(_DWORD **)(*(_DWORD *)v55 + 28));
    if ( v11 )
      v12 = *(_DWORD *)(v11 + 4);
    else
      v12 = 0;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v55, v12);
    if ( *(_DWORD *)v55 && (**(_DWORD **)v55 & 0x2000) != 0 )
    {
      FindTimer(*(_DWORD *)(*(_DWORD *)v55 + 8), 65534, 0, 1, 0);
      **(_DWORD **)v55 &= ~0x2000u;
    }
    if ( (*(_DWORD *)(v9 + 4) & 0x100) == 0 )
      *(_DWORD *)(*(_DWORD *)(v61 + 236) + 284) &= ~0x100000u;
  }
  v63 = v57 & 2;
  if ( (v57 & 2) != 0 )
    v66 = (unsigned __int16)_GetKeyState(2) >> 15;
  else
    v66 = (unsigned __int16)_GetKeyState(1) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    v13 = *(_DWORD *)(_MonitorFromPoint(a3, (int)a4, 2u, 0) + 20);
    v14 = *(_DWORD *)(v13 + 16);
    v15 = *(int ***)(v13 + 20);
    v62 = v14;
    v60 = v15;
  }
  v17 = 0;
  if ( PsGetCurrentProcessWin32Process() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v17 = 1;
  }
  SmartObjStackRefBase<tagMENU>::Init(v71, 0);
  v18 = *(_DWORD *)v58;
  v72 = 0;
  Window = xxxCreateWindowEx(
             385,
             (_DWORD *)0x8000,
             0x8000,
             0,
             0x80800000,
             v62,
             v60,
             100,
             100,
             (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v18 + 20) + 20) & 0x40000000) != 0 ? a5 : 0,
             (int)v71,
             *(_DWORD *)(*((_DWORD *)a5 + 5) + 24),
             0,
             *(_DWORD *)(*((_DWORD *)a5 + 5) + 148),
             0xA00u,
             v17,
             0);
  v65 = (int **)Window;
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v71);
  if ( Window )
  {
    v64 = safe_cast_fnid_to_PMENUWND((_DWORD *)Window);
    if ( !v64 )
    {
      xxxDestroyWindow((struct tagVWPL **)Window);
      goto LABEL_76;
    }
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v73 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v73;
    v74 = Window;
    HMLockObject(Window);
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(v61 + 232) + 464) & 0x100000) != 0
        || ((v57 & 0x200) == 0
          ? (!_IsTopLevelWindow(a5)
           ? (v22 = IsChildWindowDpiMessageEnabledX(a5))
           : (v22 = IsWindowBroadcastingDpiToChildrenX(a5)))
          : (v22 = IsNonClientDpiScalingEnabledX(a5)),
            v22) )
      {
        xxxEnableChildWindowDpiMessageX((_DWORD *)Window, (struct tagWND *)1);
      }
    }
    else if ( (*(_DWORD *)(*(_DWORD *)(**(_DWORD **)v58 + 20) + 20) & 0x40000000) == 0 )
    {
      xxxInheritWindowMonitor((_DWORD *)Window, a5, 0);
    }
    v68 = 0;
    if ( (*(_DWORD *)(*(_DWORD *)(**(_DWORD **)v58 + 20) + 20) & 0x40000000) == 0
      && IsWindowShellCloaked((struct tagWND *)Window, 1)
      && !IsWindowShellCloaked(a5, 0) )
    {
      zzzSetWindowCompositionCloak((_DWORD *)Window, 0, 0);
    }
    if ( (*(_BYTE *)(*((_DWORD *)a5 + 5) + 18) & 0x40) != 0 || (v57 & 0x8000) != 0 )
      SetOrClrWF(1, Window, 0xA40u, 1);
    SetOrClrWF(0, Window, 0x408u, 1);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v55, *(_DWORD *)(v64 + 4));
    if ( !*(_DWORD *)v55 )
    {
      v57 |= 0x80u;
LABEL_63:
      xxxWindowEvent(5u, v7, 0, 0, 0);
      xxxMNReleaseCapture((_DWORD *)v59);
      if ( (v57 & 0x80u) == 0 )
        xxxSendMessage(v7, (v57 & 0x200) == 0, 0);
      v64 = 1;
      goto LABEL_66;
    }
    HMAssignmentLock(v24, v23);
    LockPopupMenu((_DWORD **)&v53, (int *)(*(_DWORD *)v53 + 20), (_DWORD *)v56);
    HMAssignmentLock(v26, v25);
    SmartObjStackRefBase<tagPOPUPMENU>::Init(&v65, 0);
    MNMarkDelayedFreePopup(v52, &v65);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v65);
    *(_DWORD *)(*v52[0] + 32) = *v52[0];
    **(_DWORD **)v52[0] |= 8u;
    **(_DWORD **)v52[0] = (v62 << 9) | **(_DWORD **)v52[0] & 0xFFFFFDFF;
    **(_DWORD **)v52[0] = **(_DWORD **)v52[0] & 0xFFFFFFBF | (v59 != 0 ? 0x40 : 0);
    if ( MenuHelpers::GetMenuRightAlignHint() || (*(_BYTE *)(*(_DWORD *)(**(_DWORD **)v54 + 20) + 20) & 0x20) != 0 )
      **(_DWORD **)v52[0] |= 0x10u;
    v27 = v53;
    **(_DWORD **)v52[0] ^= (**(_DWORD **)v52[0] ^ (16 * v53)) & 0x800;
    v60 = (int **)(v27 & 0x100);
    if ( (v27 & 0x100) != 0 )
      **(_DWORD **)v52[0] |= 0x100u;
    **(_DWORD **)v52[0] ^= (**(_DWORD **)v52[0] ^ (v27 >> 7)) & 4;
    v28 = (struct tagMENUSTATE *)MNAllocMenuState(v52);
    v55 = v28;
    if ( !v28 )
    {
      v53 |= 0x80u;
LABEL_62:
      v7 = a5;
      goto LABEL_63;
    }
    MenuStateOwnerLockxxxUnlock::Attach((MenuStateOwnerLockxxxUnlock *)&v64, v28);
    v7 = a5;
    if ( (**(_DWORD **)v52[0] & 0x800) == 0 )
      xxxSendMessage(a5, (**(_DWORD **)v52[0] & 4) == 0, 0);
    if ( !xxxMNStartMenu((int *)v52, (int)v55, -1) )
      goto LABEL_63;
    if ( (*((_DWORD *)v55 + 1) & 0x400) != 0 )
    {
      v67 = *(int **)Window;
      xxxUserModeCallback(100, (int)&v67, 4, v30, v30);
    }
    if ( (**(_DWORD **)v52[0] & 0x800) != 0 || !*(_DWORD *)(*v52[0] + 4) )
    {
      v34 = (_DWORD **)v54;
    }
    else
    {
      v31 = *(_DWORD *)(*v52[0] + 4);
      v32 = KeGetCurrentThread();
      v33 = W32GetThreadWin32Thread(v32);
      v72 = *(_DWORD *)(v33 + 228);
      *(_DWORD *)(v33 + 228) = &v72;
      v73 = v31;
      HMLockObject(v31);
      v34 = (_DWORD **)v54;
      v35 = **(_DWORD **)v52[0] & 4;
      v56 = *(_DWORD *)(v54 + 8);
      if ( !v56 )
        v56 = **(_DWORD **)v54;
      xxxSendMessage(*(void **)(*v52[0] + 4), *(_DWORD *)v56, v35 != 0 ? 0x10000 : 0);
      ThreadUnlock1();
      **(_DWORD **)v52[0] |= (unsigned int)&loc_1FFFFC + 4;
    }
    if ( (*(_DWORD *)(*(_DWORD *)(Window + 20) + 144) & 0x20000000) != 0 )
    {
      v36 = 0;
      if ( *(_DWORD *)(*(_DWORD *)(**v34 + 20) + 24) )
      {
        v37 = 0;
        while ( (**(_DWORD **)(v37 + *(_DWORD *)(**v34 + 56)) & 0x100) == 0
             && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**v34 + 56) + v37) + 64) != -1 )
        {
          ++v36;
          v37 += 80;
          if ( v36 >= *(_DWORD *)(*(_DWORD *)(**v34 + 20) + 24) )
            goto LABEL_96;
        }
        xxxEnableChildWindowDpiMessageX((_DWORD *)Window, 0);
      }
    }
LABEL_96:
    v38 = *(_DWORD *)(Window + 20);
    v39 = *(_DWORD *)(v38 + 184) & 0xF;
    if ( v39 == 3 )
    {
      v40 = (*(_DWORD *)(v38 + 184) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v38 + 144) & 0x8000000) != 0 )
    {
      LOWORD(v40) = GetWindowDpiLastNotify((_DWORD *)Window);
    }
    else if ( !v39
           && (v41 = *(_DWORD *)(*(_DWORD *)(Window + 8) + 248)) != 0
           && (*(_BYTE *)(**(_DWORD **)(v41 + 4) + 32) & 1) != 0 )
    {
      LOWORD(v40) = 96;
    }
    else
    {
      LOWORD(v40) = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(Window + 8) + 232) + 160);
    }
    if ( (_WORD)v40 != *(_WORD *)(**v34 + 48) )
    {
      *(_WORD *)(**v34 + 48) = v40;
      v42 = v34[2];
      if ( !v42 )
        v42 = (_DWORD *)**v34;
      MNClearCachedPopupSizes(v42);
    }
    v59 = xxxSendMessage((void *)Window, 1u, 0);
    if ( !v59 )
      goto LABEL_62;
    if ( CInputGlobals::GetLastInputType(_gpInputGlobals) == 1 || CInputGlobals::GetLastInputType(_gpInputGlobals) == 4 )
    {
      *((_DWORD *)v55 + 1) |= 0x20u;
      *(_DWORD *)(*(_DWORD *)(**v34 + 20) + 20) |= 4u;
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(**v34 + 20) + 20) &= ~4u;
    }
    v56 = (unsigned __int16)v59 + 6;
    v58 = HIWORD(v59) + 6;
    v63 = a3;
    v59 = (int)a4;
    v43 = (struct tagRECT *)_MonitorFromPoint(a3, (int)a4, 2u, 0);
    v7 = a5;
    v44 = v53;
    v57 = (unsigned int)v43;
    if ( (*(_BYTE *)(*((_DWORD *)a5 + 5) + 18) & 0x40) != 0 && (v53 & 4) == 0 )
    {
      v44 = v53 ^ 8;
      v53 ^= 8u;
    }
    if ( (v44 & 8) != 0 )
    {
      a3 -= v56;
      **(_DWORD **)v52[0] = **(_DWORD **)v52[0] & 0xF07FFFFF | 0x1000000;
    }
    else if ( (v44 & 4) != 0 )
    {
      a3 -= (unsigned int)v56 >> 1;
    }
    else
    {
      **(_DWORD **)v52[0] = **(_DWORD **)v52[0] & 0xF07FFFFF | ((((**(_DWORD **)v52[0] & 0x10) != 0) + 1) << 23);
      v44 = v53;
    }
    if ( (v44 & 0x20) != 0 )
    {
      a4 = (int *)((char *)a4 - v58);
      **(_DWORD **)v52[0] |= 0x4000000u;
    }
    else if ( (v44 & 0x10) != 0 )
    {
      a4 = (int *)((char *)a4 - (v58 >> 1));
    }
    else
    {
      **(_DWORD **)v52[0] |= 0x2000000u;
    }
    v54 = v44 & 0x3C00;
    if ( (v44 & 0x3C00) != 0 )
    {
      v54 <<= 13;
      v45 = (int *)*v52[0];
      v54 |= **(_DWORD **)v52[0] & 0xF07FFFFF;
      *v45 = v54;
    }
    v46 = *(_DWORD *)(*(_DWORD *)(*v52[0] + 8) + 20);
    if ( a6 )
    {
      if ( *(_DWORD *)(v46 + 148) != 1 )
        goto LABEL_135;
    }
    else
    {
      if ( *(_DWORD *)(v46 + 148) != 1 )
      {
        v75 = 0;
        v76 = 0;
        v77 = 0;
        v78 = 0;
        Window = v61;
        **(_DWORD **)v52[0] &= ~0x80000000;
LABEL_135:
        BestPos = FindBestPos(
                    a3,
                    (signed int)a4,
                    v56,
                    v58,
                    &v75,
                    v44,
                    (unsigned int ***)v52,
                    (struct tagRECT *)v57,
                    v63,
                    v59);
        v50 = *((_DWORD *)v7 + 5);
        v63 = BestPos;
        if ( (*(_BYTE *)(v50 + 18) & 0x40) != 0 && (**(_DWORD **)v52[0] & 0x1800000) != 0 )
          **(_DWORD **)v52[0] ^= 0x1800000u;
        if ( (**(_DWORD **)v52[0] & 0xF800000) != 0 && (v53 & 0x4000) == 0 )
          **(_DWORD **)v52[0] |= 0x8000000u;
        xxxPlayEventSound(5u);
        xxxSetWindowPos(
          Window,
          ((*((_DWORD *)v55 + 1) & 0x100) != 0) - 1,
          (__int16)v63,
          SHIWORD(v63),
          0,
          0,
          ~(unsigned __int8)(*((_DWORD *)v55 + 1) >> 4) & 0x10 | 0x241);
        xxxWindowEvent(6u, (struct tagEVENTHOOK *)Window, 0xFFFFFFFC, 0, 0);
        v51 = v55;
        *((_DWORD *)v55 + 1) = (8 * v62) | *((_DWORD *)v55 + 1) & 0xFFFFFFF7;
        v6 = xxxMNLoop((int *)v52, v51, 0, 0);
        if ( (*((_DWORD *)v55 + 1) & 0x100) != 0 )
        {
          ThreadUnlock1();
LABEL_72:
          if ( !v64 )
            v6 = 1;
          if ( v68 )
            xxxUnlockMenuStateInternal(v68, 0);
          goto LABEL_76;
        }
LABEL_66:
        if ( ThreadUnlock1() && *(char *)(*(_DWORD *)(Window + 20) + 11) >= 0 )
          xxxDestroyWindow((struct tagVWPL **)Window);
        if ( v59 )
          xxxMNEndMenuState((int *)v59);
        xxxDeliverRestoreFocusMessage(v7);
        goto LABEL_72;
      }
      MonitorRectForWindow = GetMonitorRectForWindow(v84);
      v83[0] = *MonitorRectForWindow;
      v83[1] = MonitorRectForWindow[1];
      v83[2] = MonitorRectForWindow[2];
      v83[3] = MonitorRectForWindow[3];
      MonitorMenuRectForWindow = (int *)GetMonitorMenuRectForWindow(v57, v61, v85);
      v79 = *MonitorMenuRectForWindow;
      v80 = MonitorMenuRectForWindow[1];
      v81 = MonitorMenuRectForWindow[2];
      v82 = MonitorMenuRectForWindow[3];
      SubtractRect(&v75, v83, &v79);
      v44 = v53;
      Window = v61;
      v7 = a5;
    }
    **(_DWORD **)v52[0] |= 0x80000000;
    goto LABEL_135;
  }
LABEL_76:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v55);
  return v6;
}
