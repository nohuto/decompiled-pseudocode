/*
 * XREFs of HvAllocateCell @ 0x14079C8A4
 * Callers:
 *     CmpCreateTombstone @ 0x14053FB50 (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140657670 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14065C008 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpConcatenateValueLists @ 0x14065C3B8 (CmpConcatenateValueLists.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14065DF64 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140677DC0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpSetValueDataNew @ 0x1406BE2FC (CmpSetValueDataNew.c)
 *     HvDuplicateCell @ 0x1406C8FF4 (HvDuplicateCell.c)
 *     CmpCreateHiveRootCell @ 0x1406C9FA0 (CmpCreateHiveRootCell.c)
 *     CmpSetValueDataExisting @ 0x1406E3D54 (CmpSetValueDataExisting.c)
 *     CmpSetValueKeyExisting @ 0x1407169FC (CmpSetValueKeyExisting.c)
 *     CmpAddSubKeyEx @ 0x140718244 (CmpAddSubKeyEx.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x14079B758 (CmpAddValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x14079B920 (CmpAddValueToListEx.c)
 *     CmpCopyCell @ 0x14079BC7C (CmpCopyCell.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140914214 (CmpAddValueKeyTombstone.c)
 *     CmpSplitLeaf @ 0x140921510 (CmpSplitLeaf.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140923ED0 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140B15E34 (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x14079C920 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvAllocateCell(ULONG_PTR a1, int a2, __int64 a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  int v8; // r10d
  unsigned int i; // edx
  __int64 result; // rax

  v6 = (a2 + 11) & 0xFFFFFFF8;
  v8 = 0;
  for ( i = 0x4000; v6 > i; i *= 2 )
    ++v8;
  if ( !v8 )
    i = v6;
  if ( i > 0x100000 )
    return 3221225626LL;
  result = HvpDoAllocateCell(a1, a5, a6);
  if ( (int)result >= 0 )
  {
    *a4 = 0;
    return 0LL;
  }
  return result;
}
