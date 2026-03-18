/*
 * XREFs of NtAlpcDisconnectPort @ 0x140645B50
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpDisconnectPort @ 0x140647404 (AlpcpDisconnectPort.c)
 */

__int64 __fastcall NtAlpcDisconnectPort(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v5 = -1073741811;
  }
  else
  {
    DmaAdapter = 0LL;
    v5 = ObReferenceObjectByHandle(
           a1,
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), a2, a3, a4);
  return (unsigned int)v5;
}
