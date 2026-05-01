/*
 * XREFs of ?__abi_Platform_?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_get_Value@?Q?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJPEAIPEAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18030A370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?CopyToOrDetach@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AE$AAAXPEAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x18030021C (-CopyToOrDetach@-$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Pla.c)
 */

__int64 __fastcall ___abi_Platform___IBoxArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal______abi_get_Value__Q__IBoxArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Platform____Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAJPEAIPEAPEAPE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Z(
        _BYTE *a1,
        _DWORD *a2,
        void **a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi

  if ( a1[128] )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0;
  *a3 = 0LL;
  try
  {
    v5 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 56LL))(a1);
    v6 = v5;
    if ( v5 )
    {
      Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::CopyToOrDetach(
        v5,
        a3,
        a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      *a3 = 0LL;
      *a2 = 0;
    }
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
