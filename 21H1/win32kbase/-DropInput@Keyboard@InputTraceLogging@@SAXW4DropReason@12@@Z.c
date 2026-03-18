/*
 * XREFs of ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01A4F04
 * Callers:
 *     xxxKeyEventEx @ 0x1C0060840 (xxxKeyEventEx.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C0060A60 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C01A563C (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C01B3420 (ProcessKeyboardInjectedInputViaRim.c)
 *     ProcessKeyboardInputWorker @ 0x1C01B3480 (ProcessKeyboardInputWorker.c)
 *     xxxProcessKeyEvent @ 0x1C01B3D60 (xxxProcessKeyEvent.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0133088 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Keyboard@1@@Z @ 0x1C01A4F68 (-DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Keyboard@1@@Z.c)
 */

void InputTraceLogging::Keyboard::DropInput()
{
  unsigned int v0; // r8d
  __int64 v1; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 0x4000LL) )
  {
    v1 = InputTraceLogging::DropReasonToString(v0);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_1C024C960,
      byte_1C021F9FE,
      0LL,
      0LL,
      (void **)&v1);
  }
}
