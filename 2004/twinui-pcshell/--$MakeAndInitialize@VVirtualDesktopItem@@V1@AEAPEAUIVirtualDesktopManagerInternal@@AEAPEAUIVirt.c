/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItem@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Z @ 0x18039F8B8
 * Callers:
 *     ?VirtualDesktopItem_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktop@@AEBU_GUID@@PEAPEAX@Z @ 0x18039FE6C (-VirtualDesktopItem_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktop@@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@U?$ChainInterfaces@UIVirtualDesktopItemInternal@@UIVirtualDesktopItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801A6B98 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801A6B98.c)
 *     ??0VirtualDesktopItem@@QEAA@XZ @ 0x18039F980 (--0VirtualDesktopItem@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItem@@@WRL@Microsoft@@IEAAKXZ @ 0x18039FD40 (-InternalRelease@-$ComPtr@VVirtualDesktopItem@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItem,VirtualDesktopItem,IVirtualDesktopManagerInternal * &,IVirtualDesktop * &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v5; // edi
  VirtualDesktopItem *v7; // rax
  VirtualDesktopItem *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rbx
  volatile int *v12; // rdx
  VirtualDesktopItem *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  *a1 = 0LL;
  v7 = (VirtualDesktopItem *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = VirtualDesktopItem::VirtualDesktopItem(v7);
    v9 = *a2;
    v10 = (__int64)v8;
    v11 = *a3;
    v14 = v8;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v8 + 11, v9);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v10 + 96), v11);
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableItem,Microsoft::WRL::ChainInterfaces<IVirtualDesktopItemInternal,IVirtualDesktopItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::InternalAddRef(
        v10,
        v12);
    *a1 = v10;
    Microsoft::WRL::ComPtr<VirtualDesktopItem>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
