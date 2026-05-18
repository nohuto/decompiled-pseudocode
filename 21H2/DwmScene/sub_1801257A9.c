/*
 * XREFs of sub_1801257A9 @ 0x1801257A9
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_98 @ 0x18000F360 (unknown_libname_98.c)
 */

void __fastcall sub_1801257A9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    unknown_libname_98(*(_QWORD **)(a2 + 56));
  }
}
