/*
 * XREFs of IopWriteFile @ 0x1405CEB78
 * Callers:
 *     NtWriteFile @ 0x140645240 (NtWriteFile.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     IopReleaseFileObjectLock @ 0x1403584A0 (IopReleaseFileObjectLock.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F1D8C (IopAllocateAndPopulateWriteIrp.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F2068 (IopValidateAndGetWriteParameters.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 *     VfFastIoCheckState @ 0x1409CA9B4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CAA8C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopWriteFile(
        PADAPTER_OBJECT DmaAdapter,
        void *a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9,
        char a10)
{
  _OWORD *v11; // r12
  __int64 v12; // r15
  unsigned int v13; // r13d
  __int64 result; // rax
  __int64 v15; // r8
  _DWORD *v16; // r9
  PDEVICE_OBJECT v17; // rdx
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoWrite)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v20; // rsi
  char v21; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v23; // rcx
  unsigned __int64 v24; // rax
  struct _DMA_ADAPTER *v25; // rcx
  __int128 v26; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-98h] BYREF
  char v28[2]; // [rsp+68h] [rbp-90h]
  char v29; // [rsp+6Ah] [rbp-8Eh]
  int v30; // [rsp+6Bh] [rbp-8Dh]
  char v31; // [rsp+6Fh] [rbp-89h]
  PADAPTER_OBJECT v32; // [rsp+70h] [rbp-88h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-80h]
  PRKEVENT Event; // [rsp+80h] [rbp-78h]
  __int64 v35; // [rsp+88h] [rbp-70h]
  __int64 v36; // [rsp+90h] [rbp-68h]
  __int64 v37; // [rsp+98h] [rbp-60h]
  __int64 v38; // [rsp+A0h] [rbp-58h]
  int v39; // [rsp+A8h] [rbp-50h]
  int v40; // [rsp+ACh] [rbp-4Ch]
  __int64 v41; // [rsp+B0h] [rbp-48h] BYREF
  int v42; // [rsp+B8h] [rbp-40h]
  int v43; // [rsp+BCh] [rbp-3Ch]
  __int64 v44; // [rsp+C0h] [rbp-38h]
  PIRP Irp; // [rsp+110h] [rbp+18h] BYREF

  v30 = 0;
  v31 = 0;
  v40 = 0;
  Irp = 0LL;
  v27 = 0LL;
  *(_WORD *)v28 = 0;
  v29 = 1;
  v32 = DmaAdapter;
  DeviceObject = 0LL;
  Event = 0LL;
  v35 = a3;
  v36 = a4;
  v11 = a5;
  v37 = (__int64)a5;
  v12 = a6;
  v38 = a6;
  v13 = a7;
  v39 = a7;
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  v44 = 0LL;
  result = IopValidateAndGetWriteParameters((__int64)&v27, a2, a8, a9, a10);
  if ( (int)result >= 0 )
  {
    if ( !v28[1] || !*(_QWORD *)&DmaAdapter[3].Version )
      goto LABEL_16;
    v17 = DeviceObject;
    FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
    v26 = 0LL;
    FastIoWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoWrite;
    if ( (MmVerifierData & 0x10) != 0 )
    {
      v20 = (void *)VfFastIoSnapState();
      v17 = DeviceObject;
    }
    else
    {
      v20 = 0LL;
    }
    LOBYTE(v16) = 1;
    v21 = FastIoWrite(DmaAdapter, &v41, v13, v16, v42, v12, &v26, v17);
    if ( v20 )
      VfFastIoCheckState(v20);
    if ( v21 && !(_DWORD)v26 )
    {
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->WriteOperationCount;
      __incgsdword(0x2EE0u);
      v23 = KeGetCurrentThread();
      v24 = DWORD2(v26);
      v23->WriteTransferCount += DWORD2(v26);
      __addgsqword(0x2EF0u, v24);
      *v11 = v26;
      v25 = (struct _DMA_ADAPTER *)Event;
      if ( Event )
      {
        if ( (*(_DWORD *)&DmaAdapter[5].Version & 0x8000000) == 0 )
        {
          KeSetEvent(Event, 0, 0);
          v25 = (struct _DMA_ADAPTER *)Event;
        }
        HalPutDmaAdapter(v25);
      }
      IopReleaseFileObjectLock(DmaAdapter);
      HalPutDmaAdapter(DmaAdapter);
      return (unsigned int)v26;
    }
    else
    {
LABEL_16:
      result = IopAllocateAndPopulateWriteIrp((__int64)&v27, (__int64)&Irp, v15, v16);
      if ( (int)result >= 0 )
        return IopSynchronousServiceTail(DeviceObject, Irp, v28[0], v28[1], 1);
    }
  }
  return result;
}
