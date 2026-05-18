/*
 * XREFs of sub_180032D70 @ 0x180032D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A0720 @ 0x1800A0720 (sub_1800A0720.c)
 */

__int64 __fastcall sub_180032D70(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_1800A0720();
  return result;
}
