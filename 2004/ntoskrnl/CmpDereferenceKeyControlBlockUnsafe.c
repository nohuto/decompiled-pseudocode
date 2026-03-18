/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x14064326C
 * Callers:
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmpCreateKeyControlBlock @ 0x1405E7810 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     CmpCreateKeyBody @ 0x1405ED820 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405EF010 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpRundownUnitOfWork @ 0x1406430FC (CmpRundownUnitOfWork.c)
 *     CmpFreezeHive @ 0x14064FDD0 (CmpFreezeHive.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407B0FBC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407B1018 (CmpCreateSiloKeyLockEntry.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140872B90 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x14087CCD0 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
