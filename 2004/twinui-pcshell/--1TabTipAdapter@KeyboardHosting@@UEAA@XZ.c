/*
 * XREFs of ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x18035B05C
 * Callers:
 *     ??_GTabTipAdapter@KeyboardHosting@@UEAAPEAXI@Z @ 0x18035B760 (--_GTabTipAdapter@KeyboardHosting@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x18035E434 (-InternalRelease@-$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall KeyboardHosting::TabTipAdapter::~TabTipAdapter(KeyboardHosting::TabTipAdapter *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  *(_QWORD *)this = &KeyboardHosting::TabTipAdapter::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRemoteTabTipAdapter>'};
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  while ( 1 )
  {
    v2 = *((_QWORD *)this + 66);
    if ( !v2 )
      break;
    v3 = v2 - 1;
    *((_QWORD *)this + 66) = v3;
    if ( !v3 )
      *((_QWORD *)this + 65) = 0LL;
  }
  v4 = *((_QWORD *)this + 64);
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(*((_QWORD *)this + 63) + 8 * v4);
    if ( v5 )
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x58);
  }
  v6 = (void *)*((_QWORD *)this + 63);
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(8LL * *((_QWORD *)this + 64)));
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  v7 = (void *)*((_QWORD *)this + 62);
  *((_QWORD *)this + 62) = 0LL;
  std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x10);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 10);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 40);
  Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::InternalRelease((char *)this + 104);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 5) = -1073741823;
}
