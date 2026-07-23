/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x14020D8DC
 * Callers:
 *     IoUpdateIrpIoAttributionHandle @ 0x1402010C0 (IoUpdateIrpIoAttributionHandle.c)
 *     IoAsynchronousPageWrite @ 0x14020CF7C (IoAsynchronousPageWrite.c)
 *     IoMakeAssociatedIrpPriv @ 0x14020D298 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateIrpExtensionEx @ 0x14020D9D0 (IoPropagateIrpExtensionEx.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x140242668 (IopSetDiskIoAttributionFromProcess.c)
 *     IoSynchronousPageWriteEx @ 0x140326B5C (IoSynchronousPageWriteEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140326D30 (IoSetDiskIoAttributionFromThread.c)
 *     IoPageReadEx @ 0x140326E80 (IoPageReadEx.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14020DB80 (IopAllocateIrpExtension.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1403036AC (IopReferenceIoAttributionFromProcess.c)
 */

__int64 __fastcall IopSetDiskIoAttributionExtension(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rdx
  __int64 IrpExtension; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  IrpExtension = IopAllocateIrpExtension(a1, 6LL);
  if ( !IrpExtension )
    return 3221225626LL;
  v8 = *(_QWORD *)(a3 + 544);
  if ( (*(_DWORD *)(v8 + 2172) & 0x1000) != 0 && *(_QWORD *)(v8 + 1296) && *(_QWORD *)(*(_QWORD *)(v8 + 1296) + 1352LL) )
  {
    LOBYTE(v6) = 1;
    if ( (a4 & 1) == 0 )
      IopReferenceIoAttributionFromProcess(v8, v6, &v10);
  }
  *(_QWORD *)(IrpExtension + 16) = v10;
  return 0LL;
}
