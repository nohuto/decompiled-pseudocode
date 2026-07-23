/*
 * XREFs of EtwpSendReplyDataBlock @ 0x1406BCB68
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwpReleaseQueueEntry @ 0x1406BBBFC (EtwpReleaseQueueEntry.c)
 *     EtwpQueueReply @ 0x1406BCC50 (EtwpQueueReply.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwpSendReplyDataBlock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rdx
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _DMA_ADAPTER *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(void **)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 16);
  --CurrentThread->KernelApcDisable;
  DmaAdapter = 0LL;
  v6 = ObReferenceObjectByHandle(v3, 4u, EtwpRegistrationObjectType, 1, (PVOID *)&DmaAdapter, 0LL);
  if ( v6 >= 0 )
  {
    v9 = DmaAdapter;
    if ( (DmaAdapter[6].Size & 2) != 0 )
    {
      if ( v4 >= 4 )
      {
        v6 = -1073741811;
      }
      else
      {
        v10 = _InterlockedExchange64((volatile __int64 *)&DmaAdapter[3] + v4, 0LL);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 32);
          if ( (*(_BYTE *)(v11 + 98) & 0x40) != 0 )
            v6 = -1073741055;
          else
            v6 = EtwpQueueReply(*(PRKQUEUE *)(v11 + 48));
          EtwpReleaseQueueEntry((PADAPTER_OBJECT *)v10, 2);
        }
        else
        {
          v6 = -1073741811;
        }
        v9 = DmaAdapter;
      }
    }
    else
    {
      v6 = -1073741816;
    }
    HalPutDmaAdapter(v9);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v7, v8);
  return (unsigned int)v6;
}
