/*
 * XREFs of sub_18006AA10 @ 0x18006AA10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800689D8 @ 0x1800689D8 (sub_1800689D8.c)
 */

__int64 __fastcall sub_18006AA10(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 272);
  if ( *a2 != v2 )
    return sub_1800689D8(v2, a2);
  return result;
}
