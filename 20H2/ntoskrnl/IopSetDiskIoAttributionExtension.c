/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x14024C158
 * Callers:
 *     IoUpdateIrpIoAttributionHandle @ 0x1402010B0 (IoUpdateIrpIoAttributionHandle.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x1402484BC (IopSetDiskIoAttributionFromProcess.c)
 *     IoPageReadEx @ 0x14024E230 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x14024E538 (IoSynchronousPageWriteEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14024E710 (IoSetDiskIoAttributionFromThread.c)
 *     IoPropagateIrpExtensionEx @ 0x14024E8C0 (IoPropagateIrpExtensionEx.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402F3C98 (IoMakeAssociatedIrpPriv.c)
 *     IoAsynchronousPageWrite @ 0x140329CA0 (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x14024923C (IopReferenceIoAttributionFromProcess.c)
 *     IopAllocateIrpExtension @ 0x14024EA70 (IopAllocateIrpExtension.c)
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
