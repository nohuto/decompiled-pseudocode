/*
 * XREFs of ??$?0V_lambda_8db0ce862824541f40dfb767113f1e28_@@X@?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@V_lambda_8db0ce862824541f40dfb767113f1e28_@@@Z @ 0x180007C38
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180005078 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ??$__not_null@V_lambda_8db0ce862824541f40dfb767113f1e28_@@@__function@wistd@@YA_NAEBV_lambda_8db0ce862824541f40dfb767113f1e28_@@@Z @ 0x180008054 (--$__not_null@V_lambda_8db0ce862824541f40dfb767113f1e28_@@@__function@wistd@@YA_NAEBV_lambda_8db.c)
 */

__int64 __fastcall wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  *(_QWORD *)(a1 + 112) = 0LL;
  if ( (unsigned __int8)wistd::__function::__not_null<_lambda_8db0ce862824541f40dfb767113f1e28_>() )
  {
    *(_QWORD *)(v2 + 8) = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    *(_OWORD *)(v2 + 16) = *(_OWORD *)v1;
    *(_QWORD *)(v2 + 32) = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v2 + 112) = v2 + 8;
  }
  return v2;
}
