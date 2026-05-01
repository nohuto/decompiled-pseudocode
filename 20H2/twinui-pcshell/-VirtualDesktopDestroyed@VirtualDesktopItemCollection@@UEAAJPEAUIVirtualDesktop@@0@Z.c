/*
 * XREFs of ?VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1803925A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??4?$ObservableProperty@I@@QEAAAEBIAEBI@Z @ 0x180392008 (--4-$ObservableProperty@I@@QEAAAEBIAEBI@Z.c)
 *     ?_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18039292C (-_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x180392A0C (-_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z.c)
 */

__int64 __fastcall VirtualDesktopItemCollection::VirtualDesktopDestroyed(
        VirtualDesktopItemCollection *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rbp
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  VirtualDesktopItemCollection *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+40h] [rbp+8h] BYREF
  struct IVirtualDesktopItem *v14; // [rsp+58h] [rbp+20h] BYREF

  v4 = VirtualDesktopItemCollection::_RemoveDesktopItem((VirtualDesktopItemCollection *)((char *)this - 144), a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v13 = 0;
  if ( *((_QWORD *)this - 15) )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v14 = 0LL;
      v8 = *((_QWORD *)this - 16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IVirtualDesktopItem **))(v8 + 8 * v7))(
             *(_QWORD *)(v8 + 8 * v7),
             &GUID_8335a836_e567_41a4_8778_62f004524ceb,
             &v14);
      v5 = v9;
      if ( v9 < 0 )
        break;
      v10 = (*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)v14 + 48LL))(v14);
      ObservableProperty<unsigned int>::operator=(v10, &v13);
      VirtualDesktopItemCollection::_SetTitle(v11, v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      v7 = (unsigned int)(v7 + 1);
      v13 = v7;
      if ( (unsigned __int64)(unsigned int)v7 >= *((_QWORD *)this - 15) )
        return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    return v5;
  }
  return 0LL;
}
