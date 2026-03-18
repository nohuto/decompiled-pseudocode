/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x14086E388
 * Callers:
 *     CmpCreateTombstone @ 0x1404E83EC (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpCopyKeyPartial @ 0x1407524C0 (CmpCopyKeyPartial.c)
 *     CmpCommitSetSecurityUoW @ 0x14076A7EC (CmpCommitSetSecurityUoW.c)
 *     CmpCreateHiveRootCell @ 0x14077B810 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x1407BD900 (CmpAssignKeySecurity.c)
 *     CmpCreateEmptyKey @ 0x14086CAE4 (CmpCreateEmptyKey.c)
 *     CmpCopySaclToVirtualKey @ 0x14086E48C (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x14087693C (CmpSyncKeyValues.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x14063E6C4 (CmpGetSecurityDescriptorNode.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, __int64 a2, __int64 a3, void *a4, char a5)
{
  return CmpGetSecurityDescriptorNode(a1, a2, a3, a4, a5, (unsigned int *)(a3 + 44));
}
