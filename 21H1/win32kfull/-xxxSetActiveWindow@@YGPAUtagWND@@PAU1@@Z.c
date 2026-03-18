/*
 * XREFs of ?xxxSetActiveWindow@@YGPAUtagWND@@PAU1@@Z @ 0xAB8FC
 * Callers:
 *     _NtUserSetActiveWindow@4 @ 0xAB878 (_NtUserSetActiveWindow@4.c)
 *     _xxxActivateEnabledPopup@4 @ 0x1A1E3A (_xxxActivateEnabledPopup@4.c)
 * Callees:
 *     ?xxxActivateWindow@@YG_NPAUtagWND@@@Z @ 0x1A2B0 (-xxxActivateWindow@@YG_NPAUtagWND@@@Z.c)
 */

struct tagWND *__thiscall xxxSetActiveWindow(_DWORD *this)
{
  _DWORD *v1; // eax
  unsigned int v2; // esi

  if ( (*(_BYTE *)(_gptiCurrent + 264) & 2) == 0
    && this
    && *(_DWORD *)(this[2] + 236) != *(_DWORD *)(_gptiCurrent + 236) )
  {
    return 0;
  }
  v1 = *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 236) + 64);
  v2 = v1 ? *v1 : 0;
  if ( !this )
    return 0;
  xxxActivateWindow(this);
  return (struct tagWND *)HMValidateHandleNoSecure(v2, 1);
}
