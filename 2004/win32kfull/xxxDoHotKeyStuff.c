/*
 * XREFs of xxxDoHotKeyStuff @ 0x1C0054B90
 * Callers:
 *     EditionDoHotKeys @ 0x1C0054B40 (EditionDoHotKeys.c)
 * Callees:
 *     DoExplorerHangDetection @ 0x1C0008C80 (DoExplorerHangDetection.c)
 *     _SetMagnificationInputTransform @ 0x1C000EE90 (_SetMagnificationInputTransform.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzCancelJournalling @ 0x1C004BD98 (zzzCancelJournalling.c)
 *     IsUninterceptable @ 0x1C0054B04 (IsUninterceptable.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00550C4 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     IsHotKey @ 0x1C0055160 (IsHotKey.c)
 *     IsSAS @ 0x1C0055240 (IsSAS.c)
 *     HasRawInputForegroundTarget @ 0x1C0055494 (HasRawInputForegroundTarget.c)
 *     ?IsPenQuickLaunchHotKey@@YA_NII@Z @ 0x1C005554C (-IsPenQuickLaunchHotKey@@YA_NII@Z.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C006165C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00938D0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     _PostThreadMessageEx @ 0x1C00BE914 (_PostThreadMessageEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01EB0F0 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01EB28C (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4444@Z @ 0x1C0225560 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U2@.c)
 *     ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1C0225DC0 (-TraceLoggingPenHotkey@@YAXII@Z.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1C02261DC (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C02264C8 (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     xxxActivateDebugger @ 0x1C02492D8 (xxxActivateDebugger.c)
 */

