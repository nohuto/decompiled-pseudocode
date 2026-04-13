/*
 * XREFs of ??1iterable_iterator@?$iterable_range@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800894C8
 * Callers:
 *     _CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::dtor$2 @ 0x1800D7414 (_CreativeFramework--Actions--SwapStartTileService--EnumerateAliasMap_--_1_--dtor$2.c)
 *     _CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::dtor$3 @ 0x1800D7426 (_CreativeFramework--Actions--SwapStartTileService--EnumerateAliasMap_--_1_--dtor$3.c)
 *     _CreativeFramework::EnumerateTargetedContentTiles_::_1_::dtor$5 @ 0x1800D914E (_CreativeFramework--EnumerateTargetedContentTiles_--_1_--dtor$5.c)
 *     _CreativeFramework::EnumerateTargetedContentTiles_::_1_::dtor$6 @ 0x1800D9160 (_CreativeFramework--EnumerateTargetedContentTiles_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::iterable_range<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Services::TargetedContent::Internal::TargetedContentIdAliasValue *> *,wil::err_exception_policy>::iterable_iterator::~iterable_iterator(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[2];
  if ( v2 )
  {
    a1[2] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
