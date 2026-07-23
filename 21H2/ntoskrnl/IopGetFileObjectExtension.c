/*
 * XREFs of IopGetFileObjectExtension @ 0x140361530
 * Callers:
 *     IoGetInitiatorProcess @ 0x140251590 (IoGetInitiatorProcess.c)
 *     IoSetOplockPrivateFoExt @ 0x1402AABB8 (IoSetOplockPrivateFoExt.c)
 *     CcInitializeCacheMapEx @ 0x1402D2E10 (CcInitializeCacheMapEx.c)
 *     IoGetFileMemoryPartitionInformation @ 0x1403614EC (IoGetFileMemoryPartitionInformation.c)
 *     IoGetOplockFullFoExt @ 0x140361508 (IoGetOplockFullFoExt.c)
 *     IopGetSetSpecificExtension @ 0x140361838 (IopGetSetSpecificExtension.c)
 *     IoChangeFileObjectFilterContext @ 0x14036190C (IoChangeFileObjectFilterContext.c)
 *     IoGetOplockKeyContextEx @ 0x140362430 (IoGetOplockKeyContextEx.c)
 *     IopSetLockOperationProcess @ 0x14036245C (IopSetLockOperationProcess.c)
 *     IoSetOplockKeyContext @ 0x140390F94 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x140505A20 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x140505B50 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1405072D8 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopSymlinkSetFoExtension @ 0x1405FABEC (IopSymlinkSetFoExtension.c)
 *     IopSymlinkCreateECP @ 0x1405FD740 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1405FDA74 (IopGraftName.c)
 *     IopOpenLinkOrRenameTarget @ 0x140698458 (IopOpenLinkOrRenameTarget.c)
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x14071A9B0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSetFileObjectIosbRange @ 0x140892974 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x1408939D0 (IoCopyDeviceObjectHint.c)
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
