/*
 * XREFs of _xxxNextWindow@8 @ 0x15D33E
 * Callers:
 *     _EditionHandleAndPostKeyEvent@68 @ 0xA3150 (_EditionHandleAndPostKeyEvent@68.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _SetNewForegroundQueue@4 @ 0x18960 (_SetNewForegroundQueue@4.c)
 *     _GetNonChildAncestor@4 @ 0x1C9AA (_GetNonChildAncestor@4.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxSetThreadDesktop@8 @ 0x7D894 (_xxxSetThreadDesktop@8.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     _safe_cast_fnid_to_PSWITCHWND@4 @ 0x143725 (_safe_cast_fnid_to_PSWITCHWND@4.c)
 *     ?Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z @ 0x15C2D1 (-Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z @ 0x15C30E (-InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z @ 0x15C854 (-xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YGHPAUtagWND@@@Z @ 0x15CF04 (-xxxShowSwitchWindow@@YGHPAUtagWND@@@Z.c)
 *     _RemoveSwitchWindowInfo@4 @ 0x15D02D (_RemoveSwitchWindowInfo@4.c)
 *     __GetNextQueueWindow@12 @ 0x15D1B0 (__GetNextQueueWindow@12.c)
 *     _xxxCancelCoolSwitch@0 @ 0x15D2FA (_xxxCancelCoolSwitch@0.c)
 */

