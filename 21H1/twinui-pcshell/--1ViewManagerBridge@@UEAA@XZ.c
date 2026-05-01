/*
 * XREFs of ??1ViewManagerBridge@@UEAA@XZ @ 0x18027F318
 * Callers:
 *     ??_GViewManagerBridge@@UEAAPEAXI@Z @ 0x180280350 (--_GViewManagerBridge@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180113F20 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?InternalRelease@?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180282748 (-InternalRelease@-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ViewManagerBridge::~ViewManagerBridge(ViewManagerBridge *this, void *a2)
{
  void *v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  void *v6; // rdx

  v3 = (void *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_QWORD *)this + 20) )
    {
      v5 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v5 + *((_QWORD *)this + 19)));
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < *((_QWORD *)this + 20) );
      v3 = (void *)*((_QWORD *)this + 19);
    }
    CoTaskMemFree(v3);
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 17,
    a2);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 16,
    v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease((char *)this + 80);
  *((_DWORD *)this + 19) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
}
