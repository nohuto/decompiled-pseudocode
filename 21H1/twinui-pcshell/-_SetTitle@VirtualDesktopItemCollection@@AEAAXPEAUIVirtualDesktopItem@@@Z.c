/*
 * XREFs of ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x18037207C
 * Callers:
 *     ?VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180371C10 (-VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z @ 0x180371E1C (-_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1802F96CC (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ??4?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@QEAAAEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAV123@@Z @ 0x1803716D0 (--4-$ObservableProperty@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows.c)
 */

void __fastcall VirtualDesktopItemCollection::_SetTitle(
        VirtualDesktopItemCollection *this,
        struct IVirtualDesktopItem *a2)
{
  __int64 v2; // rax
  _DWORD *v4; // rax
  _QWORD *v5; // rax
  wchar_t *v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)a2;
  memset(v6, 0, 24);
  v4 = (_DWORD *)(*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(v2 + 48))(a2);
  if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
              v6,
              &_ImageBase,
              13011LL,
              (unsigned int)(*v4 + 1)) >= 0 )
  {
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)a2 + 24LL))(a2);
    ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::operator=(
      v5,
      (__int64 *)v6);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v6);
}
