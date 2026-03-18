/*
 * XREFs of ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936
 * Callers:
 *     ?xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z @ 0x1364E (-xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxSetThreadDesktop@8 @ 0x7D894 (_xxxSetThreadDesktop@8.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 *     _xxxSetModernAppWindow@8 @ 0xC6BDE (_xxxSetModernAppWindow@8.c)
 *     _EditionHandleAltTab@32 @ 0xF3338 (_EditionHandleAltTab@32.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x14183D (-xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YG_NPAUtagWND@@@Z @ 0x141930 (-xxxTrackingActivateWindow@@YG_NPAUtagWND@@@Z.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 * Callees:
 *     _SetHungFlag@8 @ 0x17252 (_SetHungFlag@8.c)
 *     ?xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x17292 (-xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _IsThreadHung@8 @ 0x175E4 (_IsThreadHung@8.c)
 *     _zzzInputFocusLostWindowEvent@8 @ 0x1768E (_zzzInputFocusLostWindowEvent@8.c)
 *     _zzzInputFocusReceivedWindowEvent@4 @ 0x177FE (_zzzInputFocusReceivedWindowEvent@4.c)
 *     _xxxCancelTracking@0 @ 0x17842 (_xxxCancelTracking@0.c)
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     _xxxApplyGlobalInputSettings@4 @ 0x1855E (_xxxApplyGlobalInputSettings@4.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x185FC (-xxxSetForegroundThreadWithWindowHint@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z.c)
 *     _SetNewForegroundQueue@4 @ 0x18960 (_SetNewForegroundQueue@4.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x19E68 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YGXPAUtagWND@@@Z @ 0x19ED6 (-xxxUpdateTray@@YGXPAUtagWND@@@Z.c)
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _IsWindowUnderActiveLockScreen@4 @ 0x26C7A (_IsWindowUnderActiveLockScreen@4.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     _ClearHungFlag@8 @ 0x715BC (_ClearHungFlag@8.c)
 *     _anonymous_namespace_::UpdateKeyStateFlag @ 0x9DE02 (_anonymous_namespace_--UpdateKeyStateFlag.c)
 *     ?xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z @ 0xAC35E (-xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z.c)
 *     _ProcessHungWindow@4 @ 0xC2576 (_ProcessHungWindow@4.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z @ 0xC31B8 (-IsHostThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0xEFA58 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_INFO@@@Z @ 0xEFC1E (-StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_IN.c)
 *     _AllocQEntry@4 @ 0xEFE7A (_AllocQEntry@4.c)
 *     _zzzActiveCursorTracking@4 @ 0x14ED7B (_zzzActiveCursorTracking@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxSetForegroundWindow2(int a1, int a2, unsigned int a3)
{
  char v5; // di
  int v6; // esi
  int v7; // ecx
  int v8; // edx
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  struct tagWND *ThreadId; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // ecx
  int v18; // edx
  struct tagWND *v19; // ecx
  int v20; // eax
  int v21; // eax
  char v22; // al
  int v23; // eax
  int v24; // ecx
  int v25; // edi
  int v26; // ebx
  int v27; // eax
  struct tagWND *v29; // eax
  HANDLE v30; // eax
  int v31; // eax
  struct tagVWPL **v32; // ecx
  unsigned int v33; // eax
  struct tagVWPL **v34; // ecx
  struct tagVWPL **v35; // esi
  struct tagVWPL **v36; // esi
  unsigned __int64 v37; // [esp-1Ch] [ebp-94h]
  char v38; // [esp-4h] [ebp-7Ch]
  int v39; // [esp-4h] [ebp-7Ch]
  struct tagTHREADINFO *v40; // [esp+0h] [ebp-78h]
  const struct tagTHREADINFO *v41; // [esp+0h] [ebp-78h]
  const struct tagTHREADINFO *v42; // [esp+0h] [ebp-78h]
  struct tagWND *v43; // [esp+4h] [ebp-74h]
  const struct tagWND *v44; // [esp+4h] [ebp-74h]
  int v46; // [esp+10h] [ebp-68h]
  _DWORD *v47; // [esp+10h] [ebp-68h]
  int v48; // [esp+14h] [ebp-64h]
  int v49; // [esp+18h] [ebp-60h]
  unsigned int v50; // [esp+1Ch] [ebp-5Ch]
  unsigned int v51; // [esp+1Ch] [ebp-5Ch]
  int v52; // [esp+20h] [ebp-58h]
  int v53; // [esp+24h] [ebp-54h]
  _DWORD *v54; // [esp+24h] [ebp-54h]
  int v55; // [esp+24h] [ebp-54h]
  int v56; // [esp+2Ch] [ebp-4Ch]
  int v57; // [esp+30h] [ebp-48h] BYREF
  int v58; // [esp+34h] [ebp-44h]
  int v59; // [esp+38h] [ebp-40h] BYREF
  int v60; // [esp+3Ch] [ebp-3Ch]
  unsigned int v61[2]; // [esp+40h] [ebp-38h] BYREF
  int v62; // [esp+48h] [ebp-30h] BYREF
  struct tagVWPL **v63; // [esp+4Ch] [ebp-2Ch]
  int v64; // [esp+50h] [ebp-28h]
  _BYTE v65[12]; // [esp+54h] [ebp-24h] BYREF
  _BYTE v66[12]; // [esp+60h] [ebp-18h] BYREF
  _BYTE v67[12]; // [esp+6Ch] [ebp-Ch] BYREF
  int v68; // [esp+80h] [ebp+8h]

  memset(v66, 0, sizeof(v66));
  memset(v65, 0, sizeof(v65));
  memset(v67, 0, sizeof(v67));
  v5 = 0;
  v61[0] = 0;
  v61[1] = 0;
  v59 = 0;
  v60 = 0;
  v57 = 0;
  v58 = 0;
  SetSystemInputSource(v61);
  if ( a1
    && (*(_DWORD *)(a1 + 12) != _grpdeskRitInput
     || *(char *)(*(_DWORD *)(a1 + 20) + 11) < 0
     || IsWindowUnderActiveLockScreen(a1)) )
  {
    return 0;
  }
  if ( a2 )
    LockW32Thread(a2, v67);
  _gppiLockSFW = 0;
  v6 = _gptiForeground;
  v49 = _gptiForeground;
  if ( !_gptiForeground || (*(_BYTE *)(_gptiForeground + 264) & 1) != 0 )
  {
    v6 = 0;
    v49 = 0;
  }
  else
  {
    LockW32Thread(_gptiForeground, v66);
  }
  _gpqForegroundPrev = _gpqForeground;
  if ( a1 )
  {
    v48 = *(_DWORD *)(a1 + 8);
    SetNewForegroundQueue(*(_DWORD *)(v48 + 236));
    LockW32Thread(v48, v65);
  }
  else
  {
    v48 = 0;
    SetNewForegroundQueue(0);
  }
  xxxSetForegroundThreadWithWindowHint(v40, v43);
  if ( (a3 & 0x20) == 0 )
  {
    if ( _gpqForeground )
    {
      v59 = *(_DWORD *)(_gpqForeground + 316);
      v60 = *(_DWORD *)(_gpqForeground + 320);
    }
    if ( _gpqForegroundPrev )
    {
      v57 = *(_DWORD *)(_gpqForegroundPrev + 316);
      v58 = *(_DWORD *)(_gpqForegroundPrev + 320);
    }
    if ( !(unsigned __int8)CheckAccess(&v59, &v57) )
    {
      ClearKeyboardToggleStates();
      anonymous_namespace_::UpdateKeyStateFlag();
    }
  }
  if ( _gpqForeground
    && _gpqForeground != _gpqForegroundPrev
    && *(_DWORD *)(_gpqForeground + 60)
    && *((char *)&_gpdwCPUserPreferencesMask + 4) >= 0 )
  {
    xxxApplyGlobalInputSettings();
  }
  if ( _gpqForeground == _gpqForegroundPrev )
    goto LABEL_96;
  if ( _gpqForegroundPrev )
  {
    v7 = *(_DWORD *)(_gpqForegroundPrev + 60);
    if ( v7 )
      zzzInputFocusLostWindowEvent(v7, 1);
  }
  if ( _gpqForeground && *(_DWORD *)(_gpqForeground + 60) )
    zzzInputFocusReceivedWindowEvent((void *)1);
  v8 = a2;
  if ( a2 )
  {
    xxxCancelTracking();
    CCursorClip::ClearClip(_gpCursorClip);
    zzzLockWindowUpdate2(0, 1);
    LOBYTE(v9) = 0;
    xxxMakeWindowForegroundWithState(0, v9);
    v8 = a2;
  }
  v10 = 0;
  v46 = 0;
  if ( v6 && (*(_BYTE *)(v6 + 264) & 1) == 0 )
  {
    v10 = *(_DWORD *)(v6 + 236);
    v46 = v10;
  }
  v11 = 0;
  if ( v8 )
    v11 = *(_DWORD *)(v8 + 236);
  v52 = 0;
  if ( v10 && v10 != v11 )
  {
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v10);
    v53 = AllocQEntry(v46 + 12);
    if ( !v53 )
      goto LABEL_125;
    v50 = 0;
    if ( a1 && _GetTopLevelWindow(a1) && CoreWindowProp::IsComponent(v41) )
      v50 = CoreWindowProp::IsHostThreadOf(v41, v44) != 0;
    if ( _gptiForeground )
      ThreadId = (struct tagWND *)PsGetThreadId((PETHREAD)*_gptiForeground);
    else
      ThreadId = 0;
    v13 = *(_DWORD *)(v46 + 64);
    if ( v13 )
      v14 = *(_DWORD *)(v13 + 8);
    else
      v14 = *(_DWORD *)(v46 + 52);
    HIDWORD(v37) = v50;
    LODWORD(v37) = 5;
    StoreQMessage(
      0,
      ThreadId,
      0,
      0,
      0,
      0,
      v37,
      0,
      (unsigned int)v61,
      *(_DWORD *)(*(_DWORD *)(v14 + 232) + 156),
      0,
      0,
      v41,
      v44);
    if ( v6 )
    {
      *(_DWORD *)(v53 + 68) = v6;
      SetWakeBit(v6, 8256);
    }
    v15 = v46;
    if ( !*(_DWORD *)(v46 + 64) )
      goto LABEL_54;
    if ( v6 )
    {
      if ( IsThreadHung((_DWORD *)v6, 0) )
      {
        v64 = 0;
        v34 = *(struct tagVWPL ***)(v46 + 64);
        v62 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v62;
        v63 = v34;
        HMLockObject(v34);
        v35 = *(struct tagVWPL ***)(v46 + 64);
        ClearHungFlag(v35);
        ProcessHungWindow(v35);
        ThreadUnlock1();
        v6 = v49;
        goto LABEL_54;
      }
      v15 = v46;
    }
    SetHungFlag(*(struct tagVWPL ***)(v15 + 64), 784);
LABEL_54:
    v8 = a2;
  }
  v16 = 0;
  v47 = 0;
  if ( v48 && (*(_BYTE *)(v48 + 264) & 1) == 0 )
  {
    v16 = *(_DWORD **)(v48 + 236);
    v47 = v16;
  }
  v54 = 0;
  v17 = 0;
  if ( v8 )
  {
    v17 = *(_DWORD **)(v8 + 236);
    v54 = v17;
  }
  if ( !v16 )
  {
LABEL_81:
    v23 = 0;
    if ( v6 && (*(_BYTE *)(v6 + 264) & 1) == 0 )
      v23 = *(_DWORD *)(v6 + 236);
    v24 = 0;
    if ( v8 )
      v24 = *(_DWORD *)(v8 + 236);
    if ( v23 )
    {
      if ( v23 == v24 )
      {
        if ( a1 )
        {
          if ( _GetTopLevelWindow(a1) && CoreWindowProp::IsComponent(v41) && CoreWindowProp::IsHostThreadOf(v42, v44) )
            v5 = 1;
          v30 = PsGetThreadId(**(PETHREAD **)(a1 + 8));
        }
        else
        {
          v30 = 0;
        }
        v38 = v5;
        v25 = a2;
        xxxDeactivate(a2, (int)v30, v38);
      }
      else
      {
        v25 = a2;
      }
      v26 = 1;
      goto LABEL_98;
    }
    goto LABEL_96;
  }
  if ( v16 != v17 )
  {
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v16);
    v52 = AllocQEntry(v47 + 3);
    if ( !v52 )
    {
LABEL_125:
      v26 = 0;
      goto LABEL_97;
    }
  }
  v56 = anonymous_namespace_::RemoveEventMessage(-1);
  if ( v47 != v54 )
  {
    if ( (v54 || (a3 & 2) != 0) && a1 )
      v51 = *(_DWORD *)a1;
    else
      v51 = 0;
    if ( v56 )
      v47[71] |= 0x8000u;
    v18 = (a3 >> 4) & 1;
    v55 = v18;
    if ( (a3 & 4) != 0 )
    {
      v18 |= 2u;
      v55 = v18;
    }
    if ( (a3 & 1) == 0 && v6 )
    {
      v29 = (struct tagWND *)PsGetThreadId(*(PETHREAD *)v6);
      v18 = v55;
      v19 = v29;
    }
    else
    {
      v19 = 0;
    }
    v20 = v47[16];
    if ( v20 )
      v21 = *(_DWORD *)(v20 + 8);
    else
      v21 = v47[13];
    StoreQMessage(
      (struct tagQMSG *)v18,
      v19,
      v51,
      0,
      0,
      0,
      6uLL,
      0,
      (unsigned int)v61,
      *(_DWORD *)(*(_DWORD *)(v21 + 232) + 156),
      0,
      0,
      v41,
      v44);
    *(_DWORD *)(v52 + 68) = v48;
    SetWakeBit(v48, 8256);
    if ( v47[16] )
    {
      v31 = IsThreadHung((_DWORD *)v48, 0);
      v32 = (struct tagVWPL **)v47[16];
      if ( v31 )
      {
        v39 = v47[16];
        v64 = 0;
        v63 = v32;
        v62 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v62;
        HMLockObject(v39);
        v36 = (struct tagVWPL **)v47[16];
        ClearHungFlag(v36);
        ProcessHungWindow(v36);
        ThreadUnlock1();
      }
      else
      {
        SetHungFlag(v32, 784);
      }
    }
LABEL_77:
    v22 = a3;
LABEL_78:
    if ( (v22 & 0x40) == 0 )
      xxxDeliverRestoreFocusMessage(v41);
    v8 = a2;
    v6 = v49;
    goto LABEL_81;
  }
  if ( a1 == v54[16] )
  {
    v33 = 0;
    if ( a1 )
      v33 = *(_DWORD *)a1;
    anonymous_namespace_::xxxSendNCActivateMessage(a1, 1, v33);
    xxxUpdateTray(v41);
    v22 = a3;
    if ( (a3 & 4) != 0 )
      goto LABEL_78;
    xxxSetWindowPos(a1, 0, 0, 0, 0, 0, 3);
    goto LABEL_77;
  }
  v22 = a3;
  if ( (a3 & 1) != 0 )
    goto LABEL_78;
  v27 = ~(16 * (_BYTE)a3) & 0x80;
  v68 = v27;
  if ( v6 )
  {
    PsGetThreadId(*(PETHREAD *)v6);
    v27 = v68;
  }
  anonymous_namespace_::xxxLocalActivateWindow(v27);
  if ( ((unsigned __int8)_gpdwCPUserPreferencesMask & 1) != 0 )
    zzzActiveCursorTracking(a1);
LABEL_96:
  v26 = 1;
LABEL_97:
  v25 = a2;
LABEL_98:
  if ( v48 )
    PopAndFreeW32ThreadLock(v65);
  if ( v6 )
    PopAndFreeW32ThreadLock(v66);
  if ( v25 )
    PopAndFreeW32ThreadLock(v67);
  return v26;
}
