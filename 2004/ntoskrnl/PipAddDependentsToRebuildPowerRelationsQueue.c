/*
 * XREFs of PipAddDependentsToRebuildPowerRelationsQueue @ 0x1407A1FA0
 * Callers:
 *     IoResolveDependency @ 0x1403BC7D0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x1406A59EC (PnpDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14089A570 (IoDuplicateDependency.c)
 * Callees:
 *     PiGetDependentList @ 0x14072C10C (PiGetDependentList.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x14072C470 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiEnumerateDependentListEntry @ 0x14089A7F8 (PiEnumerateDependentListEntry.c)
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
