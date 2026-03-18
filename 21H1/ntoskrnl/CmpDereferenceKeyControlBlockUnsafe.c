/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x14068E788
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmpCreateKeyControlBlock @ 0x14061CE30 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140621740 (CmpWalkOneLevel.c)
 *     CmpCreateKeyBody @ 0x140622E40 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140624630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpFreezeHive @ 0x140659420 (CmpFreezeHive.c)
 *     CmpRundownUnitOfWork @ 0x14068E618 (CmpRundownUnitOfWork.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407ADE5C (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407ADEB8 (CmpCreateSiloKeyLockEntry.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x1408718A0 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x14087B9E0 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
