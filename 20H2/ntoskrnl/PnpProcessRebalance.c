/*
 * XREFs of PnpProcessRebalance @ 0x14050E96C
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036EB50 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSemaphoreEx @ 0x1402DCAE0 (KeReleaseSemaphoreEx.c)
 *     PiCollapseRebalanceRequests @ 0x14050E6D4 (PiCollapseRebalanceRequests.c)
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 *     PnpRebalance @ 0x1408BB2C4 (PnpRebalance.c)
 */

__int64 __fastcall PnpProcessRebalance(__int64 a1)
{
  _QWORD *v2; // rcx
  _DWORD *v3; // rbx
  char v4; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // r9

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
    v3 = *(_DWORD **)(v2[39] + 40LL);
  else
    v3 = IopRootDeviceNode;
  v4 = *(_BYTE *)(a1 + 32);
  if ( (unsigned int)(v3[75] - 787) <= 1 )
  {
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    return 3221225558LL;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 28) && v4 && PiCollapseRebalanceRequests(a1) )
      v3 = IopRootDeviceNode;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
    LOBYTE(v6) = v4;
    v7 = PnpRebalance(v3, 0LL, 0LL, v6);
    KeReleaseSemaphoreEx((__int64)&PpRegistrySemaphore, 0, 1, v8, 0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v7 >= 0 )
    {
      ObfReferenceObjectWithTag(*((PVOID *)IopRootDeviceNode + 4), 0x746C6644u);
      return (unsigned int)PipProcessDevNodeTree((ULONG)IopRootDeviceNode, 0, 1, 0);
    }
    return (unsigned int)v7;
  }
}
