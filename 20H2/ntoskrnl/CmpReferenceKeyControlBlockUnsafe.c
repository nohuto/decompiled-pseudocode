/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x14061CAE0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmpLinkHiveToMaster @ 0x1405DA88C (CmpLinkHiveToMaster.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x14061C460 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x1406723D0 (CmpCreateKeyControlBlock.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmpFreezeHive @ 0x1406A20B0 (CmpFreezeHive.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407BEEFC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407BEF58 (CmpCreateSiloKeyLockEntry.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpCloneToUnbackedKcb @ 0x1408712D4 (CmpCloneToUnbackedKcb.c)
 *     CmpCommitDiscardReplacePost @ 0x1408786E0 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14087CE68 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x140882880 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
