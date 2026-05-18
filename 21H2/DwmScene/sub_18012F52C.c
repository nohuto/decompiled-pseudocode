/*
 * XREFs of sub_18012F52C @ 0x18012F52C
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_98 @ 0x18000F360 (unknown_libname_98.c)
 */

void __fastcall sub_18012F52C(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 84) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 84) &= ~1u;
    unknown_libname_98(*(_QWORD **)(a2 + 112));
  }
}
