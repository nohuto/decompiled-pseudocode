/*
 * XREFs of sub_18006C590 @ 0x18006C590
 * Callers:
 *     sub_18006BAD0 @ 0x18006BAD0 (sub_18006BAD0.c)
 * Callees:
 *     sub_180027784 @ 0x180027784 (sub_180027784.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18006C590(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  int v7; // r8d
  __int64 result; // rax

  memset((void *)a3, 0, 0x110uLL);
  v6 = sub_180027784(2);
  *(_QWORD *)(a3 + 32) = v6;
  *(_QWORD *)(a3 + 48) = a1;
  *(_DWORD *)(a3 + 40) = v7;
  *(_QWORD *)(a3 + 16) = 1LL;
  *(_QWORD *)(a3 + 8) = HIBYTE(v6)
                      + 37
                      * (BYTE6(v6)
                       + 37
                       * (BYTE5(v6)
                        + 37
                        * (BYTE4(v6)
                         + 37
                         * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883LL)))))));
  *(_DWORD *)(a3 + 268) = *(_DWORD *)(a2 + 4);
  result = a3 + 80;
  *(_QWORD *)(a3 + 88) = a3 + 80;
  *(_QWORD *)(a3 + 80) = a3 + 80;
  return result;
}
