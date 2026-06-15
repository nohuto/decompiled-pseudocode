/*
 * XREFs of ?Clear@?$CAggregateValuesClusteredCounter@W4SarmErrorEvent@@$02@@UEAAXXZ @ 0x18004DDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAggregateValuesClusteredCounter<enum SarmErrorEvent,3>::Clear(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