__int64 __fastcall xxxDoHotKeyStuff(unsigned int a1, int a2, int a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  unsigned int v9; // edi
  int v10; // r13d
  __int64 v11; // rcx
  unsigned int *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v16; // eax
  int v17; // edx
  __int16 v18; // r15
  unsigned int v19; // eax
  __int16 v20; // r15
  void (__fastcall *v21)(_QWORD, _QWORD); // r8
  __int64 v22; // r14
  signed int v23; // r12d
  struct tagTHREADINFO *v24; // r13
  __int64 v25; // rax
  __int64 v26; // r9
  struct tagINPUT_MESSAGE_SOURCE *v27; // rdi
  struct tagTHREADINFO *v28; // rdx
  unsigned int v29; // edi
  __int64 v30; // rax
  __int64 v31; // r9
  __int16 v32; // r15
  bool v33; // zf
  bool v34; // zf
  __int64 v35; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r8
  int v41; // r9d
  unsigned int *i; // rax
  int v43; // [rsp+28h] [rbp-A1h]
  char v44; // [rsp+30h] [rbp-99h]
  void (__fastcall *v45)(_QWORD, _QWORD); // [rsp+60h] [rbp-69h] BYREF
  int v46; // [rsp+68h] [rbp-61h] BYREF
  int v47; // [rsp+6Ch] [rbp-5Dh] BYREF
  int v48; // [rsp+70h] [rbp-59h] BYREF
  BOOL v49; // [rsp+74h] [rbp-55h] BYREF
  char v50[8]; // [rsp+78h] [rbp-51h] BYREF
  __int64 v51; // [rsp+80h] [rbp-49h] BYREF
  __int128 v52; // [rsp+88h] [rbp-41h] BYREF
  __int64 v53; // [rsp+98h] [rbp-31h]
  _QWORD v54[3]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-11h] BYREF
  __int128 v56; // [rsp+C0h] [rbp-9h]
  __int64 v57; // [rsp+D0h] [rbp+7h]
  int v58; // [rsp+D8h] [rbp+Fh]
  char v59; // [rsp+130h] [rbp+67h] BYREF
  unsigned int v60; // [rsp+138h] [rbp+6Fh]
  int v61; // [rsp+140h] [rbp+77h]
  struct tagINPUT_MESSAGE_SOURCE *v62; // [rsp+148h] [rbp+7Fh]

  v62 = a4;
  v61 = a3;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v50);
  v7 = 0;
  v60 = 0;
  v8 = 0;
  v9 = 0;
  switch ( a1 )
  {
    case 0x10u:
      v8 = 4;
      break;
    case 0x11u:
      v8 = 2;
      break;
    case 0x12u:
      v8 = 1;
      break;
    default:
      if ( a1 <= 0x5A || a1 > 0x5C )
        gfsModOnlyCandidate = 0;
      else
        v8 = 8;
      break;
  }
  if ( a2 )
  {
    gfsModifiers &= ~v8;
    if ( v8 )
    {
      v9 = gfsModOnlyCandidate;
      v60 = gfsModOnlyCandidate;
      gfsModOnlyCandidate = 0;
    }
    if ( qword_1C033AAA0 )
      qword_1C033AAA0 = 0LL;
  }
  else
  {
    v16 = v8 | gfsModifiers;
    gfsModifiers |= v8;
    if ( v8 )
      gfsModOnlyCandidate = v16;
  }
  LOBYTE(v6) = a1;
  v10 = IsSAS(v6, &gfsModifiers);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v50);
  if ( a1 == 174 )
  {
    if ( a2 )
    {
LABEL_95:
      gbVolumeDownPressed = 0;
      goto LABEL_13;
    }
    if ( !gbVolumeUpPressed )
    {
      gbVolumeDownPressed = 1;
      goto LABEL_13;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_92:
    gbVolumeUpPressed = 0;
    goto LABEL_13;
  }
  if ( a1 != 175 )
    goto LABEL_13;
  if ( a2 )
    goto LABEL_92;
  if ( gbVolumeDownPressed )
  {
    xxxHandleVolumeUpDownCombo();
    goto LABEL_95;
  }
  gbVolumeUpPressed = 1;
LABEL_13:
  if ( !v10 && (gfInNumpadHexInput & 1) != 0 )
    return 0LL;
  if ( v9 && a2 )
  {
    v12 = (unsigned int *)IsHotKey(v9);
  }
  else
  {
    v12 = (unsigned int *)IsHotKey(gfsModifiers);
    if ( !v12 || !v10 )
    {
      v13 = IsUninterceptable();
      if ( v13 )
        v12 = (unsigned int *)v13;
    }
  }
  if ( v12 || !a2 && (gfsModifiers & 8) != 0 && (a1 - 19 <= 0x47 || a1 <= 0xF || a1 - 93 <= 0x22) )
  {
    v17 = 0;
    if ( v12 )
    {
      if ( *(_QWORD *)v12 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)v12 + 416LL);
        if ( v11 )
          v17 = *(_DWORD *)(v11 + 56);
      }
    }
    if ( (unsigned int)dword_1C032B3F8 > 5
      && (qword_1C032B408 & 0x400000000000LL) != 0
      && (qword_1C032B410 & 0x400000000000LL) == qword_1C032B410 )
    {
      v46 = v17;
      v47 = v17;
      v48 = a2;
      v49 = v12 != 0LL;
      v59 = a1;
      LODWORD(v45) = gfsModifiers;
      v51 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned int)&unk_1C02F14FC,
        v49,
        gfsModifiers,
        (__int64)&v51,
        (__int64)&v45,
        (__int64)&v59,
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v46);
    }
    if ( v12 && gbLockScreenActive && !v10 && (*((_WORD *)v12 + 13) & 0x2000) == 0 )
      return 0LL;
  }
  WindowArrangementSequence::TestSequence(
    (WindowArrangementSequence *)v12,
    (const struct tagHOTKEY *const)a1,
    v8,
    gfsModifiers,
    a2 == 0,
    v43);
  if ( !v12 )
    return 0LL;
  v18 = *((_WORD *)v12 + 13);
  if ( v18 < 0 && !v10 && v62 && *((_DWORD *)v62 + 1) != 4 )
    return 0LL;
  v53 = 0LL;
  v52 = 0LL;
  if ( (v18 & 0x8800) == 0
    && (unsigned int)HasRawInputForegroundTarget(&v52)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v52 + 1) + 416LL) + 832LL) + 100LL) & 0x200) != 0 )
  {
    return 0LL;
  }
  v19 = v12[8];
  if ( v19 == -7 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 168LL);
    if ( v22 )
    {
      gfsModOnlyCandidate = 0;
      goto LABEL_81;
    }
  }
  else if ( v19 + 6 <= 1 )
  {
    if ( !a2 )
      return (unsigned int)xxxActivateDebugger(*((unsigned __int16 *)v12 + 12));
    return v7;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 64LL) & 1) != 0
    && *(PVOID *)(*(_QWORD *)v12 + 448LL) != grpdeskLogon
    && !*((_QWORD *)v12 + 1)
    && gbLockScreenActive
    && (v18 & 0x2000) == 0
    || !v60 && a2 )
  {
    return 0LL;
  }
  if ( v10 || a1 == 27 && gfsModifiers == 2 )
  {
    zzzCancelJournalling();
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 216LL) )
    {
      v55 = 0LL;
      v57 = 0LL;
      v56 = 0LL;
      v58 = 3;
      SetMagnificationInputTransform((__int128 *)&v55);
    }
    CancelCapturedMipOverride();
  }
  if ( v61 )
  {
    switch ( a1 )
    {
      case 9u:
        v34 = (v61 & 1) == 0;
        break;
      case 0xDu:
        v34 = (v61 & 8) == 0;
        break;
      case 0x1Bu:
        if ( (v61 & 2) != 0 && (gfsModifiers & 3) == 1 )
          return 0LL;
        if ( (v61 & 0x40) == 0 )
          goto LABEL_54;
        v33 = (gfsModifiers & 3) == 2;
        goto LABEL_136;
      case 0x20u:
        v34 = (v61 & 4) == 0;
        break;
      case 0x2Cu:
        v14 = gfsModifiers & 3;
        if ( (gfsModifiers & 3) == 0 && (v61 & 0x20) != 0 )
          return 0LL;
        if ( (v61 & 0x10) == 0 )
          goto LABEL_54;
        v33 = (_DWORD)v14 == 1;
LABEL_136:
        if ( v33 )
          return 0LL;
        goto LABEL_54;
      default:
        goto LABEL_54;
    }
    if ( v34 )
      goto LABEL_54;
    v33 = (gfsModifiers & 3) == 1;
    goto LABEL_136;
  }
