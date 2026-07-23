/*
 * XREFs of PipAddDependentsToRebuildPowerRelationsQueue @ 0x1407B6460
 * Callers:
 *     IoResolveDependency @ 0x1403BF8D0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14061220C (PnpDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14089D7D0 (IoDuplicateDependency.c)
 * Callees:
 *     PiGetDependentList @ 0x14074B534 (PiGetDependentList.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x14074B884 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiEnumerateDependentListEntry @ 0x14089DA58 (PiEnumerateDependentListEntry.c)
 */

__int64 *__fastcall PipAddDependentsToRebuildPowerRelationsQueue(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = PiGetDependentList(a1);
  v2 = result;
  v3 = (__int64 *)*result;
  while ( v3 != v2 )
  {
    result = (__int64 *)PiEnumerateDependentListEntry(v3, &v4, 0LL);
    v3 = (__int64 *)*v3;
    if ( v4 )
      result = PipAddtoRebuildPowerRelationsQueue(v4);
  }
  return result;
}
