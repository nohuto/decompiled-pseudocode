/*
 * XREFs of sub_18006C4A4 @ 0x18006C4A4
 * Callers:
 *     sub_180068FA8 @ 0x180068FA8 (sub_180068FA8.c)
 *     sub_18006CB94 @ 0x18006CB94 (sub_18006CB94.c)
 * Callees:
 *     sub_180041224 @ 0x180041224 (sub_180041224.c)
 */

__int64 __fastcall sub_18006C4A4(_DWORD *a1, char a2, unsigned int *a3, _QWORD *a4)
{
  int v4; // eax
  __int64 v5; // r11
  _DWORD *v8; // r10
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rcx

  v4 = a1[228];
  v5 = 0LL;
  v8 = a1;
  v9 = 0;
  if ( v4 != -1 )
  {
    v10 = v4 - 256;
    v9 = (unsigned __int8)v10;
    v5 = HIWORD(v10);
    *(_QWORD *)&a1[2 * v5 + 22] |= 1LL << v10;
    ++a1[229];
  }
  if ( (a2 & 1) != 0 )
  {
    v12 = a1[229] - a1[231];
  }
  else
  {
    v11 = sub_180041224((__int64)a1);
    v12 = v8[229] - v11;
  }
  v13 = *((_QWORD *)v8 + 11);
  result = 64LL;
  if ( v12 >= 0x40 )
    v12 = 64;
  if ( v8[228] != -1 )
  {
    v15 = *(_QWORD *)&v8[2 * v5 + 22];
    result = v9;
    _bittestandreset64(&v15, v9);
    *(_QWORD *)&v8[2 * v5 + 22] = v15;
    --v8[229];
  }
  *a3 = v12;
  *a4 = v13;
  return result;
}
