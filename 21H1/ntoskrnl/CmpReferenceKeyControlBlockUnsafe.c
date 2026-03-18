/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x14061CE00
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x14061CE30 (CmpCreateKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140624630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpFreezeHive @ 0x140659420 (CmpFreezeHive.c)
 *     CmpLinkHiveToMaster @ 0x14068C2C8 (CmpLinkHiveToMaster.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407ADE5C (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407ADEB8 (CmpCreateSiloKeyLockEntry.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpCloneToUnbackedKcb @ 0x14086A4FC (CmpCloneToUnbackedKcb.c)
 *     CmpCommitDiscardReplacePost @ 0x1408718A0 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140875FFC (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x14087B9E0 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
