/*
 * XREFs of sub_180022760 @ 0x180022760
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023794 @ 0x180023794 (sub_180023794.c)
 */

__int64 __fastcall sub_180022760(__int64 a1, signed __int32 a2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 84), a2, 1);
  if ( (_DWORD)result == 1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return sub_180023794(a1 - 192, *(unsigned int *)(a1 + 84));
  }
  return result;
}
