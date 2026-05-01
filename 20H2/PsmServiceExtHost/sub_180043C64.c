/*
 * XREFs of sub_180043C64 @ 0x180043C64
 * Callers:
 *     sub_180012FA8 @ 0x180012FA8 (sub_180012FA8.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180043C64(_DWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  memset(a2, 0, 0xE8uLL);
  *((_DWORD *)a2 + 56) &= 0xFFFFFFFC;
  a2[3] = a1;
  *a2 = 1LL;
  a2[26] = a2 + 25;
  a2[25] = a2 + 25;
  memset(a2 + 6, 0, 0x60uLL);
  a2[5] = a2;
  *((_DWORD *)a2 + 28) = a1[715];
  *((_DWORD *)a2 + 29) = a1[716];
  *((_DWORD *)a2 + 31) = a1[717];
  result = 3LL;
  *((_DWORD *)a2 + 34) = 3;
  *((_DWORD *)a2 + 35) = 3;
  return result;
}
