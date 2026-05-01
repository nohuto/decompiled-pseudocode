/*
 * XREFs of sub_18003B380 @ 0x18003B380
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003A258 @ 0x18003A258 (sub_18003A258.c)
 */

__int64 __fastcall sub_18003B380(__int64 a1, int a2, int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)sub_18003A258(*(_QWORD *)(a1 + 8));
  return (unsigned int)a3;
}
