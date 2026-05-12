/*
 * XREFs of RaidAdapterGetSystemPowerHint @ 0x1C002B730
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C002E41C (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C002F170 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0031340 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerHint(__int64 a1)
{
  if ( *(char *)(a1 + 108) >= 0 )
    return 3LL;
  else
    return 2 - (unsigned int)((*(_BYTE *)(a1 + 109) & 1) != 0);
}