LABEL_54:
  if ( gfsModifiers == 2 && a1 == 27 && !a2 )
  {
    v54[2] = 0LL;
    if ( ghwndSwitch )
    {
      LOBYTE(v14) = 1;
      v35 = HMValidateHandleNoSecure(ghwndSwitch, v14);
      if ( v35 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v54[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v54;
        v54[1] = v35;
        HMLockObject(v35);
        xxxSetForegroundWindow2(v35, 0LL, 0);
        ThreadUnlock1(v38, v37, v39);
      }
    }
  }
  if ( (*((_WORD *)v12 + 13) & 0x1000) == 0 )
  {
    if ( IsPenQuickLaunchHotKey(gfsModifiers, a1) )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (unsigned int)&Feature_QuickLaunchInvocation__private_reporting,
        9100606,
        0,
        0,
        (__int64)&Feature_QuickLaunchInvocation_logged_traits,
        1,
        v44);
      if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                            - RIMGetLastInvertedPenTime()) < 0xFA )
      {
        TraceLoggingSuppressQuickLaunch();
        return 0LL;
      }
    }
    v20 = *((_WORD *)v12 + 13);
    v21 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v12 + 1);
    v22 = *((_QWORD *)v12 + 2);
    v23 = v12[8];
    v24 = *(struct tagTHREADINFO **)v12;
    v45 = v21;
    if ( (v20 & 0x200) != 0 )
    {
      if ( gpqForeground
        && *(_QWORD *)(gpqForeground + 120LL)
        && (!IsPenQuickLaunchHotKey(gfsModifiers, a1) || (v41 & HIDWORD(gpdwCPUserPreferencesMask)) == 0) )
      {
        for ( i = (unsigned int *)*((_QWORD *)v12 + 6); i != v12 + 12; i = *(unsigned int **)i )
        {
          if ( *(_QWORD *)(*((_QWORD *)i - 3) + 424LL) == v40 )
          {
            v24 = (struct tagTHREADINFO *)*((_QWORD *)i - 3);
            v22 = *((_QWORD *)i - 2);
            v23 = *(i - 1);
            v20 = *((_WORD *)i - 4);
            TraceLoggingYieldedHotkey(*((unsigned __int16 *)v12 + 12), v12[7]);
            v21 = 0LL;
            goto LABEL_58;
          }
        }
      }
      v21 = v45;
    }
LABEL_58:
    if ( (v20 & 0x100) != 0 )
      goto LABEL_70;
    if ( !v22 )
    {
      v30 = qword_1C033AAA0;
      v31 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
      v32 = v20 & 0x4000;
      if ( v21 )
      {
        if ( !v32 || v31 != qword_1C033AAA0 )
        {
          if ( qword_1C033AAA0 != v31 )
            v30 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
          qword_1C033AAA0 = v30;
          v21(v23, (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16));
        }
        goto LABEL_70;
      }
      if ( v32 && v31 == qword_1C033AAA0 )
      {
        v27 = v62;
      }
      else
      {
        v27 = v62;
        if ( qword_1C033AAA0 != v31 )
          v30 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
        qword_1C033AAA0 = v30;
        PostThreadMessageEx(v24, 786LL, v23);
      }
      v28 = v24;
LABEL_69:
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v28, *((_DWORD *)v27 + 1) == 1);
LABEL_70:
      v29 = gfsModifiers;
      if ( (gfsModifiers & 8) != 0 && a1 - 129 <= 2 )
      {
        ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL, 0LL, *(_QWORD *)&gSessionId, 0, 0);
        TraceLoggingPenHotkey(v29, a1);
      }
      LOBYTE(v7) = v60 == 0;
      return v7;
    }
    if ( v22 == 1 )
    {
      if ( !gpqForeground )
        return 0LL;
      v22 = *(_QWORD *)(gpqForeground + 112LL);
    }
    if ( !v22 )
      goto LABEL_70;
    if ( v22 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 24) + 8LL) + 168LL) || v23 != 61744 )
    {
      v25 = qword_1C033AAA0;
      v26 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
      if ( (v20 & 0x4000) != 0 && v26 == qword_1C033AAA0 )
      {
        v27 = v62;
      }
      else
      {
        v27 = v62;
        if ( qword_1C033AAA0 != v26 )
          v25 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
        qword_1C033AAA0 = v25;
        _PostTransformableMessageExtended((struct tagWND *)v22, 0x312u, v23, v26, v62, 1);
      }
      goto LABEL_68;
    }
LABEL_81:
    DoExplorerHangDetection(*(struct tagDESKTOP **)(v22 + 24));
    PostMessage(v22, 274LL, 61744LL, 0LL);
    v27 = v62;
    if ( qword_1C033AAA0 )
      qword_1C033AAA0 = 0LL;
LABEL_68:
    v28 = *(struct tagTHREADINFO **)(v22 + 16);
    goto LABEL_69;
  }
  return HandleIAMHotKey((const struct tagHOTKEY *const)v12);
}
