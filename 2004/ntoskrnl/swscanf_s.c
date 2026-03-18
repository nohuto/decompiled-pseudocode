/*
 * XREFs of swscanf_s @ 0x1403D4B70
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1406A6580 (ExProcessorCounterSetCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A1E1C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408A752C (PiDevCfgSplitDriverConfigurationId.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140398100 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x1403D7734 (_swinput_s.c)
 */

int swscanf_s(const wchar_t *Src, const wchar_t *Format, ...)
{
  __int64 v4; // rdx
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Src[v4] );
    return swinput_s(Src, v4, Format, va);
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
