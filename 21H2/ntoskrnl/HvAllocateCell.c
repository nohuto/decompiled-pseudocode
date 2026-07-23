/*
 * XREFs of HvAllocateCell @ 0x1407207E4
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED79C (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCopyCell @ 0x1405E2220 (CmpCopyCell.c)
 *     HvDuplicateCell @ 0x14061C030 (HvDuplicateCell.c)
 *     CmpSetValueDataExisting @ 0x1406200E0 (CmpSetValueDataExisting.c)
 *     CmpSetValueKeyExisting @ 0x14065BAA8 (CmpSetValueKeyExisting.c)
 *     CmpAddValueToListEx @ 0x14065C284 (CmpAddValueToListEx.c)
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 *     CmpAddSubKeyEx @ 0x14065DA04 (CmpAddSubKeyEx.c)
 *     CmpSetValueDataNew @ 0x14065DC94 (CmpSetValueDataNew.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140661B1C (CmpSetSecurityDescriptorInfo.c)
 *     CmpAddValueKeyNew @ 0x140721380 (CmpAddValueKeyNew.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140729950 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSplitLeaf @ 0x140733A08 (CmpSplitLeaf.c)
 *     CmpCreateHiveRootCell @ 0x14078DDB0 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x14086E64C (CmpAddValueKeyTombstone.c)
 *     CmpConcatenateValueLists @ 0x1408784E0 (CmpConcatenateValueLists.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087F514 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F924 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140A5C0B4 (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x140720248 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvAllocateCell(ULONG_PTR a1, int a2, int a3, _QWORD *a4, __int64 *a5)
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
    return HvpDoAllocateCell(a1, v6, a3, a4, a5);
}
