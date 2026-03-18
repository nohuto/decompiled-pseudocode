/*
 * XREFs of __GetWinStationInfo@4 @ 0x187EB8
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall _GetWinStationInfo(_BYTE *a1)
{
  if ( (unsigned int)a1 >= _MmUserProbeAddress )
    *(_BYTE *)_MmUserProbeAddress = 0;
  *a1 = *a1;
  a1[39] = a1[39];
  qmemcpy(a1, _gWinStationInfo, 0x28u);
  return 1;
}
