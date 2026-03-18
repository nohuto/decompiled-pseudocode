/*
 * XREFs of RIMDeviceIoControl @ 0x1C0024840
 * Callers:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00251C0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMDeviceIoControl @ 0x1C0153E50 (NtRIMDeviceIoControl.c)
 * Callees:
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x1C0021F44 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C00223E0 (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0022E44 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00230E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0023390 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00274F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceIoControl(
        __int64 a1,
        char *a2,
        ULONG a3,
        PVOID a4,
        ULONG InputBufferLength,
        volatile void *Address,
        SIZE_T Length,
        _DWORD *a8,
        PIO_STATUS_BLOCK IoStatusBlock,
        int a10,
        int a11,
        int a12)
{
  char *v12; // rsi
  int v14; // edx
  int Status; // ebx
  struct RawInputManagerObject *v16; // r14
  int v17; // edx
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rsi
  void *v22; // rcx
  struct _FILE_OBJECT *v23; // r15
  ULONG64 v25; // rcx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  PIRP v27; // rbx
  _DWORD *v28; // rdx
  BOOL v29; // [rsp+50h] [rbp-88h]
  PVOID v30; // [rsp+58h] [rbp-80h] BYREF
  PVOID Object; // [rsp+60h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK v32; // [rsp+68h] [rbp-70h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-60h]
  PVOID v34; // [rsp+80h] [rbp-58h] BYREF
  _BYTE v35[8]; // [rsp+88h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-48h] BYREF
  PVOID InputBuffer; // [rsp+F8h] [rbp+20h]

  InputBuffer = a4;
  v12 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 128, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    a4 = InputBuffer;
  }
  v30 = 0LL;
  Object = 0LL;
  if ( a12 == 1 )
  {
    if ( InputBufferLength )
    {
      v25 = (ULONG64)a4 + InputBufferLength;
      if ( v25 > MmUserProbeAddress || v25 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    ProbeForWrite(Address, (unsigned int)Length, 1u);
  }
  Status = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &v30);
  if ( Status >= 0 )
  {
    v16 = (struct RawInputManagerObject *)v30;
    v29 = *((_QWORD *)v30 + 14) == (_QWORD)KeGetCurrentThread();
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v35, (struct _KTHREAD **)v30 + 13);
    if ( *((_BYTE *)v16 + 81) )
    {
      Status = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v17, 1, 130, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      Status = RawInputManagerDeviceObjectResolveHandle(v12, 3u, 1, &Object);
      if ( Status >= 0 )
      {
        v21 = Object;
        v22 = (void *)*((_QWORD *)Object + 39);
        if ( v22 && (v23 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 40), v18 = 0, v23) )
        {
          if ( (*((_DWORD *)Object + 68) & 0x2000) != 0 )
          {
            Status = -1073741637;
          }
          else if ( a10 )
          {
            if ( !IoStatusBlock )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, 0LL, v19, v20);
              v22 = (void *)v21[39];
            }
            if ( a12 == 1 )
              NtDeviceIoControlFile(v22, 0LL, 0LL, 0LL, IoStatusBlock, a3, InputBuffer, InputBufferLength, 0LL, 0);
            else
              ZwDeviceIoControlFile(v22, 0LL, 0LL, 0LL, IoStatusBlock, a3, InputBuffer, InputBufferLength, 0LL, 0);
          }
          else
          {
            v32 = 0LL;
            RelatedDeviceObject = IoGetRelatedDeviceObject(v23);
            DeviceObject = RelatedDeviceObject;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v27 = IoBuildDeviceIoControlRequest(
                    a3,
                    RelatedDeviceObject,
                    InputBuffer,
                    InputBufferLength,
                    (PVOID)Address,
                    Length,
                    a11 != 0,
                    &Event,
                    &v32);
            if ( v27 )
            {
              v27->RequestorMode = a12;
              ObfReferenceObject(v23);
              v27->Tail.Overlay.CurrentStackLocation[-1].FileObject = v23;
              if ( v29 )
                KeBugCheckEx(0x164u, 0x24uLL, (ULONG_PTR)(v21 + 37), 0LL, 0LL);
              RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v34, v16);
              if ( IofCallDriver(DeviceObject, v27) == 259 )
              {
                while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                  ;
              }
              Status = v32.Status;
              RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(&v34);
              ObfDereferenceObject(v23);
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
            {
              v28 = a8;
              if ( (unsigned __int64)a8 >= MmUserProbeAddress )
                v28 = (_DWORD *)MmUserProbeAddress;
              *v28 = v32.Information;
            }
            else
            {
              *a8 = v32.Information;
            }
          }
        }
        else
        {
          Status = -1073741436;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v18, 1, 129, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
          }
        }
        ObfDereferenceObject(v21);
      }
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v35);
    ObfDereferenceObject(v16);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v14, 1, 131, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, Status);
  }
  return (unsigned int)Status;
}
