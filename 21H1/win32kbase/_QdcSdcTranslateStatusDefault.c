/*
 * XREFs of _QdcSdcTranslateStatusDefault @ 0x1C00952E4
 * Callers:
 *     _DeviceInfoTranslateStatusDefault @ 0x1C00952B8 (_DeviceInfoTranslateStatusDefault.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C0095BF0 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x1C0095DB0 (NtUserQueryDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C013DBA0 (NtUserSetDisplayConfig.c)
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
