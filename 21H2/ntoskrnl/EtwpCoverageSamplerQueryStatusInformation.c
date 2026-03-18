/*
 * XREFs of EtwpCoverageSamplerQueryStatusInformation @ 0x1409F3514
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x1409F3D68 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCoverageSamplerQueryStatusInformation(bool *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = qword_140C15D78 != 0;
  return result;
}
