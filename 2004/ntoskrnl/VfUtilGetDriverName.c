/*
 * XREFs of VfUtilGetDriverName @ 0x1409C3760
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D3E30 (VfTargetDriversGetVerifierData.c)
 */

__int64 VfUtilGetDriverName()
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData();
  if ( result )
    return *(_QWORD *)(*(_QWORD *)result + 32LL);
  return result;
}
