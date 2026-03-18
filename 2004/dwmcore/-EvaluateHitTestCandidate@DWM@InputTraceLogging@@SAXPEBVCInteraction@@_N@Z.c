/*
 * XREFs of ?EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1802274D8
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x18009D0F8 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18009D708 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180223678 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x1802236C8 (-InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1802236E4 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180223758 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@D@@5343333@Z @ 0x1802270CC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1.c)
 */

void __fastcall InputTraceLogging::DWM::EvaluateHitTestCandidate(const struct CInteraction *a1, unsigned __int8 a2)
{
  int v2; // edi
  __int64 v4; // r9
  int v5; // eax
  int v6; // r8d
  unsigned __int8 v7; // al
  int v8; // eax
  const struct CInteraction *v9; // rcx
  int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+80h] [rbp+17h] BYREF
  int v14; // [rsp+84h] [rbp+1Bh] BYREF
  int v15; // [rsp+88h] [rbp+1Fh] BYREF
  int v16; // [rsp+8Ch] [rbp+23h] BYREF
  __int64 v17; // [rsp+90h] [rbp+27h] BYREF
  __int64 v18; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v19; // [rsp+A0h] [rbp+37h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+3Fh] BYREF
  __int64 v21; // [rsp+B0h] [rbp+47h] BYREF
  __int64 v22; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = a2;
  v4 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 2) != 0 && (*(_QWORD *)(v4 + 24) & 2LL) == *(_QWORD *)(v4 + 24) )
  {
    v5 = 0;
    if ( a1 )
      LOBYTE(v5) = *((_QWORD *)a1 + 34) != 0LL;
    LODWORD(v22) = v5;
    LODWORD(v23) = InputTraceLogging::InteractionInputTransparency(a1);
    if ( a1 )
      v7 = *((_BYTE *)a1 + 184) & 1;
    else
      v7 = v6;
    v13 = v7;
    if ( a1 )
      v8 = *((_DWORD *)a1 + 45);
    else
      v8 = v6;
    v14 = v8;
    v17 = (__int64)InputTraceLogging::InteractionInputSink(a1);
    if ( a1 )
      v10 = *((_DWORD *)a1 + 424);
    v15 = v10;
    v18 = (__int64)InputTraceLogging::InteractionDefaultToString(v9);
    v19 = (__int64)InputTraceLogging::InteractionSourceTypeToString(a1);
    v21 = (__int64)a1;
    v16 = v2;
    v20 = ((unsigned __int64)a1 + 8) & -(__int64)(a1 != 0LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (unsigned __int8 *)dword_1802E942F,
      v11,
      v12,
      (__int64)&v16,
      (__int64)&v21,
      (__int64)&v20,
      (const unsigned __int16 **)&v19,
      (const unsigned __int16 **)&v18,
      (__int64)&v15,
      (__int64)&v17,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v23,
      (__int64)&v22);
  }
  InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(a1);
}
