/*
 * XREFs of VfUtilGetDifPluginDriverData @ 0x14059B290
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D3E30 (VfTargetDriversGetVerifierData.c)
 */

__int64 VfUtilGetDifPluginDriverData()
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData();
  if ( result )
    return *(_QWORD *)(result + 96);
  return result;
}
