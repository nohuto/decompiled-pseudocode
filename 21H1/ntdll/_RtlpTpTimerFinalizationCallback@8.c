/*
 * XREFs of _RtlpTpTimerFinalizationCallback@8 @ 0x4B2ABCD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTpTimerRundown@4 @ 0x4B2A8D8D (_RtlpTpTimerRundown@4.c)
 */

int __stdcall RtlpTpTimerFinalizationCallback(int a1, int a2)
{
  int result; // eax

  result = _InterlockedOr((volatile signed __int32 *)(a2 + 24), 2u);
  if ( (result & 1) == 0 )
    return RtlpTpTimerRundown(a2);
  return result;
}
