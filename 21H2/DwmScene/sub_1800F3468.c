/*
 * XREFs of sub_1800F3468 @ 0x1800F3468
 * Callers:
 *     sub_1800952D0 @ 0x1800952D0 (sub_1800952D0.c)
 *     sub_1800EA230 @ 0x1800EA230 (sub_1800EA230.c)
 *     sub_1800F30C8 @ 0x1800F30C8 (sub_1800F30C8.c)
 * Callees:
 *     sub_1800F1A40 @ 0x1800F1A40 (sub_1800F1A40.c)
 */

__int64 __fastcall sub_1800F3468(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 i; // r9

  result = sub_1800F1A40(a1, a2);
  for ( i = 0LL; i < 0x10; ++i )
    *(_DWORD *)(result + 4 * i) = *(_DWORD *)(a3 + 4 * i);
  return result;
}
