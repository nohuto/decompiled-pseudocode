/*
 * XREFs of ?AddData@?$CAggregateValuesClusteredCounter@W4SarmErrorEvent@@$02@@UEAAXW4SarmErrorEvent@@PEAI@Z @ 0x18010A880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAggregateValuesClusteredCounter<enum SarmErrorEvent,3>::AddData(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3)
{
  __int64 result; // rax

  if ( a3 )
    return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4LL * a2 + 48), *a3);
  return result;
}
