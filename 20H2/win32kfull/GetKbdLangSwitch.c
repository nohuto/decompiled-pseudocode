/*
 * XREFs of GetKbdLangSwitch @ 0x1C0027E98
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0028410 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKbdLangSwitch(__int64 a1)
{
  DWORD DefaultLocaleId; // [rsp+50h] [rbp+18h]

  DefaultLocaleId = 0;
  FastGetProfileIntW(a1, 25LL, L"Hotkey");
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 0;
  return 1LL;
}
