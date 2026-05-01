/*
 * XREFs of ?get@?Q?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Platform@@Value@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAP$01E$AAV42@XZ @ 0x1802FC790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x1802F5EF0 (--0-$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 */

// Hidden C++ exception states: #wind=1
Platform::Details *__fastcall _get__Q__IBoxArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Platform__Value___Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAP_01E_AAV42_XZ(
        _BYTE *a1)
{
  _BYTE *v1; // rbx
  Platform::Details *v3; // [rsp+30h] [rbp+8h]

  v1 = a1;
  if ( a1 )
  {
    if ( a1[76] )
    {
      v3 = (Platform::Details *)Platform::Details::Heap::Allocate(0x58uLL, 0x88uLL);
      return Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>(v3);
    }
    else
    {
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 8LL))(a1);
    }
  }
  return (Platform::Details *)v1;
}
