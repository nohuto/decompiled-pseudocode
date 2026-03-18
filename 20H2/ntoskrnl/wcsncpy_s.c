/*
 * XREFs of wcsncpy_s @ 0x1403D7AB0
 * Callers:
 *     _wsplitpath_s @ 0x1403D6EC0 (_wsplitpath_s.c)
 *     EmonAddProfileSource @ 0x1404D13F0 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404DBAB0 (Amd64AddProfileSource.c)
 *     LocalGetStringForControl @ 0x1406FB584 (LocalGetStringForControl.c)
 *     LocalGetAclForString @ 0x140783ACC (LocalGetAclForString.c)
 *     GetOperatorIndexByName @ 0x14092A318 (GetOperatorIndexByName.c)
 *     EtwSetPerformanceTraceInformation @ 0x14093AD90 (EtwSetPerformanceTraceInformation.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x14093D0A0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpFindArcName @ 0x140952744 (ExpFindArcName.c)
 *     ExpParseSignatureName @ 0x1409535F4 (ExpParseSignatureName.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x1409B9230 (HalpKdEnumerateDebuggingDevices.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039A580 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcsncpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src, rsize_t MaxCount)
{
  errno_t v5; // ebx
  wchar_t *v6; // r11
  rsize_t v7; // r10
  signed __int64 v8; // r11
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax

  if ( MaxCount )
  {
    if ( !Dst )
      goto LABEL_4;
  }
  else if ( !Dst )
  {
    if ( SizeInWords )
    {
LABEL_4:
      xHalTimerWatchdogStop();
      return 22;
    }
    return 0;
  }
  if ( !SizeInWords )
    goto LABEL_4;
  if ( !MaxCount )
  {
    *Dst = 0;
    return 0;
  }
  if ( Src )
  {
    v6 = Dst;
    v7 = SizeInWords;
    if ( MaxCount == -1LL )
    {
      v8 = (char *)Dst - (char *)Src;
      do
      {
        v9 = *Src;
        *(const wchar_t *)((char *)Src + v8) = *Src;
        ++Src;
        if ( !v9 )
          break;
        --v7;
      }
      while ( v7 );
    }
    else
    {
      v10 = (char *)Src - (char *)Dst;
      do
      {
        v11 = *(wchar_t *)((char *)v6 + v10);
        *v6++ = v11;
        if ( !v11 )
          break;
        if ( !--v7 )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
        *v6 = 0;
    }
    if ( v7 )
      return 0;
    if ( MaxCount == -1LL )
    {
      Dst[SizeInWords - 1] = 0;
      return 80;
    }
    v5 = 34;
  }
  else
  {
    v5 = 22;
  }
  *Dst = 0;
  xHalTimerWatchdogStop();
  return v5;
}
