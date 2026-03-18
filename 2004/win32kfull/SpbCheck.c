/*
 * XREFs of SpbCheck @ 0x1C021B16C
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C0031334 (zzzLockWindowUpdate2.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     CreateSpb @ 0x1C0153C30 (CreateSpb.c)
 * Callees:
 *     SpbCheckDce @ 0x1C00E8B30 (SpbCheckDce.c)
 */

__int64 SpbCheck()
{
  __int64 result; // rax
  __int64 i; // rbx

  result = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    for ( i = *(_QWORD *)(gpDispInfo + 24LL); i; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 64) & 0x400800) == 0 )
        SpbCheckDce(i);
    }
    return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
  return result;
}
