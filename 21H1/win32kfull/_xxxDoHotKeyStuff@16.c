/*
 * XREFs of _xxxDoHotKeyStuff@16 @ 0xB182C
 * Callers:
 *     _EditionDoHotKeys@24 @ 0xB17F4 (_EditionDoHotKeys@24.c)
 * Callees:
 *     _DoExplorerHangDetection@4 @ 0x11B94 (_DoExplorerHangDetection@4.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     __PostThreadMessageEx@20 @ 0x82662 (__PostThreadMessageEx@20.c)
 *     _zzzCancelJournalling@0 @ 0xB07D0 (_zzzCancelJournalling@0.c)
 *     _IsUninterceptable@8 @ 0xB17D0 (_IsUninterceptable@8.c)
 *     ?TestSequence@WindowArrangementSequence@@YGXQBUtagHOTKEY@@IIIH@Z @ 0xB1C6E (-TestSequence@WindowArrangementSequence@@YGXQBUtagHOTKEY@@IIIH@Z.c)
 *     _IsHotKey@8 @ 0xB1CD0 (_IsHotKey@8.c)
 *     _IsSAS@8 @ 0xB1D3C (_IsSAS@8.c)
 *     _HasRawInputForegroundTarget@4 @ 0xB1EA0 (_HasRawInputForegroundTarget@4.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YG_NII@Z @ 0xC5696 (-IsPenQuickLaunchAndShouldBeDisabled@@YG_NII@Z.c)
 *     ?IsPenQuickLaunchHotKey@@YG_NII@Z @ 0xC5744 (-IsPenQuickLaunchHotKey@@YG_NII@Z.c)
 *     __SetMagnificationInputTransform@4 @ 0xCF572 (__SetMagnificationInputTransform@4.c)
 *     ?HKFindChildHotkeyForQueue@@YG_NPAUtagQ@@PAUtagHOTKEY@@PAPAUtagCHILDHOTKEY@@@Z @ 0x155E07 (-HKFindChildHotkeyForQueue@@YG_NPAUtagQ@@PAUtagHOTKEY@@PAPAUtagCHILDHOTKEY@@@Z.c)
 *     ?HandleIAMHotKey@@YGHQBUtagHOTKEY@@@Z @ 0x155E40 (-HandleIAMHotKey@@YGHQBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YGXXZ @ 0x155F5F (-xxxHandleVolumeUpDownCombo@@YGXXZ.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapperByVal@$00@@4444@Z @ 0x1865BF (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U2@.c)
 *     ?TraceLoggingPenHotkey@@YGXII@Z @ 0x186D0F (-TraceLoggingPenHotkey@@YGXII@Z.c)
 *     ?TraceLoggingYieldedHotkey@@YGXII@Z @ 0x18726B (-TraceLoggingYieldedHotkey@@YGXII@Z.c)
 *     _xxxActivateDebugger@4 @ 0x1A606B (_xxxActivateDebugger@4.c)
 */

int __fastcall xxxDoHotKeyStuff(unsigned int a1, int a2, int a3, _DWORD *a4)
{
  int v6; // esi
  int v7; // ecx
  struct tagTHREADINFO *v8; // edi
  int v9; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // edi
  int v16; // eax
  WindowArrangementSequence *v17; // ecx
  int v18; // eax
  int v19; // edx
  bool v20; // zf
  bool v21; // zf
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v24; // edx
  __int16 v25; // di
  int v26; // ecx
  struct tagTHREADINFO *v27; // edi
  int v28; // [esp-4h] [ebp-7Ch]
  unsigned int v29; // [esp+0h] [ebp-78h]
  const struct tagHOTKEY *v30; // [esp+0h] [ebp-78h]
  unsigned int v31; // [esp+4h] [ebp-74h]
  struct tagCHILDHOTKEY **v32; // [esp+4h] [ebp-74h]
  int v33; // [esp+8h] [ebp-70h]
  char v34; // [esp+13h] [ebp-65h] BYREF
  WindowArrangementSequence *v35; // [esp+14h] [ebp-64h]
  int v36; // [esp+18h] [ebp-60h]
  struct tagWND *v37; // [esp+1Ch] [ebp-5Ch]
  unsigned int v38; // [esp+20h] [ebp-58h]
  struct tagTHREADINFO *v39; // [esp+24h] [ebp-54h]
  int v40; // [esp+28h] [ebp-50h] BYREF
  void (__stdcall *v41)(struct tagWND *, int); // [esp+2Ch] [ebp-4Ch] BYREF
  int v42; // [esp+30h] [ebp-48h] BYREF
  BOOL v43; // [esp+34h] [ebp-44h] BYREF
  struct tagHOTKEY *v44; // [esp+38h] [ebp-40h] BYREF
  int *v45; // [esp+3Ch] [ebp-3Ch] BYREF
  int v46; // [esp+40h] [ebp-38h] BYREF
  int v47; // [esp+44h] [ebp-34h]
  int v48; // [esp+48h] [ebp-30h]
  _DWORD v49[9]; // [esp+54h] [ebp-24h] BYREF

  v36 = a2;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v46);
  v6 = 0;
  v38 = 0;
  v7 = 0;
  v35 = 0;
  switch ( a1 )
  {
    case 0x11u:
      v28 = 2;
      break;
    case 0x12u:
      v7 = 1;
      goto LABEL_30;
    case 0x10u:
      v28 = 4;
      break;
    default:
      if ( a1 <= 0x5A || a1 > 0x5C )
      {
        gfsModOnlyCandidate = 0;
        goto LABEL_6;
      }
      v28 = 8;
      break;
  }
  v7 = v28;
