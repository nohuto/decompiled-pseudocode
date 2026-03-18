/*
 * XREFs of ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1C02D0798
 * Callers:
 *     DpiIndirectCbSendMessage @ 0x1C02D0E90 (DpiIndirectCbSendMessage.c)
 * Callees:
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0050CA8 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 */

__int64 __fastcall DpiIndirectSendAsyncUserModeRequest(
        struct _FILE_OBJECT *Object,
        PDEVICE_OBJECT DeviceObject,
        __int64 a3,
        void *a4,
        size_t Size,
        void *a6,
        unsigned int a7,
        void (*a8)(void *, struct _IO_STATUS_BLOCK *),
        void *a9,
        bool *a10)
{
  __int64 v13; // rax
  NTSTATUS v14; // ebx
  size_t v15; // rdi
  unsigned int v16; // esi
  unsigned int v17; // eax
  unsigned int v18; // eax
  _QWORD *PoolWithTag; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  void (*v25)(void *, struct _IO_STATUS_BLOCK *); // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  PIRP Irp; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  IRP *v34; // rbx
  __int64 v35; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  void *v37; // rax
  struct _IO_STACK_LOCATION *v38; // rax
  void *v40; // [rsp+50h] [rbp+8h] BYREF

  v40 = 0LL;
  if ( !Object )
  {
    v13 = WdLogNewEntry5_WdWarning(0LL, DeviceObject, a3);
    *(_QWORD *)(v13 + 24) = DeviceObject;
    WdLogEvent5_WdWarning(v13);
    v14 = -1073741130;
    goto LABEL_21;
  }
  v15 = (unsigned int)Size;
  v16 = a7;
  v17 = Size;
  if ( (unsigned int)Size <= a7 )
    v17 = a7;
  v18 = v17 + 56;
  if ( v18 < 0x38 )
  {
    v28 = WdLogNewEntry5_WdError(Object, DeviceObject);
    v14 = -1073741675;
    *(_QWORD *)(v28 + 24) = -1073741675LL;
    goto LABEL_20;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v18, 0x74727044u);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v40);
  v40 = PoolWithTag;
  a10 = 0LL;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&a10);
  if ( !PoolWithTag )
  {
    v24 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
    v14 = -1073741801;
    *(_QWORD *)(v24 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v24);
    goto LABEL_21;
  }
  v25 = a8;
  *PoolWithTag = Object;
  PoolWithTag[3] = v25;
  PoolWithTag[4] = a9;
  *((_DWORD *)PoolWithTag + 12) = 1;
  v14 = ObReferenceObjectByPointer(Object, 0x10000000u, (POBJECT_TYPE)IoFileObjectType, 0);
  if ( v14 < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v27, v26);
LABEL_20:
    WdLogEvent5_WdError(v28);
    goto LABEL_21;
  }
  Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
  v34 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v37 = a6;
    if ( !v16 )
      v37 = 0LL;
    CurrentStackLocation[-1].MajorFunction = 14;
    CurrentStackLocation[-1].Parameters.Read.Length = v16;
    CurrentStackLocation[-1].Parameters.Create.Options = v15;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2296832;
    v34->UserBuffer = v37;
    PoolWithTag[5] = v37;
    if ( (_DWORD)v15 || v16 )
    {
      v34->AssociatedIrp.MasterIrp = (struct _IRP *)(PoolWithTag + 7);
      if ( (_DWORD)v15 )
        memmove(PoolWithTag + 7, a4, v15);
    }
    CurrentStackLocation[-1].FileObject = Object;
    v38 = v34->Tail.Overlay.CurrentStackLocation;
    v40 = 0LL;
    v38[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiIndirectIoCompleteRoutine;
    v38[-1].Context = PoolWithTag;
    v38[-1].Control = -32;
    v14 = IofCallDriver(DeviceObject, v34);
  }
  else
  {
    v35 = WdLogNewEntry5_WdLowResource(v31, v30, v32, v33);
    v14 = -1073741801;
    *(_QWORD *)(v35 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v35);
    ObfDereferenceObject(Object);
  }
LABEL_21:
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v40);
  return (unsigned int)v14;
}
