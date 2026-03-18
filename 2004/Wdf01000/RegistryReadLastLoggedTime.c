/*
 * XREFs of RegistryReadLastLoggedTime @ 0x1C0060598
 * Callers:
 *     IsLoggingEnabledAndNeeded @ 0x1C005FF98 (IsLoggingEnabledAndNeeded.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     ?_QueryQuadWord@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005F6B0 (-_QueryQuadWord@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@@Z.c)
 */

void __fastcall RegistryReadLastLoggedTime(_FX_DRIVER_GLOBALS *DriverGlobals, _LARGE_INTEGER *LastLoggedTime)
{
  NTSTATUS _a1; // eax
  unsigned __int16 v5; // cx
  FxAutoRegKey hWdf; // [rsp+30h] [rbp-69h] BYREF
  FxAutoRegKey hKey; // [rsp+38h] [rbp-61h] BYREF
  _LARGE_INTEGER value; // [rsp+40h] [rbp-59h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-51h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+78h] [rbp-21h] BYREF
  _UNICODE_STRING valueName; // [rsp+88h] [rbp-11h] BYREF
  wchar_t parametersPath_buffer[16]; // [rsp+98h] [rbp-1h] BYREF
  wchar_t valueName_buffer[23]; // [rsp+B8h] [rbp+1Fh] BYREF

  hKey.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ObjectAttributes.RootDirectory = 0LL;
  parametersPath.Buffer = parametersPath_buffer;
  wcscpy(&valueName_buffer[20], L"og");
  wcscpy(parametersPath_buffer, L"Parameters\\Wdf");
  valueName.Buffer = valueName_buffer;
  *(_QWORD *)&parametersPath.Length = 1966108LL;
  *(_OWORD *)valueName_buffer = *(_OWORD *)L"TimeOfLastTelemetryLog";
  *(_QWORD *)&valueName.Length = 3014700LL;
  LastLoggedTime->QuadPart = 0LL;
  ObjectAttributes.ObjectName = &DriverGlobals->Driver->m_RegistryPath;
  wmemcpy(&valueName_buffer[8], L"stTelemetryLog", 12);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  _a1 = ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes);
  if ( _a1 < 0 )
  {
    v5 = 11;
LABEL_5:
    WPP_IFR_SF_d(DriverGlobals, 2u, 0x11u, v5, WPP_FxTelemetryKm_cpp_Traceguids, _a1);
    goto LABEL_8;
  }
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = hWdf.m_Key;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &parametersPath;
  ObjectAttributes.Attributes = 576;
  _a1 = ZwOpenKey(&hKey.m_Key, 0x20019u, &ObjectAttributes);
  if ( _a1 < 0 )
  {
    v5 = 12;
    goto LABEL_5;
  }
  value.QuadPart = 0LL;
  if ( (int)FxRegKey::_QueryQuadWord(hKey.m_Key, &valueName, &value) >= 0 )
    *LastLoggedTime = value;
LABEL_8:
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
}