int __fastcall xxxNextWindow(int *a1, int a2)
{
  size_t v2; // esi
  int result; // eax
  struct tagEVENTHOOK *v4; // edi
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edi
  struct tagWND *inited; // edi
  int CurrentProcessWin32Process; // eax
  int v12; // eax
  int v13; // edx
  ULONG_PTR v14; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  ULONG_PTR v24; // ecx
  size_t *v25; // eax
  ULONG_PTR v26; // ecx
  struct tagSwitchWndInfo *v27; // eax
  unsigned int v28; // eax
  int v29; // edx
  int v30; // ecx
  int *v31; // ecx
  int v32; // edi
  int v33; // ecx
  struct tagWND *v34; // [esp-10h] [ebp-80h]
  int v35; // [esp-Ch] [ebp-7Ch]
  ULONG_PTR v36; // [esp-4h] [ebp-74h]
  struct tagSwitchWndInfo *v37; // [esp+0h] [ebp-70h]
  int v38; // [esp+4h] [ebp-6Ch]
  _DWORD v39[3]; // [esp+Ch] [ebp-64h] BYREF
  _DWORD v40[2]; // [esp+18h] [ebp-58h] BYREF
  int v41; // [esp+20h] [ebp-50h]
  int v42; // [esp+24h] [ebp-4Ch] BYREF
  struct tagWND *v43; // [esp+28h] [ebp-48h]
  int v44; // [esp+2Ch] [ebp-44h]
  int v45; // [esp+30h] [ebp-40h] BYREF
  int v46; // [esp+34h] [ebp-3Ch]
  int v47; // [esp+38h] [ebp-38h]
  int v48; // [esp+3Ch] [ebp-34h] BYREF
  int v49; // [esp+40h] [ebp-30h]
  int v50; // [esp+44h] [ebp-2Ch]
  int v51; // [esp+48h] [ebp-28h] BYREF
  ULONG_PTR v52; // [esp+4Ch] [ebp-24h]
  int v53; // [esp+50h] [ebp-20h]
  int v54; // [esp+54h] [ebp-1Ch]
  int v55; // [esp+58h] [ebp-18h] BYREF
  int Window; // [esp+5Ch] [ebp-14h]
  int NonChildAncestor; // [esp+60h] [ebp-10h]
  struct tagSwitchWndInfo **v58; // [esp+64h] [ebp-Ch]
  int *v59; // [esp+68h] [ebp-8h]
  struct tagSwitchWndInfo *v60; // [esp+6Ch] [ebp-4h] BYREF

  v54 = a2;
  v59 = a1;
  v48 = 0;
  v2 = 0;
  v53 = 0;
  v60 = 0;
  v55 = 0;
  v49 = 0;
  v50 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  result = _gptiCurrent;
  if ( !a1 )
    return result;
  v58 = (struct tagSwitchWndInfo **)((_GetAsyncKeyState(16) & 0x8000u) != 0);
  NonChildAncestor = GetNonChildAncestor(v59[15]);
  result = v54;
  if ( v54 == 9 )
  {
    v4 = (struct tagEVENTHOOK *)gspwndAltTab;
    if ( !gspwndAltTab )
    {
      memset(v39, 0, sizeof(v39));
      ForceResetMouseButtonsDownState();
      HMAssignmentLock(v6, v5);
      if ( !gspwndActivate )
      {
        v35 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12) + 60);
        v34 = (struct tagWND *)&gspwndActivate;
        result = HMAssignmentLock(v8, v7);
        if ( !gspwndActivate )
          return result;
      }
      v48 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v48;
      v49 = NonChildAncestor;
      if ( NonChildAncestor )
        HMLockObject(NonChildAncestor);
      v9 = gspwndActivate;
      v45 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v45;
      v59 = (int *)v9;
      v46 = v9;
      HMLockObject(v9);
      xxxSendTransformableMessageTimeout(v9, 0x1Fu, 0, 0, 2u, (struct tagDDECONV *)0x64, &v55, 1u, 0);
      inited = InitSwitchWndInfo(v9, &v60, v58, v34, v35);
      v42 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v42;
      v43 = inited;
      if ( inited )
        HMLockObject(inited);
      if ( v60 )
      {
        if ( !inited )
        {
          RemoveSwitchWindowInfo((int *)&v60);
          ThreadUnlock1();
          ThreadUnlock1();
          ThreadUnlock1();
          return HMAssignmentUnlock(&gspwndActivate);
        }
        PushW32ThreadLock((int)&v60, v39, (int)RemoveSwitchWindowInfo);
        *((_DWORD *)v60 + 22) = 0;
        if ( !PsGetCurrentProcessWin32Process()
          || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(),
              v12 = IsImmersiveAppRestricted(CurrentProcessWin32Process),
              Window = 1,
              !v12) )
        {
          Window = 0;
        }
        SmartObjStackRefBase<tagMENU>::Init(v40, 0);
        v41 = 0;
        Window = xxxCreateWindowEx(
                   385,
                   (_DWORD *)0x8003,
                   32771,
                   0,
                   0x88800000,
                   0,
                   0,
                   10,
                   10,
                   0,
                   (int)v40,
                   0,
                   0,
                   2,
                   0x400u,
                   Window,
                   0);
        SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v40);
        v14 = gspwndAltTab;
        if ( gspwndAltTab )
          _PostMessage(gspwndAltTab, 16, 0, 0);
        HMAssignmentLock(v14, v13);
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        *(_DWORD *)(ThreadWin32Thread + 8) = v39[0];
        if ( gspwndAltTab )
        {
          v21 = safe_cast_fnid_to_PSWITCHWND((_DWORD *)gspwndAltTab);
          if ( v21 )
          {
            v23 = (int)v60;
            *(_DWORD *)(v21 + 4) = v60;
          }
          HMAssignmentLock(v23, v22);
          if ( (*(_BYTE *)(_gptiCurrent + 264) & 4) != 0 )
            xxxSetThreadDesktop(0, _grpdeskRitInput);
          v24 = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12);
          if ( gspwndFullScreen != v24 )
          {
            v51 = *(_DWORD *)(_gptiCurrent + 228);
            *(_DWORD *)(_gptiCurrent + 228) = &v51;
            v52 = v24;
            if ( v24 )
              HMLockObject(v24);
            v25 = *(size_t **)(*(_DWORD *)(_grpdeskRitInput + 4) + 12);
            if ( v25 )
              v2 = *v25;
            xxxSendNotifyMessage((int)v25, 0x3Au, (struct tagWND *)2, v2, 1u);
            ThreadUnlock1();
          }
          v26 = gspwndAltTab;
          v51 = *(_DWORD *)(_gptiCurrent + 228);
          *(_DWORD *)(_gptiCurrent + 228) = &v51;
          v52 = v26;
          HMLockObject(v26);
          xxxShowSwitchWindow();
          ThreadUnlock1();
          ThreadUnlock1();
          ThreadUnlock1();
          return ThreadUnlock1();
        }
        RemoveSwitchWindowInfo((int *)&v60);
      }
      v17 = (int)v59;
