/*
 * XREFs of EtwpRegisterPrivateSession @ 0x140941BD8
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140211210 (PsGetCurrentThreadProcessId.c)
 *     RtlRbRemoveNode @ 0x140216290 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByPointer @ 0x1402E15A0 (ObReferenceObjectByPointer.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     PidNodeCompare @ 0x140942150 (PidNodeCompare.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterPrivateSession(__int64 a1, unsigned __int16 a2, _WORD *a3, _DWORD *a4)
{
  unsigned __int64 *v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  _DMA_OPERATIONS *v8; // rbx
  bool v9; // di
  int v10; // eax
  void (__fastcall *PutDmaAdapter)(_DMA_ADAPTER *); // rax
  _DMA_OPERATIONS *PoolWithTag; // rax
  _DMA_OPERATIONS *v13; // rsi
  unsigned int inserted; // ebx
  int (__fastcall **p_AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // r14
  int (__fastcall *i)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rdi
  struct _DMA_ADAPTER *v17; // r12
  struct _DMA_ADAPTER **v18; // rax
  __int64 v19; // [rsp+28h] [rbp-69h]
  int CurrentThreadProcessId; // [rsp+58h] [rbp-39h] BYREF
  PVOID Object; // [rsp+60h] [rbp-31h] BYREF
  __int64 v22; // [rsp+68h] [rbp-29h] BYREF
  __int64 v23; // [rsp+70h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-19h]
  __int128 v25; // [rsp+80h] [rbp-11h] BYREF
  __int128 v26; // [rsp+90h] [rbp-1h]
  __int128 v27; // [rsp+A0h] [rbp+Fh]

  v4 = (unsigned __int64 *)(a1 + 4080);
  v22 = 0LL;
  Object = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return 3221225659LL;
  if ( a2 > 8u )
    return 3221225485LL;
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = (ULONG_PTR)(v4 + 2);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 2), 0LL);
  v8 = (_DMA_OPERATIONS *)*v4;
  v9 = 0;
  if ( *v4 )
  {
    while ( 1 )
    {
      v10 = PidNodeCompare(&CurrentThreadProcessId, v8);
      if ( v10 <= 0 )
      {
        if ( v10 >= 0 )
        {
          v13 = v8;
LABEL_15:
          p_AllocateAdapterChannel = &v13->AllocateAdapterChannel;
          for ( i = v13->AllocateAdapterChannel;
                (char *)i != (char *)p_AllocateAdapterChannel;
                i = *(int (__fastcall **)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *))i )
          {
            if ( *((_WORD *)i + 8) == a2 )
            {
              inserted = -1073741811;
              goto LABEL_24;
            }
            if ( *((_WORD *)i + 8) > a2 )
              break;
          }
          LODWORD(v25) = 48;
          *((_QWORD *)&v25 + 1) = 0LL;
          DWORD2(v26) = 64;
          *(_QWORD *)&v26 = 0LL;
          v27 = 0LL;
          inserted = ObCreateObjectEx(0, EtwpSessionDemuxObjectType, (int)&v25, 1u, v19, 32, 0, 0, &Object, 0LL);
          if ( !inserted )
          {
            v17 = (struct _DMA_ADAPTER *)Object;
            *((_WORD *)Object + 8) = a2;
            *(&v17[1].Size + 1) = ++*(_WORD *)(a1 + 4104);
            v17[1].DmaOperations = v13;
            v18 = (struct _DMA_ADAPTER **)*((_QWORD *)i + 1);
            *((_QWORD *)i + 1) = v17;
            *v18 = v17;
            v17->DmaOperations = (_DMA_OPERATIONS *)v18;
            *(_QWORD *)&v17->Version = i;
            ObReferenceObjectByPointer(v17, 0, EtwpSessionDemuxObjectType, 0);
            inserted = ObInsertObjectEx(v17, 0LL, 0, 0, 0, (__int64)&v23, &v22);
            if ( !inserted )
            {
              *a3 = *(&v17[1].Size + 1);
              *a4 = v22;
              goto LABEL_26;
            }
          }
LABEL_24:
          if ( (char *)*p_AllocateAdapterChannel == (char *)p_AllocateAdapterChannel )
          {
            RtlRbRemoveNode(v4, (unsigned __int64)v13);
            ExFreePoolWithTag(v13, 0);
          }
          goto LABEL_26;
        }
        PutDmaAdapter = *(void (__fastcall **)(_DMA_ADAPTER *))&v8->Size;
        if ( !*(_QWORD *)&v8->Size )
          break;
      }
      else
      {
        PutDmaAdapter = v8->PutDmaAdapter;
        if ( !PutDmaAdapter )
        {
          v9 = 1;
          break;
        }
      }
      v8 = (_DMA_OPERATIONS *)PutDmaAdapter;
    }
  }
  PoolWithTag = (_DMA_OPERATIONS *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x48777445u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    LODWORD(PoolWithTag->FreeCommonBuffer) = CurrentThreadProcessId;
    PoolWithTag->FlushAdapterBuffers = (unsigned __int8 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, void *, unsigned int, unsigned __int8))&PoolWithTag->AllocateAdapterChannel;
    PoolWithTag->AllocateAdapterChannel = (int (__fastcall *)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *))&PoolWithTag->AllocateAdapterChannel;
    RtlRbInsertNodeEx(v4, (unsigned __int64)v8, v9, (unsigned __int64)PoolWithTag);
    goto LABEL_15;
  }
  inserted = -1073741801;
LABEL_26:
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Object )
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  return inserted;
}
