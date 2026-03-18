/*
 * XREFs of MiSetProcessPartitionId @ 0x140328494
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetProcessPartitionId(__int64 a1, __int16 a2)
{
  *(_WORD *)(a1 + 1838) = a2;
}
