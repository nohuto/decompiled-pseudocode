/*
 * XREFs of NtRequestWaitReplyPort @ 0x1406ED800
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpcpProcessSynchronousRequest @ 0x140684720 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140689DF8 (AlpcpProbeForWriteMessageHeader.c)
 */

__int64 __fastcall NtRequestWaitReplyPort(void *a1, __int128 *a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  int v7; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v7 >= 0 )
  {
    if ( PreviousMode )
      AlpcpProbeForWriteMessageHeader(a3, 0);
    v7 = AlpcpProcessSynchronousRequest((__int64)DmaAdapter, 0x20000u, a2, 0LL, a3, 0LL, 0LL, 0LL, PreviousMode);
    if ( v7 == -1073740029 )
      v7 = -1073741769;
    if ( v7 == -1073740031 )
      v7 = -1073741229;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
