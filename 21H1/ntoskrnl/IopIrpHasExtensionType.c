/*
 * XREFs of IopIrpHasExtensionType @ 0x1402ED0F0
 * Callers:
 *     IoReuseIrp @ 0x1402EB1A0 (IoReuseIrp.c)
 *     IopFreeIrpExtension @ 0x1402ECCDC (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402ECD88 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateActivityIdToThread @ 0x1402ED080 (IoPropagateActivityIdToThread.c)
 *     IoGetFsTrackOffsetState @ 0x1402ED0C0 (IoGetFsTrackOffsetState.c)
 *     IoIsKernelPagingRead @ 0x14030A670 (IoIsKernelPagingRead.c)
 *     IoSetGenericIrpExtension @ 0x140377270 (IoSetGenericIrpExtension.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140501F70 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140501FC0 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x140501FF0 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetFsZeroingOffset @ 0x140502030 (IoGetFsZeroingOffset.c)
 *     IoSetFsZeroingOffset @ 0x140502130 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140502170 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCompleteRequest @ 0x1405024FC (IopPerfCompleteRequest.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IopIrpHasExtensionType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  char v3; // r8
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 200);
  v3 = 0;
  if ( *(char *)(a1 + 71) < 0 )
    return a2 == 2;
  if ( v2 )
  {
    v5 = *(unsigned __int16 *)(v2 + 2);
    return _bittest(&v5, a2);
  }
  return v3;
}
