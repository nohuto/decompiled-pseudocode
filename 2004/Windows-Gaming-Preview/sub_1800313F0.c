/*
 * XREFs of sub_1800313F0 @ 0x1800313F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002C1D0 @ 0x18002C1D0 (sub_18002C1D0.c)
 */

__int64 __fastcall sub_1800313F0(__int64 a1, HSTRING a2, int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 40);
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)sub_18002C1D0((_QWORD *)(a1 + 8), a2);
  return (unsigned int)a3;
}
