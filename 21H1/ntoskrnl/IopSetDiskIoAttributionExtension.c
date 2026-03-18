/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x1402ED128
 * Callers:
 *     IoUpdateIrpIoAttributionHandle @ 0x1402010B0 (IoUpdateIrpIoAttributionHandle.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x140235F10 (IopSetDiskIoAttributionFromProcess.c)
 *     IoPageReadEx @ 0x140280BA0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140280E18 (IoSynchronousPageWriteEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140280FF0 (IoSetDiskIoAttributionFromThread.c)
 *     IoAsynchronousPageWrite @ 0x1402ECB38 (IoAsynchronousPageWrite.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402ECD88 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateIrpExtensionEx @ 0x1402ED210 (IoPropagateIrpExtensionEx.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x14023561C (IopReferenceIoAttributionFromProcess.c)
 *     IopAllocateIrpExtension @ 0x1402ED3C0 (IopAllocateIrpExtension.c)
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
