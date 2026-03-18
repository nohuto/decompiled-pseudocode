/*
 * XREFs of DpiGetDevicePropertyString @ 0x1C017207C
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C00517A0 (DpiMiracastInterfaceChange.c)
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C017260C (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiAddDevice @ 0x1C0172ED0 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C0174F5C (DpiFdoInitializeFdo.c)
 *     DpiSetDriverVersion @ 0x1C02C27EC (DpiSetDriverVersion.c)
 * Callees:
 *     memset @ 0x1C0026840 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyString(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        POOL_TYPE PoolType,
        _QWORD *a4,
        _DWORD *a5)
{
  void *v5; // rdi
  _DWORD *v10; // rsi
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  PVOID PoolWithTag; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  NTSTATUS v20; // eax
  int v21; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  size_t Size; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(Size) = 0;
  v5 = 0LL;
  if ( DeviceObject )
  {
    if ( a4 )
    {
      v10 = a5;
      if ( a5 )
      {
        v11 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, (PULONG)&Size);
        v14 = v11;
        if ( v11 != -1073741789 )
          goto LABEL_10;
        LODWORD(Size) = Size + 2;
        PoolWithTag = ExAllocatePoolWithTag(PoolType, (unsigned int)Size, 0x74727044u);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(v14) = -1073741670;
          v23 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
          *(_QWORD *)(v23 + 24) = -1073741670LL;
          WdLogEvent5_WdLowResource(v23);
          return (unsigned int)v14;
        }
        memset(PoolWithTag, 0, (unsigned int)Size);
        v20 = IoGetDeviceProperty(DeviceObject, DeviceProperty, Size, v5, (PULONG)&Size);
        v14 = v20;
        if ( v20 < 0 )
        {
LABEL_10:
          v24 = WdLogNewEntry5_WdError(v13, v12);
          *(_QWORD *)(v24 + 24) = v14;
          WdLogEvent5_WdError(v24);
          if ( (int)v14 < 0 )
          {
            if ( v5 )
              ExFreePoolWithTag(v5, 0);
            return (unsigned int)v14;
          }
        }
        v21 = Size;
        *a4 = v5;
        *v10 = v21;
        return (unsigned int)v14;
      }
    }
  }
  return 3221225485LL;
}
