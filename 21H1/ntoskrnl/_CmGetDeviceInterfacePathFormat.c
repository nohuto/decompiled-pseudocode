/*
 * XREFs of _CmGetDeviceInterfacePathFormat @ 0x140717704
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x1407173A0 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x14061B6D0 (RtlPrefixUnicodeString.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406AA728 (_CmValidateDeviceInterfaceName.c)
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
    if ( RtlPrefixUnicodeString(&stru_140002620, &DestinationString, 0) )
    {
      *a3 = 1;
      return (unsigned int)inited;
    }
    if ( !RtlPrefixUnicodeString(&stru_140002610, &DestinationString, 0) )
      return (unsigned int)-1073741773;
    *a3 = 0;
  }
  return (unsigned int)inited;
}
