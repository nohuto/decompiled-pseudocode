/*
 * XREFs of HvlResumePartition @ 0x1404F0ED0
 * Callers:
 *     <none>
 * Callees:
 *     HvlSetPartitionProperty @ 0x1404F12F8 (HvlSetPartitionProperty.c)
 */

__int64 __fastcall HvlResumePartition(__int64 a1, __int64 a2)
{
  return HvlSetPartitionProperty(a1, a2, 0LL);
}
