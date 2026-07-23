/*
 * XREFs of _RtlpSetProcMergedLangList@8 @ 0x4B2EBADE
 * Callers:
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpInitMuiCriticalSection@8 @ 0x4B2D5E84 (_RtlpInitMuiCriticalSection@8.c)
 */

int __fastcall RtlpSetProcMergedLangList(_DWORD *a1, int a2)
{
  if ( !a2 || !a1 )
    return -1073741811;
  if ( !a1[14] )
  {
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    if ( !a1[14] )
    {
      *(_DWORD *)(a2 + 32) |= 0x40u;
      *a1 |= 0x200u;
      a1[14] = a2;
    }
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
  }
  return 0;
}
