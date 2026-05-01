/*
 * XREFs of ?TabChanged@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBAXAEBUevent_token@3@@Z @ 0x1800C8DBC
 * Callers:
 *     ??1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800C1588 (--1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?DestroyWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1800C1FDC (-DestroyWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TabChanged(
        _QWORD *a1,
        _QWORD *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 152LL))(*a1, *a2);
}
