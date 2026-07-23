/*
 * XREFs of KiGetThreadScb @ 0x14027B870
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadScb(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 104);
  if ( a3 )
    *a3 = result;
  if ( result )
    result += *(unsigned int *)(a2 + 216);
  return result;
}
