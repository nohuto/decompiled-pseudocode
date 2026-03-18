/*
 * XREFs of PnpProcessRebalance @ 0x140564C24
 * Callers:
 *     PnpDeviceActionWorker @ 0x1402DD320 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 *     PiCollapseRebalanceRequests @ 0x140564990 (PiCollapseRebalanceRequests.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     PnpRebalance @ 0x14095A02C (PnpRebalance.c)
 */

__int64 __fastcall PnpProcessRebalance(__int64 a1)
{
  _QWORD *v2; // rcx
  _DWORD *v3; // rbx
  char v4; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r9
  int v7; // ebx
  _DWORD *v8; // r9
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
    v3 = *(_DWORD **)(v2[39] + 40LL);
  else
    v3 = IopRootDeviceNode;
  v4 = *(_BYTE *)(a1 + 32);
  if ( (unsigned int)(v3[75] - 789) <= 1 )
  {
    ObfDereferenceObject(v2);
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
    KeReleaseSemaphoreEx(&PpRegistrySemaphore.Header.Lock, 0LL, 1LL, v8, 0);
    KeLeaveCriticalRegion();
    if ( v7 >= 0 )
    {
      LODWORD(v10) = 3;
      BYTE4(v10) = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*((PVOID *)IopRootDeviceNode + 4), 0x746C6644u);
      return (unsigned int)PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, a1, (unsigned int)&v10, 0, 0, 1, 0);
    }
    return (unsigned int)v7;
  }
}
