/*
 * XREFs of ?FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0028F20
 * Callers:
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C0028A10 (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0014DF4 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 */

__int64 __fastcall FxIFRGetSize(_FX_DRIVER_GLOBALS *FxDriverGlobals, const _UNICODE_STRING *a2)
{
  _DRIVER_OBJECT *m_DriverObject; // rcx
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  unsigned int numPages; // [rsp+30h] [rbp-49h] BYREF
  FxAutoRegKey parameters; // [rsp+38h] [rbp-41h] BYREF
  FxAutoRegKey service; // [rsp+40h] [rbp-39h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+48h] [rbp-31h] BYREF
  _UNICODE_STRING valueName; // [rsp+58h] [rbp-21h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  wchar_t parametersPath_buffer[4]; // [rsp+98h] [rbp+1Fh] BYREF
  wchar_t valueName_buffer[12]; // [rsp+A0h] [rbp+27h] BYREF

  service.m_Key = 0LL;
  parameters.m_Key = 0LL;
  wcscpy(parametersPath_buffer, L"Wdf");
  m_DriverObject = FxDriverGlobals->DriverObject.m_DriverObject;
  parametersPath.Buffer = parametersPath_buffer;
  v4 = 1;
  numPages = 1;
  valueName.Buffer = valueName_buffer;
  *(_QWORD *)&parametersPath.Length = 524294LL;
  wcscpy(valueName_buffer, L"LogPages");
  *(_QWORD *)&valueName.Length = 1179664LL;
  if ( (int)IoOpenDriverRegistryKey(m_DriverObject, 0LL, 131097LL, 0LL, &service) >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = service.m_Key;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &parametersPath;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&parameters.m_Key, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v5 = FxRegKey::_QueryULong(parameters.m_Key, &valueName, &numPages);
      v4 = numPages;
      if ( v5 >= 0 && !numPages )
        v4 = 1;
      if ( v4 > 0x10 )
      {
        if ( !FxDriverGlobals->FxVerifierOn || (v4 = 5, !FxDriverGlobals->FxVerboseOn) )
          v4 = 1;
      }
    }
  }
  v6 = v4 << 12;
  if ( parameters.m_Key )
    ZwClose(parameters.m_Key);
  if ( service.m_Key )
    ZwClose(service.m_Key);
  return v6;
}
