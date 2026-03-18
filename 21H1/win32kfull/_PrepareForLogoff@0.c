/*
 * XREFs of _PrepareForLogoff@0 @ 0xD3ABA
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _RegisterPerUserKeyboardIndicators@4 @ 0xD3B42 (_RegisterPerUserKeyboardIndicators@4.c)
 */

int __stdcall PrepareForLogoff()
{
  int v0; // eax
  int ProfileUserName; // esi
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x20000000) != 0
    && *(char *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 416) + 12) < 0 )
  {
    return 0;
  }
  if ( PsGetThreadProcessId((PETHREAD)*_gptiCurrent) == (HANDLE)_gpidLogon && !_gProtocolType )
  {
    v0 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 356);
    if ( v0 )
    {
      if ( *(_DWORD *)(v0 + 100) || *(_DWORD *)(v0 + 104) )
      {
        memset(v3, 0, sizeof(v3));
        ProfileUserName = CreateProfileUserName(v3);
        RegisterPerUserKeyboardIndicators(ProfileUserName);
        FreeProfileUserName(ProfileUserName, v3);
      }
    }
  }
  return 1;
}
