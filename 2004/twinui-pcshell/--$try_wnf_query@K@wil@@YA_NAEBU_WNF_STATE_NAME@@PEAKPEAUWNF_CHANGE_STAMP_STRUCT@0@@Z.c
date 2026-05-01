/*
 * XREFs of ??$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18023E7D8
 * Callers:
 *     ??$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_WNF_STATE_NAME@@$$QEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18023E5B0 (--$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEB.c)
 *     ??$_QueryAndCompareWNFContext@W4UserInputContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_WNF_STATE_NAME@@$$QEBW4UserInputContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18023E5FC (--$_QueryAndCompareWNFContext@W4UserInputContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_.c)
 * Callees:
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1801C1328 (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

bool __fastcall wil::try_wnf_query<unsigned long>(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  char v5; // cl
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v4 = wil::wnf_query_nothrow<unsigned long>(a1, (char *)&v7, a2, a4);
  v5 = 0;
  if ( v4 >= 0 )
    return (_BYTE)v7 != 0;
  return v5;
}
