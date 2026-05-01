/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1802CF438
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800D3340 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlExplorerHostApp@Desktop@Composabl.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1802D0A44 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1802D0A44.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 224));
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
