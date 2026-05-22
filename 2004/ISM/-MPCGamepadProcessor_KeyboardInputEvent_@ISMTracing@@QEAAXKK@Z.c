/*
 * XREFs of ?MPCGamepadProcessor_KeyboardInputEvent_@ISMTracing@@QEAAXKK@Z @ 0x180192500
 * Callers:
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z @ 0x1801939F8 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18007CCAC (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall ISMTracing::MPCGamepadProcessor_KeyboardInputEvent_(ISMTracing *this, int a2, int a3)
{
  __int64 v5; // rcx
  LPVOID v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  ISMTracing *v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = this;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v6 = wil::details::static_lazy<ISMTracing>::get(
           v5,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v6 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v6 + 1), 1LL) )
    {
      LODWORD(v9) = a3;
      v10 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        byte_1801D1C41,
        v7,
        v8,
        (__int64)&v10,
        (__int64)&v9);
    }
  }
}
