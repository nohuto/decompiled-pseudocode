/*
 * XREFs of sub_18012C36A @ 0x18012C36A
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_98 @ 0x18000F360 (unknown_libname_98.c)
 */

void __fastcall sub_18012C36A(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    unknown_libname_98((_QWORD *)(a2 + 208));
  }
}
