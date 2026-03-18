/*
 * XREFs of ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15
 * Callers:
 *     _xxxRegisterGhostWindow@8 @ 0xC20E8 (_xxxRegisterGhostWindow@8.c)
 *     _xxxDestroyCorrespondingGhostWindow@4 @ 0x170530 (_xxxDestroyCorrespondingGhostWindow@4.c)
 *     _xxxHandleDestroyGhostWindow@4 @ 0x170727 (_xxxHandleDestroyGhostWindow@4.c)
 *     _xxxRegisterSiblingFrostWindow@8 @ 0x1708E7 (_xxxRegisterSiblingFrostWindow@8.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _AdjustPwndPtiPqForDelegation@24 @ 0x47910 (_AdjustPwndPtiPqForDelegation@24.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 *     _DwmAsyncNotifyAnimationChange@12 @ 0xB5164 (_DwmAsyncNotifyAnimationChange@12.c)
 *     ?xxxNotifyShellOfWindowSwap@@YGXPAUtagWND@@0@Z @ 0xC26E2 (-xxxNotifyShellOfWindowSwap@@YGXPAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YGHPAUtagWND@@0@Z @ 0xC2790 (-_CopyWindowCheckpoint@@YGHPAUtagWND@@0@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56 (-PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z.c)
 *     ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104 (-xxxShowWindow@@YGHPAUtagWND@@K@Z.c)
 */

