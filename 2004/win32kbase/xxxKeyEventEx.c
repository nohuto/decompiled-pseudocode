/*
 * XREFs of xxxKeyEventEx @ 0x1C0069770
 * Callers:
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C0049E70 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C004D090 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C01A7CEC (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01A7FB8 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A83D0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A8550 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A8790 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A8980 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A8BF0 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A8D10 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     xxxKeyEvent @ 0x1C01ADFB0 (xxxKeyEvent.c)
 *     xxxProcessKeyEvent @ 0x1C01AE000 (xxxProcessKeyEvent.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C01AE374 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C01AE40C (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C0069990 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C006A22C (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ApiSetEditionKeyEventLLHook @ 0x1C006A254 (ApiSetEditionKeyEventLLHook.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C006A414 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     ApiSetEditionUpdateSASModifiers @ 0x1C006A444 (ApiSetEditionUpdateSASModifiers.c)
 *     GetKeyEventInputSource @ 0x1C006A520 (GetKeyEventInputSource.c)
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C006B124 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMAssignmentLock @ 0x1C00748C0 (HMAssignmentLock.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C019F1A4 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C019F2C0 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x1C01ACB24 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgW.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01ACC3C (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01AD18C (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 */

void __fastcall xxxKeyEventEx(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8,
        __int64 a9,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a10)
{
  unsigned int v10; // r14d
  unsigned __int16 *v11; // rbx
  struct tagTHREADINFO *v13; // rax
  int v15; // r12d
  unsigned int v16; // edi
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 KeyboardProcessor; // rax
  int v26; // r14d
  unsigned int v27; // [rsp+58h] [rbp-69h]
  __int64 v28; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v29[2]; // [rsp+70h] [rbp-51h] BYREF
  unsigned int v30; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v31; // [rsp+7Ch] [rbp-45h] BYREF
  BOOL v32; // [rsp+80h] [rbp-41h] BYREF
  unsigned int v33; // [rsp+84h] [rbp-3Dh]
  struct tagTHREADINFO *v34; // [rsp+88h] [rbp-39h]
  __int64 v35; // [rsp+90h] [rbp-31h] BYREF
  __int64 v36; // [rsp+98h] [rbp-29h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-19h]
  _OWORD v39[4]; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v40; // [rsp+108h] [rbp+47h] BYREF
  unsigned int v41; // [rsp+118h] [rbp+57h]
  __int64 v42; // [rsp+120h] [rbp+5Fh]

  v42 = a4;
  v41 = a3;
  *(_QWORD *)v29 = 0LL;
  v10 = 0;
  v11 = a6;
  v13 = gptiCurrent;
  v34 = gptiCurrent;
  if ( a6 )
    v15 = *a6;
  else
    v15 = 0xFFFF;
  LODWORD(a6) = v15;
  v28 = -1LL;
  if ( gpAsyncKeyEventMonitor )
  {
    CAsyncKeyEventMonitor::OnKeyEvent((CAsyncKeyEventMonitor *)0xFFFFFFFFLL);
    v13 = v34;
  }
  v16 = a7;
  v17 = a9;
  if ( a7 )
  {
    if ( a9 )
    {
      v10 = *(_DWORD *)(a9 + 8);
      v20 = *(_QWORD *)a9;
    }
    else
    {
      v18 = *((_QWORD *)v13 + 52);
      v19 = *(_DWORD *)(v18 + 12);
      v20 = *(_QWORD *)(v18 + 880);
      v10 = v19 >> 31;
    }
    v28 = v20;
  }
  GetKeyEventInputSource(a7, (unsigned __int16)v15, a9, v29);
  _InterlockedOr((volatile signed __int32 *)gpsi, 0x40u);
  v33 = (unsigned __int16)(((a1 & 0x8000) != 0) + 256);
  v23 = v33;
  a7 = v33;
  if ( (unsigned int)dword_1C0246A70 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x4000LL, v21, v22) )
    {
      LODWORD(v40) = a8;
      v31 = v41;
      v35 = (__int64)a5;
      v30 = v16;
      v32 = (a1 & 0x8000) == 0;
      v36 = InputTraceLogging::OriginIdToString(v29[1]);
      v37 = (__int64)InputTraceLogging::DeviceTypeToString(v29[0]);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C0246A70,
        (int)&dword_1C021AB69,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v32,
        (__int64)&v35,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v40);
    }
    v23 = a7;
  }
  if ( (byte_1C024B844 & 0x10) != 0 && (byte_1C024B844 & 4) == 0 )
    a7 = v23 + 4;
  LOWORD(v40) = a1 & 0x100;
  LOBYTE(v24) = CKeyboardProcessor::HandleLeftRightVKs(a1);
  ApiSetEditionUpdateSASModifiers(v16, v24, a2, a1 & 0x8000);
  if ( a8 )
    goto LABEL_29;
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
  if ( KeyboardProcessor && *(_DWORD *)(KeyboardProcessor + 24) )
  {
    if ( v11 )
    {
      if ( !*((_QWORD *)v34 + 54) )
      {
        if ( gspklGlobalActive )
        {
          *(_QWORD *)&v38 = (char *)v34 + 432;
          *((_QWORD *)&v38 + 1) = gspklGlobalActive;
          v39[0] = v38;
          HMAssignmentLock(v39);
        }
      }
      CKeyboardProcessor::ForwardInputToKeyboardOverrider(v16 != 0, a2, a1, *v11, a5, v41, v11[2], a10);
      return;
    }
LABEL_29:
    v26 = v42;
    goto LABEL_15;
  }
  v27 = v10;
  v26 = v42;
  if ( (unsigned int)ApiSetEditionKeyEventLLHook(
                       (_DWORD)v34,
                       (unsigned __int16)v40,
                       (unsigned __int16)v33,
                       a7,
                       a1,
                       a2,
                       a1 & 0x8000,
                       v16,
                       v41,
                       v42,
                       v27,
                       (__int64)&v28) != 1 )
  {
LABEL_15:
    xxxUpdateGlobalsAndSendKeyEvent(
      a1,
      a2,
      v41,
      v26,
      (__int64)a5,
      (__int64)v11,
      (__int16)a6,
      v16,
      a8,
      v17,
      (__int64)v29,
      (__int64)a10);
    return;
  }
  InputTraceLogging::Keyboard::DropInput(3LL);
}
