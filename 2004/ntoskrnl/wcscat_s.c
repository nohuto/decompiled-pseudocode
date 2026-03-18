/*
 * XREFs of wcscat_s @ 0x1403D4BD0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x140642AD0 (RtlConvertSidToUnicodeString.c)
 *     AslPathToNetworkPathNt @ 0x14073EAD8 (AslPathToNetworkPathNt.c)
 *     BcdGetSystemStorePath @ 0x1407700D4 (BcdGetSystemStorePath.c)
 *     NtLockProductActivationKeys @ 0x14079FDB0 (NtLockProductActivationKeys.c)
 *     ExpWatchLicenseInfoWork @ 0x140948A40 (ExpWatchLicenseInfoWork.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094C7BC (ExpCreateOutputSIGNATURE.c)
 *     ExpWatchProductTypeInitialization @ 0x140A43A08 (ExpWatchProductTypeInitialization.c)
 *     VhdiMountVhdFile @ 0x140A921A8 (VhdiMountVhdFile.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140398100 (xHalTimerWatchdogStop.c)
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
