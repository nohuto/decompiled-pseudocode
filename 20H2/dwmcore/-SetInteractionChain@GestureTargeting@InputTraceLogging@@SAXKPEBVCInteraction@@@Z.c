/*
 * XREFs of ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x180233A1C
 * Callers:
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x180232074 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x180232338 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180232AF4 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x18001730C (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x18005B72C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18005B764 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152660 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1802221C8 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x180222218 (-InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180222234 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1802222A8 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@D@@5343333@Z @ 0x180225C6C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::SetInteractionChain(BOOL a1, const struct CInteraction *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  const struct CInteraction *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  BOOL v10; // [rsp+88h] [rbp-29h] BYREF
  BOOL v11; // [rsp+8Ch] [rbp-25h] BYREF
  int v12; // [rsp+90h] [rbp-21h] BYREF
  int v13; // [rsp+94h] [rbp-1Dh] BYREF
  int v14; // [rsp+98h] [rbp-19h] BYREF
  BOOL v15; // [rsp+9Ch] [rbp-15h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+C8h] [rbp+17h] BYREF
  BOOL *v22; // [rsp+E8h] [rbp+37h]
  int v23; // [rsp+F0h] [rbp+3Fh]
  int v24; // [rsp+F4h] [rbp+43h]

  if ( InputTraceLogging::Enabled(0LL) )
  {
    if ( a2 )
    {
      do
      {
        v6 = wil::details::static_lazy<InputTraceLogging>::get(
               v4,
               _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v6 > 4u
          && (*(_DWORD *)(v6 + 16) & 0x800LL) != 0
          && (*(_QWORD *)(v6 + 24) & 0x800LL) == *(_QWORD *)(v6 + 24) )
        {
          v10 = *((_QWORD *)a2 + 34) != 0LL;
          v11 = InputTraceLogging::InteractionInputTransparency(a2);
          v12 = *((_BYTE *)a2 + 184) & 1;
          v13 = *((_DWORD *)a2 + 45);
          v16 = (__int64)InputTraceLogging::InteractionInputSink(a2);
          v14 = *((_DWORD *)a2 + 424);
          v17 = (__int64)InputTraceLogging::InteractionDefaultToString(v7);
          v18 = (__int64)InputTraceLogging::InteractionSourceTypeToString(a2);
          v19 = (__int64)a2 + 8;
          v20 = (__int64)a2;
          v15 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v8,
            (unsigned __int8 *)dword_1802EA3AE,
            v8,
            v9,
            (__int64)&v15,
            (__int64)&v20,
            (__int64)&v19,
            (const unsigned __int16 **)&v18,
            (const unsigned __int16 **)&v17,
            (__int64)&v14,
            (__int64)&v16,
            (__int64)&v13,
            (__int64)&v12,
            (__int64)&v11,
            (__int64)&v10);
        }
        InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(a2);
        a2 = (const struct CInteraction *)*((_QWORD *)a2 + 26);
      }
      while ( a2 );
    }
    else
    {
      v5 = wil::details::static_lazy<InputTraceLogging>::get(
             v4,
             _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v5 > 4u
        && (*(_DWORD *)(v5 + 16) & 0x800LL) != 0
        && (*(_QWORD *)(v5 + 24) & 0x800LL) == *(_QWORD *)(v5 + 24) )
      {
        v24 = 0;
        v22 = &v10;
        v10 = a1;
        v23 = 4;
        tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1802EA474, 0LL, 0LL, 3u, &v21);
      }
    }
  }
}
