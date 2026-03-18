/*
 * XREFs of CmpVolumeManagerLockContextListExclusive @ 0x1407D0FD8
 * Callers:
 *     SshpSetCollectionActive @ 0x14057E42C (SshpSetCollectionActive.c)
 *     CmpVolumeManagerGetContextForFile @ 0x1405DD2FC (CmpVolumeManagerGetContextForFile.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140880364 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A3B7B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmpVolumeManagerLockContextListExclusive(ULONG_PTR a1)
{
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
