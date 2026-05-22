/*
 * XREFs of ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1800658DC
 * Callers:
 *     _InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::catch$110 @ 0x18004F790 (_InputSiteManager--GetInputSiteListFromDITCallbackStruct_--_1_--catch$110.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x1800664A4 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180078370 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     _lambda_c4b5ac531e4df77abc1357e1027acfb6_::operator() @ 0x18009CBA0 (_lambda_c4b5ac531e4df77abc1357e1027acfb6_--operator().c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800C0740 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 *     ?ShareSection@AlpcPort@@UEAAJPEAX@Z @ 0x1800C17F0 (-ShareSection@AlpcPort@@UEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

signed int __fastcall wil::details::NtStatusToHr(wil::details *this)
{
  int v1; // ebx
  signed int result; // eax

  v1 = (int)this;
  if ( (int)this >= 0 )
    return 0;
  if ( (_DWORD)this == -1073741801 )
    return -2147024882;
  if ( !wil::details::g_pfnRtlNtStatusToDosErrorNoTeb )
    return v1 | 0x10000000;
  result = wil::details::g_pfnRtlNtStatusToDosErrorNoTeb((int)this);
  if ( !result || result == 317 )
    return v1 | 0x10000000;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
