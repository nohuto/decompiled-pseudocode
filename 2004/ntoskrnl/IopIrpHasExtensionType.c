/*
 * XREFs of IopIrpHasExtensionType @ 0x140326A20
 * Callers:
 *     IoReuseIrp @ 0x140324AD0 (IoReuseIrp.c)
 *     IopFreeIrpExtension @ 0x14032660C (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x1403266B8 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateActivityIdToThread @ 0x1403269B0 (IoPropagateActivityIdToThread.c)
 *     IoGetFsTrackOffsetState @ 0x1403269F0 (IoGetFsTrackOffsetState.c)
 *     IoIsKernelPagingRead @ 0x140346F70 (IoIsKernelPagingRead.c)
 *     IoSetGenericIrpExtension @ 0x140378080 (IoSetGenericIrpExtension.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x1405025C0 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140502610 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x140502640 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetFsZeroingOffset @ 0x140502680 (IoGetFsZeroingOffset.c)
 *     IoSetFsZeroingOffset @ 0x140502780 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x1405027C0 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCompleteRequest @ 0x140502B4C (IopPerfCompleteRequest.c)
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
