/*
 * XREFs of EtwpSendReplyDataBlock @ 0x14071BD78
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     EtwpReleaseQueueEntry @ 0x14071AE04 (EtwpReleaseQueueEntry.c)
 *     EtwpQueueReply @ 0x14071BE60 (EtwpQueueReply.c)
 */

__int64 __fastcall EtwpSendReplyDataBlock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  unsigned int v4; // edi
  NTSTATUS v5; // ebx
  struct _DMA_ADAPTER *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(void **)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 16);
  --CurrentThread->KernelApcDisable;
  DmaAdapter = 0LL;
  v5 = ObReferenceObjectByHandle(v3, 4u, EtwpRegistrationObjectType, 1, (PVOID *)&DmaAdapter, 0LL);
  if ( v5 >= 0 )
  {
    v6 = DmaAdapter;
    if ( (DmaAdapter[6].Size & 2) != 0 )
    {
      if ( v4 >= 4 )
      {
        v5 = -1073741811;
      }
      else
      {
        v7 = _InterlockedExchange64((volatile __int64 *)&DmaAdapter[3] + v4, 0LL);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 32);
          if ( (*(_BYTE *)(v8 + 98) & 0x40) != 0 )
            v5 = -1073741055;
          else
            v5 = EtwpQueueReply(*(PRKQUEUE *)(v8 + 48));
          EtwpReleaseQueueEntry((PADAPTER_OBJECT *)v7, 2);
        }
        else
        {
          v5 = -1073741811;
        }
        v6 = DmaAdapter;
      }
    }
    else
    {
      v5 = -1073741816;
    }
    HalPutDmaAdapter(v6);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
