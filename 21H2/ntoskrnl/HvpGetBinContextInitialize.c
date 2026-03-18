/*
 * XREFs of HvpGetBinContextInitialize @ 0x140AB4534
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140657670 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpReferenceSecurityNode @ 0x140657894 (CmpReferenceSecurityNode.c)
 *     HvWriteExternal @ 0x14065A848 (HvWriteExternal.c)
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14068C0C4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14068C544 (HvpRemapAndEnlistHiveBins.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140715FA8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpRemoveSubKeyFromList @ 0x140716F80 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyEx @ 0x140718244 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1407187D4 (CmpAddToLeaf.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     HvpFindNextDirtyBlock @ 0x14079AE04 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x14079B0D0 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14079B3A0 (HvCheckHive.c)
 *     HvReallocateCell @ 0x14079BA7C (HvReallocateCell.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14079C290 (HvpRemoveFreeCellHint.c)
 *     HvpAddFreeCellHint @ 0x14079C578 (HvpAddFreeCellHint.c)
 *     HvpGetCellContextMove @ 0x14079CBD8 (HvpGetCellContextMove.c)
 *     HvpFindFreeCell @ 0x14079CC20 (HvpFindFreeCell.c)
 *     HvIsCellAllocated @ 0x1407C8130 (HvIsCellAllocated.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407F6698 (CmEnumerateValueFromLayeredKey.c)
 *     HvpDropPagedBins @ 0x14083D244 (HvpDropPagedBins.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 *     HvpCopyModifiedData @ 0x14091AAA0 (HvpCopyModifiedData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetBinContextInitialize(_WORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0;
  return result;
}
