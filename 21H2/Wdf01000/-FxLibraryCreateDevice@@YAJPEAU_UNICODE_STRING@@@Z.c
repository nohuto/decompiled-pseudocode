/*
 * XREFs of ?FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0032B44
 * Callers:
 *     DriverEntry @ 0x1C0032660 (DriverEntry.c)
 * Callees:
 *     ?_CreateAndInitialize@FxCompanionLibrary@@SAJPEAPEAV1@@Z @ 0x1C0032BE8 (-_CreateAndInitialize@FxCompanionLibrary@@SAJPEAPEAV1@@Z.c)
 *     RtlUnicodeStringPrintf @ 0x1C0032C5C (RtlUnicodeStringPrintf.c)
 */

int __fastcall FxLibraryCreateDevice(_UNICODE_STRING *DeviceName)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  int result; // eax
  NTSTATUS Device; // eax
  int v6; // ebx

  v2 = 0;
  while ( 1 )
  {
    v3 = v2++;
    result = RtlUnicodeStringPrintf(DeviceName, L"%s%d", L"\\Device\\KMDF", v3);
    if ( result < 0 )
      break;
    Device = IoCreateDevice(
               FxLibraryGlobals.DriverObject,
               0,
               DeviceName,
               0x22u,
               0,
               0,
               &FxLibraryGlobals.LibraryDeviceObject);
    if ( Device != -1073741771 )
    {
      if ( Device >= 0 )
        FxLibraryGlobals.LibraryDeviceObject->Flags &= ~0x80u;
      v6 = FxCompanionLibrary::_CreateAndInitialize(&FxLibraryGlobals.CompanionLibrary);
      if ( v6 < 0 )
      {
        if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
        {
          DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
          DbgPrintEx(0x65u, 0, "ERROR: Initializing companion library failed 0x%x\n", v6);
        }
      }
      return v6;
    }
  }
  return result;
}
