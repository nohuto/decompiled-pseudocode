/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C012B828
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x1C0041924 (ReadPointerDeviceSettingsFull.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     GetPenHoldTime @ 0x1C020A620 (GetPenHoldTime.c)
 * Callees:
 *     <none>
 */

__int64 LoadPointerDevicePenSettings(void)
{
  __int64 result; // rax

  if ( !(unsigned int)GetDWORDSettingValues(4LL, off_1C032B038, 8LL) )
    return 0LL;
  result = 1LL;
  gPenMonitor = 1;
  return result;
}
