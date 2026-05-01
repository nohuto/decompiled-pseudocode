/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@3@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1802F068C
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@23@WCA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800F95F0 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$CustomBox@PE$AAVXamlExplorerHostLau.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@WBI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800F9600 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@EvaluateItemEventArgs@Multitasking@Co.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1802F1C08 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1802F1C08.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform____WriteOnlyArray_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_3_UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 56));
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
