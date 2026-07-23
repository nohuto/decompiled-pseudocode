/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x1406643E8
 * Callers:
 *     CmpLoadKeyCommon @ 0x14026D10C (CmpLoadKeyCommon.c)
 *     CmpFreezeHive @ 0x1405DF460 (CmpFreezeHive.c)
 *     CmpRundownUnitOfWork @ 0x140664278 (CmpRundownUnitOfWork.c)
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407137F0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCreateKeyBody @ 0x140713A70 (CmpCreateKeyBody.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407C381C (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407C3878 (CmpCreateSiloKeyLockEntry.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140876180 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x14087FF60 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
