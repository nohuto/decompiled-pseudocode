/*
 * XREFs of sub_180125C55 @ 0x180125C55
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_98 @ 0x18000F360 (unknown_libname_98.c)
 */

void __fastcall sub_180125C55(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    unknown_libname_98((_QWORD *)(a2 + 80));
  }
}
