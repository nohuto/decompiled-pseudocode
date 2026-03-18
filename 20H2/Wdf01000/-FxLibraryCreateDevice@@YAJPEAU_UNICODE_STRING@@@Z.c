/*
 * XREFs of ?FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C002CE08
 * Callers:
 *     DriverEntry @ 0x1C002D4A0 (DriverEntry.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1C002DA34 (RtlUnicodeStringPrintf.c)
 *     ?_CreateAndInitialize@FxCompanionLibrary@@SAJPEAPEAV1@@Z @ 0x1C004295C (-_CreateAndInitialize@FxCompanionLibrary@@SAJPEAPEAV1@@Z.c)
 */

int __fastcall FxLibraryCreateDevice(_UNICODE_STRING *DeviceName)
{
  unsigned int v2; // ebx
  int result; // eax
  NTSTATUS Device; // eax
  int v5; // ebx

  v2 = 0;
  while ( 1 )
  {
    result = RtlUnicodeStringPrintf(DeviceName, L"%s%d", L"\\Device\\KMDF", v2++);
    if ( result < 0 )
      break;
    Device = IoCreateDevice(
               (PDRIVER_OBJECT)WPP_GLOBAL_WDF_Control.DeviceExtension,
               0,
               DeviceName,
               0x22u,
               0,
               0,
               (PDEVICE_OBJECT *)&WPP_GLOBAL_WDF_Control.DeviceType);
    if ( Device != -1073741771 )
    {
      if ( Device >= 0 )
        *(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceType + 48LL) &= ~0x80u;
      v5 = FxCompanionLibrary::_CreateAndInitialize(&qword_1C00A9FC8);
      if ( v5 < 0 )
      {
        if ( WdfLdrDbgPrintOn )
        {
          DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
          DbgPrintEx(0x65u, 0, "ERROR: Initializing companion library failed 0x%x\n", v5);
        }
      }
      return v5;
    }
  }
  return result;
}
