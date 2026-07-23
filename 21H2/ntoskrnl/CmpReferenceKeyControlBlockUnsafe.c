/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x1406DED80
 * Callers:
 *     CmpLoadKeyCommon @ 0x14026D10C (CmpLoadKeyCommon.c)
 *     CmpFreezeHive @ 0x1405DF460 (CmpFreezeHive.c)
 *     CmpTransMgrFreeVolatileData @ 0x140663F6C (CmpTransMgrFreeVolatileData.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406DE1D0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407137F0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407C381C (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407C3878 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCloneToUnbackedKcb @ 0x14086EC3C (CmpCloneToUnbackedKcb.c)
 *     CmpCommitDiscardReplacePost @ 0x140876180 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14087A944 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x14087FF60 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
