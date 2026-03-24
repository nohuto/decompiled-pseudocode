/*
 * XREFs of CmEqualTrans @ 0x14071D970
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmGetKCBCacheSecurity @ 0x1405EF570 (CmGetKCBCacheSecurity.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405F35A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     CmGetKeyLastWriteTime @ 0x14066A960 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x14066AA6C (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpQueryKeyDataFromNode @ 0x14066AB20 (CmpQueryKeyDataFromNode.c)
 *     CmGetVisibleSubkeyCount @ 0x14066B1EC (CmGetVisibleSubkeyCount.c)
 *     CmDeleteKey @ 0x14066B9F4 (CmDeleteKey.c)
 *     CmGetKeyFlags @ 0x1406C2850 (CmGetKeyFlags.c)
 *     CmpIsKeyStackDeleted @ 0x1406FB540 (CmpIsKeyStackDeleted.c)
 *     CmRmIsKCBVisible @ 0x1406FC5D0 (CmRmIsKCBVisible.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406FC600 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x14071D3E0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14071D440 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071D4D0 (CmpTransMgrFreeVolatileData.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140872DAC (CmpTransUowIsEqual.c)
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
