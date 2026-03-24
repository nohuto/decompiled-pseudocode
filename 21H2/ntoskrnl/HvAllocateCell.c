/*
 * XREFs of HvAllocateCell @ 0x140709404
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED55C (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetValueKeyExisting @ 0x140666C88 (CmpSetValueKeyExisting.c)
 *     CmpAddValueToListEx @ 0x140667464 (CmpAddValueToListEx.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmpAddSubKeyEx @ 0x140668BE4 (CmpAddSubKeyEx.c)
 *     CmpSetValueDataNew @ 0x140668E74 (CmpSetValueDataNew.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14066CCFC (CmpSetSecurityDescriptorInfo.c)
 *     CmpCopyCell @ 0x1406A4750 (CmpCopyCell.c)
 *     HvDuplicateCell @ 0x1406BCEB4 (HvDuplicateCell.c)
 *     CmpSetValueDataExisting @ 0x1406C145C (CmpSetValueDataExisting.c)
 *     CmpAddValueKeyNew @ 0x140709FA0 (CmpAddValueKeyNew.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407294A0 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSplitLeaf @ 0x140733848 (CmpSplitLeaf.c)
 *     CmpCreateHiveRootCell @ 0x14078DBF0 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x14086E4EC (CmpAddValueKeyTombstone.c)
 *     CmpConcatenateValueLists @ 0x140878380 (CmpConcatenateValueLists.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087F3B4 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F7C4 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140A5B0B4 (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x140708E68 (HvpDoAllocateCell.c)
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
