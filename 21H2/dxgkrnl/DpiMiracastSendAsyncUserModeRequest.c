/*
 * XREFs of DpiMiracastSendAsyncUserModeRequest @ 0x1C038DA88
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0061EE0 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0063340 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C038CAE0 (DpiMiracastCbSendUserModeMessage.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0044E7C (McTemplateK0pqtqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiMiracastSendAsyncUserModeRequest(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size,
        void *a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        PDEVICE_OBJECT DeviceObject,
        IRP **a11)
{
  char v12; // bl
  void *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // ebx
  unsigned int v19; // eax
  unsigned int v20; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v22; // r14
  PIRP Irp; // rax
  IRP *v24; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+38h] [rbp-40h]
  int v32; // [rsp+90h] [rbp+18h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+C8h] [rbp+50h]
  __int64 v35; // [rsp+D0h] [rbp+58h]

  v32 = a3;
  v12 = 0;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer((__int64)a1, &EventEnterMiracastSendUserModeRequest, a3, a1[12], 0, Size, a7, 0);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 0;
  if ( a11 )
    *a11 = 0LL;
  if ( (struct _KTHREAD *)a1[11] != KeGetCurrentThread() )
  {
    v12 = 1;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 4);
    a1[11] = KeGetCurrentThread();
  }
  v15 = (void *)a1[22];
  DeviceObjecta = (PDEVICE_OBJECT)a1[23];
  if ( v15 )
    ObfReferenceObject(v15);
  if ( v12 )
  {
    a1[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 4);
  }
  if ( !v15 )
  {
    WdLogSingleEntry1(3LL, a1);
    v18 = -1073741130;
    goto LABEL_34;
  }
  v19 = Size;
  if ( (unsigned int)Size <= a7 )
    v19 = a7;
  v20 = v19 + 64;
  if ( v20 < 0x40 )
  {
    v18 = -1073741675;
    WdLogSingleEntry1(2LL, -1073741675LL);
    ObfDereferenceObject(v15);
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v20, 0x74727044u);
    v22 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v18 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
LABEL_20:
      ObfDereferenceObject(v15);
      goto LABEL_34;
    }
    *PoolWithTag = v15;
    PoolWithTag[1] = a1[12];
    PoolWithTag[4] = a8;
    PoolWithTag[5] = a9;
    *((_DWORD *)PoolWithTag + 14) = a11 == 0LL;
    Irp = IoAllocateIrp(DeviceObjecta->StackSize, 0);
    v24 = Irp;
    if ( !Irp )
    {
      v18 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      ExFreePoolWithTag(v22, 0);
      goto LABEL_20;
    }
    v35 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
    *(_BYTE *)v35 = 14;
    *(_DWORD *)(v35 + 8) = a7;
    *(_DWORD *)(v35 + 16) = Size;
    *(_DWORD *)(v35 + 24) = v32;
    if ( !a7 )
      a6 = 0LL;
    v24->UserBuffer = a6;
    v22[6] = a6;
    if ( (_DWORD)Size || a7 )
    {
      v24->AssociatedIrp.MasterIrp = (struct _IRP *)(v22 + 8);
      if ( (_DWORD)Size )
        memmove(v22 + 8, a4, (unsigned int)Size);
    }
    *(_QWORD *)(v35 + 48) = v15;
    CurrentStackLocation = v24->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Context = v22;
    CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiMiracastIoCompleteRoutine;
    CurrentStackLocation[-1].Control = -32;
    if ( a11 )
      *a11 = v24;
    v18 = IofCallDriver(DeviceObjecta, v24);
    if ( DeviceObject )
      LOBYTE(DeviceObject->Type) = 1;
  }
LABEL_34:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
  {
    LODWORD(v31) = v18;
    LODWORD(v30) = a7;
    LODWORD(v29) = Size;
    LODWORD(v28) = 0;
    McTemplateK0pqtqq_EtwWriteTransfer(v16, &EventLeaveMiracastSendUserModeRequest, v17, a1[12], v28, v29, v30, v31);
  }
  return v18;
}
