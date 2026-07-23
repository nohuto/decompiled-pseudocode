/*
 * XREFs of _RtlWakeConditionVariable@4 @ 0x4B2F1B80
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _RtlpWakeConditionVariable@12 @ 0x4B2F1BC1 (_RtlpWakeConditionVariable@12.c)
 */

void __cdecl RtlWakeConditionVariable(PRTL_CONDITION_VARIABLE ConditionVariable)
{
  signed __int32 Ptr; // edx
  signed __int32 v2; // eax

  Ptr = (signed __int32)ConditionVariable->Ptr;
  if ( ConditionVariable->Ptr )
  {
    do
    {
      if ( (Ptr & 8) != 0 )
      {
        if ( (Ptr & 7) == 7 )
          return;
        v2 = _InterlockedCompareExchange((volatile signed __int32 *)ConditionVariable, Ptr + 1, Ptr);
        if ( v2 == Ptr )
          return;
      }
      else
      {
        v2 = _InterlockedCompareExchange((volatile signed __int32 *)ConditionVariable, Ptr + 8, Ptr);
        if ( v2 == Ptr )
        {
          RtlpWakeConditionVariable(Ptr + 8);
          return;
        }
      }
      Ptr = v2;
    }
    while ( v2 );
  }
}
