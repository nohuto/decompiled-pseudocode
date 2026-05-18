/*
 * XREFs of sub_18012CA3B @ 0x18012CA3B
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_98 @ 0x18000F360 (unknown_libname_98.c)
 */

void __fastcall sub_18012CA3B(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    unknown_libname_98(*(_QWORD **)(a2 + 120));
  }
}
