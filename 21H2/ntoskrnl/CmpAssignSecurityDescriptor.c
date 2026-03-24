/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x1408716B0
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED55C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmpCopyKeyPartial @ 0x14076F88C (CmpCopyKeyPartial.c)
 *     CmpCreateHiveRootCell @ 0x14078DBF0 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x1407D0450 (CmpAssignKeySecurity.c)
 *     CmpSyncKeyValues @ 0x140879E2C (CmpSyncKeyValues.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, ULONG_PTR a2, __int64 a3, void *Src)
{
  return CmpGetSecurityDescriptorNodeEx(a1, a2, a3, (unsigned int)a2 >> 31, Src, 0, (unsigned int *)(a3 + 44));
}
