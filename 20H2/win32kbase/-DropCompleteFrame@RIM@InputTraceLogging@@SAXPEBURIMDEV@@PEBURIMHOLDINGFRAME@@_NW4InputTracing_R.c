/*
 * XREFs of ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x1C0170224
 * Callers:
 *     rimFindAndReclaimHoldingFrame @ 0x1C01717CC (rimFindAndReclaimHoldingFrame.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@@Z @ 0x1C016E348 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@@-$_t.c)
 *     ?CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z @ 0x1C016F57C (-CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z.c)
 */

char __fastcall InputTraceLogging::RIM::DropCompleteFrame(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  _UNKNOWN **v3; // rax
  int v4; // ebx
  int v5; // esi
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // r11
  __int64 v12; // r9
  int v14; // [rsp+68h] [rbp+27h] BYREF
  int v15; // [rsp+6Ch] [rbp+2Bh] BYREF
  __int64 v16; // [rsp+70h] [rbp+2Fh] BYREF
  __int64 v17; // [rsp+78h] [rbp+37h] BYREF
  __int64 v18; // [rsp+80h] [rbp+3Fh] BYREF
  __int64 v19; // [rsp+88h] [rbp+47h] BYREF
  __int64 v20; // [rsp+90h] [rbp+4Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  __int64 v22; // [rsp+B0h] [rbp+6Fh] BYREF

  v3 = &retaddr;
  v4 = *(_DWORD *)(a2 + 40);
  v5 = a3;
  if ( v4 )
    v3 = *(_UNKNOWN ***)(a2 + 72);
  if ( (unsigned int)dword_1C0244A70 > 4 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1C0244A70, 256LL);
    if ( (_BYTE)v3 )
    {
      v17 = (__int64)InputTraceLogging::CompletionReasonToString(v7);
      LODWORD(v22) = *(unsigned __int16 *)(v8 + 18);
      v18 = *(_QWORD *)(v9 + 32);
      v14 = v10;
      v15 = v5;
      LODWORD(v16) = v4;
      v19 = v11;
      v20 = a1;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
                     (__int64)&dword_1C0244A70,
                     byte_1C021570D,
                     v10,
                     v12,
                     (__int64)&v20,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v14,
                     (__int64)&v22,
                     (void **)&v17);
    }
  }
  return (char)v3;
}
