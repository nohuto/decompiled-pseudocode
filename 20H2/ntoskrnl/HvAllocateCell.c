/*
 * XREFs of HvAllocateCell @ 0x140707168
 * Callers:
 *     CmpCreateTombstone @ 0x1404EBC7C (CmpCreateTombstone.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405E0E88 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x1405E1B48 (CmpGetSecurityDescriptorNode.c)
 *     CmpAddValueToListEx @ 0x14066BE98 (CmpAddValueToListEx.c)
 *     CmpSetValueKeyExisting @ 0x14066C27C (CmpSetValueKeyExisting.c)
 *     CmpCopyCell @ 0x1406A56C4 (CmpCopyCell.c)
 *     HvDuplicateCell @ 0x1406DD060 (HvDuplicateCell.c)
 *     CmpSetValueDataExisting @ 0x1406E0F50 (CmpSetValueDataExisting.c)
 *     CmpAddSubKeyEx @ 0x1407037B8 (CmpAddSubKeyEx.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpSetValueDataNew @ 0x1407061A0 (CmpSetValueDataNew.c)
 *     CmpAddValueKeyNew @ 0x14070647C (CmpAddValueKeyNew.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140725A10 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSplitLeaf @ 0x14072F814 (CmpSplitLeaf.c)
 *     CmpCreateHiveRootCell @ 0x140789E10 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140870CE4 (CmpAddValueKeyTombstone.c)
 *     CmpConcatenateValueLists @ 0x14087AA00 (CmpConcatenateValueLists.c)
 *     CmpCommitRenameKeyUoW @ 0x140881108 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140881E9C (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408822AC (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140A59A88 (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x1407074D4 (HvpDoAllocateCell.c)
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
