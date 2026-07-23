/*
 * XREFs of _RtlpOptimizeConditionVariableWaitList@8 @ 0x4B3661B5
 * Callers:
 *     _RtlSleepConditionVariableSRW@16 @ 0x4B2C2180 (_RtlSleepConditionVariableSRW@16.c)
 *     _RtlSleepConditionVariableCS@12 @ 0x4B366010 (_RtlSleepConditionVariableCS@12.c)
 * Callees:
 *     _RtlpWakeConditionVariable@12 @ 0x4B2F1BC1 (_RtlpWakeConditionVariable@12.c)
 */

signed __int32 __thiscall RtlpOptimizeConditionVariableWaitList(volatile signed __int32 *this, signed __int32 a2)
{
  signed __int32 v2; // esi
  signed __int32 v3; // edx
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  signed __int32 result; // eax

  v2 = a2;
  v3 = a2;
  while ( 1 )
  {
    v4 = (_DWORD *)(v3 & 0xFFFFFFF0);
    if ( !*(_DWORD *)((v3 & 0xFFFFFFF0) + 4) )
    {
      do
      {
        v5 = v4;
        v4 = (_DWORD *)*v4;
        v4[2] = v5;
      }
      while ( !v4[1] );
    }
    *(_DWORD *)((v3 & 0xFFFFFFF0) + 4) = v4[1];
    result = _InterlockedCompareExchange(this, v3 & 0xFFFFFFF0, v2);
    v3 = result;
    if ( result == v2 )
      break;
    v2 = result;
    if ( (result & 7) != 0 )
      return RtlpWakeConditionVariable(this, 0, result);
  }
  return result;
}
