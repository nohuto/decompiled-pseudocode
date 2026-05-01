/*
 * XREFs of sub_180007CF8 @ 0x180007CF8
 * Callers:
 *     sub_180007A80 @ 0x180007A80 (sub_180007A80.c)
 * Callees:
 *     sub_180007DE4 @ 0x180007DE4 (sub_180007DE4.c)
 *     sub_180007E58 @ 0x180007E58 (sub_180007E58.c)
 *     sub_1800179D8 @ 0x1800179D8 (sub_1800179D8.c)
 */

char __fastcall sub_180007CF8(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 v5; // rax
  bool v6; // zf
  int v7; // ebx
  __int64 v8; // rax
  char v9; // r14
  int v10; // eax
  __int16 v11; // ax
  char v12; // al
  char result; // al
  int v14; // eax
  int v15; // ecx
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v16[1] = 2LL;
  v3 = 0;
  v5 = sub_180007E58(a1, 2LL, 0LL);
  v6 = *(_DWORD *)(a1 + 624) == 2;
  v16[0] = v5;
  v7 = !v6;
  v8 = sub_180007DE4(v16);
  v9 = *(_BYTE *)(a2 + 28);
  while ( v8 )
  {
    v14 = *(_DWORD *)(v8 + 1380);
    v15 = v7;
    v7 = v14 & 3;
    if ( v7 <= v15 )
      v7 = v15;
    v9 |= (v14 & 8) != 0;
    *(_BYTE *)(a2 + 28) = v9;
    v8 = sub_180007DE4(v16);
  }
  v10 = sub_1800179D8(*(unsigned int *)(a1 + 1464));
  if ( v7 <= v10 )
    v7 = v10;
  v11 = (unsigned __int16)*(_DWORD *)(a1 + 1464) >> 7;
  *(_DWORD *)(a2 + 24) = v7;
  v12 = v9 ^ (v9 ^ (2 * v11)) & 2;
  *(_BYTE *)(a2 + 28) = v12;
  if ( (*(_WORD *)(a1 + 1464) & 0x400) != 0
    && (*(_BYTE *)(a1 + 1240) & 2) == 0
    && *(_BYTE *)(*(_QWORD *)(a1 + 48) + 208LL) )
  {
    v3 = 4;
  }
  result = v3 | v12 & 0xFB;
  *(_BYTE *)(a2 + 28) = result;
  return result;
}
