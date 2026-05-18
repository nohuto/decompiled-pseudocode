/*
 * XREFs of sub_18006AF18 @ 0x18006AF18
 * Callers:
 *     sub_18012A601 @ 0x18012A601 (sub_18012A601.c)
 * Callees:
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 */

__int64 __fastcall sub_18006AF18(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_180069FBC(*(__int64 **)(a1 + 8), *(_QWORD *)a1);
  return result;
}
