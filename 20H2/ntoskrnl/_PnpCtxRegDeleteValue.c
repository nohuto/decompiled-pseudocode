/*
 * XREFs of _PnpCtxRegDeleteValue @ 0x1409771F0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6970 (PipUpdateDeviceProducts.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x1403F9C50 (ZwDeleteValueKey.c)
 */

int __fastcall PnpCtxRegDeleteValue(__int64 a1, void *a2, const WCHAR *a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( result >= 0 )
    return ZwDeleteValueKey(a2, &DestinationString);
  return result;
}
