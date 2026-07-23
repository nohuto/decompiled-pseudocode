/*
 * XREFs of RtlpOptimizeConditionVariableWaitList @ 0x180064408
 * Callers:
 *     RtlSleepConditionVariableSRW @ 0x180064000 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x1800642A0 (RtlSleepConditionVariableCS.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpOptimizeConditionVariableWaitList(volatile signed __int64 *a1, signed __int64 a2)
{
  signed __int64 v2; // rax
  unsigned __int64 v4; // rdx
  _QWORD *v5; // r8
  _QWORD *v6; // rcx
  signed __int64 v7; // rtt

  v2 = a2;
  while ( 1 )
  {
    v4 = a2 & 0xFFFFFFFFFFFFFFF0uLL;
    v5 = (_QWORD *)v4;
    if ( !*(_QWORD *)(v4 + 8) )
    {
      do
      {
        v6 = v5;
        v5 = (_QWORD *)*v5;
        v5[2] = v6;
      }
      while ( !v5[1] );
    }
    *(_QWORD *)(v4 + 8) = v5[1];
    v7 = v2;
    v2 = _InterlockedCompareExchange64(a1, v4, v2);
    a2 = v2;
    if ( v7 == v2 )
      break;
    if ( (v2 & 7) != 0 )
    {
      LODWORD(v2) = RtlpWakeConditionVariable(a1, v2, 0);
      return v2;
    }
  }
  return v2;
}
