/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x1406EB528
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1406EB2CC (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopProcessSetInterfaceState @ 0x1407439BC (IopProcessSetInterfaceState.c)
 *     PiSwCompleteCreate @ 0x140746764 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1406409E0 (RtlGUIDFromString.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x1406EB59C (_CmGetDeviceInterfaceClassGuidString.c)
 */

int __fastcall CmGetDeviceInterfaceClassGuid(__int64 a1, __int64 a2, GUID *a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+30h] [rbp-68h] BYREF

  DestinationString = 0LL;
  result = CmGetDeviceInterfaceClassGuidString(a1, a2, SourceString);
  if ( result >= 0 )
  {
    result = RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( result >= 0 )
      return RtlGUIDFromString(&DestinationString, a3);
  }
  return result;
}