void __fastcall xxxHideGhostWindow(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  char v5; // al
  unsigned __int8 v6; // al
  struct tagWND **v7; // ecx
  int v8; // edx
  struct tagWND *v9; // esi
  int v10; // esi
  int v11; // eax
  struct tagWND *v12; // ecx
  int v13; // eax
  struct tagWND **v14; // edi
  void *v15; // eax
  int v16; // ecx
  char v17; // cl
  int v18; // ecx
  _DWORD *v19; // eax
  int v20; // edx
  struct tagWND *v21; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v24; // edi
  int v25; // edi
  __int64 v26; // kr00_8
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // esi
  int v33; // ecx
  int v34; // ecx
  int v35; // esi
  int v36; // ecx
  int v37; // esi
  int v38; // esi
  int i; // ecx
  int v40; // esi
  int j; // ecx
  int v42; // esi
  int k; // ecx
  int v44; // esi
  int m; // ecx
  void *v46; // eax
  struct tagWND *v47; // [esp-4h] [ebp-13Ch]
  struct tagWND *v48; // [esp+0h] [ebp-138h]
  unsigned int v49; // [esp+4h] [ebp-134h]
  int v50; // [esp+10h] [ebp-128h]
  int v51; // [esp+10h] [ebp-128h]
  int v52; // [esp+14h] [ebp-124h] BYREF
  int v53; // [esp+18h] [ebp-120h] BYREF
  int v54; // [esp+1Ch] [ebp-11Ch] BYREF
  struct tagWND **v55; // [esp+20h] [ebp-118h]
  int v56; // [esp+24h] [ebp-114h]
  int v57; // [esp+28h] [ebp-110h]
  int v58; // [esp+2Ch] [ebp-10Ch] BYREF
  int v59; // [esp+30h] [ebp-108h]
  _DWORD v60[2]; // [esp+34h] [ebp-104h] BYREF
  int v61; // [esp+3Ch] [ebp-FCh]
  int v62; // [esp+40h] [ebp-F8h]
  int v63; // [esp+44h] [ebp-F4h] BYREF
  struct tagWND *v64; // [esp+48h] [ebp-F0h]
  int v65; // [esp+4Ch] [ebp-ECh]
  _DWORD v66[26]; // [esp+50h] [ebp-E8h] BYREF
  int v67; // [esp+B8h] [ebp-80h] BYREF
  int v68; // [esp+BCh] [ebp-7Ch]
  int v69; // [esp+C0h] [ebp-78h]
  int v70; // [esp+C4h] [ebp-74h]
  _BYTE v71[108]; // [esp+C8h] [ebp-70h] BYREF

  v2 = a2;
  v55 = (struct tagWND **)a1;
  v58 = a2;
  v60[0] = 0;
  v60[1] = 0;
  v3 = *(_DWORD *)(_gptiCurrent + 264) & 1;
  v52 = 0;
  v56 = v3;
  v4 = *(_DWORD *)(a1 + 20);
  v54 = 0;
  v50 = 49185;
  v59 = 0;
  v5 = *(_BYTE *)(v4 + 23);
  if ( (v5 & 0x20) != 0 )
    v52 = 1;
  else
    v54 = (v5 & 1) != 0;
  qmemcpy(v71, INPUTDEST_FROM_PWND((_DWORD *)a1, v66), 0x68u);
  v6 = IsCapturedBySystem(v71);
  v7 = v55;
  v8 = *(_DWORD *)(v2 + 8);
  v57 = v6;
  v9 = v55[2];
  if ( v8 && v9 )
  {
    v10 = *((_DWORD *)v9 + 59);
    if ( v10 == _gpqForeground && *(struct tagWND ***)(v10 + 64) == v55
      || _gpqForeground && (v11 = *(_DWORD *)(_gpqForeground + 64)) != 0 && *(struct tagWND ***)(v11 + 64) == v55 )
    {
      *(_DWORD *)(v8 + 264) |= 0x20u;
    }
    else
    {
      v50 = 49201;
    }
  }
  v12 = v7[5];
  v67 = *((_DWORD *)v12 + 13);
  v68 = *((_DWORD *)v12 + 14);
  v69 = *((_DWORD *)v12 + 15);
  v70 = *((_DWORD *)v12 + 16);
  if ( (*(_DWORD *)(*(_DWORD *)(v2 + 20) + 184) & 0xF) != 2 )
  {
    v53 = ValidateHmonitor(*((_DWORD *)v12 + 41));
    PhysicalToLogicalDPIRect(&v67, &v67, *(_DWORD *)(*(_DWORD *)(v2 + 20) + 184), &v53);
  }
  if ( IsWindowDesktopComposed(v2) )
  {
    v13 = IsWindowDesktopComposed(v2);
    v14 = v55;
    v59 = v13;
    if ( v13 )
    {
      v47 = *v55;
      v15 = (void *)ReferenceDwmApiPort();
      DwmAsyncNotifyAnimationChange(v15, 0, (int)v47);
    }
  }
  else
  {
    v14 = v55;
  }
  if ( !IsWindowBeingDestroyed(v14) )
  {
    v53 = (int)v14[2];
    if ( v53 )
    {
      xxxWindowEvent(0x8003u, (struct tagEVENTHOOK *)v14, 0, 0, 3);
      PostEventMessage((struct tagTHREADINFO *)8, 0, 0, *v14, 0, (unsigned int)v48, v49);
    }
  }
  if ( !IsWindowBeingDestroyed((_DWORD *)v2) && _IsTopLevelWindow((_DWORD *)v2) )
  {
    v16 = *(_DWORD *)(v2 + 20);
    v53 = (v56 << 17) + 1;
    if ( v52 )
    {
      if ( (*(_BYTE *)(v16 + 23) & 0x20) == 0 )
        xxxMinMaximizeEx((struct tagQ *)v2, (struct tagWND *)7, (v56 << 17) + 1, 0, 0, 0);
    }
    else
    {
      v17 = *(_BYTE *)(v16 + 23);
      if ( !v54 )
      {
        if ( (v17 & 0x21) == 0 )
        {
          v18 = v50;
          goto LABEL_37;
        }
        v19 = CkptRestore(v2, (int)&v67);
        if ( v19 )
        {
          *v19 = v67;
          v19[1] = v68;
          v19[2] = v69;
          v19[3] = v70;
          v14 = v55;
        }
        xxxMinMaximizeEx((struct tagQ *)v2, (struct tagWND *)9, v53, 0, 0, 0);
LABEL_31:
        v18 = v50 | 2;
        v50 |= 2u;
LABEL_37:
        v20 = *(_DWORD *)(v2 + 20);
        if ( (*(_BYTE *)(v20 + 17) & 8) != 0 )
        {
          v18 |= 0x40u;
          v50 = v18;
        }
        if ( v67 == *(_DWORD *)(v20 + 52) && v68 == *(_DWORD *)(v20 + 56) )
          v50 = v18 | 2;
        goto LABEL_42;
      }
      if ( (v17 & 1) == 0 )
        xxxMinMaximizeEx((struct tagQ *)v2, (struct tagWND *)3, (v56 << 17) + 1, 0, 0, 0);
    }
    _CopyWindowCheckpoint((int)v14, v2);
    goto LABEL_31;
  }
LABEL_42:
  if ( v56 || !IsWindowBeingDestroyed((_DWORD *)v2) && _IsTopLevelWindow((_DWORD *)v2) && (v50 & 0x40) != 0 )
    SetVisible(v14, 0);
  else
    xxxShowWindow(v48, v49);
  if ( !IsWindowBeingDestroyed((_DWORD *)v2) )
  {
    if ( !_IsTopLevelWindow((_DWORD *)v2) )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(v2 + 20) + 17) & 8) != 0 )
      {
        SetVisible((_DWORD *)v2, 0x11u);
        xxxWindowEvent(0x8002u, (struct tagEVENTHOOK *)v2, 0, 0, _gdwDeferWinEvent != 0 ? 3 : 1);
        xxxRedrawWindow(v2, 0, 0, 1157);
      }
      goto LABEL_109;
    }
    v54 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    if ( (*((_BYTE *)v55[5] + 12) & 0x20) != 0 )
    {
      SetOrClrWF(0, (int)v55, 0x420u, 1);
      SetOrClrWF(1, v2, 0x420u, 1);
      v52 = 1;
    }
    else
    {
      v21 = v55[13];
      v52 = (int)v21;
      if ( !v21 )
        goto LABEL_58;
      if ( v21 == (struct tagWND *)v2 )
      {
        v24 = v50 | 4;
        v52 = 0;
        LOBYTE(v50) = v50 | 4;
        goto LABEL_60;
      }
      if ( (*(_BYTE *)(*((_DWORD *)v21 + 5) + 16) & 8) == 0 || (*(_BYTE *)(*(_DWORD *)(v2 + 20) + 16) & 8) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v63 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v63;
        v64 = v21;
        HMLockObject(v21);
        v54 = 1;
      }
      else
      {
LABEL_58:
        v52 = 0;
      }
    }
    v24 = v50;
