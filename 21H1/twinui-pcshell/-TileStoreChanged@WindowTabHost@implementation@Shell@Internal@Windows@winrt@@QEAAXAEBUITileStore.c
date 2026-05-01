/*
 * XREFs of ?TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore@Tiles@456@AEBUITileStoreChangedEventArgs@8456@@Z @ 0x1800B99F0
 * Callers:
 *     <none>
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180094AE0 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::TileStoreChanged(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        const struct winrt::Windows::Internal::Tiles::ITileStore *a2,
        const struct winrt::Windows::Internal::Tiles::ITileStoreChangedEventArgs *a3)
{
  unsigned int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)a3 + 48LL))(*(_QWORD *)a3, &v5);
  winrt::check_hresult(v4);
  *((_QWORD *)this + 56) = v5;
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications(this);
}
