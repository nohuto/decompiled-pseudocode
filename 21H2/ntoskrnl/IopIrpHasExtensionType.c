/*
 * XREFs of IopIrpHasExtensionType @ 0x14020D890
 * Callers:
 *     IopFreeIrpExtension @ 0x14020D178 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x14020D298 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateActivityIdToThread @ 0x14020D590 (IoPropagateActivityIdToThread.c)
 *     IoGetFsTrackOffsetState @ 0x14020D5D0 (IoGetFsTrackOffsetState.c)
 *     IoReuseIrp @ 0x14020D600 (IoReuseIrp.c)
 *     IoIsKernelPagingRead @ 0x140238E40 (IoIsKernelPagingRead.c)
 *     IoSetGenericIrpExtension @ 0x140379C70 (IoSetGenericIrpExtension.c)
 *     IoGetCopyInformationExtension @ 0x1403F1460 (IoGetCopyInformationExtension.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1403F1A64 (IopFreeCopyObjectsFromIrp.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140507A70 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140507AC0 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x140507AF0 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetFsZeroingOffset @ 0x140507B30 (IoGetFsZeroingOffset.c)
 *     IoSetFsZeroingOffset @ 0x140507C30 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140507C70 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCompleteRequest @ 0x140508014 (IopPerfCompleteRequest.c)
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
