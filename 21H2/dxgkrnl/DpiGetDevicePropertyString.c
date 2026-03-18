/*
 * XREFs of DpiGetDevicePropertyString @ 0x1C01FAF64
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C00612C0 (DpiMiracastInterfaceChange.c)
 *     DpiAddDevice @ 0x1C01F84B0 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C01F992C (DpiFdoInitializeFdo.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C01FA730 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     DpiSetDriverVersion @ 0x1C0387A3C (DpiSetDriverVersion.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyString(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        POOL_TYPE PoolType,
        _QWORD *a4,
        _DWORD *a5)
{
  _DWORD *v9; // rsi
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  PVOID PoolWithTag; // rax
  void *v13; // rdi
  NTSTATUS v14; // eax
  int v15; // eax
  size_t Size; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(Size) = 0;
  if ( DeviceObject )
  {
    if ( a4 )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, (PULONG)&Size);
        v11 = v10;
        if ( v10 == -1073741789 )
        {
          LODWORD(Size) = Size + 2;
          PoolWithTag = ExAllocatePoolWithTag(PoolType, (unsigned int)Size, 0x74727044u);
          v13 = PoolWithTag;
          if ( !PoolWithTag )
          {
            v11 = -1073741670;
            WdLogSingleEntry1(6LL, -1073741670LL);
            return v11;
          }
          memset(PoolWithTag, 0, (unsigned int)Size);
          v14 = IoGetDeviceProperty(DeviceObject, DeviceProperty, Size, v13, (PULONG)&Size);
          v11 = v14;
          if ( v14 < 0 )
          {
            WdLogSingleEntry1(2LL, v14);
            ExFreePoolWithTag(v13, 0);
            return v11;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v10);
          v13 = 0LL;
          if ( (v11 & 0x80000000) != 0 )
            return v11;
        }
        v15 = Size;
        *a4 = v13;
        *v9 = v15;
        return v11;
      }
    }
  }
  return 3221225485LL;
}
