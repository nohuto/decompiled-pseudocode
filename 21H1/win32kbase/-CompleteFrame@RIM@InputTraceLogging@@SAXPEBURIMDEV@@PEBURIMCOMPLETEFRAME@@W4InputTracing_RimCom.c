/*
 * XREFs of ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1C0177A80
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01794B0 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0176AA8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@@-$_t.c)
 *     ?CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z @ 0x1C0177CDC (-CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::CompleteFrame(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // r11d
  __int64 v9; // r10
  int v10; // [rsp+60h] [rbp+27h] BYREF
  int v11; // [rsp+64h] [rbp+2Bh] BYREF
  __int64 v12; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v13; // [rsp+70h] [rbp+37h] BYREF
  __int64 v14; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v15; // [rsp+80h] [rbp+47h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 256LL) )
  {
    v12 = InputTraceLogging::CompletionReasonToString(
            a3,
            *(_QWORD *)(a1 + 472),
            *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 16LL));
    LODWORD(v16) = *(unsigned __int16 *)(v5 + 18);
    v10 = *(_DWORD *)(v6 + 84);
    v13 = *(_QWORD *)(v6 + 40);
    LODWORD(v17) = v7;
    v11 = v8;
    v14 = v9;
    v15 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C024C960,
      byte_1C021D02B,
      v7,
      v6,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v17,
      (__int64)&v16,
      (void **)&v12);
  }
}