LABEL_23:
      if ( inited )
      {
        if ( NonChildAncestor )
        {
          if ( (*(_BYTE *)(*(_DWORD *)(NonChildAncestor + 20) + 23) & 0xC0) != 0x40 )
          {
            v18 = *(_DWORD *)(NonChildAncestor + 92);
            if ( v18 )
              *(_DWORD *)(*(_DWORD *)(v18 + 20) + 20) &= ~4u;
          }
        }
        if ( !v58 && (*(_BYTE *)(*(_DWORD *)(v17 + 20) + 16) & 8) == 0 )
          xxxSetWindowPos(v17, 1, 0, 0, 0, 0, 25619);
        if ( (*(_BYTE *)(*((_DWORD *)inited + 5) + 23) & 0xC0) != 0x40 )
        {
          v19 = *((_DWORD *)inited + 23);
          if ( v19 )
            *(_DWORD *)(*(_DWORD *)(v19 + 20) + 20) |= 4u;
        }
        v20 = *((_DWORD *)inited + 2);
        if ( _gpqForeground == *(_DWORD *)(v20 + 236) )
        {
          SetNewForegroundQueue(0);
          v20 = *((_DWORD *)inited + 2);
        }
        CInputGlobals::SetPtiLastWoken(_gpInputGlobals, (struct tagTHREADINFO *)v20, 0);
        xxxSetForegroundWindow2((int)inited, 0, v54 == 9 ? 18 : 2);
        if ( v54 == 9 && (*(_BYTE *)(*((_DWORD *)inited + 5) + 23) & 0x40) != 0 )
          xxxSetWindowPos((int)inited, 0, 0, 0, 0, 0, 16387);
      }
LABEL_39:
      ThreadUnlock1();
      ThreadUnlock1();
      return ThreadUnlock1();
    }
    v41 = 0;
    v40[0] = *(_DWORD *)(_gptiCurrent + 228);
    v36 = gspwndAltTab;
    *(_DWORD *)(_gptiCurrent + 228) = v40;
    v40[1] = v4;
    HMLockObject(v36);
    Window = 0;
    do
    {
      v27 = Getpswi(v4);
      v60 = v27;
      if ( !v27 )
      {
        result = ThreadUnlock1();
        goto LABEL_61;
      }
      v28 = xxxMoveSwitchWndHilite((int)v27, v4, (struct tagWND *)v58, v37, v38);
      if ( Window )
      {
        if ( Window == v28 )
          break;
      }
      else
      {
        Window = v28;
      }
      NonChildAncestor = HMValidateHandleNoSecure(v28, 1);
    }
    while ( !NonChildAncestor );
    ThreadUnlock1();
    result = HMAssignmentLock(v30, v29);
    if ( !gspwndActivate )
      return xxxCancelCoolSwitch();
  }
  else
  {
    if ( v54 != 27 )
      return result;
LABEL_61:
    v31 = v59;
    if ( (v59[71] & 0x4000000) == 0 )
    {
      v32 = v59[16];
      v59 = (int *)v32;
      if ( v32
        || (result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v31[13] + 248) + 4) + 12),
            v32 = *(_DWORD *)(result + 60),
            (v59 = (int *)v32) != 0) )
      {
        v33 = GetNonChildAncestor(v31[15]);
        v48 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v48;
        NonChildAncestor = v33;
        v49 = v33;
        if ( v33 )
          HMLockObject(v33);
        v45 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v45;
        v46 = v32;
        HMLockObject(v32);
        xxxSendTransformableMessageTimeout(v32, 0x1Fu, 0, 0, 2u, (struct tagDDECONV *)0x64, &v55, 1u, 0);
        inited = _GetNextQueueWindow(v32, (int)v58, 1);
        v42 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v42;
        v43 = inited;
        if ( inited )
          HMLockObject(inited);
        v17 = (int)v59;
        if ( inited == (struct tagWND *)v59 )
          goto LABEL_39;
        goto LABEL_23;
      }
    }
  }
  return result;
}
