/*
 * XREFs of sub_18010BBE4 @ 0x18010BBE4
 * Callers:
 *     sub_1801077B0 @ 0x1801077B0 (sub_1801077B0.c)
 *     sub_18010B7C4 @ 0x18010B7C4 (sub_18010B7C4.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_18010BBE4(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 68);
  if ( a2 > v3 )
  {
    v4 = 233;
LABEL_3:
    sub_18004BD84(
      (int)retaddr,
      v4,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      -2147024809);
    return 2147942487LL;
  }
  if ( a3 > v3 )
  {
    v4 = 236;
    goto LABEL_3;
  }
  return 0LL;
}
