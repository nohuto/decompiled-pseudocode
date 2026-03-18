/*
 * XREFs of ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C006FDF0
 * Callers:
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C004E30C (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C00575A0 (-RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 *     ?RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z @ 0x1C005F320 (-RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z.c)
 *     ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C006FCBC (-HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 * Callees:
 *     CreateKernelIocpWcp @ 0x1C0057DE0 (CreateKernelIocpWcp.c)
 *     AssociateKernelIocpWcp @ 0x1C006FE80 (AssociateKernelIocpWcp.c)
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
