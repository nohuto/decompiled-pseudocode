/*
 * XREFs of IopGetFileObjectExtension @ 0x14029FA60
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140209778 (IoSetOplockPrivateFoExt.c)
 *     CcInitializeCacheMapEx @ 0x140291D10 (CcInitializeCacheMapEx.c)
 *     IoChangeFileObjectFilterContext @ 0x14029F890 (IoChangeFileObjectFilterContext.c)
 *     IopGetSetSpecificExtension @ 0x14029F8F4 (IopGetSetSpecificExtension.c)
 *     IoGetFileMemoryPartitionInformation @ 0x14029FA10 (IoGetFileMemoryPartitionInformation.c)
 *     IoGetOplockFullFoExt @ 0x14029FA2C (IoGetOplockFullFoExt.c)
 *     IopSetLockOperationProcess @ 0x1403056F8 (IopSetLockOperationProcess.c)
 *     IoGetOplockKeyContextEx @ 0x14030F590 (IoGetOplockKeyContextEx.c)
 *     IoGetInitiatorProcess @ 0x140330FD0 (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x140390974 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x140503F20 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x140504050 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1405057D8 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140600990 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     IopSymlinkSetFoExtension @ 0x1406BEC5C (IopSymlinkSetFoExtension.c)
 *     IopSymlinkCreateECP @ 0x1406C6C0C (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1406C6F40 (IopGraftName.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406C7690 (IopOpenLinkOrRenameTarget.c)
 *     IopSetFileObjectIosbRange @ 0x140895254 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x1408962A0 (IoCopyDeviceObjectHint.c)
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
