/*
 * XREFs of IopWriteFile @ 0x1405CEB78
 * Callers:
 *     NtWriteFile @ 0x140650420 (NtWriteFile.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     IopReleaseFileObjectLock @ 0x14034D750 (IopReleaseFileObjectLock.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F1D24 (IopAllocateAndPopulateWriteIrp.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F2018 (IopValidateAndGetWriteParameters.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     IopSynchronousServiceTail @ 0x1406FED80 (IopSynchronousServiceTail.c)
 *     VfFastIoCheckState @ 0x1409C99B4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C9A8C (VfFastIoSnapState.c)
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
  __int64 v15; // r9
  PDEVICE_OBJECT v16; // rdx
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoWrite)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v19; // rsi
  char v20; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v22; // rcx
  unsigned __int64 v23; // rax
  struct _DMA_ADAPTER *v24; // rcx
  __int128 v25; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-98h] BYREF
  char v27[2]; // [rsp+68h] [rbp-90h]
  char v28; // [rsp+6Ah] [rbp-8Eh]
  int v29; // [rsp+6Bh] [rbp-8Dh]
  char v30; // [rsp+6Fh] [rbp-89h]
  PADAPTER_OBJECT v31; // [rsp+70h] [rbp-88h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-80h]
  PRKEVENT Event; // [rsp+80h] [rbp-78h]
  __int64 v34; // [rsp+88h] [rbp-70h]
  __int64 v35; // [rsp+90h] [rbp-68h]
  __int64 v36; // [rsp+98h] [rbp-60h]
  __int64 v37; // [rsp+A0h] [rbp-58h]
  int v38; // [rsp+A8h] [rbp-50h]
  int v39; // [rsp+ACh] [rbp-4Ch]
  __int64 v40; // [rsp+B0h] [rbp-48h] BYREF
  int v41; // [rsp+B8h] [rbp-40h]
  int v42; // [rsp+BCh] [rbp-3Ch]
  __int64 v43; // [rsp+C0h] [rbp-38h]
  PIRP Irp; // [rsp+110h] [rbp+18h] BYREF

  v29 = 0;
  v30 = 0;
  v39 = 0;
  Irp = 0LL;
  v26 = 0LL;
  *(_WORD *)v27 = 0;
  v28 = 1;
  v31 = DmaAdapter;
  DeviceObject = 0LL;
  Event = 0LL;
  v34 = a3;
  v35 = a4;
  v11 = a5;
  v36 = (__int64)a5;
  v12 = a6;
  v37 = a6;
  v13 = a7;
  v38 = a7;
  v40 = 0LL;
  v41 = 0;
  v42 = 0;
  v43 = 0LL;
  result = IopValidateAndGetWriteParameters((__int64)&v26, a2, a8, a9, a10);
  if ( (int)result >= 0 )
  {
    if ( !v27[1] || !*(_QWORD *)&DmaAdapter[3].Version )
      goto LABEL_16;
    v16 = DeviceObject;
    FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
    v25 = 0LL;
    FastIoWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoWrite;
    if ( (MmVerifierData & 0x10) != 0 )
    {
      v19 = (void *)VfFastIoSnapState();
      v16 = DeviceObject;
    }
    else
    {
      v19 = 0LL;
    }
    LOBYTE(v15) = 1;
    v20 = FastIoWrite(DmaAdapter, &v40, v13, v15, v41, v12, &v25, v16);
    if ( v19 )
      VfFastIoCheckState(v19);
    if ( v20 && !(_DWORD)v25 )
    {
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->WriteOperationCount;
      __incgsdword(0x2EE0u);
      v22 = KeGetCurrentThread();
      v23 = DWORD2(v25);
      v22->WriteTransferCount += DWORD2(v25);
      __addgsqword(0x2EF0u, v23);
      *v11 = v25;
      v24 = (struct _DMA_ADAPTER *)Event;
      if ( Event )
      {
        if ( (*(_DWORD *)&DmaAdapter[5].Version & 0x8000000) == 0 )
        {
          KeSetEvent(Event, 0, 0);
          v24 = (struct _DMA_ADAPTER *)Event;
        }
        HalPutDmaAdapter(v24);
      }
      IopReleaseFileObjectLock(DmaAdapter);
      HalPutDmaAdapter(DmaAdapter);
      return (unsigned int)v25;
    }
    else
    {
LABEL_16:
      result = IopAllocateAndPopulateWriteIrp((__int64)&v26, &Irp);
      if ( (int)result >= 0 )
        return IopSynchronousServiceTail(DeviceObject, Irp, v27[0], v27[1], 1);
    }
  }
  return result;
}
