/*
 * XREFs of wcscat_s @ 0x1403D3D90
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x140690990 (RtlConvertSidToUnicodeString.c)
 *     AslPathToNetworkPathNt @ 0x14073CF58 (AslPathToNetworkPathNt.c)
 *     BcdGetSystemStorePath @ 0x14076DCC4 (BcdGetSystemStorePath.c)
 *     NtLockProductActivationKeys @ 0x14079BDB0 (NtLockProductActivationKeys.c)
 *     ExpWatchLicenseInfoWork @ 0x1409476A0 (ExpWatchLicenseInfoWork.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094B41C (ExpCreateOutputSIGNATURE.c)
 *     ExpWatchProductTypeInitialization @ 0x140A3E1A4 (ExpWatchProductTypeInitialization.c)
 *     VhdiMountVhdFile @ 0x140A92A98 (VhdiMountVhdFile.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403974F0 (xHalTimerWatchdogStop.c)
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
