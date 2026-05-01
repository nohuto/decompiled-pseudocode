/*
 * XREFs of ?get@?Q?$IBoxArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Platform@@Value@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAP$01E$AAV42@XZ @ 0x18030D9C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QE$AAA@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1802F9E78 (--0-$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QE$AAA.c)
 */

// Hidden C++ exception states: #wind=1
Platform::Details *__fastcall _get__Q__IBoxArray_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Platform__Value___Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_2_UE_AAAP_01E_AAV42_XZ(
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
      return Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(v3);
    }
    else
    {
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 8LL))(a1);
    }
  }
  return (Platform::Details *)v1;
}
