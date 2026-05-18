/*
 * XREFs of sub_180120E7C @ 0x180120E7C
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_96 @ 0x18000F280 (unknown_libname_96.c)
 */

void __fastcall sub_180120E7C(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    unknown_libname_96(*(_QWORD **)(a2 + 176));
  }
}
