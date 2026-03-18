/*
 * XREFs of _CmGetDeviceInterfaceSubkeyPath @ 0x1406AAB3C
 * Callers:
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1406AB340 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x1406AD2E4 (_CmGetDeviceInterfaceClassGuidString.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyNExW @ 0x1402E6040 (RtlStringCchCopyNExW.c)
 *     RtlStringCchCopyExW @ 0x1402E6214 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     wcschr @ 0x1403CFAD0 (wcschr.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406AA728 (_CmValidateDeviceInterfaceName.c)
 *     RtlGUIDFromString @ 0x1406AA8D0 (RtlGUIDFromString.c)
 */

NTSTATUS __fastcall CmGetDeviceInterfaceSubkeyPath(
        __int64 a1,
        const WCHAR *a2,
        char a3,
        wchar_t *a4,
        wchar_t *pszDest,
        unsigned int cchDest)
{
  NTSTATUS result; // eax
  wchar_t *v10; // rax
  __int64 v11; // rcx
  const wchar_t *v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  size_t pcchRemaining; // [rsp+40h] [rbp-40h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  GUID Guid; // [rsp+60h] [rbp-20h] BYREF

  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  Guid = 0LL;
  DestinationString = 0LL;
  result = CmValidateDeviceInterfaceName(a1, a2);
  if ( result >= 0 )
  {
    v10 = wcschr(a2 + 4, 0x5Cu);
    v11 = -1LL;
    if ( v10 )
    {
      v12 = v10 + 1;
      v13 = v10 - a2;
    }
    else
    {
      v12 = 0LL;
      v13 = -1LL;
      do
        ++v13;
      while ( a2[v13] );
    }
    if ( v13 > 0xFFFFFFFF )
      return -1073741675;
    if ( (unsigned int)v13 < 0x30 )
      return -1073741773;
    v14 = (unsigned int)(v13 + 1);
    if ( a3 )
    {
      v14 += 2LL;
      if ( v12 )
      {
        do
          ++v11;
        while ( v12[v11] );
        v14 += v11;
      }
    }
    if ( v14 > 0xFFFFFFFF )
      return -1073741675;
    if ( !a4
      || (result = RtlStringCchCopyNExW(a4, 0x27uLL, &a2[(unsigned int)v13 - 38], 0x26uLL, 0LL, 0LL, 0x800u), result >= 0)
      && (result = RtlInitUnicodeStringEx(&DestinationString, a4), result >= 0)
      && (result = RtlGUIDFromString(&DestinationString, &Guid), result >= 0) )
    {
      if ( (unsigned int)v14 > cchDest )
      {
        return -1073741789;
      }
      else
      {
        result = RtlStringCchCopyNExW(pszDest, cchDest, a2, (unsigned int)v13, &ppszDestEnd, &pcchRemaining, 0x800u);
        if ( result >= 0 )
        {
          *(_QWORD *)pszDest = 0x23003F00230023LL;
          if ( a3 )
          {
            result = RtlStringCchCopyExW(ppszDestEnd, pcchRemaining, L"\\#", &ppszDestEnd, &pcchRemaining, 0x800u);
            if ( result >= 0 )
            {
              if ( v12 )
                return RtlStringCchCopyExW(ppszDestEnd, pcchRemaining, v12, &ppszDestEnd, &pcchRemaining, 0x800u);
            }
          }
        }
      }
    }
  }
  return result;
}
