/*
 * XREFs of ??$_QueryAndCompareWNFContext@W4UserInputContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_WNF_STATE_NAME@@$$QEBW4UserInputContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18021B4FC
 * Callers:
 *     ?_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x1802221F4 (-_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 * Callees:
 *     ??$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18021B6D8 (--$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

bool __fastcall _QueryAndCompareWNFContext<enum Windows::Internal::Shell::Holographic::UserInputContext>(
        __int64 a1,
        _DWORD *a2)
{
  char v3; // bl
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]

  v6 = HIDWORD(a1);
  v3 = 0;
  v5 = 0;
  if ( (unsigned __int8)wil::try_wnf_query<unsigned long>(&WNF_HOLO_USER_INPUT_CONTEXT, &v5) )
    return v5 == *a2;
  return v3;
}
