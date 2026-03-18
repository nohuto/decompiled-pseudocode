/*
 * XREFs of RIMDeliverConfigRequest @ 0x1C0169E24
 * Callers:
 *     EnablePTPDevices @ 0x1C0128AB0 (EnablePTPDevices.c)
 *     RIMAllocateHidConfigDesc @ 0x1C01699B8 (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C0169CCC (RIMConfigurePointerDevice.c)
 *     RIMRevokeConfigurationChange @ 0x1C016ABF0 (RIMRevokeConfigurationChange.c)
 *     RIMUnRevokeConfigurationChange @ 0x1C016B220 (RIMUnRevokeConfigurationChange.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004813C (RimDeviceTypeToRimInputTypeString.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A2F44 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C01696D4 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTe.c)
 *     ?DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z @ 0x1C0169858 (-DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z.c)
 *     WPP_RECORDER_SF_qDDdd @ 0x1C016BDA4 (WPP_RECORDER_SF_qDDdd.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C016BEE4 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C016BF38 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_SetUsageValue @ 0x1C016C0C4 (rimHidP_SetUsageValue.c)
 *     rimHidP_SetUsages @ 0x1C016C130 (rimHidP_SetUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(struct RIMDEV *a1, __int64 a2, unsigned __int16 a3, int a4)
{
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdx
  int SpecificValueCaps; // ebx
  int v13; // eax
  __int64 v14; // r8
  PKEVENT v15; // r15
  int v16; // edx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 IoControlCode; // [rsp+28h] [rbp-D8h]
  PVOID InputBuffer; // [rsp+30h] [rbp-D0h]
  PVOID InputBuffera; // [rsp+30h] [rbp-D0h]
  int InputBufferLength; // [rsp+38h] [rbp-C8h]
  __int16 v26; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  void *EventHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+70h] [rbp-90h] BYREF
  const WCHAR *v31; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v32[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v33[80]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v32, 0, 0x48uLL);
  memset(v33, 0, 0x48uLL);
  v26 = 1;
  if ( !*(_QWORD *)(a2 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( !*(_WORD *)(a2 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  InputTraceLogging::RIM::DeliverConfigRequest(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDdd(*(unsigned __int16 *)(a2 + 40), *(unsigned __int16 *)(a2 + 42), v9, v10);
  memset(*(void **)(a2 + 32), 0, *(unsigned __int16 *)(a2 + 48));
  InputBuffer = *(PVOID *)(a2 + 16);
  if ( a3 == 82 )
  {
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 82, (__int64)v32, (__int64)&v26, (__int64)InputBuffer);
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_26;
    **(_BYTE **)(a2 + 32) = v32[2];
    v13 = rimHidP_SetUsageValue(
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
    SpecificValueCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, a3, (__int64)v33, (__int64)&v26, (__int64)InputBuffer);
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_22;
    **(_BYTE **)(a2 + 32) = v33[2];
    if ( !a4 )
      goto LABEL_14;
    InputBufferLength = *(unsigned __int16 *)(a2 + 48);
    InputBuffera = *(PVOID *)(a2 + 32);
    IoControlCode = *(_QWORD *)(a2 + 16);
    LODWORD(EventHandle) = 2;
    LODWORD(Object) = 5767255;
    v13 = rimHidP_SetUsages(
            2,
            13,
            0,
            (unsigned int)&Object,
            (__int64)&EventHandle,
            IoControlCode,
            (__int64)InputBuffera,
            InputBufferLength);
  }
  SpecificValueCaps = v13;
  if ( v13 != 1114112 )
  {
LABEL_22:
    if ( (unsigned __int16)(a3 - 87) <= 1u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 58, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
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
                        v11,
                        v14,
                        &FileHandle,
                        &Object,
                        (PDEVICE_OBJECT *)&Timeout);
  if ( SpecificValueCaps >= 0 )
  {
    v15 = IoCreateNotificationEvent(0LL, &EventHandle);
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
      if ( v15 )
      {
        Timeout.QuadPart = -10000000LL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 57, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
        }
        SpecificValueCaps = KeWaitForSingleObject(v15, Executive, 0, 0, &Timeout);
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
  if ( (unsigned int)dword_1C024B170 > 5 && tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
  {
    v17 = *((unsigned __int8 *)a1 + 48);
    Timeout = *(union _LARGE_INTEGER *)((char *)a1 + 216);
    LODWORD(EventHandle) = SpecificValueCaps;
    LODWORD(FileHandle) = a4;
    LOWORD(Object) = a3;
    v31 = RimDeviceTypeToRimInputTypeString((__int64)a1, v17);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v18,
      byte_1C021C103,
      v19,
      v20,
      &v31,
      (const WCHAR **)&Timeout,
      (__int64)&Object,
      (__int64)&FileHandle,
      (__int64)&EventHandle);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 59, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
  }
  return (unsigned int)SpecificValueCaps;
}
