/*
 * XREFs of sub_1800313B0 @ 0x1800313B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002C534 @ 0x18002C534 (sub_18002C534.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800313B0(__int64 a1, HSTRING a2, int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)sub_18002C534((__int64 *)(a1 + 8), a2);
  return (unsigned int)a3;
}
