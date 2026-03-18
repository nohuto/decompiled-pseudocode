/*
 * XREFs of CmpVolumeManagerLockContextListExclusive @ 0x1407BF2D8
 * Callers:
 *     SshpSetCollectionActive @ 0x14057A3BC (SshpSetCollectionActive.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140687D20 (CmpVolumeManagerGetContextForFile.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140879504 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmpVolumeManagerLockContextListExclusive(ULONG_PTR a1)
{
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
