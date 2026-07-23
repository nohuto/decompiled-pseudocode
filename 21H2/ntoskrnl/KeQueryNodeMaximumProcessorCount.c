/*
 * XREFs of KeQueryNodeMaximumProcessorCount @ 0x1403CE750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT __stdcall KeQueryNodeMaximumProcessorCount(USHORT NodeNumber)
{
  if ( NodeNumber >= (unsigned __int16)KeNumberNodes )
    return 0;
  _mm_lfence();
  return *(unsigned __int8 *)(KeNodeBlock[NodeNumber] + 180);
}
