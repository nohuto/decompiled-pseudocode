/*
 * XREFs of RIMGetDeviceParent @ 0x1C000BD2C
 * Callers:
 *     RIMCreateDev @ 0x1C00AE678 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0153148 (RIMVirtCreateDev.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015E948 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01627C8 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0163668 (RIMAllocateHidConfigDesc.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1C000C2C8 (RIMGetPointerDevicePDO.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00AEE94 (RIMGetDeviceObjectPointer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceParent(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  struct _DEVICE_OBJECT *v3; // rbx
  void *v4; // rsi
  HANDLE v5; // r14
  unsigned int v6; // r12d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG v18; // eax
  void *Data; // rax
  NTSTATUS DevicePropertyData; // eax
  char v21; // r13
  int v23; // edx
  ULONG v24[2]; // [rsp+40h] [rbp-20h] BYREF
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
  *(_QWORD *)v24 = 0LL;
  Handle = 0LL;
  if ( a1 )
  {
    v13 = RIMGetPointerDevicePDO(a1);
LABEL_8:
    if ( v13 >= 0
      && IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
    {
      v18 = RequiredSize;
      if ( !RequiredSize )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16, v17);
        v18 = RequiredSize;
      }
      Data = (void *)Win32AllocPool(v18, 1886417746LL);
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
        v21 = DevicePropertyData;
        if ( DevicePropertyData < 0 )
        {
          Win32FreePool(*(_QWORD *)(a2 + 320));
          *(_QWORD *)(a2 + 320) = 0LL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = 3;
            WPP_RECORDER_SF_d(
              (_DWORD)gRimLog,
              v23,
              1,
              55,
              (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
              v21);
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
  v8 = RIMGetDeviceObjectPointer((int)a2 + 208, a2, a3, (unsigned int)&Handle, (__int64)v24, (__int64)&Object);
  v12 = (unsigned int)v8;
  if ( v8 >= 0 )
  {
    v4 = *(void **)v24;
    if ( !*(_QWORD *)v24 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)v8, v9, v10, v11);
    v3 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v9, v10, v11);
    ObfReferenceObject(v3);
    v13 = RIMGetPointerDevicePDO(v3);
    v5 = Handle;
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v9, 1, 54, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v8);
  }
  return 0LL;
}
