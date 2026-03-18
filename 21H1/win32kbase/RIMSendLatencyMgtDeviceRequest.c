/*
 * XREFs of RIMSendLatencyMgtDeviceRequest @ 0x1C016AC14
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1C0048660 (RIMUpdateDeviceForInputMode.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A2F44 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01697D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     WPP_RECORDER_SF_qDDd @ 0x1C016BC88 (WPP_RECORDER_SF_qDDd.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C016BEE4 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_SetUsages @ 0x1C016C130 (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMSendLatencyMgtDeviceRequest(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  int v8; // edx
  int Status; // ebx
  __int64 v10; // r13
  ULONG v11; // r15d
  int SpecificButtonCaps; // eax
  struct _FILE_OBJECT *v13; // r12
  _BYTE *v14; // rax
  _BYTE *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  PIRP v18; // rax
  struct _DEVICE_OBJECT *v19; // rcx
  int OutputBuffer; // [rsp+28h] [rbp-A9h]
  __int16 v22[2]; // [rsp+58h] [rbp-79h] BYREF
  int v23; // [rsp+5Ch] [rbp-75h] BYREF
  PVOID Object; // [rsp+60h] [rbp-71h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-61h] BYREF
  __int64 v27; // [rsp+78h] [rbp-59h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-51h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-41h] BYREF
  _BYTE v30[80]; // [rsp+A8h] [rbp-29h] BYREF

  Object = 0LL;
  DeviceObject = 0LL;
  Handle = 0LL;
  IoStatusBlock = 0LL;
  memset(v30, 0, 0x48uLL);
  v7 = *(_QWORD *)(a1 + 464);
  v22[0] = 1;
  if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 256LL) )
  {
    v27 = a1;
    v23 = a2 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C024C960,
      byte_1C021C0C4,
      v5,
      v6,
      (__int64)&v27,
      (__int64)&v23);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDd(
      *(unsigned __int16 *)(v7 + 42),
      v4,
      v5,
      v6,
      OutputBuffer,
      a1,
      *(_WORD *)(v7 + 42),
      *(_WORD *)(v7 + 40),
      a2);
  Status = RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(a1 + 208), v4, v5, &Handle, &Object, &DeviceObject);
  if ( Status >= 0 )
  {
    v10 = *(_QWORD *)(v7 + 16);
    v11 = *(unsigned __int16 *)(v7 + 48);
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, 96, (__int64)v30, (__int64)v22, v10);
    v13 = (struct _FILE_OBJECT *)Object;
    Status = SpecificButtonCaps;
    if ( SpecificButtonCaps >= 0 )
    {
      v14 = (_BYTE *)Win32AllocPoolNonPaged(v11, 0x69667352u);
      v15 = v14;
      if ( v14 )
      {
        memset(v14, 0, v11);
        *v15 = v30[2];
        if ( a2 )
        {
          LOWORD(v23) = 96;
          LODWORD(Object) = 1;
          Status = rimHidP_SetUsages(2, 13, 0, (unsigned int)&v23, (__int64)&Object, v10, (__int64)v15, v11);
        }
        if ( Status >= 0 )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v18 = IoBuildDeviceIoControlRequest(0xB0191u, DeviceObject, v15, v11, 0LL, 0, 0, &Event, &IoStatusBlock);
          v16 = (__int64)v18;
          if ( v18 )
          {
            v19 = DeviceObject;
            v18->Tail.Overlay.CurrentStackLocation[-1].FileObject = v13;
            Status = IofCallDriver(v19, v18);
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
              WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 61, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
            }
            Status = -1073741668;
          }
        }
        Win32FreePool((__int64)v15, v16, v17);
      }
      else
      {
        Status = -1073741670;
      }
    }
    ObfDereferenceObject(v13);
    ZwClose(Handle);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v8, 1, 62, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, Status);
  }
  return (unsigned int)Status;
}
