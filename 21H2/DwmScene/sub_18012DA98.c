/*
 * XREFs of sub_18012DA98 @ 0x18012DA98
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_98 @ 0x18000F360 (unknown_libname_98.c)
 */

void __fastcall sub_18012DA98(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    unknown_libname_98(*(_QWORD **)(a2 + 240));
  }
}
