/*
 * XREFs of EtwpCoverageSamplerQueryStatusInformation @ 0x1409497FC
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x14094A014 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCoverageSamplerQueryStatusInformation(bool *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = qword_140C19738 != 0;
  return result;
}
