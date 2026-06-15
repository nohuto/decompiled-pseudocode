/*
 * XREFs of ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000F560
 * Callers:
 *     _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$2 @ 0x1800417B6 (_CProcess--GetActiveStreamCountStatsForEndpoint_--_1_--dtor$2.c)
 *     _ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_____::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______::_1_::dtor$0 @ 0x1800418C6 (_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChTraitsCRT_unsigned_short___.c)
 *     _TsSessionCreate_::_1_::dtor$8 @ 0x180041EC0 (_TsSessionCreate_--_1_--dtor$8.c)
 *     _TsSessionCreate_::_1_::dtor$5 @ 0x180041F3C (_TsSessionCreate_--_1_--dtor$5.c)
 *     _TsSessionCreate_::_1_::dtor$11 @ 0x180041F72 (_TsSessionCreate_--_1_--dtor$11.c)
 *     _TsSessionCreate_::_1_::dtor$14 @ 0x180041F96 (_TsSessionCreate_--_1_--dtor$14.c)
 *     _TsSessionCreate_::_1_::dtor$17 @ 0x180041FBA (_TsSessionCreate_--_1_--dtor$17.c)
 *     _TsSessionCreate_::_1_::dtor$20 @ 0x180041FDE (_TsSessionCreate_--_1_--dtor$20.c)
 *     _TsSessionCreate_::_1_::dtor$23 @ 0x180042002 (_TsSessionCreate_--_1_--dtor$23.c)
 *     _ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey_::_1_::dtor$0 @ 0x180042560 (_ApplicationSpecificEndpointInfo--ReadEndpointDataFromKey_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey_::_1_::dtor$1 @ 0x180042572 (_ApplicationSpecificEndpointInfo--ReadEndpointDataFromKey_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber_::_1_::dtor$0 @ 0x180042584 (_ApplicationSpecificEndpointInfo--DoesStringRepresentAPositiveNumber_--_1_--dtor$0.c)
 *     _ATL::CSid::CSid_::_1_::dtor$0 @ 0x180042614 (_ATL--CSid--CSid_--_1_--dtor$0.c)
 *     _ATL::CSid::CSid_::_1_::dtor$1 @ 0x18004262A (_ATL--CSid--CSid_--_1_--dtor$1.c)
 *     _ATL::CSid::CSid_::_1_::dtor$2 @ 0x180042640 (_ATL--CSid--CSid_--_1_--dtor$2.c)
 *     _ATL::CSid::CSid_::_1_::dtor$3 @ 0x180042656 (_ATL--CSid--CSid_--_1_--dtor$3.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$2 @ 0x180042756 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$2.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$3 @ 0x18004276C (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$3.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$4 @ 0x180042782 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$4.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$5 @ 0x180042798 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
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
