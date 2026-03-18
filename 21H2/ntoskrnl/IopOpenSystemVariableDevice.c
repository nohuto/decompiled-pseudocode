/*
 * XREFs of IopOpenSystemVariableDevice @ 0x14093F56C
 * Callers:
 *     IoEnumerateEnvironmentVariablesEx @ 0x14093E3C0 (IoEnumerateEnvironmentVariablesEx.c)
 *     IoGetEnvironmentVariableEx @ 0x14093E520 (IoGetEnvironmentVariableEx.c)
 *     IoQueryEnvironmentVariableInfoEx @ 0x14093E6A8 (IoQueryEnvironmentVariableInfoEx.c)
 *     IoSetEnvironmentVariableEx @ 0x14093E830 (IoSetEnvironmentVariableEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IoGetDeviceObjectPointer @ 0x140710E60 (IoGetDeviceObjectPointer.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopOpenSystemVariableDevice(
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject,
        __int64 (__fastcall ***a3)(int, int, int, int, __int64, __int64, __int64))
{
  WCHAR *v3; // rbx
  NTSTATUS DeviceObjectPointer; // edi
  int DeviceInterfaces; // eax
  __int64 (__fastcall **v9)(int, int, int, int, __int64, __int64, __int64); // rax
  NTSTATUS v10; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  if ( (IopSysEnvOverrideFlags & 1) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Device\\WindowsTrustedRT\\{699AA2F1-A42E-40DF-BABE-3AAAD2BB6A47}");
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, FileObject, DeviceObject);
    if ( DeviceObjectPointer >= 0 )
    {
      *a3 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&IopSysEnvFunctionTableTrEE;
      return (unsigned int)DeviceObjectPointer;
    }
  }
  else
  {
    DeviceInterfaces = IopGetDeviceInterfaces((int *)&GUID_EFI_VARIABLE_SERVICE, 0LL, 0, 0, &SourceString, 0LL);
    v3 = (WCHAR *)SourceString;
    if ( DeviceInterfaces >= 0 && *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, FileObject, DeviceObject);
      if ( DeviceObjectPointer < 0 )
        goto LABEL_14;
      v9 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&IopSysEnvFunctionTableTrEE;
      goto LABEL_13;
    }
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device\\SysEnv");
  v10 = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, FileObject, DeviceObject);
  DeviceObjectPointer = v10;
  if ( v10 >= 0 )
  {
    v9 = (__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64))&IopSysEnvFunctionTableSysEnv;
LABEL_13:
    *a3 = v9;
    goto LABEL_14;
  }
  if ( (unsigned int)(v10 + 1073741773) <= 1 || v10 == -1073741766 )
  {
    *FileObject = 0LL;
    v9 = &IopSysEnvFunctionTableHal;
    *DeviceObject = 0LL;
    DeviceObjectPointer = 0;
    goto LABEL_13;
  }
LABEL_14:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)DeviceObjectPointer;
}
