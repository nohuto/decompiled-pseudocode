/*
 * XREFs of ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C0034FEC
 * Callers:
 *     ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0034EB8 (-HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C00AF1DC (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C00B6FC0 (-RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 *     ?RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z @ 0x1C00BF660 (-RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z.c)
 * Callees:
 *     AssociateKernelIocpWcp @ 0x1C0035080 (AssociateKernelIocpWcp.c)
 *     CreateKernelIocpWcp @ 0x1C00B78B0 (CreateKernelIocpWcp.c)
 */

__int64 __fastcall IOCPDispatcher::SetupIOCPForDispatcherHandle(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v5; // rdi
  __int64 KernelIocpWcp; // rbx

  v5 = a4;
  KernelIocpWcp = a2;
  if ( !a2 )
    KernelIocpWcp = CreateKernelIocpWcp();
  if ( !KernelIocpWcp || (int)AssociateKernelIocpWcp(KernelIocpWcp, *(_QWORD *)(a1 + 2744), a3, a5, v5, 0, 0LL) < 0 )
    KeBugCheck(0x164u);
  return KernelIocpWcp;
}
