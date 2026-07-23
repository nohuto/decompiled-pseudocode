/*
 * XREFs of NtAlpcDisconnectPort @ 0x14060AB10
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpDisconnectPort @ 0x1406D1E5C (AlpcpDisconnectPort.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    v5 = -1073741811;
  }
  else
  {
    DmaAdapter = 0LL;
    v5 = ObReferenceObjectByHandle(
           PortHandle,
           1u,
           AlpcPortObjectType,
           KeGetCurrentThread()->PreviousMode,
           (PVOID *)&DmaAdapter,
           0LL);
    if ( v5 >= 0 )
    {
      v5 = AlpcpDisconnectPort(DmaAdapter);
      HalPutDmaAdapter(DmaAdapter);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), *(__int64 *)&Flags, v2, v3);
  return v5;
}
