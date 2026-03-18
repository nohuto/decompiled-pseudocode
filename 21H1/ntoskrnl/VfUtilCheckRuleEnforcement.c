/*
 * XREFs of VfUtilCheckRuleEnforcement @ 0x1409C35BC
 * Callers:
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1409E35B0 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmUnmapLockedPages @ 0x1409E4150 (VerifierMmUnmapLockedPages.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D3DD0 (VfTargetDriversGetVerifierData.c)
 */

_BOOL8 VfUtilCheckRuleEnforcement()
{
  __int64 VerifierData; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( VerifierTipDisable == 1 )
  {
    VerifierData = VfTargetDriversGetVerifierData();
    if ( !VerifierData || ((*(_BYTE *)(VerifierData + 48) - 8) & 0xFB) == 0 )
      return 0;
  }
  return result;
}
