/*
 * XREFs of ??$?4V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@$0A@@?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x180044334
 * Callers:
 *     ??0LegacyInputSinkData@@QEAA@PEAX_N@Z @ 0x1800443C0 (--0LegacyInputSinkData@@QEAA@PEAX_N@Z.c)
 *     ?CreateOwningRefOfInputSink@LegacyInputSinkData@@QEAAXXZ @ 0x180044528 (-CreateOwningRefOfInputSink@LegacyInputSinkData@@QEAAXXZ.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAXXZ @ 0x1800442F0 (-_Destroy@-$_Variant_base@PEAXV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F12A4 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositi.c)
 */

__int64 __fastcall std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>,0>(
        __int64 a1,
        _QWORD *a2)
{
  if ( *(_BYTE *)(a1 + 8) == 1 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::operator=();
  }
  else
  {
    std::_Variant_base<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::_Destroy(a1);
    *(_BYTE *)(a1 + 8) = -1;
    *(_QWORD *)a1 = *a2;
    *a2 = 0LL;
    *(_BYTE *)(a1 + 8) = 1;
  }
  return a1;
}
