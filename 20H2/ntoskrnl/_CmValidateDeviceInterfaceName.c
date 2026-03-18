/*
 * XREFs of _CmValidateDeviceInterfaceName @ 0x14066BCDC
 * Callers:
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14066AB68 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1406E9420 (_CmSetDeviceInterfacePathFormat.c)
 *     _PnpDispatchDeviceInterface @ 0x1406E95C0 (_PnpDispatchDeviceInterface.c)
 *     IoGetDeviceInterfaceAlias @ 0x140727720 (IoGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x140727A84 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140727B18 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140744000 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1407A8250 (_CmDeviceClassesSubkeyCallback.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x140266DA8 (RtlStringCchCopyNExW.c)
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1406409E0 (RtlGUIDFromString.c)
 *     RtlPrefixUnicodeString @ 0x140671570 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall CmValidateDeviceInterfaceName(__int64 a1, const WCHAR *a2)
{
  int v3; // r14d
  _WORD *v4; // rsi
  NTSTATUS inited; // ebx
  _WORD *i; // rax
  unsigned __int64 v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  GUID Guid; // [rsp+50h] [rbp-39h] BYREF
  wchar_t pszDest[40]; // [rsp+60h] [rbp-29h] BYREF

  DestinationString = 0LL;
  v3 = 0;
  v4 = 0LL;
  Guid = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0
    && (DestinationString.MaximumLength & 0xFFFEu) >= 0x62
    && (RtlPrefixUnicodeString(&stru_140001720, &DestinationString, 0)
     || RtlPrefixUnicodeString(&stru_140001010, &DestinationString, 0)) )
  {
    for ( i = a2 + 4; *i; ++i )
    {
      if ( *i == 92 )
      {
        if ( (unsigned int)++v3 > 1 )
        {
          inited = -1073741773;
          break;
        }
        v4 = i;
      }
    }
    if ( inited >= 0 )
    {
      if ( v4 )
        v7 = v4 - a2;
      else
        v7 = (unsigned __int64)DestinationString.Length >> 1;
      if ( v7 > 0xFFFFFFFF || (unsigned int)v7 < 0x30 )
      {
        return (unsigned int)-1073741773;
      }
      else
      {
        inited = RtlStringCchCopyNExW(pszDest, 0x27uLL, &a2[(unsigned int)v7 - 38], 0x26uLL, 0LL, 0LL, 0x800u);
        if ( inited >= 0 )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
          if ( inited >= 0 )
          {
            inited = RtlGUIDFromString(&DestinationString, &Guid);
            if ( inited < 0 )
              return (unsigned int)-1073741773;
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741773;
  }
  return (unsigned int)inited;
}
