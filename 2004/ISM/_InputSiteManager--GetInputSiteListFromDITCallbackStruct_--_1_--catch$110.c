/*
 * XREFs of _InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::catch$110 @ 0x18004F7E0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18006595C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::catch_110(__int64 a1, __int64 a2)
{
  int v2; // ebx

  v2 = *(_DWORD *)(*(_QWORD *)(a2 + 320) + 28LL);
  if ( v2 != (unsigned int)wil::details::NtStatusToHr((wil::details *)0xC0000008LL, a2) )
    throw;
  return 0LL;
}
