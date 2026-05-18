/*
 * XREFs of sub_180032D00 @ 0x180032D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A0690 @ 0x1800A0690 (sub_1800A0690.c)
 */

__int64 __fastcall sub_180032D00(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_1800A0690();
  return result;
}
