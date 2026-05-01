/*
 * XREFs of ??$FailureTrace@AEAY0BP@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BP@$$CBD$$QEAJ@Z @ 0x180460874
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800C3150 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800C3150.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1804609BC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?get@?$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceLogging@@P6AXXZ@Z @ 0x180465EEC (-get@-$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceL.c)
 */

char __fastcall DragDropSimulatorTelemetryProvider::FailureTrace<char const (&)[31],long>(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rcx
  int v5; // ecx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v7 = a1;
  v3 = wil::details::static_lazy<DragDropSimulatorTraceLogging>::get(
         a1,
         _lambda_a3088610fb5396f8b42a9a023b177495_::_lambda_invoker_cdecl_);
  v4 = *(_DWORD **)(v3 + 8);
  if ( *v4 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v3 )
    {
      LODWORD(v7) = *a2;
      v9 = (__int64)"SimulateDrop::no target window";
      v8 = 0x2000000LL;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v5,
                     (__int64)&v9,
                     (__int64)&v7,
                     (__int64)&v8);
    }
  }
  return v3;
}
