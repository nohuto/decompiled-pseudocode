/*
 * XREFs of sub_180127DDE @ 0x180127DDE
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_96 @ 0x18000F280 (unknown_libname_96.c)
 */

void __fastcall sub_180127DDE(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    unknown_libname_96(*(_QWORD **)(a2 + 112));
  }
}
