/*
 * XREFs of VfUtilGetSigningLevel @ 0x1409C3790
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D3E30 (VfTargetDriversGetVerifierData.c)
 */

char VfUtilGetSigningLevel()
{
  __int64 VerifierData; // rax

  VerifierData = VfTargetDriversGetVerifierData();
  if ( VerifierData )
    LOBYTE(VerifierData) = *(_BYTE *)(VerifierData + 48);
  return VerifierData;
}
