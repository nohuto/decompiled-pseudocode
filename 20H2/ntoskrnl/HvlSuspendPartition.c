/*
 * XREFs of HvlSuspendPartition @ 0x1404F4E00
 * Callers:
 *     <none>
 * Callees:
 *     HvlSetPartitionProperty @ 0x1404F4B68 (HvlSetPartitionProperty.c)
 */

__int64 __fastcall HvlSuspendPartition(__int64 a1, __int64 a2)
{
  return HvlSetPartitionProperty(a1, a2, 1LL);
}
