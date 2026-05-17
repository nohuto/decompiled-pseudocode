/*
 * XREFs of _RtlWakeConditionVariable@4 @ 0x4B2F1B80
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _RtlpWakeConditionVariable@12 @ 0x4B2F1BC1 (_RtlpWakeConditionVariable@12.c)
 */

void __stdcall RtlWakeConditionVariable(volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  signed __int32 v2; // eax

  v1 = *a1;
  if ( *a1 )
  {
    do
    {
      if ( (v1 & 8) != 0 )
      {
        if ( (v1 & 7) == 7 )
          return;
        v2 = _InterlockedCompareExchange(a1, v1 + 1, v1);
        if ( v2 == v1 )
          return;
      }
      else
      {
        v2 = _InterlockedCompareExchange(a1, v1 + 8, v1);
        if ( v2 == v1 )
        {
          RtlpWakeConditionVariable(v1 + 8);
          return;
        }
      }
      v1 = v2;
    }
    while ( v2 );
  }
}
