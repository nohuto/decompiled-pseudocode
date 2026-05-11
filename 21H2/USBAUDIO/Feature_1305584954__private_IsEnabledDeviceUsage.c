/*
 * XREFs of Feature_1305584954__private_IsEnabledDeviceUsage @ 0x1C0004370
 * Callers:
 *     USBParseMIDIInJack @ 0x1C00310F0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x1C0031210 (USBParseMIDIOutJack.c)
 * Callees:
 *     Feature_1305584954__private_IsEnabledFallback @ 0x1C0004354 (Feature_1305584954__private_IsEnabledFallback.c)
 */

__int64 Feature_1305584954__private_IsEnabledDeviceUsage()
{
  if ( ((__int64)WPP_MAIN_CB.SecurityDescriptor & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.SecurityDescriptor & 1;
  else
    return Feature_1305584954__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.SecurityDescriptor), 3u);
}
