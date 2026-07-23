/*
 * XREFs of NtReplyWaitReplyPort @ 0x1408BD880
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AlpcpProcessSynchronousRequest @ 0x14060C5B0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140611C74 (AlpcpProbeForWriteMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReplyWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v5; // rdx
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v6 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v6 >= 0 )
  {
    if ( (*(_DWORD *)&DmaAdapter[26].Version & 6) == 2 )
    {
      v6 = -1073741811;
    }
    else
    {
      if ( PreviousMode )
        AlpcpProbeForWriteMessageHeader((unsigned __int64)ReplyMessage, 0);
      v6 = AlpcpProcessSynchronousRequest(
             (__int64)DmaAdapter,
             0x20001u,
             (__int64)ReplyMessage,
             0LL,
             (unsigned __int64)ReplyMessage,
             0LL,
             0LL,
             0LL,
             PreviousMode);
      if ( v6 == -1073740029 )
        v6 = -1073741769;
      if ( v6 == -1073740031 )
        v6 = -1073741229;
    }
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v7, v8);
  return v6;
}
