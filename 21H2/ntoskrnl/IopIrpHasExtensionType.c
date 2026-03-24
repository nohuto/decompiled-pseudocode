/*
 * XREFs of IopIrpHasExtensionType @ 0x1402EDEC0
 * Callers:
 *     IoIsKernelPagingRead @ 0x1402BAC30 (IoIsKernelPagingRead.c)
 *     IopFreeIrpExtension @ 0x1402ED7A0 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402ED8C8 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateActivityIdToThread @ 0x1402EDBC0 (IoPropagateActivityIdToThread.c)
 *     IoGetFsTrackOffsetState @ 0x1402EDC00 (IoGetFsTrackOffsetState.c)
 *     IoReuseIrp @ 0x1402EDC30 (IoReuseIrp.c)
 *     IoSetGenericIrpExtension @ 0x14037A120 (IoSetGenericIrpExtension.c)
 *     IoGetCopyInformationExtension @ 0x1403F1590 (IoGetCopyInformationExtension.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1403F1B94 (IopFreeCopyObjectsFromIrp.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140507AF0 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140507B40 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x140507B70 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetFsZeroingOffset @ 0x140507BB0 (IoGetFsZeroingOffset.c)
 *     IoSetFsZeroingOffset @ 0x140507CB0 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140507CF0 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCompleteRequest @ 0x140508094 (IopPerfCompleteRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall IopIrpHasExtensionType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( a2 != 2 )
      return 0;
  }
  else
  {
    if ( !v2 )
      return 0;
    v3 = *(unsigned __int16 *)(v2 + 2);
    if ( !_bittest(&v3, a2) )
      return 0;
  }
  return 1;
}
