/*
 * XREFs of HvlCalculateLivedumpSize @ 0x1404F8AE0
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1409AD1BC (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1404FCD30 (VslLiveDumpQuerySecondaryDataSize.c)
 */

__int64 __fastcall HvlCalculateLivedumpSize(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  bool v4; // zf

  if ( (HvlpRootFlags & 2) != 0 && (v3 = 0, qword_140C475A8) && HvlpHypervisorStatsPage )
  {
    v4 = VslVsmEnabled == 0;
    *a1 = (*(_QWORD *)(HvlpHypervisorStatsPage + 24)
         + 256LL
         + ((((unsigned __int64)(*(_QWORD *)(HvlpHypervisorStatsPage + 24) + 767LL) >> 9) + 511) >> 9)
         + ((unsigned __int64)(*(_QWORD *)(HvlpHypervisorStatsPage + 24) + 767LL) >> 9)
         + ((((((unsigned __int64)(*(_QWORD *)(HvlpHypervisorStatsPage + 24) + 767LL) >> 9) + 511) >> 9) + 511) >> 9)
         + 1) << 12;
    if ( v4 )
    {
      *a3 = (unsigned __int64)(unsigned int)dword_140C475B8 << 12;
      *a2 = 0LL;
    }
    else
    {
      return (unsigned int)VslLiveDumpQuerySecondaryDataSize(a2, a3);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
