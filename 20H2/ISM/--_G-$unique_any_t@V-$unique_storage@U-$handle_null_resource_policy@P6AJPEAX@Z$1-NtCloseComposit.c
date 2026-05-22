/*
 * XREFs of ??_G?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAAPEAXI@Z @ 0x1800F0BFC
 * Callers:
 *     ?_Destroy@?$_Variant_base@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAXXZ @ 0x180043C90 (-_Destroy@-$_Variant_base@PEAXV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P.c)
 *     ?_Destroy@?$_Ref_count_obj@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@EEAAXXZ @ 0x180101420 (-_Destroy@-$_Ref_count_obj@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJ.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::`scalar deleting destructor'(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v2);
  return a1;
}
