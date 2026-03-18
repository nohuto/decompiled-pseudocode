/*
 * XREFs of DrvpGetDeviceInterfaceName @ 0x1C00BFF00
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C0055B20 (DrvEnumDisplayDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvpGetDeviceInterfaceName(PDEVICE_OBJECT PhysicalDeviceObject, __int64 a2, __int64 a3, wchar_t *a4)
{
  NTSTATUS DeviceInterfaces; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  wchar_t *v11; // rcx
  __int64 v13; // rax
  wchar_t *Src; // [rsp+38h] [rbp+10h] BYREF

  Src = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, PhysicalDeviceObject, 0, &Src);
  v10 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
    v13 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v13 + 24) = PhysicalDeviceObject;
    *(_QWORD *)(v13 + 32) = v10;
    WdLogEvent5_WdWarning(v13);
  }
  else
  {
    wcsncpy_s(a4, 0x80uLL, Src, 0xFFFFFFFFFFFFFFFFuLL);
    v11 = Src;
    a4[1] = 92;
    ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)v10;
}
