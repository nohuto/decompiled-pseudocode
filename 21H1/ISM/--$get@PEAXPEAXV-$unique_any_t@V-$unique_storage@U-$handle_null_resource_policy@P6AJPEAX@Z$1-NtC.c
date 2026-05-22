/*
 * XREFs of ??$get@PEAXPEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@YAAEBQEAXAEBV?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x180044380
 * Callers:
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F136C (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 * Callees:
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180070ED8 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::get<void *,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    std::_Throw_bad_variant_access();
  return a1;
}
