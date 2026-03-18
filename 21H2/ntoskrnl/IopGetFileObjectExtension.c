/*
 * XREFs of IopGetFileObjectExtension @ 0x1402A3A14
 * Callers:
 *     IoGetInitiatorProcess @ 0x14025D5C0 (IoGetInitiatorProcess.c)
 *     IoSetOplockPrivateFoExt @ 0x1402A2EF0 (IoSetOplockPrivateFoExt.c)
 *     IopSetLockOperationProcess @ 0x1402A36D0 (IopSetLockOperationProcess.c)
 *     IoGetOplockKeyContextEx @ 0x1402A3840 (IoGetOplockKeyContextEx.c)
 *     IopGetSetSpecificExtension @ 0x1402A38B4 (IopGetSetSpecificExtension.c)
 *     IoChangeFileObjectFilterContext @ 0x1402A3984 (IoChangeFileObjectFilterContext.c)
 *     IoGetOplockFullFoExt @ 0x1402A39EC (IoGetOplockFullFoExt.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     IoSetOplockKeyContext @ 0x14039E588 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x140557510 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x140557630 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140558AE0 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopSymlinkCreateECP @ 0x1406B9CBC (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1406B9FD4 (IopGraftName.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406C78D4 (IopOpenLinkOrRenameTarget.c)
 *     IopSymlinkSetFoExtension @ 0x1406DF940 (IopSymlinkSetFoExtension.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     IopSetFileObjectIosbRange @ 0x140935790 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x1409361B0 (IoCopyDeviceObjectHint.c)
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
