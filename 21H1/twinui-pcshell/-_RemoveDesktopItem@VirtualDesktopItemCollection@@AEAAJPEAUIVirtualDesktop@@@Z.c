/*
 * XREFs of ?_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x180371F9C
 * Callers:
 *     ?VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180371C10 (-VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIVirtualDesktopItemInternal@@@?$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180371484 (--$As@UIVirtualDesktopItemInternal@@@-$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRe.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x18037E4C8 (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 */

__int64 __fastcall VirtualDesktopItemCollection::_RemoveDesktopItem(
        VirtualDesktopItemCollection *this,
        struct IVirtualDesktop *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v5; // rbp
  int v6; // eax
  unsigned int v7; // ebx
  struct IVirtualDesktop *v8; // rbx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v5 = &v2[*((_QWORD *)this + 3)];
  while ( 1 )
  {
    if ( v2 == v5 )
      return 2147942487LL;
    v12 = 0LL;
    v6 = Microsoft::WRL::ComPtr<IObservableItem>::As<IVirtualDesktopItemInternal>(v2, &v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v10 = 95LL;
      goto LABEL_10;
    }
    v8 = *(struct IVirtualDesktop **)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 72LL))(v12, &v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    if ( v8 == a2 )
      break;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    ++v2;
  }
  v6 = ObservableObjectArray::_RemoveItem(this, v2, 1LL);
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_11;
  v10 = 98LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
    (const char *)(unsigned int)v6);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return v7;
}
