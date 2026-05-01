/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18001632C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler::_)(Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_Microsoft::WRL::FtmBase___lambda_b443b47690db9320d23fa8a69834bd81___1_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Invoke @ 0x18001F600 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Gaming--Preview--GamesEnumerat.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler::_)(HSTRING____)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler_Microsoft::WRL::FtmBase___lambda_9598f9a09e0b454f94e474723c5ca7fa___1_HSTRING_____::Invoke @ 0x18001F7B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Gaming--Preview--_ea_18001F7B0.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____::_)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_eede59f8759bb1cb05f1ba72ed0c7769___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs___::Invoke @ 0x18001FF70 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::UnifiedTile___WindowsInternal::Shell::UnifiedTile::IUnifiedTile____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs___WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs_____::_)(WindowsInternal::Shell::UnifiedTile::IUnifiedTile___WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile___WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs____Microsoft::WRL::FtmBase___lambda_f23a13fd883c5047f169eb01f235cefa___1_WindowsInternal::Shell::UnifiedTile::IUnifiedTile___WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs___::Invoke @ 0x180034100 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180034100.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  result = RoGetMatchingRestrictedErrorInfo(a1, &v3);
  if ( (int)result >= 0 )
    result = SetRestrictedErrorInfo(v3);
  v2 = v3;
  if ( v3 )
  {
    v3 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
