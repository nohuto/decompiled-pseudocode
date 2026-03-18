/*
 * XREFs of NtAlpcDisconnectPort @ 0x14074D760
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     AlpcpDisconnectPort @ 0x14074E130 (AlpcpDisconnectPort.c)
 */

__int64 __fastcall NtAlpcDisconnectPort(void *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v3; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v3 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v3 >= 0 )
    {
      v3 = AlpcpDisconnectPort(Object);
      ObfDereferenceObject(Object);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
