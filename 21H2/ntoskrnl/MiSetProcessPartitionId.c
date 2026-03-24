/*
 * XREFs of MiSetProcessPartitionId @ 0x1402E5D98
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406D04E4 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetProcessPartitionId(__int64 a1, __int16 a2)
{
  *(_WORD *)(a1 + 1838) = a2;
}
