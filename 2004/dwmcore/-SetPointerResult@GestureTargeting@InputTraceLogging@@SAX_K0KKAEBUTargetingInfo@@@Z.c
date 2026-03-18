/*
 * XREFs of ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x180225B40
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1802260F8 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18009D708 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U1@U1@U3@U3@U2@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@3355434444@Z @ 0x180222B58 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U1@U1@U3@U3@U2.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180223678 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x1802236C8 (-InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1802236E4 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180223758 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::SetPointerResult(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        const struct TargetingInfo *a5)
{
  const struct TargetingInfo *v5; // rdi
  __int64 v10; // rbx
  __int64 v11; // r10
  int v12; // eax
  unsigned __int8 v13; // al
  int v14; // eax
  const struct CInteraction *v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  const char *v20; // rax
  BOOL v21; // [rsp+A8h] [rbp-21h] BYREF
  int v22; // [rsp+ACh] [rbp-1Dh] BYREF
  int v23; // [rsp+B0h] [rbp-19h] BYREF
  int v24; // [rsp+B4h] [rbp-15h] BYREF
  int v25; // [rsp+B8h] [rbp-11h] BYREF
  int v26; // [rsp+BCh] [rbp-Dh] BYREF
  __int64 v27; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v28; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v29; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v30; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+E0h] [rbp+17h] BYREF
  __int64 v32; // [rsp+E8h] [rbp+1Fh] BYREF
  __int64 v33; // [rsp+F0h] [rbp+27h] BYREF
  __int64 v34; // [rsp+F8h] [rbp+2Fh] BYREF

  v5 = a5;
  v10 = *((_QWORD *)a5 + 1);
  v11 = wil::details::static_lazy<InputTraceLogging>::get(
          a1,
          _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v11 > 4u
    && (*(_DWORD *)(v11 + 16) & 0x800LL) != 0
    && (*(_QWORD *)(v11 + 24) & 0x800LL) == *(_QWORD *)(v11 + 24) )
  {
    v12 = 0;
    if ( v10 )
      LOBYTE(v12) = *(_QWORD *)(v10 + 272) != 0LL;
    LODWORD(a5) = v12;
    v21 = InputTraceLogging::InteractionInputTransparency((const struct CInteraction *)v10);
    if ( v10 )
      v13 = *(_BYTE *)(v10 + 184) & 1;
    else
      v13 = 0;
    v22 = v13;
    if ( v10 )
      v14 = *(_DWORD *)(v10 + 180);
    else
      v14 = 0;
    v23 = v14;
    v27 = (__int64)InputTraceLogging::InteractionInputSink((const struct CInteraction *)v10);
    if ( v10 )
      v16 = *(_DWORD *)(v10 + 1696);
    else
      v16 = 0;
    v24 = v16;
    v28 = (__int64)InputTraceLogging::InteractionDefaultToString(v15);
    v29 = (__int64)InputTraceLogging::InteractionSourceTypeToString((const struct CInteraction *)v10);
    v31 = v10;
    v30 = (v10 + 8) & -(__int64)(v10 != 0);
    if ( *(_DWORD *)v5 )
    {
      if ( *(_DWORD *)v5 == 1 )
      {
        v20 = "Drop";
        if ( *((_QWORD *)v5 + 1) )
          v20 = "Send";
      }
      else if ( *(_DWORD *)v5 == 2 )
      {
        v20 = "Release";
      }
      else
      {
        v20 = "UNKNOWN";
      }
    }
    else
    {
      v20 = "Buffer";
    }
    v32 = (__int64)v20;
    v25 = a4;
    v26 = a3;
    v33 = a2;
    v34 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v19,
      (unsigned __int8 *)dword_1802E8E54,
      v17,
      v18,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v26,
      (__int64)&v25,
      (const unsigned __int16 **)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (const unsigned __int16 **)&v29,
      (const unsigned __int16 **)&v28,
      (__int64)&v24,
      (__int64)&v27,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&a5);
  }
}
