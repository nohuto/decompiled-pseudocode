/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x1405E77E0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x1405E7810 (CmpCreateKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405EF010 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmpFreezeHive @ 0x14064FDD0 (CmpFreezeHive.c)
 *     CmpLinkHiveToMaster @ 0x140650940 (CmpLinkHiveToMaster.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407B0FBC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407B1018 (CmpCreateSiloKeyLockEntry.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmpCloneToUnbackedKcb @ 0x14086B84C (CmpCloneToUnbackedKcb.c)
 *     CmpCommitDiscardReplacePost @ 0x140872B90 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1408772EC (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x14087CCD0 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReferenceKeyControlBlockUnsafe(volatile signed __int64 *BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x24uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  return result;
}
