/*
 * XREFs of ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180229304
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x180034610 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180035384 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@45555554AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180224E18 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_180224E18.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180226048 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1802260B4 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180226128 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180226278 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::UpdateCapture(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  char v2; // di
  __int64 v3; // rcx
  __int64 v4; // r9
  const struct CInteraction *v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int8 v9; // al
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  const struct CInteraction *v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r9
  BOOL v17; // [rsp+A0h] [rbp-9h] BYREF
  int v18; // [rsp+A4h] [rbp-5h] BYREF
  int v19; // [rsp+A8h] [rbp-1h] BYREF
  int v20; // [rsp+ACh] [rbp+3h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+2Fh] BYREF
  __int64 updated; // [rsp+E0h] [rbp+37h] BYREF
  __int64 v28; // [rsp+110h] [rbp+67h] BYREF
  __int64 v29; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+120h] [rbp+77h] BYREF
  __int64 v31; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 2) + 224LL))(
         *((_QWORD *)a1 + 2),
         *((unsigned int *)a1 + 6),
         0LL);
  v4 = wil::details::static_lazy<InputTraceLogging>::get(
         v3,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v4 > 4u
    && (*(_DWORD *)(v4 + 16) & 0x800LL) != 0
    && (*(_QWORD *)(v4 + 24) & 0x800LL) == *(_QWORD *)(v4 + 24) )
  {
    v5 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
    v21 = *((_QWORD *)a1 + 4);
    LODWORD(v29) = *((_DWORD *)a1 + 7);
    LODWORD(v30) = *((_DWORD *)a1 + 6);
    v6 = 0;
    LOBYTE(v28) = v2;
    if ( v5 )
      LOBYTE(v6) = *((_QWORD *)v5 + 34) != 0LL;
    LODWORD(v31) = v6;
    v17 = InputTraceLogging::InteractionInputTransparency(v5);
    if ( v8 )
      v9 = *(_BYTE *)(v8 + 184) & 1;
    else
      v9 = v7;
    v18 = v9;
    if ( v8 )
      v10 = *(_DWORD *)(v8 + 180);
    else
      v10 = v7;
    v19 = v10;
    v11 = v7;
    if ( v8 )
    {
      v12 = *(_QWORD *)(v8 + 96);
      if ( v12 )
        v11 = *(_QWORD *)(v12 + 64);
    }
    v22 = v11;
    if ( v8 )
      LODWORD(v7) = *(_DWORD *)(v8 + 1696);
    v20 = v7;
    v23 = (__int64)InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v8);
    v24 = (__int64)InputTraceLogging::InteractionSourceTypeToString(v13);
    v26 = v14;
    v25 = (v14 + 8) & -(__int64)(v14 != 0);
    updated = (__int64)InputTraceLogging::MidManipulationUpdateTypeToString(*(_DWORD *)a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v16,
      (unsigned __int8 *)dword_1802EBB37,
      v15,
      v16,
      (const unsigned __int16 **)&updated,
      (__int64)&v26,
      (__int64)&v25,
      (const unsigned __int16 **)&v24,
      (const unsigned __int16 **)&v23,
      (__int64)&v20,
      (__int64)&v22,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v21,
      (__int64)&v28);
  }
}
