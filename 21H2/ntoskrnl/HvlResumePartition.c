/*
 * XREFs of HvlResumePartition @ 0x140547F60
 * Callers:
 *     <none>
 * Callees:
 *     HvlSetPartitionProperty @ 0x140548398 (HvlSetPartitionProperty.c)
 */

__int64 __fastcall HvlResumePartition(__int64 a1, __int64 a2)
{
  return HvlSetPartitionProperty(a1, a2, 0LL);
}
