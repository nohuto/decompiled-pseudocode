/*
 * XREFs of PpmHeteroComputeBias @ 0x1408F3D38
 * Callers:
 *     PopConfigureHeteroPolicies @ 0x1407B649C (PopConfigureHeteroPolicies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmHeteroComputeBias(char a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return a2 != 0 ? 1 : 3;
  if ( a2 )
    return 2LL;
  return result;
}
