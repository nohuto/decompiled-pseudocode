/*
 * XREFs of RtlWakeConditionVariable @ 0x18004F0A0
 * Callers:
 *     TppPoolUpdateTrimmedWorker @ 0x18004EEB0 (TppPoolUpdateTrimmedWorker.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlWakeConditionVariable(PRTL_CONDITION_VARIABLE ConditionVariable)
{
  signed __int64 Ptr; // rax
  signed __int64 v2; // rdx
  signed __int64 v3; // rtt
  signed __int64 v4; // rtt

  Ptr = (signed __int64)ConditionVariable->Ptr;
  while ( Ptr )
  {
    if ( (Ptr & 8) != 0 )
    {
      if ( (Ptr & 7) == 7 )
        return;
      v4 = Ptr;
      Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, Ptr + 1, Ptr);
      if ( v4 == Ptr )
        return;
    }
    else
    {
      v2 = Ptr + 8;
      v3 = Ptr;
      Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, Ptr + 8, Ptr);
      if ( v3 == Ptr )
      {
        RtlpWakeConditionVariable(ConditionVariable, v2, 1LL);
        return;
      }
    }
  }
}
