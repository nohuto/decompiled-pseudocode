/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x1406C0BE8
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1406C098C (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopProcessSetInterfaceState @ 0x14073452C (IopProcessSetInterfaceState.c)
 *     PiSwCompleteCreate @ 0x1407372D4 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1405DD3D0 (RtlGUIDFromString.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x1406C0C5C (_CmGetDeviceInterfaceClassGuidString.c)
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
