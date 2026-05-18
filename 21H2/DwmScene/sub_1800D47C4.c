/*
 * XREFs of sub_1800D47C4 @ 0x1800D47C4
 * Callers:
 *     sub_18012D844 @ 0x18012D844 (sub_18012D844.c)
 * Callees:
 *     sub_180072774 @ 0x180072774 (sub_180072774.c)
 */

__int64 __fastcall sub_1800D47C4(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_180072774(*(__int64 **)(a1 + 8), *(_QWORD *)a1);
  return result;
}
