/*
 * XREFs of IopWriteFile @ 0x140658DCC
 * Callers:
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x1402AD350 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404183E0 (IopAllocateAndPopulateWriteIrp.c)
 *     IopValidateAndGetWriteParameters @ 0x1404186A0 (IopValidateAndGetWriteParameters.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     VfFastIoCheckState @ 0x140A8A8D4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140A8A9AC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopWriteFile(
        _QWORD *Object,
        void *a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6,
        unsigned int a7,
        _QWORD *a8,
        _DWORD *a9,
        char a10)
{
  _OWORD *v11; // r12
  __int64 v12; // r13
  __int64 result; // rax
  __int64 v14; // r9
  PDEVICE_OBJECT v15; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoWrite)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v18; // r14
  char v19; // si
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v21; // rcx
  unsigned __int64 v22; // rax
  PRKEVENT v23; // rcx
  __int128 v24; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-98h] BYREF
  char v26[2]; // [rsp+68h] [rbp-90h]
  char v27; // [rsp+6Ah] [rbp-8Eh]
  int v28; // [rsp+6Bh] [rbp-8Dh]
  char v29; // [rsp+6Fh] [rbp-89h]
  _QWORD *v30; // [rsp+70h] [rbp-88h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-80h]
  PRKEVENT Event; // [rsp+80h] [rbp-78h]
  __int64 v33; // [rsp+88h] [rbp-70h]
  __int64 v34; // [rsp+90h] [rbp-68h]
  __int64 v35; // [rsp+98h] [rbp-60h]
  __int64 v36; // [rsp+A0h] [rbp-58h]
  unsigned int v37; // [rsp+A8h] [rbp-50h]
  int v38; // [rsp+ACh] [rbp-4Ch]
  __int64 v39; // [rsp+B0h] [rbp-48h] BYREF
  int v40; // [rsp+B8h] [rbp-40h]
  int v41; // [rsp+BCh] [rbp-3Ch]
  __int64 v42; // [rsp+C0h] [rbp-38h]
  PIRP Irp; // [rsp+110h] [rbp+18h] BYREF

  v28 = 0;
  v29 = 0;
  v38 = 0;
  Irp = 0LL;
  v25 = 0LL;
  *(_WORD *)v26 = 0;
  v27 = 1;
  v30 = Object;
  DeviceObject = 0LL;
  Event = 0LL;
  v33 = a3;
  v34 = a4;
  v11 = a5;
  v35 = (__int64)a5;
  v12 = a6;
  v36 = a6;
  v37 = a7;
  v39 = 0LL;
  v40 = 0;
  v41 = 0;
  v42 = 0LL;
  result = IopValidateAndGetWriteParameters((__int64)&v25, a2, a8, a9, a10);
  if ( (int)result >= 0 )
  {
    if ( !v26[1] || !Object[6] )
      goto LABEL_17;
    v15 = DeviceObject;
    FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
    v24 = 0LL;
    FastIoWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoWrite;
    if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DeviceObject->DriverObject) )
    {
      v18 = (void *)VfFastIoSnapState();
      v15 = DeviceObject;
    }
    else
    {
      v18 = 0LL;
    }
    LOBYTE(v14) = 1;
    v19 = FastIoWrite(Object, &v39, a7, v14, v40, v12, &v24, v15);
    if ( v18 )
      VfFastIoCheckState(v18);
    if ( v19 && !(_DWORD)v24 )
    {
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->WriteOperationCount;
      __incgsdword(0x2EE0u);
      v21 = KeGetCurrentThread();
      v22 = DWORD2(v24);
      v21->WriteTransferCount += DWORD2(v24);
      __addgsqword(0x2EF0u, v22);
      *v11 = v24;
      v23 = Event;
      if ( Event )
      {
        if ( (Object[10] & 0x8000000) == 0 )
        {
          KeSetEvent(Event, 0, 0);
          v23 = Event;
        }
        ObfDereferenceObject(v23);
      }
      IopReleaseFileObjectLock((volatile __int32 *)Object);
      ObfDereferenceObject(Object);
      return (unsigned int)v24;
    }
    else
    {
LABEL_17:
      result = IopAllocateAndPopulateWriteIrp((__int64)&v25, &Irp);
      if ( (int)result >= 0 )
        return IopSynchronousServiceTail(DeviceObject, Irp, v26[0], v26[1], 1);
    }
  }
  return result;
}
