/*
 * XREFs of NtNotifyChangeSession @ 0x1406E48A0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     ExNotifyCallback @ 0x14033CED0 (ExNotifyCallback.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall NtNotifyChangeSession(
        HANDLE Handle,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char *Src,
        SIZE_T NumberOfBytes)
{
  SIZE_T v11; // r12
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v14; // r14
  _DMA_OPERATIONS *DmaOperations; // rcx
  unsigned int ReadDmaCounter_high; // eax
  unsigned int v17; // eax
  _DMA_OPERATIONS *v18; // rax
  char *v19; // rbx
  struct _WORK_QUEUE_ITEM *v20; // rax
  char *PoolWithTag; // rax
  unsigned __int16 v22; // r12
  char *v23; // rax
  char v24; // [rsp+30h] [rbp-1A8h]
  char v25; // [rsp+31h] [rbp-1A7h]
  KPROCESSOR_MODE v26; // [rsp+32h] [rbp-1A6h]
  NTSTATUS v27; // [rsp+38h] [rbp-1A0h]
  PVOID Object; // [rsp+50h] [rbp-188h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-180h] BYREF
  _OWORD Argument1[4]; // [rsp+60h] [rbp-178h] BYREF
  _BYTE v31[256]; // [rsp+A0h] [rbp-138h] BYREF

  v11 = (unsigned int)NumberOfBytes;
  v24 = 0;
  memset(Argument1, 0, sizeof(Argument1));
  v25 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = PreviousMode;
  if ( (unsigned int)NumberOfBytes > 0x100 )
    return -1073741580;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 2u, MmSessionObjectType, PreviousMode, &Object, 0LL);
  v27 = result;
  if ( result < 0 )
    return result;
  v14 = (struct _DMA_ADAPTER *)Object;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)Object + 3) + 1024LL), Executive, 0, 0, 0LL);
  DmaOperations = v14[1].DmaOperations;
  ReadDmaCounter_high = HIDWORD(DmaOperations[3].ReadDmaCounter);
  if ( ReadDmaCounter_high == a2 )
  {
    v17 = ReadDmaCounter_high + 1;
LABEL_5:
    HIDWORD(DmaOperations[3].ReadDmaCounter) = v17;
    goto LABEL_6;
  }
  if ( ReadDmaCounter_high <= a2 || ReadDmaCounter_high - a2 >= 0xFFFFFFFD )
  {
    Interval.QuadPart = -1000000LL;
    v22 = 0;
    do
    {
      KeSetEvent((PRKEVENT)&DmaOperations[3].GetScatterGatherList, 0, 0);
      KeDelayExecutionThread(0, 0, &Interval);
      KeWaitForSingleObject(&v14[1].DmaOperations[3].GetScatterGatherList, Executive, 0, 0, 0LL);
      ++v22;
      DmaOperations = v14[1].DmaOperations;
    }
    while ( v22 <= 0xAu && HIDWORD(DmaOperations[3].ReadDmaCounter) != a2 );
    v17 = a2 + 1;
    v11 = (unsigned int)NumberOfBytes;
    goto LABEL_5;
  }
LABEL_6:
  v18 = v14[1].DmaOperations;
  if ( !a4 )
  {
    KeSetEvent((PRKEVENT)&v18[3].GetScatterGatherList, 0, 0);
    HalPutDmaAdapter(v14);
    return 0;
  }
  LODWORD(v18[3].ReadDmaCounter) = a5;
  v19 = 0LL;
  if ( !(_DWORD)v11 )
    goto LABEL_8;
  if ( v26 == 1 )
  {
    if ( (unsigned __int64)&Src[v11] > 0x7FFFFFFF0000LL || &Src[v11] < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x6E536F49u);
    v19 = PoolWithTag;
    if ( PoolWithTag )
    {
      v24 = 1;
      memmove(PoolWithTag, Src, v11);
    }
    else
    {
      v19 = v31;
      memmove(v31, Src, v11);
      v25 = 1;
    }
    LODWORD(v11) = NumberOfBytes;
    goto LABEL_8;
  }
  if ( a4 - 1 > 1 )
  {
    v23 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x6E536F49u);
    v19 = v23;
    if ( v23 )
    {
      v24 = 1;
      memmove(v23, Src, (unsigned int)v11);
      goto LABEL_8;
    }
    v25 = 1;
  }
  v19 = Src;
LABEL_8:
  *(_QWORD *)&Argument1[2] = __PAIR64__(a5, a4);
  DWORD2(Argument1[2]) = v11;
  *(_QWORD *)&Argument1[3] = v19;
  *((_QWORD *)&Argument1[3] + 1) = v14;
  if ( !v25 && a4 - 1 > 1 )
  {
    v20 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6E536F49u);
    if ( v20 )
    {
      v20->List = (_LIST_ENTRY)Argument1[0];
      *(_OWORD *)&v20->WorkerRoutine = Argument1[1];
      v20[1].List = (_LIST_ENTRY)Argument1[2];
      *(_OWORD *)&v20[1].WorkerRoutine = Argument1[3];
      v20->WorkerRoutine = (void (__fastcall *)(void *))IopSessionChangeWorker;
      v20->Parameter = v20;
      v20->List.Flink = 0LL;
      ExQueueWorkItem(v20, DelayedWorkQueue);
      return 0;
    }
  }
  ExNotifyCallback(IopSessionCallbackObject, Argument1, 0LL);
  KeSetEvent((PRKEVENT)&v14[1].DmaOperations[3].GetScatterGatherList, 0, 0);
  HalPutDmaAdapter(v14);
  if ( v19 )
  {
    if ( v24 == 1 )
      ExFreePoolWithTag(v19, 0);
  }
  return v27;
}
