/*
 * XREFs of _CmIsDevicePresent @ 0x1406B168C
 * Callers:
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1406B1720 (PiPnpRtlEnumeratorFilterCallback.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140749310 (PiPnpRtlServiceFilterCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140798E80 (_CmEnumSubkeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1406B0D50 (_NtPlugPlayGetDeviceStatus.c)
 */

int __fastcall CmIsDevicePresent(__int64 a1, const WCHAR *a2, _BYTE *a3)
{
  int result; // eax
  int v6; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v7[2]; // [rsp+38h] [rbp-20h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v6 = 0;
  v9 = 0;
  v7[0] = 0LL;
  if ( !a3 )
    return -1073741811;
  result = RtlInitUnicodeStringEx(v7, a2);
  if ( result < 0
    || (result = NtPlugPlayGetDeviceStatus(a1, (__int64)v7, (__int64)&v6, (__int64)&v9, (__int64)&v8), result < 0) )
  {
    if ( result == -1073741810 )
    {
      result = 0;
      *a3 = 0;
    }
  }
  else
  {
    *a3 = 1;
  }
  return result;
}
