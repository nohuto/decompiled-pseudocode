/*
 * XREFs of ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180009D60
 * Callers:
 *     _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$2 @ 0x18003BE78 (_CProcess--GetActiveStreamCountStatsForEndpoint_--_1_--dtor$2.c)
 *     _ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_____::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______::_1_::dtor$0 @ 0x18003BF88 (_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChTraitsCRT_unsigned_short___.c)
 *     _TsSessionCreate_::_1_::dtor$8 @ 0x18003C582 (_TsSessionCreate_--_1_--dtor$8.c)
 *     _TsSessionCreate_::_1_::dtor$5 @ 0x18003C5FE (_TsSessionCreate_--_1_--dtor$5.c)
 *     _TsSessionCreate_::_1_::dtor$11 @ 0x18003C634 (_TsSessionCreate_--_1_--dtor$11.c)
 *     _TsSessionCreate_::_1_::dtor$14 @ 0x18003C658 (_TsSessionCreate_--_1_--dtor$14.c)
 *     _TsSessionCreate_::_1_::dtor$17 @ 0x18003C67C (_TsSessionCreate_--_1_--dtor$17.c)
 *     _TsSessionCreate_::_1_::dtor$20 @ 0x18003C6A0 (_TsSessionCreate_--_1_--dtor$20.c)
 *     _TsSessionCreate_::_1_::dtor$23 @ 0x18003C6C4 (_TsSessionCreate_--_1_--dtor$23.c)
 *     _ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey_::_1_::dtor$0 @ 0x18003CC22 (_ApplicationSpecificEndpointInfo--ReadEndpointDataFromKey_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey_::_1_::dtor$1 @ 0x18003CC34 (_ApplicationSpecificEndpointInfo--ReadEndpointDataFromKey_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber_::_1_::dtor$0 @ 0x18003CC46 (_ApplicationSpecificEndpointInfo--DoesStringRepresentAPositiveNumber_--_1_--dtor$0.c)
 *     _ATL::CSid::CSid_::_1_::dtor$0 @ 0x18003CCD6 (_ATL--CSid--CSid_--_1_--dtor$0.c)
 *     _ATL::CSid::CSid_::_1_::dtor$1 @ 0x18003CCEC (_ATL--CSid--CSid_--_1_--dtor$1.c)
 *     _ATL::CSid::CSid_::_1_::dtor$2 @ 0x18003CD02 (_ATL--CSid--CSid_--_1_--dtor$2.c)
 *     _ATL::CSid::CSid_::_1_::dtor$3 @ 0x18003CD18 (_ATL--CSid--CSid_--_1_--dtor$3.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$2 @ 0x18003CE18 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$2.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$3 @ 0x18003CE2E (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$3.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$4 @ 0x18003CE44 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$4.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$5 @ 0x18003CE5A (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1)
{
  volatile signed __int32 *v1; // rdx
  signed __int32 v2; // eax
  bool v3; // cc
  __int64 result; // rax

  v1 = (volatile signed __int32 *)(*a1 - 24LL);
  v2 = _InterlockedExchangeAdd(v1 + 4, 0xFFFFFFFF);
  v3 = v2 <= 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 8LL))(*(_QWORD *)v1);
  return result;
}
