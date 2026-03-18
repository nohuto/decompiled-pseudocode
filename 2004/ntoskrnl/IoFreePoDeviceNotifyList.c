/*
 * XREFs of IoFreePoDeviceNotifyList @ 0x1409946AC
 * Callers:
 *     PoClearBroadcast @ 0x140765200 (PoClearBroadcast.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x1402DA3D4 (PnpUnlockDeviceActionQueue.c)
 *     IopFreePoDeviceNotifyListHead @ 0x140994718 (IopFreePoDeviceNotifyListHead.c)
 */

__int64 __fastcall IoFreePoDeviceNotifyList(_BYTE *a1)
{
  _BYTE *v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax

  if ( *a1 )
  {
    v2 = a1 + 40;
    v3 = 5LL;
    do
    {
      IopFreePoDeviceNotifyListHead(v2 - 16);
      IopFreePoDeviceNotifyListHead(v2);
      IopFreePoDeviceNotifyListHead(v2 + 16);
      IopFreePoDeviceNotifyListHead(v2 + 32);
      v2 += 72;
      --v3;
    }
    while ( v3 );
    *a1 = 0;
    return PnpUnlockDeviceActionQueue();
  }
  return result;
}
