/*
 * XREFs of NtCancelIoFile @ 0x1405FCA40
 * Callers:
 *     <none>
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x14023912C (IopCancelIrpsInFileObjectList.c)
 *     IoCancelIrp @ 0x1402394D0 (IoCancelIrp.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     IopReferenceFileObject @ 0x140353770 (IopReferenceFileObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __cdecl NtCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  char v4; // r15
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // r8
  __int64 v7; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // rax
  unsigned __int8 CurrentIrql; // si
  unsigned int *p_SystemCallNumber; // rdi
  unsigned int *i; // rbx
  char v13; // bl
  unsigned __int8 v14; // si
  unsigned int *j; // rcx
  struct _DMA_ADAPTER *v16; // rbx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // edx
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp+18h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp+20h] BYREF

  DmaAdapter = 0LL;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v7 = (__int64)IoStatusBlock;
    *(_DWORD *)v7 = *(_DWORD *)v7;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( result >= 0 )
  {
    v9 = KeGetCurrentThread();
    ++v9->OtherOperationCount;
    __incgsdword(0x2EE4u);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    p_SystemCallNumber = &CurrentThread[1].SystemCallNumber;
    for ( i = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != i; i = *(unsigned int **)i )
    {
      if ( *((PADAPTER_OBJECT *)i + 20) == DmaAdapter )
      {
        v4 = 1;
        IoCancelIrp((PIRP)(i - 8));
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v4 )
    {
      Interval.QuadPart = -100000LL;
      while ( 1 )
      {
        v13 = 0;
        v14 = KeGetCurrentIrql();
        __writecr8(1uLL);
        for ( j = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != j; j = *(unsigned int **)j )
        {
          if ( *((PADAPTER_OBJECT *)j + 20) == DmaAdapter )
          {
            v13 = 1;
            break;
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v22 = KeGetCurrentIrql();
            if ( v22 <= 0xFu && v14 <= 0xFu && v22 >= 2u )
            {
              v23 = KeGetCurrentPrcb();
              v24 = v23->SchedulerAssist;
              v25 = ~(unsigned __int16)(-1LL << (v14 + 1));
              v21 = (v25 & v24[5]) == 0;
              v24[5] &= v25;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick((__int64)v23);
            }
          }
        }
        __writecr8(v14);
        if ( !v13 )
          break;
        KeDelayExecutionThread(0, 0, &Interval);
      }
    }
    v16 = DmaAdapter;
    IopCancelIrpsInFileObjectList(
      (__int64)DmaAdapter,
      (int)KeGetCurrentThread()->ApcState.Process,
      0,
      (int)KeGetCurrentThread(),
      1,
      0);
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 0LL;
    HalPutDmaAdapter(v16);
    return 0;
  }
  return result;
}
