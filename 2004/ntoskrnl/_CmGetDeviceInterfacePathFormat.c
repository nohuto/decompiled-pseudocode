/*
 * XREFs of _CmGetDeviceInterfacePathFormat @ 0x140719A94
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x140719730 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405E09CC (_CmValidateDeviceInterfaceName.c)
 *     RtlPrefixUnicodeString @ 0x1405E60B0 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall CmGetDeviceInterfacePathFormat(__int64 a1, const WCHAR *a2, _BYTE *a3)
{
  int inited; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  inited = CmValidateDeviceInterfaceName(a1, a2);
  if ( inited >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited < 0 )
      return (unsigned int)-1073741773;
    if ( RtlPrefixUnicodeString(&stru_1400027E8, &DestinationString, 0) )
    {
      *a3 = 1;
      return (unsigned int)inited;
    }
    if ( !RtlPrefixUnicodeString(&stru_1400027D8, &DestinationString, 0) )
      return (unsigned int)-1073741773;
    *a3 = 0;
  }
  return (unsigned int)inited;
}
