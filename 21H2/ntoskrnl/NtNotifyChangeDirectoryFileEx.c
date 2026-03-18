/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x1406C66B0
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x1406C6650 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402AAB50 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopResetEvent @ 0x1402AABB0 (IopResetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IopReferenceFileObject @ 0x1402AC790 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IopProbeAndLockPages_2 @ 0x14055A55C (IopProbeAndLockPages_2.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     IopAllocateIrpCleanup @ 0x140933BA4 (IopAllocateIrpCleanup.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall NtNotifyChangeDirectoryFileEx(
        void *a1,
        HANDLE Handle,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        volatile void *Address,
        SIZE_T Length,
        int a8,
        char a9,
        int a10)
{
  PVOID v12; // r14
  struct _KTHREAD *CurrentThread; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v15; // rcx
  ULONG v16; // r12d
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v18; // rbx
  NTSTATUS v19; // edi
  struct _KTHREAD *v20; // rax
  volatile __int32 *v21; // rbx
  __int64 v22; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 Irp; // rax
  IRP *v27; // rdi
  __int64 v28; // rsi
  int v29; // ecx
  ULONG Flags; // eax
  __int64 Pool2; // rax
  PMDL Mdl; // rcx
  __int64 v33; // r8
  char v34; // al
  char v35[8]; // [rsp+40h] [rbp-48h] BYREF
  PVOID v36; // [rsp+48h] [rbp-40h] BYREF
  PVOID v37; // [rsp+50h] [rbp-38h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+20h]

  v40 = a4;
  v39 = a3;
  v36 = 0LL;
  v12 = 0LL;
  v37 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v15 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = Length;
    if ( (_DWORD)Length )
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    if ( (a8 & 0xFFFFF000) != 0 || !a8 )
      return -1073741811;
  }
  else
  {
    v16 = Length;
  }
  result = IopReferenceFileObject(a1, 1u, PreviousMode, &v36, 0LL);
  if ( result >= 0 )
  {
    v18 = (struct _FILE_OBJECT *)v36;
    if ( *((_QWORD *)v36 + 22) && (v39 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v19 = -1073741811;
LABEL_26:
      ObfDereferenceObject(v18);
      return v19;
    }
    if ( Handle )
    {
      Object = 0LL;
      v19 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v12 = Object;
      v37 = Object;
      if ( v19 < 0 )
        goto LABEL_26;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( (v18->Flags & 2) != 0 )
    {
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      v21 = (volatile __int32 *)v36;
      v22 = KeAbPreAcquire((__int64)v36 + 128, 0LL);
      v35[0] = 0;
      if ( _InterlockedExchange(v21 + 29, 1) )
      {
        v18 = (struct _FILE_OBJECT *)v36;
        v19 = IopWaitAndAcquireFileObjectLock(v36, (__int64)v35);
      }
      else
      {
        if ( v22 )
          *(_BYTE *)(v22 + 18) = 1;
        v18 = (struct _FILE_OBJECT *)v36;
        ObfReferenceObject(v36);
        v19 = 0;
      }
      if ( v35[0] )
      {
        if ( v12 )
          ObfDereferenceObject(v12);
        goto LABEL_26;
      }
      v35[0] = 1;
    }
    else
    {
      v35[0] = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v39, 0);
    }
    IopResetEvent((__int64)v18);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v18);
    LOBYTE(v24) = v35[0] ^ 1;
    LOBYTE(v25) = RelatedDeviceObject->StackSize;
    Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v25, v24);
    v27 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v18, v12);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v18;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = v12;
    *(_QWORD *)(Irp + 72) = a5;
    *(_QWORD *)(Irp + 88) = v39;
    *(_QWORD *)(Irp + 96) = v40;
    v28 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v28 - 72) = 12;
    v29 = a10;
    *(_BYTE *)(v28 - 71) = (a10 == 2) + 2;
    *(_QWORD *)(v28 - 24) = v18;
    if ( !v16 )
      goto LABEL_42;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      Pool2 = ExAllocatePool2(65LL, v16, 1112764233LL);
      v27->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
      if ( !Pool2 )
      {
        IopExceptionCleanupEx((volatile __int32 *)&v18->Type, v27, v12, 0LL, (v18->Flags & 2) != 0);
        return -1073741670;
      }
      v27->Flags = 112;
      v29 = a10;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl((PVOID)Address, v16, 0, 1u, v27);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_2(Mdl, PreviousMode, v33, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v28 - 72));
      v29 = a10;
      goto LABEL_42;
    }
    v27->UserBuffer = (PVOID)Address;
LABEL_42:
    *(_DWORD *)(v28 - 64) = v16;
    *(_DWORD *)(v28 - 56) = a8;
    if ( *(_BYTE *)(v28 - 71) == 3 )
      *(_DWORD *)(v28 - 48) = v29;
    *(_BYTE *)(v28 - 70) = 0;
    v34 = *(_BYTE *)(v28 - 70);
    if ( a9 )
      v34 = 1;
    *(_BYTE *)(v28 - 70) = v34;
    return IopSynchronousServiceTail(RelatedDeviceObject, v27, PreviousMode, v35[0], 2);
  }
  return result;
}
