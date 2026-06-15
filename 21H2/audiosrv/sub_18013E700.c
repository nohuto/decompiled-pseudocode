/*
 * XREFs of sub_18013E700 @ 0x18013E700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18013E700(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = *(_QWORD *)(a1 + 40);
  return result;
}
