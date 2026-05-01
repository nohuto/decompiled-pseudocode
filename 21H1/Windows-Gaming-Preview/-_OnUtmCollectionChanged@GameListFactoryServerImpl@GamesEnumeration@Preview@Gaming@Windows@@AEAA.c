/*
 * XREFs of ?_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x18001BF00
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____::_)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_eede59f8759bb1cb05f1ba72ed0c7769___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs___::Invoke @ 0x18001FF70 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 * Callees:
 *     ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x18001C0FC (-_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     __security_check_cookie @ 0x180044200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *a2,
        char a3)
{
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v11[24]; // [rsp+28h] [rbp-A1h] BYREF
  char v12; // [rsp+40h] [rbp-89h]
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *v13; // [rsp+48h] [rbp-81h]
  _BYTE *v14; // [rsp+60h] [rbp-69h]
  void **v15; // [rsp+70h] [rbp-59h] BYREF
  __int128 v16; // [rsp+78h] [rbp-51h]
  char v17; // [rsp+88h] [rbp-41h]
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *v18; // [rsp+90h] [rbp-39h]
  void *v19; // [rsp+A8h] [rbp-21h]
  void **v20; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v21; // [rsp+B8h] [rbp-11h]
  char v22; // [rsp+C8h] [rbp-1h]
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *v23; // [rsp+D0h] [rbp+7h]
  void *v24; // [rsp+E8h] [rbp+1Fh]

  v10 = 0LL;
  if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v10) >= 0 )
  {
    *(_QWORD *)v11 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileAdded;
    *(_DWORD *)&v11[8] = 0;
    v15 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
    v16 = *(_OWORD *)v11;
    v17 = v11[16];
    v18 = this;
    v19 = &v15;
    *(_QWORD *)v11 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
    *(_OWORD *)&v11[8] = v16;
    v12 = v17;
    v13 = this;
    v14 = v11;
    LOBYTE(v6) = a3;
    Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(
      &v15,
      v10,
      v11,
      v6);
    if ( v19 )
    {
      if ( v19 != &v15 )
        operator delete(v19, (const struct std::nothrow_t *)0x28);
    }
  }
  if ( a3 )
  {
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 72LL))(
           a2,
           &v10) >= 0 )
    {
      *(_QWORD *)v11 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileRemoved;
      *(_DWORD *)&v11[8] = 0;
      v20 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
      v21 = *(_OWORD *)v11;
      v22 = v11[16];
      v23 = this;
      v24 = &v20;
      v15 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
      v16 = *(_OWORD *)v11;
      v17 = v11[16];
      v18 = this;
      v19 = &v15;
      Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(
        &v20,
        v10,
        &v15,
        0LL);
      if ( v24 )
      {
        if ( v24 != &v20 )
          operator delete(v24, (const struct std::nothrow_t *)0x28);
      }
    }
  }
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 0LL;
}
