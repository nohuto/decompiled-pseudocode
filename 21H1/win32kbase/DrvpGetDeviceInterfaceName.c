/*
 * XREFs of DrvpGetDeviceInterfaceName @ 0x1C0052060
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C0091330 (DrvEnumDisplayDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvpGetDeviceInterfaceName(PDEVICE_OBJECT PhysicalDeviceObject, __int64 a2, __int64 a3, wchar_t *a4)
{
  NTSTATUS DeviceInterfaces; // eax
  __int64 v7; // rbx
  wchar_t *v8; // rcx
  __int64 v10; // rax
  wchar_t *Src; // [rsp+38h] [rbp+10h] BYREF

  Src = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, PhysicalDeviceObject, 0, &Src);
  v7 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
    v10 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v10 + 24) = PhysicalDeviceObject;
    *(_QWORD *)(v10 + 32) = v7;
    WdLogEvent5_WdWarning(v10);
  }
  else
  {
    wcsncpy_s(a4, 0x80uLL, Src, 0xFFFFFFFFFFFFFFFFuLL);
    v8 = Src;
    a4[1] = 92;
    ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)v7;
}
