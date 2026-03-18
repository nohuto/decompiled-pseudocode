/*
 * XREFs of RIMSetDeviceInputMode @ 0x1C0048570
 * Callers:
 *     _lambda_1a5b9a3245c38924ef301777e78dc3ff_::_lambda_invoker_cdecl_ @ 0x1C00D09B0 (_lambda_1a5b9a3245c38924ef301777e78dc3ff_--_lambda_invoker_cdecl_.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0188600 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMUpdateDeviceForInputMode @ 0x1C0048660 (RIMUpdateDeviceForInputMode.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A30BC (RimDeviceTypeToRimInputType.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C013310C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     RIMSuppressAllActiveContacts @ 0x1C0168624 (RIMSuppressAllActiveContacts.c)
 *     ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1C016EAD0 (-InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z.c)
 */

__int64 __fastcall RIMSetDeviceInputMode(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C024C960 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 256LL, a3, a4) )
  {
    v11 = InputTraceLogging::InputModeToString(a2);
    v12 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (int)&dword_1C024C960,
      (__int64)&v12,
      (__int64)&v11);
  }
  if ( a2 == 1
    || a2 == 2
    && ((unsigned int)RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48)) & gWakeOnDeviceTypes) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 336);
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
      RIMSuppressAllActiveContacts(*(_QWORD *)(a1 + 336), *(_QWORD *)(a1 + 480), 1024LL);
    if ( (*(_DWORD *)(a1 + 184) & 0x4000) != 0 )
    {
      v10[0] = *(_QWORD *)(v7 + 72);
      v10[1] = *(_QWORD *)(a1 + 16);
      InputExtensibilityCallout::CoreMsgSendMessage(a1, 10LL, v10, 16LL, v8, v9);
    }
  }
  result = RIMUpdateDeviceForInputMode(a1, a2);
  *(_DWORD *)(a1 + 1320) = a2;
  return result;
}
