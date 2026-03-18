/*
 * XREFs of ?HKRemoveHotkeyOrMakePlaceholder@@YG_NPAPAUtagHOTKEY@@@Z @ 0xC8F5A
 * Callers:
 *     ?HKRemoveMatchingHotkeys@@YG_NPAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x830D0 (-HKRemoveMatchingHotkeys@@YG_NPAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 * Callees:
 *     ?RemoveSasKey@@YG_NII@Z @ 0xD484C (-RemoveSasKey@@YG_NII@Z.c)
 *     ?NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z @ 0xF1B4A (-NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z.c)
 */

char __thiscall HKRemoveHotkeyOrMakePlaceholder(int *this)
{
  int v2; // esi
  __int16 v3; // cx
  struct tagCHILDHOTKEY *v5; // [esp+0h] [ebp-Ch]
  unsigned int v6; // [esp+0h] [ebp-Ch]
  bool v7; // [esp+4h] [ebp-8h]
  unsigned int v8; // [esp+4h] [ebp-8h]

  v2 = *this;
  if ( (*(_WORD *)(*this + 14) & 0x100) != 0 )
    return 0;
  NotifyHotKeyRegistrationChanged(0, v5, v7);
  if ( *(_DWORD *)(v2 + 8) == 1 )
    *(_DWORD *)(v2 + 8) = 0;
  else
    HMAssignmentUnlock(v2 + 8);
  v3 = *(_WORD *)(v2 + 14);
  if ( v3 < 0 )
  {
    RemoveSasKey(v6, v8);
    v3 = *(_WORD *)(v2 + 14);
  }
  if ( (v3 & 0x200) != 0 && *(_DWORD *)(v2 + 28) != v2 + 28 )
  {
    *(_DWORD *)v2 = 0;
    *(_WORD *)(v2 + 14) = v3 | 0x100;
    *(_DWORD *)(v2 + 20) = 0;
    return 0;
  }
  *this = *(_DWORD *)(v2 + 24);
  Win32FreePool(v2);
  return 1;
}
