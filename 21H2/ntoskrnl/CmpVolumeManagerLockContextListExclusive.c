/*
 * XREFs of CmpVolumeManagerLockContextListExclusive @ 0x1407D5458
 * Callers:
 *     SshpSetCollectionActive @ 0x14057FE3C (SshpSetCollectionActive.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140721F94 (CmpVolumeManagerGetContextForFile.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087DD04 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A38784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmpVolumeManagerLockContextListExclusive(ULONG_PTR a1)
{
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
