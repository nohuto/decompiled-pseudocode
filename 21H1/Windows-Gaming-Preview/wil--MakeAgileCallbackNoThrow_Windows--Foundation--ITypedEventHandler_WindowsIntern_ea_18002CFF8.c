/*
 * XREFs of wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile___WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____lambda_f23a13fd883c5047f169eb01f235cefa___ @ 0x18002CFF8
 * Callers:
 *     ?_InitializeListener@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028B84 (-_InitializeListener@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180011C20 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTile___WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs_____lambda_f23a13fd883c5047f169eb01f235cefa___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx
  _QWORD *result; // rax

  v2 = 0LL;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    *v5 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 1));
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *>'};
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_DWORD *)v5 + 15) = 1;
    if ( v6 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
    v5[8] = 0LL;
    if ( v5 + 8 != a2 )
    {
      v5[8] = *a2;
      *a2 = 0LL;
    }
    v2 = v5;
    v5[9] = a2[1];
    *v5 = off_18004C2E8;
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  }
  result = a1;
  *a1 = v2;
  return result;
}
