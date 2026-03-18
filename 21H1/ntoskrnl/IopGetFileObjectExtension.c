/*
 * XREFs of IopGetFileObjectExtension @ 0x140281B14
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14022D790 (CcInitializeCacheMapEx.c)
 *     IoSetOplockPrivateFoExt @ 0x14025AFA8 (IoSetOplockPrivateFoExt.c)
 *     IoChangeFileObjectFilterContext @ 0x1402819BC (IoChangeFileObjectFilterContext.c)
 *     IopGetSetSpecificExtension @ 0x140281A24 (IopGetSetSpecificExtension.c)
 *     IoGetFileMemoryPartitionInformation @ 0x140281AF8 (IoGetFileMemoryPartitionInformation.c)
 *     IopSetLockOperationProcess @ 0x1402E3C10 (IopSetLockOperationProcess.c)
 *     IoGetOplockKeyContextEx @ 0x1402FFFB0 (IoGetOplockKeyContextEx.c)
 *     IoGetInitiatorProcess @ 0x140322800 (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x14038D914 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x140500000 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x140500130 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1405018B8 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140600CD0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopOpenLinkOrRenameTarget @ 0x14066EFC0 (IopOpenLinkOrRenameTarget.c)
 *     IopSymlinkSetFoExtension @ 0x1406C9A54 (IopSymlinkSetFoExtension.c)
 *     IopSymlinkCreateECP @ 0x1406CDD0C (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1406CE040 (IopGraftName.c)
 *     IopSetFileObjectIosbRange @ 0x14088E44C (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x14088F490 (IoCopyDeviceObjectHint.c)
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
