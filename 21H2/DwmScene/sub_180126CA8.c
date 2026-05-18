/*
 * XREFs of sub_180126CA8 @ 0x180126CA8
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_98 @ 0x18000F360 (unknown_libname_98.c)
 */

void __fastcall sub_180126CA8(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    unknown_libname_98(*(_QWORD **)(a2 + 88));
  }
}
