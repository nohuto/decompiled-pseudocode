/*
 * XREFs of _CmIsDeviceInterfaceEnabled @ 0x1406B0F40
 * Callers:
 *     PiPnpRtlInterfaceFilterCallback @ 0x1406B0DE0 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406B26CC (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140799170 (_CmDeviceClassesSubkeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1406B0F88 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 */

NTSTATUS __fastcall CmIsDeviceInterfaceEnabled(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return NtPlugPlayGetDeviceInterfaceEnabled(a1, &DestinationString, a4);
  return result;
}
