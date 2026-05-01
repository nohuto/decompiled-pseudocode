/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x1802EA180
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@W7E$AAAKXZ @ 0x1800D5230 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Exp.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WBA@E$AAAKXZ @ 0x1800D5240 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_1800D5240.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WBI@E$AAAKXZ @ 0x1800D5250 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_1800D5250.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WCA@E$AAAKXZ @ 0x1800D5260 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_1800D5260.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WCI@E$AAAKXZ @ 0x1800D5270 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_1800D5270.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WDA@E$AAAKXZ @ 0x1800D5280 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_1800D5280.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WDI@E$AAAKXZ @ 0x1800D5290 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_1800D5290.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x1802CBEC8 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1802CCF50 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____VectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_2_UE_AAAKXZ(
        __int64 a1)
{
  unsigned int v2; // edi
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  Platform::Details::ControlBlock *v5; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 104));
  if ( !v2 )
  {
    v3 = *(std::_Ref_count_base **)(a1 + 88);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    v4 = *(std::_Ref_count_base **)(a1 + 72);
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
    v5 = *(Platform::Details::ControlBlock **)(a1 + 104);
    Platform::Details::ControlBlock::ReleaseTarget(v5);
    Platform::Details::ControlBlock::__abi_Release(v5);
  }
  return v2;
}
