/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x140871810
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED79C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 *     CmpCopyKeyPartial @ 0x14076FA4C (CmpCopyKeyPartial.c)
 *     CmpCreateHiveRootCell @ 0x14078DDB0 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x1407D05C0 (CmpAssignKeySecurity.c)
 *     CmpSyncKeyValues @ 0x140879F8C (CmpSyncKeyValues.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, ULONG_PTR a2, __int64 a3, void *Src)
{
  return CmpGetSecurityDescriptorNodeEx(a1, a2, a3, (unsigned int)a2 >> 31, Src, 0, (unsigned int *)(a3 + 44));
}
