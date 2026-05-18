/*
 * XREFs of sub_180092848 @ 0x180092848
 * Callers:
 *     sub_18009272C @ 0x18009272C (sub_18009272C.c)
 *     sub_180111970 @ 0x180111970 (sub_180111970.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180092848(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  result = 1LL << a2;
  v4 = *(_QWORD *)(a1 + 152);
  if ( a3 )
  {
    v5 = result | v4;
  }
  else
  {
    result = ~result;
    v5 = result & v4;
  }
  *(_QWORD *)(a1 + 152) = v5;
  return result;
}
