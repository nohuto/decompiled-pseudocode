/*
 * XREFs of CmEqualTrans @ 0x140643290
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmGetKCBCacheSecurity @ 0x1405E7754 (CmGetKCBCacheSecurity.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405ECE00 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405EDBB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmRmIsKCBVisible @ 0x1405EDC40 (CmRmIsKCBVisible.c)
 *     CmpIsKeyStackDeleted @ 0x1405EEF40 (CmpIsKeyStackDeleted.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmpLockIXLockIntent @ 0x140643354 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x14064343C (CmpLockIXLockExclusive.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmGetVisibleSubkeyCount @ 0x1406445EC (CmGetVisibleSubkeyCount.c)
 *     CmGetKeyLastWriteTime @ 0x1406543D4 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406544E0 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpQueryKeyDataFromNode @ 0x140670220 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x140671DE0 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmGetKeyFlags @ 0x140710410 (CmGetKeyFlags.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x14086F9C8 (CmpTransUowIsEqual.c)
 */

char __fastcall CmEqualTrans(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8

  if ( !a1 || !a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 && (v4 = *(_QWORD *)(a2 + 56)) != 0 )
    return v3 == v4;
  else
    return CmpTransUowIsEqual(a1 + 88, a2 + 88);
}
