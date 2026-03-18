/*
 * XREFs of IopGetFileObjectExtension @ 0x140228AC4
 * Callers:
 *     IoChangeFileObjectFilterContext @ 0x14022896C (IoChangeFileObjectFilterContext.c)
 *     IopGetSetSpecificExtension @ 0x1402289D4 (IopGetSetSpecificExtension.c)
 *     IoGetFileMemoryPartitionInformation @ 0x140228AA8 (IoGetFileMemoryPartitionInformation.c)
 *     IoSetOplockPrivateFoExt @ 0x140297828 (IoSetOplockPrivateFoExt.c)
 *     CcInitializeCacheMapEx @ 0x1402C05C0 (CcInitializeCacheMapEx.c)
 *     IopSetLockOperationProcess @ 0x1402D6EC0 (IopSetLockOperationProcess.c)
 *     IoGetOplockKeyContextEx @ 0x14033C8B0 (IoGetOplockKeyContextEx.c)
 *     IoGetInitiatorProcess @ 0x140360370 (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x14038E484 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x140500650 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x140500780 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140501F08 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopOpenLinkOrRenameTarget @ 0x140614700 (IopOpenLinkOrRenameTarget.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     IopCloseFile @ 0x140675CE0 (IopCloseFile.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140678DB0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkSetFoExtension @ 0x1406EAC04 (IopSymlinkSetFoExtension.c)
 *     IopSymlinkCreateECP @ 0x1406EF00C (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1406EF340 (IopGraftName.c)
 *     IopSetFileObjectIosbRange @ 0x14088F76C (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x1408907B0 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetFileObjectExtension(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // r9
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
