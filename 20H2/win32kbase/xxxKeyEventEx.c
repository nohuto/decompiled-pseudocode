/*
 * XREFs of xxxKeyEventEx @ 0x1C002CAE0
 * Callers:
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00AB180 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C00AE240 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C01A596C (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01A5C38 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6050 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A61D0 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6410 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6600 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6870 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6990 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     xxxKeyEvent @ 0x1C01ABC30 (xxxKeyEvent.c)
 *     xxxProcessKeyEvent @ 0x1C01ABC80 (xxxProcessKeyEvent.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C01ABFF4 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C01AC08C (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C002CD00 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C002D59C (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ApiSetEditionKeyEventLLHook @ 0x1C002D5C4 (ApiSetEditionKeyEventLLHook.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C002D784 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     ApiSetEditionUpdateSASModifiers @ 0x1C002D7B4 (ApiSetEditionUpdateSASModifiers.c)
 *     GetKeyEventInputSource @ 0x1C002D890 (GetKeyEventInputSource.c)
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C002E494 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 *     HMAssignmentLock @ 0x1C00555C0 (HMAssignmentLock.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C019CCA4 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C019CDC0 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x1C01AA7A4 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgW.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01AA8BC (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01AAE0C (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
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
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 KeyboardProcessor; // rax
  int v30; // r14d
  unsigned int v31; // [rsp+58h] [rbp-69h]
  __int64 v32; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v33[2]; // [rsp+70h] [rbp-51h] BYREF
  unsigned int v34; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v35; // [rsp+7Ch] [rbp-45h] BYREF
  BOOL v36; // [rsp+80h] [rbp-41h] BYREF
  unsigned int v37; // [rsp+84h] [rbp-3Dh]
  struct tagTHREADINFO *v38; // [rsp+88h] [rbp-39h]
  __int64 v39; // [rsp+90h] [rbp-31h] BYREF
  __int64 v40; // [rsp+98h] [rbp-29h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-19h]
  _OWORD v43[4]; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v44; // [rsp+108h] [rbp+47h] BYREF
  unsigned int v45; // [rsp+118h] [rbp+57h]
  __int64 v46; // [rsp+120h] [rbp+5Fh]

  v46 = a4;
  v45 = a3;
  *(_QWORD *)v33 = 0LL;
  v10 = 0;
  v11 = a6;
  v13 = gptiCurrent;
  v38 = gptiCurrent;
  if ( a6 )
    v15 = *a6;
  else
    v15 = 0xFFFF;
  LODWORD(a6) = v15;
  v32 = -1LL;
  if ( gpAsyncKeyEventMonitor )
  {
    CAsyncKeyEventMonitor::OnKeyEvent((CAsyncKeyEventMonitor *)0xFFFFFFFFLL);
    v13 = v38;
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
      v18 = *((_QWORD *)v13 + 53);
      v19 = *(_DWORD *)(v18 + 12);
      v20 = *(_QWORD *)(v18 + 880);
      v10 = v19 >> 31;
    }
    v32 = v20;
  }
  GetKeyEventInputSource(a7, (unsigned __int16)v15, a9, v33);
  _InterlockedOr((volatile signed __int32 *)gpsi, 0x40u);
  v37 = (unsigned __int16)(((a1 & 0x8000) != 0) + 256);
  v23 = v37;
  a7 = v37;
  if ( (unsigned int)dword_1C0244A70 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x4000LL, v21, v22) )
    {
      LODWORD(v44) = a8;
      v35 = v45;
      v39 = (__int64)a5;
      v34 = v16;
      v36 = (a1 & 0x8000) == 0;
      v40 = InputTraceLogging::OriginIdToString(v33[1]);
      v41 = (__int64)InputTraceLogging::DeviceTypeToString(v33[0]);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C0244A70,
        (int)&dword_1C0218CFA,
        (__int64)&v41,
        (__int64)&v40,
        (__int64)&v36,
        (__int64)&v39,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v44);
    }
    v23 = a7;
  }
  if ( (byte_1C0249844 & 0x10) != 0 && (byte_1C0249844 & 4) == 0 )
    a7 = v23 + 4;
  LOWORD(v44) = a1 & 0x100;
  LOBYTE(v24) = CKeyboardProcessor::HandleLeftRightVKs(a1);
  ApiSetEditionUpdateSASModifiers(v16, v24, a2, a1 & 0x8000);
  if ( a8 )
    goto LABEL_29;
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor(v26, v25, v27, v28);
  if ( KeyboardProcessor && *(_DWORD *)(KeyboardProcessor + 24) )
  {
    if ( v11 )
    {
      if ( !*((_QWORD *)v38 + 55) )
      {
        if ( gspklGlobalActive )
        {
          *(_QWORD *)&v42 = (char *)v38 + 440;
          *((_QWORD *)&v42 + 1) = gspklGlobalActive;
          v43[0] = v42;
          HMAssignmentLock(v43);
        }
      }
      CKeyboardProcessor::ForwardInputToKeyboardOverrider(v16 != 0, a2, a1, *v11, a5, v45, v11[2], a10);
      return;
    }
LABEL_29:
    v30 = v46;
    goto LABEL_15;
  }
  v31 = v10;
  v30 = v46;
  if ( (unsigned int)ApiSetEditionKeyEventLLHook(
                       (_DWORD)v38,
                       (unsigned __int16)v44,
                       (unsigned __int16)v37,
                       a7,
                       a1,
                       a2,
                       a1 & 0x8000,
                       v16,
                       v45,
                       v46,
                       v31,
                       (__int64)&v32) != 1 )
  {
LABEL_15:
    xxxUpdateGlobalsAndSendKeyEvent(
      a1,
      a2,
      v45,
      v30,
      (__int64)a5,
      (__int64)v11,
      (__int16)a6,
      v16,
      a8,
      v17,
      (__int64)v33,
      (__int64)a10);
    return;
  }
  InputTraceLogging::Keyboard::DropInput(3LL);
}
