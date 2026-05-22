/*
 * XREFs of ??1?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x180157AEC
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::AddDevicePropertyRequest_::_1_::dtor$2 @ 0x180159464 (_Windows--Internal--Holographic--SpatialGraphDriverClient--AddDevicePropertyRequest_ea_180159464.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::AddNodePropertyRequests_::_1_::dtor$2 @ 0x180159B76 (_Windows--Internal--Holographic--SpatialGraphDriverClient--AddNodePropertyRequests_--_1_--dtor$2.c)
 * Callees:
 *     ??R?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRequest@Holographic@Internal@Windows@@@Z @ 0x180158FA8 (--R-$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRe.c)
 */

__int64 __fastcall std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>::~unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<Windows::Internal::Holographic::V2PropertyRequest>::operator()();
  return result;
}
