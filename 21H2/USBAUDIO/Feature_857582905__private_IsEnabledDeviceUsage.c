/*
 * XREFs of Feature_857582905__private_IsEnabledDeviceUsage @ 0x1C0004664
 * Callers:
 *     USBParseMixerUnit @ 0x1C00301E0 (USBParseMixerUnit.c)
 * Callees:
 *     Feature_857582905__private_IsEnabledFallback @ 0x1C0004648 (Feature_857582905__private_IsEnabledFallback.c)
 */

__int64 Feature_857582905__private_IsEnabledDeviceUsage()
{
  if ( (*(_BYTE *)(&WPP_MAIN_CB.Reserved + 1) & 0x10) != 0 )
    return *(_BYTE *)(&WPP_MAIN_CB.Reserved + 1) & 1;
  else
    return Feature_857582905__private_IsEnabledFallback(*((unsigned int *)&WPP_MAIN_CB.Reserved + 2), 3u);
}
