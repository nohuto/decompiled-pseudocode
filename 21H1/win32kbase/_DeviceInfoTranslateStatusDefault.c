/*
 * XREFs of _DeviceInfoTranslateStatusDefault @ 0x1C00952B8
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0094B40 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0138610 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     _QdcSdcTranslateStatusDefault @ 0x1C00952E4 (_QdcSdcTranslateStatusDefault.c)
 */

__int64 __fastcall DeviceInfoTranslateStatusDefault(int a1, unsigned int a2)
{
  if ( a1 < 7
    || a1 > 8
    || a2 != -1073741811 && a2 != -1073741790 && a2 != -1073741649 && a2 != -1073741637 && a2 != -1073741632 )
  {
    return (unsigned int)QdcSdcTranslateStatusDefault(a2);
  }
  return a2;
}
