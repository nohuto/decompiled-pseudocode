/*
 * XREFs of _CmSplitDevicePanelId @ 0x1407A6F28
 * Callers:
 *     PiPnpRtlSetObjectProperty @ 0x1407346EC (PiPnpRtlSetObjectProperty.c)
 *     _CmValidateDevicePanelName @ 0x1407A6EC8 (_CmValidateDevicePanelName.c)
 *     _CmGetDevicePanelMappedProperty @ 0x14097AC7C (_CmGetDevicePanelMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyNExW @ 0x140266DA8 (RtlStringCchCopyNExW.c)
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     wcschr @ 0x1403D35A0 (wcschr.c)
 *     wcstoul @ 0x1403D3B90 (wcstoul.c)
 *     RtlGUIDFromString @ 0x1406409E0 (RtlGUIDFromString.c)
 */

__int64 __fastcall CmSplitDevicePanelId(STRSAFE_PCNZWCH pszSrc, GUID *Guid, unsigned int *a3, unsigned int *a4)
{
  NTSTATUS inited; // ebx
  wchar_t *v9; // rax
  wchar_t *v10; // rdi
  unsigned int v11; // eax
  unsigned int v12; // eax
  wchar_t *EndPtr; // [rsp+40h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  wchar_t Str[12]; // [rsp+58h] [rbp-61h] BYREF
  wchar_t pszDest[40]; // [rsp+70h] [rbp-49h] BYREF

  EndPtr = 0LL;
  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, pszSrc);
  if ( inited < 0 || (DestinationString.MaximumLength & 0xFFFEu) < 0x52 || pszSrc[38] != 92 )
    return (unsigned int)-1073741773;
  if ( Guid )
  {
    inited = RtlStringCchCopyNExW(pszDest, 0x27uLL, pszSrc, 0x26uLL, 0LL, 0LL, 0x800u);
    if ( inited < 0 )
      return (unsigned int)inited;
    RtlInitUnicodeString(&DestinationString, pszDest);
    inited = RtlGUIDFromString(&DestinationString, Guid);
    if ( inited < 0 )
      return (unsigned int)-1073741773;
  }
  v9 = wcschr(pszSrc + 39, 0x5Cu);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741773;
  if ( a3 )
  {
    inited = RtlStringCchCopyNExW(
               Str,
               9uLL,
               pszSrc + 39,
               ((char *)(v9 + 1) - (char *)pszSrc - 80) >> 1,
               0LL,
               0LL,
               0x800u);
    if ( inited < 0 )
      return (unsigned int)inited;
    v11 = wcstoul(Str, &EndPtr, 16);
    *a3 = v11;
    if ( v11 > 0xFFFF || !EndPtr || *EndPtr )
      return (unsigned int)-1073741773;
  }
  if ( a4 )
  {
    v12 = wcstoul(v10 + 1, &EndPtr, 16);
    *a4 = v12;
    if ( v12 > 7 || !EndPtr || *EndPtr )
      return (unsigned int)-1073741773;
  }
  return (unsigned int)inited;
}
