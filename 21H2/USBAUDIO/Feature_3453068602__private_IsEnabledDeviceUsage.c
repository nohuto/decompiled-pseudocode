/*
 * XREFs of Feature_3453068602__private_IsEnabledDeviceUsage @ 0x1C00043C4
 * Callers:
 *     USBParseMixerUnit @ 0x1C00301E0 (USBParseMixerUnit.c)
 * Callees:
 *     Feature_3453068602__private_IsEnabledFallback @ 0x1C00043A8 (Feature_3453068602__private_IsEnabledFallback.c)
 */

__int64 Feature_3453068602__private_IsEnabledDeviceUsage()
{
  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.Reserved & 1;
  else
    return Feature_3453068602__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.Reserved), 3u);
}
