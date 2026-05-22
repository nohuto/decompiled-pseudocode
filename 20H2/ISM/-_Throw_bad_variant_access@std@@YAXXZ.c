/*
 * XREFs of ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180070868
 * Callers:
 *     ??$get@PEAXPEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@YAAEBQEAXAEBV?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x180043D20 (--$get@PEAXPEAXV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtC.c)
 *     ??$get@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@PEAXV12@@std@@YAAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@AEBV?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x180043D40 (--$get@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseComp.c)
 *     ?GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@V?$variant@K_NM@3@@Z @ 0x18006F188 (-GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@V-.c)
 *     ??$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C7F8 (--$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C954 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CAB0 (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$char_tra.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_variant_access(void)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v1; // [rsp+28h] [rbp-20h]

  pExceptionObject = &std::bad_variant_access::`vftable';
  v1 = 0LL;
  throw (std::bad_variant_access *)&pExceptionObject;
}
