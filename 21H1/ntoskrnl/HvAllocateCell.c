/*
 * XREFs of HvAllocateCell @ 0x140698D38
 * Callers:
 *     CmpCreateTombstone @ 0x1404E7DBC (CmpCreateTombstone.c)
 *     CmpCopyCell @ 0x140656E58 (CmpCopyCell.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14068B1C0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x14068BBE0 (CmpGetSecurityDescriptorNode.c)
 *     CmpAddSubKeyEx @ 0x14069316C (CmpAddSubKeyEx.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpAddValueToListEx @ 0x1406974B8 (CmpAddValueToListEx.c)
 *     CmpSetValueKeyExisting @ 0x1406978F8 (CmpSetValueKeyExisting.c)
 *     CmpSetValueDataNew @ 0x140697D70 (CmpSetValueDataNew.c)
 *     CmpAddValueKeyNew @ 0x14069804C (CmpAddValueKeyNew.c)
 *     HvDuplicateCell @ 0x1406E6DB0 (HvDuplicateCell.c)
 *     CmpSetValueDataExisting @ 0x1406EAFC0 (CmpSetValueDataExisting.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407156C0 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSplitLeaf @ 0x14071F964 (CmpSplitLeaf.c)
 *     CmpCreateHiveRootCell @ 0x140779400 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140869F40 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x14086B794 (CmpCreateEmptyKey.c)
 *     CmpConcatenateValueLists @ 0x140873BC0 (CmpConcatenateValueLists.c)
 *     CmpCommitRenameKeyUoW @ 0x14087A2A8 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087AFF4 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087B404 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140A5349C (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x1406990A4 (HvpDoAllocateCell.c)
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
