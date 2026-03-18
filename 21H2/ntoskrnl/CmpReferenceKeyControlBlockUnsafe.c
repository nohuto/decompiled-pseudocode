/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x14071BC64
 * Callers:
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmpLinkHiveToMaster @ 0x14067C9E8 (CmpLinkHiveToMaster.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpFreezeHive @ 0x14069E368 (CmpFreezeHive.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14080FD00 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x14080FD5C (CmpCreateSiloKeyLockEntry.c)
 *     CmpCloneToUnbackedKcb @ 0x140914D00 (CmpCloneToUnbackedKcb.c)
 *     CmpCommitDiscardReplacePost @ 0x14091CBB0 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140920D44 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x140924550 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
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
