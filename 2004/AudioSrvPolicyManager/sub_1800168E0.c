/*
 * XREFs of sub_1800168E0 @ 0x1800168E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800168E0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = a1 - 24;
  _InterlockedIncrement((volatile signed __int32 *)(a1 - 16));
  return result;
}
