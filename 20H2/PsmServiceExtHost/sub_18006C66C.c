/*
 * XREFs of sub_18006C66C @ 0x18006C66C
 * Callers:
 *     sub_18006C090 @ 0x18006C090 (sub_18006C090.c)
 * Callees:
 *     sub_180027784 @ 0x180027784 (sub_180027784.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18006C66C(__int64 a1)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 v4; // rdx
  __int64 result; // rax

  memset((void *)a1, 0, 0x78uLL);
  v2 = sub_180027784(3);
  *(_QWORD *)(a1 + 32) = v2;
  *(_DWORD *)(a1 + 40) = v3;
  *(_QWORD *)(a1 + 16) = 1LL;
  v4 = BYTE6(v2)
     + 37
     * (BYTE5(v2)
      + 37
      * (BYTE4(v2) + 37 * (BYTE3(v2) + 37 * (BYTE2(v2) + 37 * (BYTE1(v2) + 37 * ((unsigned __int8)v2 + 11623883LL))))));
  result = HIBYTE(v2);
  *(_QWORD *)(a1 + 8) = result + 37 * v4;
  return result;
}
