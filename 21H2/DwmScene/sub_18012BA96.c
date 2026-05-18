/*
 * XREFs of sub_18012BA96 @ 0x18012BA96
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_98 @ 0x18000F360 (unknown_libname_98.c)
 */

void __fastcall sub_18012BA96(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 36) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 36) &= ~1u;
    unknown_libname_98(*(_QWORD **)(a2 + 40));
  }
}
