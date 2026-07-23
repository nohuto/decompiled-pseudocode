/*
 * XREFs of KiIsTsaMitigationSupported @ 0x1403F343C
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403C79E0 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForTsa @ 0x1403F327C (KiIsKvaShadowNeededForTsa.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5B60 (HviIsAnyHypervisorPresent.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x1403F3760 (KiIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsTsaMitigationSupported(__int64 a1)
{
  int v2; // ebx
  _QWORD *i; // rcx

  v2 = 0;
  if ( (unsigned int)KiIsHyperVCr3RspErrataPresent() )
    return 0LL;
  if ( (KeFeatureBits2 & 0x100000000000LL) != 0 )
    return 1LL;
  if ( HviIsAnyHypervisorPresent() )
    return 0LL;
  for ( i = &KiVerwClearErrataVersions; *(_DWORD *)i != *(_DWORD *)(a1 + 1736); i += 2 )
  {
    if ( (unsigned int)++v2 >= 0xF )
      return 1LL;
  }
  return *(_QWORD *)(a1 + 34216) >= i[1];
}
