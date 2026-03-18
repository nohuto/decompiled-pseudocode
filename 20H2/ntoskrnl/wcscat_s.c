/*
 * XREFs of wcscat_s @ 0x1403D7860
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1406FDB70 (RtlConvertSidToUnicodeString.c)
 *     AslPathToNetworkPathNt @ 0x14074D6BC (AslPathToNetworkPathNt.c)
 *     BcdGetSystemStorePath @ 0x14077E6D4 (BcdGetSystemStorePath.c)
 *     NtLockProductActivationKeys @ 0x1407AF0E0 (NtLockProductActivationKeys.c)
 *     ExpWatchLicenseInfoWork @ 0x14094E800 (ExpWatchLicenseInfoWork.c)
 *     ExpCreateOutputSIGNATURE @ 0x14095257C (ExpCreateOutputSIGNATURE.c)
 *     ExpWatchProductTypeInitialization @ 0x140A49CA8 (ExpWatchProductTypeInitialization.c)
 *     VhdiMountVhdFile @ 0x140A97E08 (VhdiMountVhdFile.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039A580 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  wchar_t *v3; // r9
  signed __int64 v4; // r9
  wchar_t v5; // ax
  errno_t v6; // ebx

  if ( Dst && SizeInWords )
  {
    if ( !Src )
      goto LABEL_14;
    v3 = Dst;
    do
    {
      if ( !*v3 )
        break;
      ++v3;
      --SizeInWords;
    }
    while ( SizeInWords );
    if ( SizeInWords )
    {
      v4 = (char *)v3 - (char *)Src;
      do
      {
        v5 = *Src;
        *(const wchar_t *)((char *)Src + v4) = *Src;
        ++Src;
        if ( !v5 )
          break;
        --SizeInWords;
      }
      while ( SizeInWords );
      if ( SizeInWords )
        return 0;
      v6 = 34;
    }
    else
    {
LABEL_14:
      v6 = 22;
    }
    *Dst = 0;
    xHalTimerWatchdogStop();
    return v6;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
