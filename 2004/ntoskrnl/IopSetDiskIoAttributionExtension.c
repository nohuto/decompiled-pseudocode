/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x140326A58
 * Callers:
 *     IoUpdateIrpIoAttributionHandle @ 0x1402010B0 (IoUpdateIrpIoAttributionHandle.c)
 *     IoPageReadEx @ 0x140227B50 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140227DC8 (IoSynchronousPageWriteEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140227FA0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x1402C8D40 (IopSetDiskIoAttributionFromProcess.c)
 *     IoAsynchronousPageWrite @ 0x140326468 (IoAsynchronousPageWrite.c)
 *     IoMakeAssociatedIrpPriv @ 0x1403266B8 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateIrpExtensionEx @ 0x140326B40 (IoPropagateIrpExtensionEx.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x1402C844C (IopReferenceIoAttributionFromProcess.c)
 *     IopAllocateIrpExtension @ 0x140326CF0 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IopSetDiskIoAttributionExtension(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 IrpExtension; // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  IrpExtension = IopAllocateIrpExtension(a1, 6LL);
  if ( !IrpExtension )
    return 3221225626LL;
  v7 = *(_QWORD *)(a3 + 544);
  if ( (*(_DWORD *)(v7 + 2172) & 0x1000) != 0
    && *(_QWORD *)(v7 + 1296)
    && *(_QWORD *)(*(_QWORD *)(v7 + 1296) + 1352LL)
    && (a4 & 1) == 0 )
  {
    IopReferenceIoAttributionFromProcess(v7, 1, &v9);
  }
  *(_QWORD *)(IrpExtension + 16) = v9;
  return 0LL;
}
