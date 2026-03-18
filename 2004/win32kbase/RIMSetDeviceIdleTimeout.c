/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x1C0164C20
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00161A8 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00AEE94 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_qd @ 0x1C013BA04 (WPP_RECORDER_SF_qd.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0163488 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSetDeviceIdleTimeout(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  int Status; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _FILE_OBJECT *QuadPart; // rsi
  _DWORD *v12; // rax
  int v13; // edx
  void *v14; // r14
  PIRP v15; // rax
  int v16; // edx
  struct _DEVICE_OBJECT *v17; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp+7h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+67h] BYREF
  int v22; // [rsp+C8h] [rbp+6Fh] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+7Fh] BYREF

  v22 = a2;
  Timeout.QuadPart = 0LL;
  Object = 0LL;
  Handle = 0LL;
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3, a4);
  if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 256LL) )
  {
    v22 = 30000;
    IoStatusBlock.Pointer = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0246A70,
      byte_1C0216515,
      a3,
      v5,
      (__int64)&IoStatusBlock,
      (__int64)&v22);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      (__int64)gRimLog,
      4u,
      1u,
      0x44u,
      (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
      a1,
      30000);
  Status = RIMGetDeviceObjectPointer(a1 + 13, a2, a3, &Handle, (PVOID *)&Timeout, (PDEVICE_OBJECT *)&Object);
  if ( Status >= 0 )
  {
    QuadPart = (struct _FILE_OBJECT *)Timeout.QuadPart;
    IoStatusBlock = 0LL;
    if ( !Timeout.QuadPart )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9, v10);
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9, v10);
    ObfReferenceObject(Object);
    v12 = (_DWORD *)Win32AllocPoolNonPaged(4LL, 0x70707352u);
    v14 = v12;
    if ( v12 )
    {
      *v12 = 30000;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v15 = IoBuildDeviceIoControlRequest(0xB01B0u, (PDEVICE_OBJECT)Object, v14, 4u, 0LL, 0, 0, &Event, &IoStatusBlock);
      v16 = (int)v15;
      if ( v15 )
      {
        v17 = (struct _DEVICE_OBJECT *)Object;
        v15->Tail.Overlay.CurrentStackLocation[-1].FileObject = QuadPart;
        Status = IofCallDriver(v17, v15);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 69, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
        }
        Status = -1073741668;
      }
      Win32FreePool((__int64)v14);
    }
    if ( Status < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v13, 1, 70, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
    ObfDereferenceObject(QuadPart);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
  }
  return (unsigned int)Status;
}
