/*
 * XREFs of sub_1800EDB98 @ 0x1800EDB98
 * Callers:
 *     sub_18008FA00 @ 0x18008FA00 (sub_18008FA00.c)
 *     sub_1800E4960 @ 0x1800E4960 (sub_1800E4960.c)
 *     sub_1800ED7F8 @ 0x1800ED7F8 (sub_1800ED7F8.c)
 * Callees:
 *     sub_1800EC170 @ 0x1800EC170 (sub_1800EC170.c)
 */

__int64 __fastcall sub_1800EDB98(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 i; // r9

  result = sub_1800EC170(a1, a2);
  for ( i = 0LL; i < 0x10; ++i )
    *(_DWORD *)(result + 4 * i) = *(_DWORD *)(a3 + 4 * i);
  return result;
}
