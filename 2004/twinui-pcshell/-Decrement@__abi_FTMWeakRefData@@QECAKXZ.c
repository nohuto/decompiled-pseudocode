/*
 * XREFs of ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x1802EDA68
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@UE$AAAKXZ @ 0x1802EEA90 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@UE$AAAKXZ.c)
 *     ?__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x1802EEB40 (-__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAKXZ @ 0x1802F2C80 (-__abi_Release@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAK.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@2@UE$AAAKXZ @ 0x1802F2D00 (-__abi_Release@-QObject@Platform@@-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@D_ea_1802F2D00.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAKXZ @ 0x1802F2D70 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@_ea_1802F2D70.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x1802F2DF0 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@U.c)
 *     ?__abi_Release@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x1802F2E70 (-__abi_Release@-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@UE$AAAKXZ @ 0x18030BC00 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multita_ea_18030BC00.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x18030BC80 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_18030BC80.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x18030BD20 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_18030BD20.c)
 *     ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAKXZ @ 0x18030BDA0 (-__abi_Release@-QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShel_ea_18030BDA0.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAKXZ @ 0x18030BE10 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_18030BE10.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAKXZ @ 0x18030BE70 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ @ 0x18031D5C0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ @ 0x180321A30 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@UE$AAAKXZ @ 0x180322A70 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ @ 0x180328E00 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_FTMWeakRefData::Decrement(int **a1)
{
  int *v2; // rax
  unsigned __int32 v3; // edi

  if ( !*a1 || (*a1)[3] < 0 )
    return 0xFFFFFFFFLL;
  v2 = *a1;
  v3 = _InterlockedDecrement(*a1 + 3);
  if ( !v3 )
  {
    v2[3] = -1073741824;
    if ( a1[1] && a1[1] != (int *)-1LL )
    {
      (*(void (__fastcall **)(int *))(*(_QWORD *)a1[1] + 16LL))(a1[1]);
      a1[1] = 0LL;
    }
    if ( __abi_module )
      (*(void (__fastcall **)(struct __abi_Module *))(*(_QWORD *)__abi_module + 8LL))(__abi_module);
  }
  return v3;
}
