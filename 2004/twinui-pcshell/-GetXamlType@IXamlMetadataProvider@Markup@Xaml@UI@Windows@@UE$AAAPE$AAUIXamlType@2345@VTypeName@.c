/*
 * XREFs of ?GetXamlType@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x1802F11B4
 * Callers:
 *     ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x1802F1094 (-GetXamlType@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@De_ea_1802F1094.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EC420 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::UI::Xaml::Markup::IXamlMetadataProvider::GetXamlType(__int64 *a1, __int128 *a2)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = *a1;
  v6 = *a2;
  v3 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v2 + 48))(a1, &v6, &v7);
  if ( v3 < 0 )
  {
    __abi_WinRTraiseException(v3);
    __debugbreak();
  }
  v4 = __abi_winrt_ptr_ctor(v7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v4;
}
