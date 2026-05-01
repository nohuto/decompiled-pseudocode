/*
 * XREFs of ?CopyToOrDetach@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AE$AAAXPEAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x1802DE67C
 * Callers:
 *     ?__abi_Platform_?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_get_Value@?Q?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJPEAIPEAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1802E87D0 (-__abi_Platform_-$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Composable.c)
 * Callees:
 *     ?Get@__abi_FTMWeakRefData@@QECAJXZ @ 0x1802CF364 (-Get@__abi_FTMWeakRefData@@QECAJXZ.c)
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@KAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEBQE$AAU34567@I@Z @ 0x1802DD848 (-AllocateAndCopyElements@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Interna.c)
 */

void __fastcall Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::CopyToOrDetach(
        __int64 a1,
        void **a2,
        _DWORD *a3)
{
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // r8

  if ( !a2 || !a3 )
  {
LABEL_13:
    __abi_WinRTraiseNullReferenceException();
    __debugbreak();
    JUMPOUT(0x1802DE739LL);
  }
  if ( !*(_DWORD *)(a1 + 72) )
  {
    *a2 = 0LL;
    *a3 = 0;
    return;
  }
  if ( !*(_QWORD *)(a1 + 80) )
    goto LABEL_12;
  v6 = *(_BYTE *)(a1 + 76);
  v7 = a1 + 88;
  if ( !v6 )
  {
    if ( (unsigned int)__abi_FTMWeakRefData::Get(v7) == 1 )
    {
      *a2 = *(void **)(a1 + 80);
      *v10 = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(a1 + 72) = v8;
      *(_BYTE *)(a1 + 76) = v8;
      *(_QWORD *)(a1 + 80) = v8;
      return;
    }
    if ( !*(_BYTE *)(a1 + 76) && (int)__abi_FTMWeakRefData::Get(v9) <= 1 )
    {
LABEL_12:
      __abi_WinRTraiseFailureException();
      __debugbreak();
      goto LABEL_13;
    }
  }
  *a2 = Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::AllocateAndCopyElements(
          *(__int64 **)(a1 + 80),
          *(_DWORD *)(a1 + 72));
  *a3 = *(_DWORD *)(a1 + 72);
}
