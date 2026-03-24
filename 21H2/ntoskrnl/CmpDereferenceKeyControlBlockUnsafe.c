/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x14071D94C
 * Callers:
 *     CmpLoadKeyCommon @ 0x14036195C (CmpLoadKeyCommon.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmpFreezeHive @ 0x1406BF2E8 (CmpFreezeHive.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406FC410 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCreateKeyBody @ 0x1406FC690 (CmpCreateKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x14071D7DC (CmpRundownUnitOfWork.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407C32FC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407C3358 (CmpCreateSiloKeyLockEntry.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140876020 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x14087FE00 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
