/*
 * XREFs of RIMSetDeviceInputMode @ 0x1C00BB8BC
 * Callers:
 *     _lambda_1a5b9a3245c38924ef301777e78dc3ff_::_lambda_invoker_cdecl_ @ 0x1C00D0EC0 (_lambda_1a5b9a3245c38924ef301777e78dc3ff_--_lambda_invoker_cdecl_.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C01803C0 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMUpdateDeviceForInputMode @ 0x1C0021CB4 (RIMUpdateDeviceForInputMode.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0028AD4 (RimDeviceTypeToRimInputType.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C002DB04 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012ADCC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     RIMSuppressAllActiveContacts @ 0x1C015FD74 (RIMSuppressAllActiveContacts.c)
 *     ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0166220 (-InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z.c)
 */

__int64 __fastcall RIMSetDeviceInputMode(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
  {
    v5 = InputTraceLogging::InputModeToString(a2);
    v6 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (int)&dword_1C0244A70,
      (__int64)&v6,
      (__int64)&v5);
  }
  if ( a2 == 1
    || a2 == 2
    && ((unsigned int)RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48)) & gWakeOnDeviceTypes) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
      RIMSuppressAllActiveContacts(*(_QWORD *)(a1 + 336), *(_QWORD *)(a1 + 480), 1024LL);
    if ( (*(_DWORD *)(a1 + 184) & 0x4000) != 0 )
      InputExtensibilityCallout::CoreMsgSendMessage(a1, 10);
  }
  result = RIMUpdateDeviceForInputMode(a1, a2);
  *(_DWORD *)(a1 + 1328) = a2;
  return result;
}
