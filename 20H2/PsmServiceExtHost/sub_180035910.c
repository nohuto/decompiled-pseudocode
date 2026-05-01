/*
 * XREFs of sub_180035910 @ 0x180035910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180035910(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  if ( (int)result <= 1 )
    __int2c();
  return result;
}
