/*
 * XREFs of RtlWakeConditionVariable @ 0x18004F0A0
 * Callers:
 *     TppPoolUpdateTrimmedWorker @ 0x18004EEB0 (TppPoolUpdateTrimmedWorker.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWakeConditionVariable(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rdx
  signed __int64 v3; // rtt
  signed __int64 v4; // rtt

  result = *a1;
  while ( result )
  {
    if ( (result & 8) != 0 )
    {
      if ( (result & 7) == 7 )
        return result;
      v4 = result;
      result = _InterlockedCompareExchange64(a1, result + 1, result);
      if ( v4 == result )
        return result;
    }
    else
    {
      v2 = result + 8;
      v3 = result;
      result = _InterlockedCompareExchange64(a1, result + 8, result);
      if ( v3 == result )
        return RtlpWakeConditionVariable(a1, v2, 1LL);
    }
  }
  return result;
}
