/*
 * XREFs of RtlRealSuccessor @ 0x1402F8520
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1402F8214 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1402F89F4 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402F8E30 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402F9074 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402F950C (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlSplitLocks @ 0x1402F9CF8 (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x140328A00 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x14036B9E8 (FsRtlCheckNoExclusiveConflict.c)
 *     RtlEnumerateGenericTable @ 0x140381A90 (RtlEnumerateGenericTable.c)
 *     FsRtlGetNextFileLock @ 0x1404EDE60 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406A7530 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x14076F880 (RtlNextUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v2; // rdx
  _RTL_SPLAY_LINKS *v3; // r8
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->RightChild;
  v2 = 0LL;
  v3 = Links;
  if ( result )
  {
    for ( i = result->LeftChild; i; i = i->LeftChild )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      Links = Links->Parent;
      if ( Links->RightChild != v3 )
        break;
      v3 = Links;
    }
    if ( Links->LeftChild == v3 )
      return Links;
    return v2;
  }
  return result;
}
