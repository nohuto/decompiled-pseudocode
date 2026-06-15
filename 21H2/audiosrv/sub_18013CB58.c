/*
 * XREFs of sub_18013CB58 @ 0x18013CB58
 * Callers:
 *     sub_18002CA40 @ 0x18002CA40 (sub_18002CA40.c)
 *     sub_18002CD00 @ 0x18002CD00 (sub_18002CD00.c)
 *     sub_1800455C0 @ 0x1800455C0 (sub_1800455C0.c)
 *     sub_1800464D0 @ 0x1800464D0 (sub_1800464D0.c)
 *     sub_18004F930 @ 0x18004F930 (sub_18004F930.c)
 *     sub_1800C6158 @ 0x1800C6158 (sub_1800C6158.c)
 *     sub_1800C7054 @ 0x1800C7054 (sub_1800C7054.c)
 * Callees:
 *     sub_18013CB88 @ 0x18013CB88 (sub_18013CB88.c)
 */

__int64 __fastcall sub_18013CB58(__int64 a1, int a2, int a3)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return sub_18013CB88((_DWORD)retaddr, 1, (unsigned int)"AudioSrv.dll", a2, a3);
}
