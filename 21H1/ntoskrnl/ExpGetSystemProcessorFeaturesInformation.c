/*
 * XREFs of ExpGetSystemProcessorFeaturesInformation @ 0x140945D64
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetSystemProcessorFeaturesInformation(_QWORD *a1)
{
  *a1 = KeFeatureBits;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  return 0LL;
}
