/*
 * XREFs of CmEqualTrans @ 0x14068E7AC
 * Callers:
 *     CmpQueryKeyDataFromNode @ 0x1405F8180 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405F9D00 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmGetKCBCacheSecurity @ 0x14061CD74 (CmGetKCBCacheSecurity.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmpWalkOneLevel @ 0x140621740 (CmpWalkOneLevel.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406231D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmRmIsKCBVisible @ 0x140623260 (CmRmIsKCBVisible.c)
 *     CmpIsKeyStackDeleted @ 0x140624560 (CmpIsKeyStackDeleted.c)
 *     CmGetKeyLastWriteTime @ 0x140658D34 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140658E40 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpLockIXLockExclusive @ 0x14068E09C (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14068E2C0 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmGetVisibleSubkeyCount @ 0x140692ADC (CmGetVisibleSubkeyCount.c)
 *     CmGetKeyFlags @ 0x1406EC930 (CmGetKeyFlags.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x14086DF08 (CmpTransUowIsEqual.c)
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
