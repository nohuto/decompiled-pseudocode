/*
 * XREFs of _RtlpTpTimerFinalizationCallback@8 @ 0x4B2ABCD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTpTimerRundown@4 @ 0x4B2A8D8D (_RtlpTpTimerRundown@4.c)
 */

LOGICAL __stdcall RtlpTpTimerFinalizationCallback(int a1, volatile signed __int32 *BaseAddress)
{
  LOGICAL result; // eax

  result = _InterlockedOr(BaseAddress + 6, 2u);
  if ( (result & 1) == 0 )
    return RtlpTpTimerRundown((PVOID)BaseAddress);
  return result;
}