LABEL_30:
  v35 = (WindowArrangementSequence *)v7;
LABEL_6:
  if ( a2 )
  {
    gfsModifiers = (struct tagHOTKEY *)(~v7 & (unsigned int)gfsModifiers);
    if ( v7 )
    {
      v38 = gfsModOnlyCandidate;
      gfsModOnlyCandidate = 0;
    }
    if ( dword_273864 )
      dword_273864 = 0;
  }
  else
  {
    v11 = v7 | (unsigned int)gfsModifiers;
    gfsModifiers = (struct tagHOTKEY *)(v7 | (unsigned int)gfsModifiers);
    if ( v7 )
      gfsModOnlyCandidate = v11;
  }
  LOBYTE(v7) = a1;
  v37 = (struct tagWND *)IsSAS(v7, &gfsModifiers);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v46);
  if ( a1 == 174 )
  {
    if ( a2 )
    {
LABEL_89:
      gbVolumeDownPressed = 0;
      goto LABEL_13;
    }
    if ( !gbVolumeUpPressed )
    {
      gbVolumeDownPressed = 1;
      goto LABEL_13;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_86:
    gbVolumeUpPressed = 0;
    goto LABEL_13;
  }
  if ( a1 != 175 )
    goto LABEL_13;
  if ( a2 )
    goto LABEL_86;
  if ( gbVolumeDownPressed )
  {
    xxxHandleVolumeUpDownCombo();
    goto LABEL_89;
  }
  gbVolumeUpPressed = 1;
LABEL_13:
  if ( !v37 && (_gfInNumpadHexInput & 1) != 0 )
    return 0;
  if ( v38 && a2 )
  {
    v8 = (struct tagTHREADINFO *)IsHotKey(v38);
    v39 = v8;
  }
  else
  {
    v8 = (struct tagTHREADINFO *)IsHotKey(gfsModifiers);
    v39 = v8;
    if ( !v8 || !v37 )
    {
      v9 = IsUninterceptable();
      if ( v9 )
      {
        v8 = (struct tagTHREADINFO *)v9;
        v39 = (struct tagTHREADINFO *)v9;
      }
    }
  }
  if ( v8
    || !v36
    && ((unsigned __int8)gfsModifiers & 8) != 0
    && a1 != 91
    && a1 != 92
    && a1 != 16
    && a1 != 17
    && a1 != 18
    && a1 <= 0x7F )
  {
    v40 = 0;
    if ( v8 )
    {
      if ( *(_DWORD *)v8 )
      {
        v12 = *(_DWORD *)(*(_DWORD *)v8 + 232);
        if ( v12 )
          v40 = *(_DWORD *)(v12 + 32);
      }
    }
    if ( (unsigned int)dword_266280 > 5 && (unsigned __int8)_tlgKeywordOn(0, 0x4000) )
    {
      v41 = (void (__stdcall *)(struct tagWND *, int))v40;
      v42 = v36;
      v46 = 0x2000000;
      v47 = 0;
      v34 = a1;
      v43 = v8 != 0;
      v44 = gfsModifiers;
      v45 = &v46;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        v13,
        &v45,
        &v44,
        &v34,
        &v43,
        &v42,
        &v40,
        &v41);
    }
    if ( v8 && _gbLockScreenActive && !v37 && (*((_WORD *)v8 + 7) & 0x2000) == 0 )
      return 0;
  }
  WindowArrangementSequence::TestSequence(v35, gfsModifiers, v36 == 0, v29, v31, v33);
  if ( !v8 )
    return 0;
  v14 = *((unsigned __int16 *)v8 + 7);
  v40 = v14;
  if ( (v14 & 0x8000u) != 0 && !v37 && a4 && a4[1] != 4 )
    return 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  if ( (v14 & 0x8800) == 0 )
  {
    if ( HasRawInputForegroundTarget(&v46) && (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v47 + 232) + 472) + 52) & 0x200) != 0 )
      return 0;
    LOWORD(v14) = v40;
  }
  v15 = (int)v39;
  v16 = *((_DWORD *)v39 + 5);
  if ( v16 == -7 )
  {
    v35 = *(WindowArrangementSequence **)(*(_DWORD *)(_gptiCurrent + 252) + 84);
    if ( v35 )
    {
      gfsModOnlyCandidate = 0;
      goto LABEL_81;
    }
LABEL_51:
    if ( (*(_BYTE *)(*(_DWORD *)(_grpdeskRitInput + 20) + 32) & 1) != 0
      && *(PVOID *)(*(_DWORD *)v39 + 248) != grpdeskLogon
      && !*((_DWORD *)v39 + 1)
      && _gbLockScreenActive
      && (v14 & 0x2000) == 0
      || v36 && !v38 )
    {
      return 0;
    }
    if ( v37 || a1 == 27 && gfsModifiers == (struct tagHOTKEY *)2 )
    {
      zzzCancelJournalling();
      if ( *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 128) )
      {
        memset(v49, 0, 32);
        v49[8] = 3;
        _SetMagnificationInputTransform(v49);
      }
      CancelCapturedMipOverride();
    }
    if ( !a3 )
      goto LABEL_56;
    if ( a1 == 9 )
    {
      v21 = (a3 & 1) == 0;
    }
    else if ( a1 == 13 )
    {
      v21 = (a3 & 8) == 0;
    }
    else
    {
      if ( a1 == 27 )
      {
        if ( (a3 & 2) != 0 && ((unsigned __int8)gfsModifiers & 3) == 1 )
          return 0;
        if ( (a3 & 0x40) == 0 )
          goto LABEL_56;
        v20 = ((unsigned __int8)gfsModifiers & 3) == 2;
        goto LABEL_134;
      }
      if ( a1 != 32 )
      {
        if ( a1 == 44 )
        {
          v45 = (int *)((unsigned __int8)gfsModifiers & 3);
          if ( v45 == 0 && (a3 & 0x20) != 0 )
            return 0;
          if ( (a3 & 0x10) != 0 )
          {
            v20 = v45 == (int *)1;
            goto LABEL_134;
          }
        }
LABEL_56:
        if ( gfsModifiers == (struct tagHOTKEY *)2 && a1 == 27 && !v36 )
        {
          v48 = 0;
          if ( ghwndSwitch )
          {
            v40 = HMValidateHandleNoSecure(ghwndSwitch, 1);
            if ( v40 )
            {
              CurrentThread = KeGetCurrentThread();
              ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
              v46 = *(_DWORD *)(ThreadWin32Thread + 228);
              *(_DWORD *)(ThreadWin32Thread + 228) = &v46;
              v47 = v40;
              HMLockObject(v40);
              xxxSetForegroundWindow2(v40, 0, 0);
              ThreadUnlock1();
            }
          }
        }
        if ( (*(_WORD *)(v15 + 14) & 0x1000) != 0 )
          return HandleIAMHotKey(v30);
        if ( !IsPenQuickLaunchAndShouldBeDisabled((unsigned int)v30, (unsigned int)v32) )
        {
          v17 = *(WindowArrangementSequence **)(v15 + 8);
          v37 = *(struct tagWND **)(v15 + 20);
          v41 = *(void (__stdcall **)(struct tagWND *, int))(v15 + 4);
          v39 = *(struct tagTHREADINFO **)v15;
          v18 = *(unsigned __int16 *)(v15 + 14);
          v35 = v17;
          v36 = v18;
          if ( (v18 & 0x200) != 0 )
          {
            v45 = (int *)_gpqForeground;
            if ( _gpqForeground )
            {
              if ( *(_DWORD *)(_gpqForeground + 64) )
              {
                if ( !IsPenQuickLaunchHotKey((unsigned int)v30, (unsigned int)v32)
                  || ((int)*(&_gpdwCPUserPreferencesMask + 1) & 0x200) == 0 )
                {
                  v40 = 0;
                  if ( HKFindChildHotkeyForQueue((struct tagQ *)&v40, v30, v32) )
                  {
                    v41 = 0;
                    v24 = *(unsigned __int16 *)(v40 + 8);
                    v35 = *(WindowArrangementSequence **)(v40 + 4);
                    v37 = *(struct tagWND **)(v40 + 12);
                    v39 = *(struct tagTHREADINFO **)v40;
                    v36 = v24;
                    TraceLoggingYieldedHotkey((unsigned int)v30, (unsigned int)v32);
                  }
                }
                v17 = v35;
              }
            }
          }
          if ( (v36 & 0x100) != 0 )
            goto LABEL_70;
          if ( !v17 )
          {
            v25 = v36 & 0x4000;
            v26 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
            if ( v41 )
            {
              if ( !v25 || v26 != dword_273864 )
              {
                if ( dword_273864 != v26 )
                  dword_273864 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
                v41(v37, (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16));
              }
            }
            else
            {
              if ( v25 && v26 == dword_273864 )
              {
                v27 = v39;
              }
              else
              {
                if ( dword_273864 != v26 )
                  dword_273864 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
                v27 = v39;
                _PostThreadMessageEx(
                  (int)v39,
                  0x312u,
                  v37,
                  (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16),
                  (unsigned int)a4);
              }
              CInputGlobals::SetPtiLastWoken(_gpInputGlobals, v27, a4[1] == 1);
            }
            goto LABEL_70;
          }
          if ( v17 != (WindowArrangementSequence *)1 )
          {
LABEL_63:
            if ( !v17 )
              goto LABEL_70;
            if ( v17 != *(WindowArrangementSequence **)(*(_DWORD *)(*((_DWORD *)v17 + 3) + 4) + 84)
              || v37 != (struct tagWND *)61744 )
            {
              v19 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
              if ( (v36 & 0x4000) == 0 || v19 != dword_273864 )
              {
                if ( dword_273864 != v19 )
                  dword_273864 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
                _PostTransformableMessageExtended(
                  (struct tagQMSG *)0x312,
                  (int *)v17,
                  v37,
                  (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16),
                  a4,
                  1,
                  v30,
                  (int)v32);
                v17 = v35;
              }
              goto LABEL_69;
            }
LABEL_81:
            DoExplorerHangDetection(v30, (const struct tagTHREADINFO *)v32);
            _PostMessage((int)v35, 274, 61744, 0);
            v17 = v35;
            if ( dword_273864 )
              dword_273864 = 0;
LABEL_69:
            CInputGlobals::SetPtiLastWoken(_gpInputGlobals, *((struct tagTHREADINFO **)v17 + 2), a4[1] == 1);
LABEL_70:
            v45 = (int *)gfsModifiers;
            if ( ((unsigned __int8)gfsModifiers & 8) != 0 && (a1 == 129 || a1 == 130 || a1 == 131) )
            {
              ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0, 0, 0, _gSessionId, 0, 0);
              TraceLoggingPenHotkey((unsigned int)v30, (unsigned int)v32);
            }
            return v38 == 0;
          }
          if ( _gpqForeground )
          {
            v17 = *(WindowArrangementSequence **)(_gpqForeground + 60);
            v35 = v17;
            goto LABEL_63;
          }
        }
        return 0;
      }
      v21 = (a3 & 4) == 0;
    }
    if ( v21 )
      goto LABEL_56;
    v20 = ((unsigned __int8)gfsModifiers & 3) == 1;
LABEL_134:
    if ( v20 )
      return 0;
    goto LABEL_56;
  }
  if ( v16 != -5 && v16 != -6 )
    goto LABEL_51;
  if ( !v36 )
    return xxxActivateDebugger(*((unsigned __int16 *)v39 + 6));
  return v6;
}
