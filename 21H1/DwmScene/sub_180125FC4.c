/*
 * XREFs of sub_180125FC4 @ 0x180125FC4
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_96 @ 0x18000F280 (unknown_libname_96.c)
 */

void __fastcall sub_180125FC4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    unknown_libname_96(*(_QWORD **)(a2 + 176));
  }
}
