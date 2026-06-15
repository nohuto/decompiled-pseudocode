/*
 * XREFs of _ATL::CAtlMap_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______Microsoft::WRL::ComPtr_CEndpointCharacteristics__ATL::CElementTraits_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short________ATL::CElementTraits_Microsoft::WRL::ComPtr_CEndpointCharacteristics_____::NewNode_::_1_::catch$3 @ 0x18007D1D8
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180074C37 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______Microsoft::WRL::ComPtr_CEndpointCharacteristics__ATL::CElementTraits_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short________ATL::CElementTraits_Microsoft::WRL::ComPtr_CEndpointCharacteristics_____::NewNode_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 80);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}
