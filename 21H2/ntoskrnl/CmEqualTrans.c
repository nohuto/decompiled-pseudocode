/*
 * XREFs of CmEqualTrans @ 0x140721FD0
 * Callers:
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmGetVisibleSubkeyCount @ 0x14067E8E0 (CmGetVisibleSubkeyCount.c)
 *     CmpLockIXLockExclusive @ 0x14067E9B8 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14067EF3C (CmpLockIXLockIntent.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmGetKeyLastWriteTime @ 0x1406A50C8 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406A52D4 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmRmIsKCBVisible @ 0x1406A7690 (CmRmIsKCBVisible.c)
 *     CmGetKeyFlags @ 0x1406EB534 (CmGetKeyFlags.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     CmpIsKeyStackDeleted @ 0x140720F74 (CmpIsKeyStackDeleted.c)
 *     CmGetKCBCacheSecurity @ 0x140721D00 (CmGetKCBCacheSecurity.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1407C3070 (CmpFindSubKeyByNumberEx.c)
 *     CmpQueryKeyDataFromNode @ 0x1407C3490 (CmpQueryKeyDataFromNode.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1409196EC (CmpTransUowIsEqual.c)
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
