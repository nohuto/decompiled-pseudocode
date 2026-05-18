/*
 * XREFs of sub_180065648 @ 0x180065648
 * Callers:
 *     sub_180124CE9 @ 0x180124CE9 (sub_180124CE9.c)
 * Callees:
 *     sub_1800646EC @ 0x1800646EC (sub_1800646EC.c)
 */

__int64 __fastcall sub_180065648(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_1800646EC(*(__int64 **)(a1 + 8), *(_QWORD *)a1);
  return result;
}
