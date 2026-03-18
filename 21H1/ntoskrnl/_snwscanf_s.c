/*
 * XREFs of _snwscanf_s @ 0x1403D2EA0
 * Callers:
 *     SiGetBootDeviceName @ 0x1406D1D74 (SiGetBootDeviceName.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x1407666B4 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403974F0 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x1403D68F4 (_swinput_s.c)
 */

int snwscanf_s(const wchar_t *Src, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return swinput_s(Src, MaxCount, Format, (__int64 *)va);
  xHalTimerWatchdogStop();
  return -1;
}
