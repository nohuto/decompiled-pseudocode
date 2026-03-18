/*
 * XREFs of DriverEntry @ 0x1C0032660
 * Callers:
 *     GsDriverEntry @ 0x1C00C9010 (GsDriverEntry.c)
 * Callees:
 *     ?WdfWriteKmdfVersionToRegistry@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C00328C8 (-WdfWriteKmdfVersionToRegistry@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0032B44 (-FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     ?FxLibraryCleanup@@YAXXZ @ 0x1C0052A38 (-FxLibraryCleanup@@YAXXZ.c)
 *     wil_UninitializeFeatureStaging @ 0x1C00BD008 (wil_UninitializeFeatureStaging.c)
 *     wil_InitializeFeatureStaging @ 0x1C00C90AC (wil_InitializeFeatureStaging.c)
 */

__int64 __fastcall DriverEntry(_DRIVER_OBJECT *DriverObject, _UNICODE_STRING *RegistryPath)
{
  int v4; // ebx
  _UNICODE_STRING name; // [rsp+20h] [rbp-E0h] BYREF
  _UNICODE_STRING string; // [rsp+30h] [rbp-D0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t buffer[17]; // [rsp+160h] [rbp+60h] BYREF

  *(_DWORD *)(&name.MaximumLength + 1) = 0;
  string = 0LL;
  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = NonPagedPoolNx;
    ExDefaultMdlProtection = 0x40000000;
  }
  wil_InitializeFeatureStaging();
  RtlInitUnicodeString(&string, L"DbgPrintOn");
  WdfLdrDiagnosticsValueByNameAsULONG(&string, &WPP_GLOBAL_WDF_Control.DeviceExtension);
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "DriverEntry\n");
  }
  *(_QWORD *)&name.Length = 2228224LL;
  DriverObject->DriverUnload = DriverUnload;
  FxLibraryGlobals.DriverObject = DriverObject;
  DriverObject->MajorFunction[0] = FxLibraryDispatch;
  DriverObject->MajorFunction[18] = FxLibraryDispatch;
  DriverObject->MajorFunction[2] = FxLibraryDispatch;
  name.Buffer = buffer;
  memset(buffer, 0, sizeof(buffer));
  v4 = FxLibraryCreateDevice(&name);
  if ( v4 >= 0 )
  {
    v4 = WdfRegisterLibrary(&WdfLibraryInfo, RegistryPath, &name);
    if ( v4 >= 0 )
    {
      WdfWriteKmdfVersionToRegistry(DriverObject, RegistryPath);
      return 0;
    }
    if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "ERROR: WdfRegisterLibrary failed with Status 0x%x\n", v4);
    }
    FxLibraryCleanup();
  }
  else if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "ERROR: FxLibraryCreateDevice failed with Status 0x%x\n", v4);
  }
  wil_UninitializeFeatureStaging();
  return (unsigned int)v4;
}
