/*
 * XREFs of CmEqualTrans @ 0x14066440C
 * Callers:
 *     CmpLockIXLockIntent @ 0x140619820 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140619E60 (CmpLockIXLockExclusive.c)
 *     CmGetKeyFlags @ 0x140621510 (CmGetKeyFlags.c)
 *     CmGetKeyLastWriteTime @ 0x14065F780 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x14065F88C (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpQueryKeyDataFromNode @ 0x14065F940 (CmpQueryKeyDataFromNode.c)
 *     CmGetVisibleSubkeyCount @ 0x14066000C (CmGetVisibleSubkeyCount.c)
 *     CmDeleteKey @ 0x140660814 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140663F6C (CmpTransMgrFreeVolatileData.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1406DBF40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406DE1D0 (CmpGetSymbolicLinkTarget.c)
 *     CmGetKCBCacheSecurity @ 0x1406DECD0 (CmGetKCBCacheSecurity.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406E2D00 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1406E6E60 (CmQueryValueKey.c)
 *     CmpIsKeyStackDeleted @ 0x140712920 (CmpIsKeyStackDeleted.c)
 *     CmRmIsKCBVisible @ 0x1407139B0 (CmRmIsKCBVisible.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140872F0C (CmpTransUowIsEqual.c)
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
