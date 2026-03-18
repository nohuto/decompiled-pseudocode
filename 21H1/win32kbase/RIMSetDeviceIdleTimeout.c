/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x1C016AF70
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00485FC (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A2F44 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_qd @ 0x1C01416A4 (WPP_RECORDER_SF_qd.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01697D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSetDeviceIdleTimeout(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  int Status; // ebx
  struct _FILE_OBJECT *QuadPart; // rsi
  _DWORD *v8; // rax
  int v9; // edx
  void *v10; // r14
  PIRP v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  struct _DEVICE_OBJECT *v14; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp+7h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+67h] BYREF
  int v19; // [rsp+C8h] [rbp+6Fh] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+7Fh] BYREF

  v19 = a2;
  Timeout.QuadPart = 0LL;
  Object = 0LL;
  Handle = 0LL;
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
  if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 256LL) )
  {
    v19 = 30000;
    IoStatusBlock.Pointer = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C024C960,
      byte_1C021C085,
      a3,
      v4,
      (__int64)&IoStatusBlock,
      (__int64)&v19);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      (__int64)gRimLog,
      4u,
      1u,
      0x44u,
      (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
      a1,
      30000);
  Status = RIMGetDeviceObjectPointer(a1 + 13, a2, a3, &Handle, (PVOID *)&Timeout, (PDEVICE_OBJECT *)&Object);
  if ( Status >= 0 )
  {
    QuadPart = (struct _FILE_OBJECT *)Timeout.QuadPart;
    IoStatusBlock = 0LL;
    if ( !Timeout.QuadPart )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
    ObfReferenceObject(Object);
    v8 = (_DWORD *)Win32AllocPoolNonPaged(4LL, 0x70707352u);
    v10 = v8;
    if ( v8 )
    {
      *v8 = 30000;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v11 = IoBuildDeviceIoControlRequest(0xB01B0u, (PDEVICE_OBJECT)Object, v10, 4u, 0LL, 0, 0, &Event, &IoStatusBlock);
      v13 = (__int64)v11;
      if ( v11 )
      {
        v14 = (struct _DEVICE_OBJECT *)Object;
        v11->Tail.Overlay.CurrentStackLocation[-1].FileObject = QuadPart;
        Status = IofCallDriver(v14, v11);
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
          LOBYTE(v13) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v13, 1, 69, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
        }
        Status = -1073741668;
      }
      Win32FreePool((__int64)v10, v13, v12);
    }
    if ( Status < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 70, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
    }
    ObfDereferenceObject(QuadPart);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
  }
  return (unsigned int)Status;
}
