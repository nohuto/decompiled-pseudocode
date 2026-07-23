/*
 * XREFs of _RtlpTpWaitFinalizationCallback@8 @ 0x4B2A8180
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTpWaitRundown@4 @ 0x4B2A81AB (_RtlpTpWaitRundown@4.c)
 */

int __stdcall RtlpTpWaitFinalizationCallback(int a1, volatile signed __int32 *BaseAddress)
{
  int result; // eax

  result = _InterlockedOr(BaseAddress + 3, 2u);
  if ( (result & 1) == 0 )
    return RtlpTpWaitRundown((PVOID)BaseAddress);
  return result;
}