LABEL_60:
    v53 = v24 & 0x40;
    if ( (v24 & 0x40) != 0 )
      SetVisible((_DWORD *)v2, 1u);
    xxxSetWindowPos(v2, v52, v67, v68, 0, 0, v24);
    if ( v54 )
      ThreadUnlock1();
    if ( v53 )
      xxxRedrawWindow(v2, 0, 0, 1157);
    if ( (v50 & 0x10) == 0 && !v56 )
      xxxActivateWindowWithOptions((int *)v2, 0, 0, 1);
    if ( v57 )
    {
      v53 = *(_DWORD *)(v2 + 8);
      v54 = v53;
      if ( v53 )
      {
        qmemcpy(v71, INPUTDEST_FROM_PWND((_DWORD *)v2, v66), 0x68u);
        v25 = 0;
        ForceCapture(0, v71);
        SetSystemInputSource(v60);
        v26 = LogicalCursorPosFromDpiAwarenessContext(*(_DWORD *)(*(_DWORD *)(v2 + 20) + 184));
        v61 = HIDWORD(v26);
        v62 = v26;
        v52 = *(_DWORD *)(v53 + 236);
        v53 = 0;
        if ( AdjustPwndPtiPqForDelegation(&v52, &v58, &v54, 513, (int)v60, &v53) )
        {
          v27 = *(_DWORD *)(v52 + 64);
          if ( v27 )
            v28 = *(_DWORD *)(v27 + 8);
          else
            v28 = 0;
          if ( v28 )
            v57 = v28 + 216;
          else
            v57 = gObjDummyLock;
          v29 = *(_DWORD *)(v52 + 48);
          if ( v29 )
            v51 = v29 + 216;
          else
            v51 = gObjDummyLock;
          v30 = *(_DWORD *)(v52 + 52);
          if ( v30 )
            v31 = v30 + 216;
          else
            v31 = gObjDummyLock;
          v2 = v58;
          v32 = gpsiLock;
          v33 = 3;
          v56 = v31;
          while ( v33 )
          {
            v32 += 4;
            --v33;
          }
          v34 = 3;
          v35 = v58 + 28;
          while ( v34 )
          {
            v35 += 4;
            --v34;
          }
          v36 = 3;
          v37 = v54 + 216;
          while ( v36 )
          {
            v37 += 4;
            --v36;
          }
          v38 = v52;
          for ( i = 3; i; --i )
            v38 += 4;
          v40 = v56;
          for ( j = 3; j; --j )
            v40 += 4;
          v42 = v51;
          for ( k = 3; k; --k )
            v42 += 4;
          v44 = v57;
          for ( m = 3; m; --m )
            v44 += 4;
          PostInputMessage(
            v52,
            v58,
            (struct tagQMSG *)0x201,
            0,
            (unsigned __int16)v62 | ((unsigned __int16)v61 << 16),
            0,
            0,
            0,
            0,
            0,
            (unsigned int)v60,
            0,
            0,
            v53,
            v54);
        }
        else
        {
          v2 = v58;
        }
        goto LABEL_110;
      }
    }
LABEL_109:
    v25 = 0;
LABEL_110:
    if ( v59 )
    {
      if ( v2 )
        v25 = *(_DWORD *)v2;
      v46 = (void *)ReferenceDwmApiPort();
      DwmAsyncNotifyAnimationChange(v46, 1, v25);
    }
    xxxNotifyShellOfWindowSwap(v55, (unsigned int *)v2);
    return;
  }
  PostShellHookMessages();
  PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 18, (int)*v14);
  if ( (*(_BYTE *)(*(_DWORD *)(v2 + 20) + 17) & 8) != 0 )
    PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 18, *(_DWORD *)v2);
}
