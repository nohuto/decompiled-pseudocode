/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x14071C0FC
 * Callers:
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmpFreezeHive @ 0x14069E368 (CmpFreezeHive.c)
 *     CmpRundownUnitOfWork @ 0x14071C120 (CmpRundownUnitOfWork.c)
 *     CmpCreateKeyBody @ 0x14072E210 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14080FD00 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x14080FD5C (CmpCreateSiloKeyLockEntry.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x14091CBB0 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x140924550 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
