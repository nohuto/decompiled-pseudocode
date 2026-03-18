/*
 * XREFs of _SpbCheck@0 @ 0x17E6A2
 * Callers:
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _CreateSpb@12 @ 0xC549A (_CreateSpb@12.c)
 * Callees:
 *     _SpbCheckDce@4 @ 0x3272A (_SpbCheckDce@4.c)
 */

int __stdcall SpbCheck()
{
  int result; // eax
  _DWORD *i; // esi

  result = _gpDispInfo;
  if ( *(_DWORD *)(_gpDispInfo + 16) )
  {
    GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    for ( i = *(_DWORD **)(_gpDispInfo + 12); i; i = (_DWORD *)*i )
    {
      if ( (i[8] & 0x400800) == 0 )
        SpbCheckDce(i);
    }
    return GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  }
  return result;
}
