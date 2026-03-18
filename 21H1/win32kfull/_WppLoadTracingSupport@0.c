/*
 * XREFs of _WppLoadTracingSupport@0 @ 0x27A812
 * Callers:
 *     _EditionInitializeWppLogging@8 @ 0xE7B64 (_EditionInitializeWppLogging@8.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall WppLoadTracingSupport()
{
  PVOID result; // eax
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v2; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  pfnWppGetVersion = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  pfnWppTraceMessage = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  pfnWppQueryTraceInformation = (int)MmGetSystemRoutineAddress(&DestinationString);
  result = pfnWppGetVersion;
  WPPTraceSuite = 2;
  if ( pfnWppGetVersion )
    result = (PVOID)pfnWppGetVersion(&v2, 0, 0, 0);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = MmGetSystemRoutineAddress(&DestinationString);
    pfnEtwRegisterClassicProvider = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = MmGetSystemRoutineAddress(&DestinationString);
      pfnEtwUnregister = (int (__stdcall *)(_DWORD, _DWORD))result;
      WPPTraceSuite = 4;
    }
  }
  return result;
}
