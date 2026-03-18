/*
 * XREFs of CmEqualTrans @ 0x1406A1CCC
 * Callers:
 *     CmGetKCBCacheSecurity @ 0x1405F3B88 (CmGetKCBCacheSecurity.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpIsKeyStackDeleted @ 0x14061B650 (CmpIsKeyStackDeleted.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 *     CmpFindSubKeyByNumberEx @ 0x140676250 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140678E00 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpWalkOneLevel @ 0x140679110 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x14067A400 (CmQueryValueKey.c)
 *     CmRmIsKCBVisible @ 0x1406A11E0 (CmRmIsKCBVisible.c)
 *     CmpLockIXLockExclusive @ 0x1406A183C (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1406A189C (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmGetKeyFlags @ 0x1406E26E0 (CmGetKeyFlags.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmGetKeyLastWriteTime @ 0x140703198 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1407032A4 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpQueryKeyDataFromNode @ 0x140703360 (CmpQueryKeyDataFromNode.c)
 *     CmGetVisibleSubkeyCount @ 0x140703FE4 (CmGetVisibleSubkeyCount.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140875518 (CmpTransUowIsEqual.c)
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
