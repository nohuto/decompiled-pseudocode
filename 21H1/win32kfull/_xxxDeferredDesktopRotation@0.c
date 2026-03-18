/*
 * XREFs of _xxxDeferredDesktopRotation@0 @ 0x1815B6
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxDesktopsRecalcAndBroadcastDisplayChange@16 @ 0xB0710 (_xxxDesktopsRecalcAndBroadcastDisplayChange@16.c)
 */

int __stdcall xxxDeferredDesktopRotation()
{
  _DWORD *v0; // esi
  int v1; // ecx
  int v2; // edi
  _DWORD v4[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD v5[3]; // [esp+14h] [ebp-Ch] BYREF

  v0 = *(_DWORD **)(_gptiCurrent + 248);
  v1 = v0[1];
  if ( v1 && (*(_BYTE *)(*(_DWORD *)v1 + 32) & 2) != 0 )
  {
    memset(v4, 0, sizeof(v4));
    memset(v5, 0, sizeof(v5));
    v2 = v0[38];
    v0[38] = 0;
    *(_DWORD *)(*(_DWORD *)v1 + 32) &= ~2u;
    if ( v2 )
      PushW32ThreadLock(v2, v4, (int)Win32FreePool);
    PushW32ThreadLock((int)v0, v5, (int)UserDereferenceObject);
    ObfReferenceObject(v0);
    xxxDesktopsRecalcAndBroadcastDisplayChange((int)v0, v2, *(_WORD *)(_gpsi + 6240), 1);
    PopAndFreeW32ThreadLock((int)v5);
    if ( v2 )
      PopAndFreeAlwaysW32ThreadLock((int)v4);
  }
  return 0;
}
