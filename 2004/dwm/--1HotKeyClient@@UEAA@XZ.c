/*
 * XREFs of ??1HotKeyClient@@UEAA@XZ @ 0x14000A984
 * Callers:
 *     ??_EHotKeyClient@@UEAAPEAXI@Z @ 0x14000AB20 (--_EHotKeyClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140008458 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x14000AC7C (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HotKeyClient::~HotKeyClient(HotKeyClient *this)
{
  char *v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdi

  *(_QWORD *)this = &HotKeyClient::`vftable'{for `IHotKeyClient'};
  *((_QWORD *)this + 1) = &HotKeyClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRemoteHotKeyCallBack,IMessageProxyReconnectAdapterOwner,IUnknown>'};
  *((_QWORD *)this + 2) = &HotKeyClient::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHotKeyClient,IRemoteHotKeyCallBack,IMessageProxyReconnectAdapterOwner,IUnknown>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IUnknown>'};
  v2 = (char *)*((_QWORD *)this + 14);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 20 * ((*((_QWORD *)this + 16) - (_QWORD)v2) / 20LL));
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 104);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 96);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 88);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 80);
  v3 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  v4 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_DWORD *)this + 9) = -1073741823;
}
