/*
 * XREFs of sub_18007F67C @ 0x18007F67C
 * Callers:
 *     sub_18000DCD8 @ 0x18000DCD8 (sub_18000DCD8.c)
 *     sub_180022B60 @ 0x180022B60 (sub_180022B60.c)
 * Callees:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 */

__int64 __fastcall sub_18007F67C(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  _QWORD *v5; // rbx

  for ( result = (__int64)sub_18001FD20(a1); ; result = sub_180020CC0(v5) )
  {
    v5 = (_QWORD *)result;
    if ( !result )
      break;
    sub_18000506C(result, 1u, a3, 0LL, 0, 0);
  }
  return result;
}
