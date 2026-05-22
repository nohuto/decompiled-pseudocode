/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18002B88C
 * Callers:
 *     _lambda_f0f9811b609bc44f6b5f596bb37acf9a_::operator() @ 0x18002B470 (_lambda_f0f9811b609bc44f6b5f596bb37acf9a_--operator().c)
 *     ??$?0AEAY0BD@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BD@$$CBG$$QEAM@Z @ 0x18002B6AC (--$-0AEAY0BD@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x18006E9C4 (-GetConstantNamesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?GetCurrentInputTypesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18006EDDC (-GetCurrentInputTypesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     _lambda_b16aee874608ec8ce55934157fa7dff9_::operator() @ 0x18007D3D8 (_lambda_b16aee874608ec8ce55934157fa7dff9_--operator().c)
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x180091F3C (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 *     ??0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAX1@Z @ 0x180130E04 (--0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAX1@Z.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180179560 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801796CC (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     _lambda_7a8cdf47427de701aad174af942599f3_::operator() @ 0x180189A3C (_lambda_7a8cdf47427de701aad174af942599f3_--operator().c)
 *     ??$?0AEAY0BA@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BA@$$CBG$$QEAM@Z @ 0x18018A0F4 (--$-0AEAY0BA@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     _lambda_c5f59095f0ae3e38eeaa5c86892cff4d_::operator() @ 0x18018BA78 (_lambda_c5f59095f0ae3e38eeaa5c86892cff4d_--operator().c)
 *     _lambda_c78139b4692b055c43ac45a1104373ed_::operator() @ 0x180191954 (_lambda_c78139b4692b055c43ac45a1104373ed_--operator().c)
 *     _lambda_a2967a5fef4bd4911d3370ff5cbae9e9_::operator() @ 0x180198020 (_lambda_a2967a5fef4bd4911d3370ff5cbae9e9_--operator().c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18002B8D0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r8

  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a2 + 2 * v3) );
  std::wstring::assign(a1);
  return a1;
}
