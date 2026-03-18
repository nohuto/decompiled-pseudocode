/*
 * XREFs of RtlUnicodeStringPrintf @ 0x14036DE6C
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140731D80 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x14073B9CC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14073BC88 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14073D254 (PiDevCfgBuildDriverNodeStrongName.c)
 *     CmSetAcpiHwProfile @ 0x14079B850 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x14079C6AC (CmpOpenDevicesControlSet.c)
 *     CmpSaveBootControlSet @ 0x140869E70 (CmpSaveBootControlSet.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B7200 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408BA47C (PiDrvDbResolveNodeFilePaths.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x1408F69C0 (PopIdleWakeGenerateDescriptionString.c)
 *     PopIdleWakeSystemImageCallback @ 0x1408F7080 (PopIdleWakeSystemImageCallback.c)
 *     SshpGenerateDeviceFriendlyName @ 0x1408FD970 (SshpGenerateDeviceFriendlyName.c)
 *     CmpCreateControlSet @ 0x140A56A5C (CmpCreateControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x140A56F1C (CmpCreateHardwareProfiles.c)
 *     CmpAddAliasEntry @ 0x140A915DC (CmpAddAliasEntry.c)
 *     CmpCreateControlSetOverride @ 0x140A91884 (CmpCreateControlSetOverride.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x14036DEF0 (RtlUnicodeStringValidateDestWorker.c)
 *     _vsnwprintf @ 0x1403D0700 (_vsnwprintf.c)
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  int v3; // ebx
  int v4; // eax
  size_t v6; // [rsp+20h] [rbp-48h]
  ULONG v7; // [rsp+28h] [rbp-40h]
  size_t Count; // [rsp+30h] [rbp-38h] BYREF
  wchar_t *Dest; // [rsp+38h] [rbp-30h] BYREF
  __int64 Args; // [rsp+80h] [rbp+18h] BYREF
  size_t *v12; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF
  va_list Argsa; // [rsp+80h] [rbp+18h]

  va_start(va1, pszFormat);
  va_start(Argsa, pszFormat);
  Args = va_arg(va1, _QWORD);
  v12 = va_arg(va1, size_t *);
  Dest = 0LL;
  Count = 0LL;
  v3 = RtlUnicodeStringValidateDestWorker(DestinationString, &Dest, &Count, v12, v6, v7);
  if ( v3 >= 0 )
  {
    v3 = 0;
    v4 = vsnwprintf(Dest, Count, pszFormat, Argsa);
    if ( v4 < 0 || v4 > Count )
    {
      LOWORD(v4) = Count;
      v3 = -2147483643;
    }
    DestinationString->Length = 2 * v4;
  }
  return v3;
}
