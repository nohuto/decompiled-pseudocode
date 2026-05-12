/*
 * XREFs of RaidAdapterGetSystemPowerResumeLatency @ 0x1C002CB4C
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C002F830 (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C0030580 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0032700 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerResumeLatency(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 500LL;
  if ( v1 == 1 )
    return 100LL;
  return 50LL;
}
