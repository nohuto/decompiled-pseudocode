/*
 * XREFs of NtRequestWaitReplyPort @ 0x1405FB730
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x1406D6640 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1406DA378 (AlpcpProbeForWriteMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  int v4; // r15d
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+40h] [rbp-18h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+20h] BYREF

  v4 = (int)RequestMessage;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v8 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v8 >= 0 )
  {
    if ( PreviousMode )
      AlpcpProbeForWriteMessageHeader(ReplyMessage, 0LL);
    LOBYTE(v12) = PreviousMode;
    v8 = AlpcpProcessSynchronousRequest((int)DmaAdapter, 0x20000, v4, 0, (__int64)ReplyMessage, 0LL, 0LL, 0LL, v12);
    if ( v8 == -1073740029 )
      v8 = -1073741769;
    if ( v8 == -1073740031 )
      v8 = -1073741229;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v9, v10);
  return v8;
}
