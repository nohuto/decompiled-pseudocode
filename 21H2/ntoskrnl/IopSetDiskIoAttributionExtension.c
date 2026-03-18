/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x14020C178
 * Callers:
 *     IoUpdateIrpIoAttributionHandle @ 0x14020B7B0 (IoUpdateIrpIoAttributionHandle.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14020B7D4 (IopSetDiskIoAttributionFromProcess.c)
 *     IoMakeAssociatedIrpPriv @ 0x14020BA48 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateIrpExtensionEx @ 0x14020C270 (IoPropagateIrpExtensionEx.c)
 *     IoAsynchronousPageWrite @ 0x14020C810 (IoAsynchronousPageWrite.c)
 *     IoSynchronousPageWriteEx @ 0x140340130 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140342C50 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1403437A0 (IoSetDiskIoAttributionFromThread.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14020C420 (IopAllocateIrpExtension.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402F5F14 (IopReferenceIoAttributionFromProcess.c)
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
  if ( (*(_DWORD *)(v8 + 2172) & 0x1000) != 0 && *(_QWORD *)(v8 + 1296) && *(_QWORD *)(*(_QWORD *)(v8 + 1296) + 1544LL) )
  {
    LOBYTE(v6) = 1;
    if ( (a4 & 1) == 0 )
      IopReferenceIoAttributionFromProcess(v8, v6, &v10);
  }
  *(_QWORD *)(IrpExtension + 16) = v10;
  return 0LL;
}
