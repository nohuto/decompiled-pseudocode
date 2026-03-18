/*
 * XREFs of _CmGetDeviceParent @ 0x1406B1884
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406AC24C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407522A4 (PiCMGetRelatedDeviceInstance.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140755BD8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetParentDeviceContainerId @ 0x1407BABC8 (_CmGetParentDeviceContainerId.c)
 *     _CmGetDeviceSiblings @ 0x140975EF4 (_CmGetDeviceSiblings.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x1402E6214 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x1406A9AFC (_PnpGetObjectProperty.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1406B17F8 (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _CmIsRootDevice @ 0x1406B19F4 (_CmIsRootDevice.c)
 */

int __fastcall CmGetDeviceParent(__int64 a1, const WCHAR *a2, wchar_t *a3, unsigned int *a4)
{
  size_t v4; // rdi
  int result; // eax
  unsigned int v10; // ecx
  wchar_t *v11; // r8
  int v12; // [rsp+20h] [rbp-E0h]
  unsigned int v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  wchar_t pszSrc[200]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *a4;
  v13 = 0;
  v14 = 0;
  *a4 = 0;
  DestinationString = 0LL;
  if ( (unsigned __int8)CmIsRootDevice(a2) )
    return -1073741810;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    result = NtPlugPlayGetDeviceRelatedDevice(a1, (__int64)&DestinationString, 1u, (__int64)pszSrc, v12, (__int64)&v13);
    if ( result == -1073741810 )
    {
      result = PnpGetObjectProperty(
                 a1,
                 (__int64)a2,
                 1LL,
                 0LL,
                 0LL,
                 (__int64)DEVPKEY_Device_LastKnownParent,
                 (__int64)&v14,
                 (__int64)pszSrc,
                 400,
                 (__int64)&v13,
                 0);
      v10 = v13;
      if ( result < 0 )
      {
        result = -1073741810;
      }
      else
      {
        v10 = v13 >> 1;
        v13 >>= 1;
      }
      if ( result == -1073741810 )
      {
        *a4 = 13;
        if ( (unsigned int)v4 >= 0xD )
        {
          v11 = (wchar_t *)L"HTREE\\ROOT\\0";
          return RtlStringCchCopyExW(a3, v4, v11, 0LL, 0LL, 0x900u);
        }
        return -1073741789;
      }
    }
    else
    {
      v10 = v13;
    }
    if ( result < 0 )
      return result;
    *a4 = v10;
    if ( (unsigned int)v4 >= v10 )
    {
      v11 = pszSrc;
      return RtlStringCchCopyExW(a3, v4, v11, 0LL, 0LL, 0x900u);
    }
    return -1073741789;
  }
  return result;
}
