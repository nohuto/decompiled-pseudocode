/*
 * XREFs of sub_180092AB4 @ 0x180092AB4
 * Callers:
 *     sub_180110B10 @ 0x180110B10 (sub_180110B10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180092AB4(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  result = 1LL << a2;
  v4 = *(_QWORD *)(a1 + 160);
  if ( a3 )
  {
    v5 = result | v4;
  }
  else
  {
    result = ~result;
    v5 = result & v4;
  }
  *(_QWORD *)(a1 + 160) = v5;
  return result;
}
