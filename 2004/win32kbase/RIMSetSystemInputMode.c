/*
 * XREFs of RIMSetSystemInputMode @ 0x1C00C9F00
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8F0C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C011FC28 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMSyncWalkRimObjList @ 0x1C004E4F0 (RIMSyncWalkRimObjList.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012D098 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0168780 (-InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z.c)
 */

__int64 __fastcall RIMSetSystemInputMode(int a1)
{
  unsigned int v2; // r8d
  int v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  if ( !gbTtmEnabled )
  {
    if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 256LL) )
    {
      v4 = InputTraceLogging::InputModeToString(v2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_1C0246A70,
        (__int64)&v4);
    }
    RIMSyncWalkRimObjList(
      1,
      (__int64)&v3,
      (void (__fastcall *)(_QWORD *, __int64))lambda_1a5b9a3245c38924ef301777e78dc3ff_::_lambda_invoker_cdecl_);
  }
  return 0LL;
}
