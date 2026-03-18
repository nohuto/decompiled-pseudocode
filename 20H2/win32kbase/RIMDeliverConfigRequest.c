/*
 * XREFs of RIMDeliverConfigRequest @ 0x1C016156C
 * Callers:
 *     EnablePTPDevices @ 0x1C0120780 (EnablePTPDevices.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0161108 (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C016141C (RIMConfigurePointerDevice.c)
 *     RIMRevokeConfigurationChange @ 0x1C0162340 (RIMRevokeConfigurationChange.c)
 *     RIMUnRevokeConfigurationChange @ 0x1C0162970 (RIMUnRevokeConfigurationChange.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     RIMGetDeviceObjectPointer @ 0x1C006EE58 (RIMGetDeviceObjectPointer.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00B5C88 (RimDeviceTypeToRimInputTypeString.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C0160E24 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTe.c)
 *     ?DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z @ 0x1C0160FA8 (-DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z.c)
 *     WPP_RECORDER_SF_qDDdd @ 0x1C01634F4 (WPP_RECORDER_SF_qDDdd.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0163634 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163688 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_SetUsageValue @ 0x1C0163814 (rimHidP_SetUsageValue.c)
 *     rimHidP_SetUsages @ 0x1C0163880 (rimHidP_SetUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(struct RIMDEV *a1, __int64 a2, unsigned __int16 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  int SpecificValueCaps; // ebx
  int v16; // eax
  __int64 v17; // r8
  PKEVENT v18; // r15
  int v19; // edx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 IoControlCode; // [rsp+28h] [rbp-D8h]
  PVOID InputBuffer; // [rsp+30h] [rbp-D0h]
  PVOID InputBuffera; // [rsp+30h] [rbp-D0h]
  int InputBufferLength; // [rsp+38h] [rbp-C8h]
  __int16 v29; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  void *EventHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+70h] [rbp-90h] BYREF
  const WCHAR *v34; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v35[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v36[80]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v35, 0, 0x48uLL);
  memset(v36, 0, 0x48uLL);
  v29 = 1;
  if ( !*(_QWORD *)(a2 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  if ( !*(_WORD *)(a2 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  InputTraceLogging::RIM::DeliverConfigRequest(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDdd(*(unsigned __int16 *)(a2 + 40), *(unsigned __int16 *)(a2 + 42), v12, v13);
  memset(*(void **)(a2 + 32), 0, *(unsigned __int16 *)(a2 + 48));
  InputBuffer = *(PVOID *)(a2 + 16);
  if ( a3 == 82 )
  {
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 82, (__int64)v35, (__int64)&v29, (__int64)InputBuffer);
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_26;
    **(_BYTE **)(a2 + 32) = v35[2];
    v16 = rimHidP_SetUsageValue(
            2,
            13,
            0,
            82,
            a4,
            *(_QWORD *)(a2 + 16),
            *(_QWORD *)(a2 + 32),
            *(unsigned __int16 *)(a2 + 48));
  }
  else
  {
    SpecificValueCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, a3, (__int64)v36, (__int64)&v29, (__int64)InputBuffer);
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_22;
    **(_BYTE **)(a2 + 32) = v36[2];
    if ( !a4 )
      goto LABEL_14;
    InputBufferLength = *(unsigned __int16 *)(a2 + 48);
    InputBuffera = *(PVOID *)(a2 + 32);
    IoControlCode = *(_QWORD *)(a2 + 16);
    LODWORD(EventHandle) = 2;
    LODWORD(Object) = 5767255;
    v16 = rimHidP_SetUsages(
            2,
            13,
            0,
            (unsigned int)&Object,
            (__int64)&EventHandle,
            IoControlCode,
            (__int64)InputBuffera,
            InputBufferLength);
  }
  SpecificValueCaps = v16;
  if ( v16 != 1114112 )
  {
LABEL_22:
    if ( (unsigned __int16)(a3 - 87) <= 1u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 58, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
      }
      SpecificValueCaps = 0;
    }
LABEL_26:
    if ( SpecificValueCaps >= 0 )
      return (unsigned int)SpecificValueCaps;
    goto LABEL_27;
  }
LABEL_14:
  Object = 0LL;
  Timeout.QuadPart = 0LL;
  FileHandle = 0LL;
  EventHandle = 0LL;
  SpecificValueCaps = RIMGetDeviceObjectPointer(
                        (struct _UNICODE_STRING *)a1 + 13,
                        v14,
                        v17,
                        &FileHandle,
                        &Object,
                        (PDEVICE_OBJECT *)&Timeout);
  if ( SpecificValueCaps >= 0 )
  {
    v18 = IoCreateNotificationEvent(0LL, &EventHandle);
    SpecificValueCaps = ZwDeviceIoControlFile(
                          FileHandle,
                          EventHandle,
                          0LL,
                          0LL,
                          (PIO_STATUS_BLOCK)a1 + 16,
                          0xB0191u,
                          *(PVOID *)(a2 + 32),
                          *(unsigned __int16 *)(a2 + 48),
                          0LL,
                          0);
    if ( SpecificValueCaps == 259 )
    {
      if ( v18 )
      {
        Timeout.QuadPart = -10000000LL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v19, 1, 57, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
        }
        SpecificValueCaps = KeWaitForSingleObject(v18, Executive, 0, 0, &Timeout);
      }
      else
      {
        SpecificValueCaps = -1073741536;
      }
    }
    ObfDereferenceObject(Object);
    ZwClose(FileHandle);
    ZwClose(EventHandle);
    goto LABEL_26;
  }
LABEL_27:
  if ( (unsigned int)dword_1C0243170 > 5 && tlgKeywordOn((__int64)&dword_1C0243170, 0x400000000000LL) )
  {
    v20 = *((unsigned __int8 *)a1 + 48);
    Timeout = *(union _LARGE_INTEGER *)((char *)a1 + 216);
    LODWORD(EventHandle) = SpecificValueCaps;
    LODWORD(FileHandle) = a4;
    LOWORD(Object) = a3;
    v34 = RimDeviceTypeToRimInputTypeString((__int64)a1, v20);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v21,
      byte_1C0214724,
      v22,
      v23,
      &v34,
      (const WCHAR **)&Timeout,
      (__int64)&Object,
      (__int64)&FileHandle,
      (__int64)&EventHandle);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 59, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
  }
  return (unsigned int)SpecificValueCaps;
}
