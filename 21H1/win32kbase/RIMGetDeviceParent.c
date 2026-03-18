/*
 * XREFs of RIMGetDeviceParent @ 0x1C00222C4
 * Callers:
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0159498 (RIMVirtCreateDev.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMAllocateHidConfigDesc @ 0x1C01699B8 (RIMAllocateHidConfigDesc.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1C00226D8 (RIMGetPointerDevicePDO.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A2F44 (RIMGetDeviceObjectPointer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceParent(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  struct _DEVICE_OBJECT *v3; // rbx
  void *v4; // rsi
  HANDLE v5; // r14
  unsigned int v6; // r12d
  int v8; // eax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  ULONG v13; // eax
  void *Data; // rax
  NTSTATUS DevicePropertyData; // eax
  char v16; // r13
  int v18; // edx
  ULONG v19[2]; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+A0h] [rbp+40h] BYREF
  ULONG Type; // [rsp+B0h] [rbp+50h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+B8h] [rbp+58h]

  v3 = 0LL;
  v4 = 0LL;
  Type = 0;
  v5 = 0LL;
  Pdo = 0LL;
  v6 = 0;
  RequiredSize = 0;
  Object = 0LL;
  *(_QWORD *)v19 = 0LL;
  Handle = 0LL;
  if ( a1 )
  {
    v11 = RIMGetPointerDevicePDO(a1);
LABEL_8:
    if ( v11 >= 0
      && IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
    {
      v13 = RequiredSize;
      if ( !RequiredSize )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
        v13 = RequiredSize;
      }
      Data = (void *)Win32AllocPool(v13, 1886417746LL);
      *(_QWORD *)(a2 + 320) = Data;
      if ( Data )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               Pdo,
                               &DEVPKEY_Device_Parent,
                               0,
                               0,
                               RequiredSize,
                               Data,
                               &RequiredSize,
                               &Type);
        v16 = DevicePropertyData;
        if ( DevicePropertyData < 0 )
        {
          Win32FreePool(*(_QWORD *)(a2 + 320));
          *(_QWORD *)(a2 + 320) = 0LL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = 3;
            WPP_RECORDER_SF_d(
              (_DWORD)gRimLog,
              v18,
              1,
              55,
              (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
              v16);
          }
        }
        else
        {
          v6 = 1;
          *(_DWORD *)(a2 + 328) = RequiredSize;
        }
      }
    }
    if ( Pdo )
      ObfDereferenceObject(Pdo);
    if ( v5 )
    {
      ZwClose(v5);
      ObfDereferenceObject(v4);
      ObfDereferenceObject(v3);
    }
    return v6;
  }
  v8 = RIMGetDeviceObjectPointer((int)a2 + 208, a2, a3, (unsigned int)&Handle, (__int64)v19, (__int64)&Object);
  v10 = (unsigned int)v8;
  if ( v8 >= 0 )
  {
    v4 = *(void **)v19;
    if ( !*(_QWORD *)v19 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)v8);
    v3 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    ObfReferenceObject(v3);
    v11 = RIMGetPointerDevicePDO(v3);
    v5 = Handle;
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v9, 1, 54, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, v8);
  }
  return 0LL;
}
