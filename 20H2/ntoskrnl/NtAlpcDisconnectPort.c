/*
 * XREFs of NtAlpcDisconnectPort @ 0x1406CE3B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     AlpcpDisconnectPort @ 0x1405E9C9C (AlpcpDisconnectPort.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcDisconnectPort(void *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di
  int v4; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  --CurrentThread->KernelApcDisable;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v4 = -1073741811;
  }
  else
  {
    DmaAdapter = 0LL;
    v4 = ObReferenceObjectByHandle(
           a1,
           1u,
           AlpcPortObjectType,
           KeGetCurrentThread()->PreviousMode,
           (PVOID *)&DmaAdapter,
           0LL);
    if ( v4 >= 0 )
    {
      v4 = AlpcpDisconnectPort((__int64)DmaAdapter, v3);
      HalPutDmaAdapter(DmaAdapter);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v4;
}
