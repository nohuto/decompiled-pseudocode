/*
 * XREFs of NtReplyWaitReplyPort @ 0x1408C4980
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405EE4E0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1405F2B68 (AlpcpProbeForWriteMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtReplyWaitReplyPort(void *a1, __int128 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  int v5; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v5 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v5 >= 0 )
  {
    if ( (*(_DWORD *)&DmaAdapter[26].Version & 6) == 2 )
    {
      v5 = -1073741811;
    }
    else
    {
      if ( PreviousMode )
        AlpcpProbeForWriteMessageHeader((unsigned __int64)a2, 0);
      v5 = AlpcpProcessSynchronousRequest(
             (__int64)DmaAdapter,
             0x20001u,
             a2,
             0LL,
             (unsigned __int64)a2,
             0LL,
             0LL,
             0LL,
             PreviousMode);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
      if ( v5 == -1073740031 )
        v5 = -1073741229;
    }
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
