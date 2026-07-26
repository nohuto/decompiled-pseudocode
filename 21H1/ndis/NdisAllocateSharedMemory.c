/*
 * XREFs of NdisAllocateSharedMemory @ 0x1C0033A40
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017B6C (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisGetAnyProcInsideNode@@YA?AU_PROCESSOR_NUMBER@@G@Z @ 0x1C0075B38 (-ndisGetAnyProcInsideNode@@YA-AU_PROCESSOR_NUMBER@@G@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0084EB8 (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 */

NDIS_STATUS __stdcall NdisAllocateSharedMemory(
        NDIS_HANDLE NdisHandle,
        PNDIS_SHARED_MEMORY_PARAMETERS SharedMemoryParameters,
        PNDIS_HANDLE pAllocationHandle)
{
  _LARGE_INTEGER *v3; // rdi
  _QWORD *v4; // r13
  struct _NDIS_MINIPORT_BLOCK *v5; // r14
  struct _NDIS_RECEIVE_QUEUE_BLOCK *DefaultReceiveQueue; // r12
  int v9; // ebx
  NDIS_HANDLE v10; // rbx
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // r13
  unsigned int v12; // eax
  _LARGE_INTEGER *PoolWithTag; // rax
  unsigned int PreferredNode; // r15d
  USHORT HighestNodeNumber; // ax
  __int64 v16; // r9
  UCHAR v17; // al
  struct _NDIS_PROCESSOR_INFO_EX *v18; // rbx
  UCHAR Number; // dl
  void *v20; // rax
  _QWORD *p_Flink; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_SharedMemoryList; // rdx
  _LIST_ENTRY *v24; // r8
  _LARGE_INTEGER *v25; // rax
  PVOID *v26; // rax
  unsigned int v28; // r8d
  unsigned int *v29; // r9
  struct _NDIS_RECEIVE_QUEUE_BLOCK *ReceiveQueueByQueueId; // rax
  struct _PROCESSOR_NUMBER AnyProcInsideNode; // eax
  _LARGE_INTEGER *Open; // rax
  void *AllocateSharedMemoryContext; // rcx
  void *v34; // rcx
  void *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _LARGE_INTEGER **v37; // rcx
  LONGLONG v38; // rdx
  _LARGE_INTEGER *v39; // rax
  KIRQL NewIrql; // [rsp+40h] [rbp-39h] BYREF
  char v41; // [rsp+41h] [rbp-38h]
  NDIS_HANDLE v42; // [rsp+48h] [rbp-31h]
  UCHAR Processor[4]; // [rsp+50h] [rbp-29h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+54h] [rbp-25h] BYREF
  PVOID *v45; // [rsp+58h] [rbp-21h]
  _PROCESSOR_NUMBER v46; // [rsp+60h] [rbp-19h] BYREF
  struct _PROCESSOR_NUMBER v47; // [rsp+68h] [rbp-11h]
  _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp-9h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp+7h] BYREF

  v3 = 0LL;
  v45 = pAllocationHandle;
  ProcNumber = 0;
  v4 = 0LL;
  v5 = 0LL;
  v42 = 0LL;
  DefaultReceiveQueue = 0LL;
  NewIrql = 0;
  *(_DWORD *)Processor = 0;
  v41 = 0;
  v9 = -1073741637;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x15u,
      (struct _GUID *)&WPP_b95a1582eedd34623c72b3aa5f8cd533_Traceguids,
      (char)NdisHandle,
      SharedMemoryParameters->Length);
    pAllocationHandle = v45;
  }
  if ( !NdisHandle )
    goto LABEL_47;
  if ( *(_BYTE *)NdisHandle == 18 )
  {
    v5 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisHandle + 2);
    v10 = NdisHandle;
    v42 = NdisHandle;
  }
  else
  {
    if ( *(_BYTE *)NdisHandle != 17 )
    {
      v9 = -1073741811;
LABEL_26:
      if ( v41 )
      {
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        KeSetIdealProcessorThread(KeGetCurrentThread(), Processor[2]);
      }
      if ( v9 >= 0 )
      {
        v3[19] = (_LARGE_INTEGER)SharedMemoryParameters->VirtualAddress;
        if ( (v3[6].LowPart & 3) != 0 )
        {
          if ( SharedMemoryParameters->SGListBufferLength >= 0x28 )
          {
            SharedMemoryParameters->SGListBuffer->NumberOfElements = 1;
            SharedMemoryParameters->SGListBuffer->Elements[0].Address = v3[13];
            SharedMemoryParameters->SGListBuffer->Elements[0].Length = SharedMemoryParameters->Length;
          }
          SharedMemoryParameters->SharedMemoryHandle = 0LL;
        }
        NewIrql = KeAcquireSpinLockRaiseToDpc(&v5->Lock);
        v5->MiniportThread = KeGetCurrentThread();
        p_Flink = &v5->SharedMemoryBlockList.Flink;
        Flink = v5->SharedMemoryBlockList.Flink;
        if ( Flink->Blink == &v5->SharedMemoryBlockList )
        {
          v3->QuadPart = (LONGLONG)Flink;
          v3[1].QuadPart = (LONGLONG)p_Flink;
          Flink->Blink = (_LIST_ENTRY *)v3;
          *p_Flink = v3;
          if ( v4 )
          {
            v37 = (_LARGE_INTEGER **)(v4 + 95);
            v38 = v4[95];
            v39 = v3 + 2;
            if ( *(_QWORD **)(v38 + 8) != v4 + 95 )
              goto LABEL_68;
            v39->QuadPart = v38;
            v3[3].QuadPart = (LONGLONG)v37;
            *(_QWORD *)(v38 + 8) = v39;
            *v37 = v39;
          }
          p_SharedMemoryList = &DefaultReceiveQueue->SharedMemoryList;
          v24 = DefaultReceiveQueue->SharedMemoryList.Flink;
          v25 = v3 + 4;
          if ( v24->Blink == &DefaultReceiveQueue->SharedMemoryList )
          {
            v3[5].QuadPart = (LONGLONG)p_SharedMemoryList;
            v25->QuadPart = (LONGLONG)v24;
            v24->Blink = (_LIST_ENTRY *)v25;
            p_SharedMemoryList->Flink = (_LIST_ENTRY *)v25;
            v5->MiniportThread = 0LL;
            KeReleaseSpinLock(&v5->Lock, NewIrql);
            v26 = v45;
            *v45 = v3;
            goto LABEL_37;
          }
        }
LABEL_68:
        __fastfail(3u);
      }
      goto LABEL_45;
    }
    v5 = (struct _NDIS_MINIPORT_BLOCK *)NdisHandle;
    v10 = 0LL;
  }
  *pAllocationHandle = 0LL;
  MiniportSGDmaBlock = v5->MiniportSGDmaBlock;
  v12 = SharedMemoryParameters->SGListBufferLength + 184;
  if ( v12 < 0xB8 )
  {
    v9 = -1073741811;
  }
  else
  {
    PoolWithTag = (_LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x6264444Eu);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xB8uLL);
      v3[7].QuadPart = (LONGLONG)v5;
      v3[8].QuadPart = (LONGLONG)v10;
      *(_OWORD *)&v3[14].LowPart = *(_OWORD *)&SharedMemoryParameters->Header.Type;
      *(_OWORD *)&v3[16].LowPart = *(_OWORD *)&SharedMemoryParameters->SharedMemoryHandle;
      *(_OWORD *)&v3[18].LowPart = *(_OWORD *)&SharedMemoryParameters->Length;
      *(_OWORD *)&v3[20].LowPart = *(_OWORD *)&SharedMemoryParameters->SGListBufferLength;
      v3[22] = *(_LARGE_INTEGER *)&SharedMemoryParameters->VPortId;
      v3[21].QuadPart = (LONGLONG)&v3[23];
      if ( SharedMemoryParameters->QueueId )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v5, &NewIrql);
        ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v5, SharedMemoryParameters->QueueId, v28, v29);
        v5->MiniportThread = 0LL;
        DefaultReceiveQueue = ReceiveQueueByQueueId;
        KeReleaseSpinLock(&v5->Lock, NewIrql);
      }
      else
      {
        DefaultReceiveQueue = v5->DefaultReceiveQueue;
      }
      if ( !DefaultReceiveQueue )
      {
        v9 = -1073741811;
LABEL_45:
        if ( v3 )
          ExFreePoolWithTag(v3, 0);
        goto LABEL_47;
      }
      v3[9].QuadPart = (LONGLONG)DefaultReceiveQueue;
      PreferredNode = SharedMemoryParameters->PreferredNode;
      HighestNodeNumber = KeQueryHighestNodeNumber();
      if ( PreferredNode != 0x80000000 )
      {
        if ( PreferredNode > HighestNodeNumber )
          PreferredNode = 0x80000000;
        if ( PreferredNode != 0x80000000 )
        {
          KeGetCurrentProcessorNumberEx(&ProcNumber);
          v17 = KeSetIdealProcessorThread(KeGetCurrentThread(), ProcNumber.Number);
          v18 = ndisCpuInfo;
          *(_WORD *)Processor = ProcNumber.Group;
          Processor[2] = v17;
          v46 = *(_PROCESSOR_NUMBER *)Processor;
          if ( v18[KeGetProcessorIndexFromNumber(&v46)].NodeId == PreferredNode )
          {
            Number = Processor[2];
          }
          else
          {
            v41 = 1;
            AnyProcInsideNode = ndisGetAnyProcInsideNode(PreferredNode);
            Affinity.Mask = -1LL;
            v47 = AnyProcInsideNode;
            Affinity.Group = AnyProcInsideNode.Group;
            KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
            Number = v47.Number;
          }
          KeSetIdealProcessorThread(KeGetCurrentThread(), Number);
          v10 = v42;
        }
      }
      if ( SharedMemoryParameters->QueueId )
      {
        if ( !v10 )
        {
          Open = (_LARGE_INTEGER *)DefaultReceiveQueue->Open;
          if ( Open )
          {
            if ( Open[97].QuadPart )
            {
              v3[10] = Open[98];
              AllocateSharedMemoryContext = DefaultReceiveQueue->Open->AllocateSharedMemoryContext;
              v3[11].QuadPart = (LONGLONG)AllocateSharedMemoryContext;
              v9 = DefaultReceiveQueue->Open->AllocateSharedMemoryHandler(
                     AllocateSharedMemoryContext,
                     SharedMemoryParameters,
                     (void **)&v3[12]);
              if ( v9 >= 0 )
              {
                if ( (SharedMemoryParameters->Flags & 1) == 0
                  || SharedMemoryParameters->SGListBuffer->NumberOfElements <= 1 )
                {
                  memmove(
                    (void *)v3[21].QuadPart,
                    SharedMemoryParameters->SGListBuffer,
                    SharedMemoryParameters->SGListBufferLength);
                  v3[6].LowPart |= 4u;
                  goto LABEL_25;
                }
                ((void (__fastcall *)(_QWORD, _QWORD))v3[10].QuadPart)(
                  (_LARGE_INTEGER)v3[11].QuadPart,
                  (_LARGE_INTEGER)v3[12].QuadPart);
                goto LABEL_57;
              }
LABEL_25:
              v4 = v42;
              goto LABEL_26;
            }
          }
        }
      }
      if ( v5->AllocateSharedMemoryHandler )
      {
        v3[10] = (_LARGE_INTEGER)v5->FreeSharedMemoryHandler;
        v34 = v5->AllocateSharedMemoryContext;
        v3[11].QuadPart = (LONGLONG)v34;
        v9 = v5->AllocateSharedMemoryHandler(v34, SharedMemoryParameters, (void **)&v3[12]);
        if ( v9 < 0 )
          goto LABEL_25;
        if ( (SharedMemoryParameters->Flags & 1) == 0 || SharedMemoryParameters->SGListBuffer->NumberOfElements <= 1 )
        {
          memmove(
            (void *)v3[21].QuadPart,
            SharedMemoryParameters->SGListBuffer,
            SharedMemoryParameters->SGListBufferLength);
          v3[6].LowPart |= 8u;
          goto LABEL_25;
        }
        v5->FreeSharedMemoryHandler((void *)v3[11].QuadPart, (void *)v3[12].QuadPart);
      }
      else if ( MiniportSGDmaBlock )
      {
        LOBYTE(v16) = 1;
        v20 = MiniportSGDmaBlock->DmaAdapterObject->DmaOperations->AllocateCommonBuffer(
                MiniportSGDmaBlock->DmaAdapterObject,
                SharedMemoryParameters->Length,
                v3 + 13,
                v16);
        SharedMemoryParameters->VirtualAddress = v20;
        if ( v20 )
        {
          _InterlockedIncrement(&MiniportSGDmaBlock->DmaAdapterRefCount);
          v3[6].LowPart |= 1u;
LABEL_24:
          v9 = 0;
          goto LABEL_25;
        }
      }
      else
      {
        ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(
                                         SharedMemoryParameters->Length,
                                         0LL,
                                         -1LL,
                                         0LL,
                                         4,
                                         PreferredNode);
        SharedMemoryParameters->VirtualAddress = ContiguousNodeMemory;
        if ( ContiguousNodeMemory )
        {
          PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
          v3[6].LowPart |= 2u;
          v3[13] = PhysicalAddress;
          goto LABEL_24;
        }
      }
LABEL_57:
      v9 = -1073741670;
      goto LABEL_25;
    }
    v9 = -1073741670;
  }
LABEL_47:
  v26 = v45;
LABEL_37:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x16u,
      (struct _GUID *)&WPP_b95a1582eedd34623c72b3aa5f8cd533_Traceguids,
      v9,
      *v26);
  return v9;
}
