/*
 * XREFs of _QdcSdcTranslateStatusDefault @ 0x1C00B48F4
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x1C00B3D90 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C00B4080 (NtUserGetDisplayConfigBufferSizes.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1C00B48C8 (_DeviceInfoTranslateStatusDefault.c)
 *     NtUserSetDisplayConfig @ 0x1C0137F00 (NtUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QdcSdcTranslateStatusDefault(int a1)
{
  if ( a1 < 0
    && a1 != -1073741811
    && a1 != -1073741801
    && a1 != -1073741790
    && a1 != -1073741776
    && a1 != -1073741637
    && (a1 <= -1073741586 || a1 > -1073741574) )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)a1;
}
