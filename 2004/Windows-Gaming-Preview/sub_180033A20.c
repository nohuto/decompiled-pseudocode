/*
 * XREFs of sub_180033A20 @ 0x180033A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800348FC @ 0x1800348FC (sub_1800348FC.c)
 */

__int64 __fastcall sub_180033A20(__int64 a1, signed __int32 a2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 84), a2, 1);
  if ( (_DWORD)result == 1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return sub_1800348FC(a1 - 192, *(unsigned int *)(a1 + 84));
  }
  return result;
}
