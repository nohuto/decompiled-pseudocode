/*
 * XREFs of RIMSetDeviceInputMode @ 0x1C0017798
 * Callers:
 *     _lambda_1a5b9a3245c38924ef301777e78dc3ff_::_lambda_invoker_cdecl_ @ 0x1C00D1260 (_lambda_1a5b9a3245c38924ef301777e78dc3ff_--_lambda_invoker_cdecl_.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0182900 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0016124 (RimDeviceTypeToRimInputType.c)
 *     RIMUpdateDeviceForInputMode @ 0x1C001620C (RIMUpdateDeviceForInputMode.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A794 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012D11C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01622D4 (RIMSuppressAllActiveContacts.c)
 *     ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0168780 (-InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z.c)
 */

__int64 __fastcall RIMSetDeviceInputMode(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // [rsp+20h] [rbp-28h]
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C0246A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 256LL, a3, a4) )
  {
    v10 = InputTraceLogging::InputModeToString(a2);
    v11 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (int)&dword_1C0246A70,
      (__int64)&v11,
      (__int64)&v10);
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
      v9[0] = *(_QWORD *)(v7 + 72);
      v9[1] = *(_QWORD *)(a1 + 16);
      InputExtensibilityCallout::CoreMsgSendMessage(a1, 10LL, v9, 16LL, v8);
    }
  }
  result = RIMUpdateDeviceForInputMode(a1, a2);
  *(_DWORD *)(a1 + 1320) = a2;
  return result;
}
