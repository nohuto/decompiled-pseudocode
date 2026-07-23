/*
 * XREFs of RtlRealSuccessor @ 0x140330430
 * Callers:
 *     FsRtlPrivateInsertExclusiveLock @ 0x1402D5B00 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402D5E48 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402D6504 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402D7D30 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140330124 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlSplitLocks @ 0x1403308E8 (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x140358300 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x140369A08 (FsRtlCheckNoExclusiveConflict.c)
 *     RtlEnumerateGenericTable @ 0x14037FCD0 (RtlEnumerateGenericTable.c)
 *     FsRtlGetNextFileLock @ 0x1404EA5D0 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406DADF0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x140761270 (RtlNextUnicodePrefix.c)
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
