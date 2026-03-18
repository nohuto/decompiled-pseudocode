/*
 * XREFs of HvAllocateCell @ 0x14069EE08
 * Callers:
 *     CmpCreateTombstone @ 0x1404E83EC (CmpCreateTombstone.c)
 *     CmpSetValueKeyExisting @ 0x1405E0E2C (CmpSetValueKeyExisting.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063DCA4 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x14063E6C4 (CmpGetSecurityDescriptorNode.c)
 *     CmpAddSubKeyEx @ 0x140640CC0 (CmpAddSubKeyEx.c)
 *     CmpCopyCell @ 0x1406558C8 (CmpCopyCell.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpAddValueToListEx @ 0x14069D9F8 (CmpAddValueToListEx.c)
 *     CmpSetValueDataNew @ 0x14069DE38 (CmpSetValueDataNew.c)
 *     CmpAddValueKeyNew @ 0x14069E11C (CmpAddValueKeyNew.c)
 *     HvDuplicateCell @ 0x14070AC70 (HvDuplicateCell.c)
 *     CmpSetValueDataExisting @ 0x14070EA74 (CmpSetValueDataExisting.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140717A50 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSplitLeaf @ 0x140721824 (CmpSplitLeaf.c)
 *     CmpCreateHiveRootCell @ 0x14077B810 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x14086B290 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x14086CAE4 (CmpCreateEmptyKey.c)
 *     CmpConcatenateValueLists @ 0x140874EB0 (CmpConcatenateValueLists.c)
 *     CmpCommitRenameKeyUoW @ 0x14087B598 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087C2E4 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087C6F4 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140A59408 (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x14069F174 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvAllocateCell(ULONG_PTR a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // eax
  int v8; // r10d

  v5 = a2 + 11;
  v6 = 0x4000;
  v7 = v5 & 0xFFFFFFF8;
  v8 = 0;
  while ( v7 > v6 )
  {
    v6 *= 2;
    ++v8;
  }
  if ( !v8 )
    v6 = v7;
  if ( v6 > 0x100000 )
    return 0xFFFFFFFFLL;
  else
    return HvpDoAllocateCell(a1, a5);
}
