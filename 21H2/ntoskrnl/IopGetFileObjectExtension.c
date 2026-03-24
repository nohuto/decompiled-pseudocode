/*
 * XREFs of IopGetFileObjectExtension @ 0x1403567E0
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140206288 (IoSetOplockPrivateFoExt.c)
 *     CcInitializeCacheMapEx @ 0x14022E5C0 (CcInitializeCacheMapEx.c)
 *     IoGetInitiatorProcess @ 0x1402D3250 (IoGetInitiatorProcess.c)
 *     IoGetFileMemoryPartitionInformation @ 0x14035679C (IoGetFileMemoryPartitionInformation.c)
 *     IoGetOplockFullFoExt @ 0x1403567B8 (IoGetOplockFullFoExt.c)
 *     IopGetSetSpecificExtension @ 0x140356AE8 (IopGetSetSpecificExtension.c)
 *     IoChangeFileObjectFilterContext @ 0x140356BBC (IoChangeFileObjectFilterContext.c)
 *     IoGetOplockKeyContextEx @ 0x1403576E0 (IoGetOplockKeyContextEx.c)
 *     IopSetLockOperationProcess @ 0x14035770C (IopSetLockOperationProcess.c)
 *     IoSetOplockKeyContext @ 0x140390E44 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x140505AA0 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x140505BD0 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140507358 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406089A8 (IopOpenLinkOrRenameTarget.c)
 *     IopSymlinkSetFoExtension @ 0x14069BA2C (IopSymlinkSetFoExtension.c)
 *     IopSymlinkCreateECP @ 0x14069E570 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x14069E8A4 (IopGraftName.c)
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x1406FED80 (IopSynchronousServiceTail.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1407035D0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSetFileObjectIosbRange @ 0x140892814 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x140893870 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetFileObjectExtension(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD **)(a1 + 208);
  if ( !v3 )
  {
    if ( a3 )
      *a3 = 0LL;
    return 0LL;
  }
  if ( v3 == IopRevocationExtension )
    return 0LL;
  result = v3[a2 + 1];
  if ( a3 )
    *a3 = v3;
  return result;
}
