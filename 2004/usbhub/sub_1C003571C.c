/*
 * XREFs of sub_1C003571C @ 0x1C003571C
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016A98 @ 0x1C0016A98 (sub_1C0016A98.c)
 *     sub_1C001AE80 @ 0x1C001AE80 (sub_1C001AE80.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 */

void __fastcall sub_1C003571C(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r11d
  KIRQL v10; // r8
  __int64 v11; // rax
  int v12; // r10d
  __int64 v13; // rax
  KIRQL v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0;
  sub_1C000F050(a1);
  v6 = sub_1C001AE80(a1, a2, 21, &v14, 0);
  sub_1C000FD80(a1, 512, 842100784, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v8 >= 2 && (v8 <= 4 || v8 == 14) )
  {
    sub_1C000FD80(a1, v9, 842100785, v7, *(unsigned __int16 *)(a2 + 4));
    v10 = v14;
    v11 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v12;
    *(_DWORD *)(v11 + a2 + 1384) = v12;
    sub_1C0034EEC(a1, a2, v10);
    sub_1C0016A98(a1, a3, *(_WORD *)(a2 + 4));
  }
  else
  {
    sub_1C000FD80(a1, v9, 842100824, v7, *(unsigned __int16 *)(a2 + 4));
    v13 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(32 * v13 + a2 + 1384) = 19;
    sub_1C0034EEC(a1, a2, v14);
  }
}
