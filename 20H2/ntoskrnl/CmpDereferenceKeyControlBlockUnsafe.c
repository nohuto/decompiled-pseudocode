/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x14061D4F4
 * Callers:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmpCreateKeyBody @ 0x14060E320 (CmpCreateKeyBody.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x14061C460 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCreateKeyControlBlock @ 0x1406723D0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140679110 (CmpWalkOneLevel.c)
 *     CmpRundownUnitOfWork @ 0x1406A1B5C (CmpRundownUnitOfWork.c)
 *     CmpFreezeHive @ 0x1406A20B0 (CmpFreezeHive.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407BEEFC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407BEF58 (CmpCreateSiloKeyLockEntry.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x1408786E0 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x140882880 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
