/*
 * XREFs of NtRequestWaitReplyPort @ 0x140663B40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140663C48 (AlpcpProbeForWriteMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407AD040 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall NtRequestWaitReplyPort(void *a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS v7; // ebx
  int v9; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    if ( PreviousMode )
      AlpcpProbeForWriteMessageHeader(a3, 0LL);
    LOBYTE(v9) = PreviousMode;
    v7 = AlpcpProcessSynchronousRequest((int)Object, 0x20000, a2, 0, a3, 0LL, 0LL, 0LL, v9);
    if ( v7 == -1073740029 )
      v7 = -1073741769;
    if ( v7 == -1073740031 )
      v7 = -1073741229;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
