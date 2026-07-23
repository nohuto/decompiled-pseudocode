/*
 * XREFs of RtlRealSuccessor @ 0x1402F3830
 * Callers:
 *     FsRtlPrivateInsertExclusiveLock @ 0x1402E2850 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402E2B98 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402E3254 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402E4A80 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1402F3524 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlSplitLocks @ 0x1402F3CE8 (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x14031A850 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x140369048 (FsRtlCheckNoExclusiveConflict.c)
 *     RtlEnumerateGenericTable @ 0x14037F370 (RtlEnumerateGenericTable.c)
 *     FsRtlGetNextFileLock @ 0x1404E9FA0 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406B9AE0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x14075EE70 (RtlNextUnicodePrefix.c)
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
