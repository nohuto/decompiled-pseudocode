/*
 * XREFs of IopIrpHasExtensionType @ 0x1402F42C0
 * Callers:
 *     IopFreeIrpExtension @ 0x1402F3AD0 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402F3C98 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateActivityIdToThread @ 0x1402F3F90 (IoPropagateActivityIdToThread.c)
 *     IoGetFsTrackOffsetState @ 0x1402F3FD0 (IoGetFsTrackOffsetState.c)
 *     IoReuseIrp @ 0x1402F4000 (IoReuseIrp.c)
 *     IoIsKernelPagingRead @ 0x1403183F0 (IoIsKernelPagingRead.c)
 *     IoSetGenericIrpExtension @ 0x140379F20 (IoSetGenericIrpExtension.c)
 *     IoGetCopyInformationExtension @ 0x1403F0830 (IoGetCopyInformationExtension.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1403F0DCC (IopFreeCopyObjectsFromIrp.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140505F70 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140505FC0 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x140505FF0 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetFsZeroingOffset @ 0x140506030 (IoGetFsZeroingOffset.c)
 *     IoSetFsZeroingOffset @ 0x140506140 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140506180 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCompleteRequest @ 0x14050655C (IopPerfCompleteRequest.c)
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
