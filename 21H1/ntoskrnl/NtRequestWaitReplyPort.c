/*
 * XREFs of NtRequestWaitReplyPort @ 0x1406CC500
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AlpcpProcessSynchronousRequest @ 0x14060C5B0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140611C74 (AlpcpProbeForWriteMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 v7; // rdx
  NTSTATUS v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v8 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v8 >= 0 )
  {
    if ( PreviousMode )
      AlpcpProbeForWriteMessageHeader((unsigned __int64)ReplyMessage, 0);
    v8 = AlpcpProcessSynchronousRequest(
           (__int64)DmaAdapter,
           0x20000u,
           (__int64)RequestMessage,
           0LL,
           (unsigned __int64)ReplyMessage,
           0LL,
           0LL,
           0LL,
           PreviousMode);
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
