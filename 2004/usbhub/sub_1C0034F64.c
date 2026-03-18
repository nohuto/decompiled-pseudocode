/*
 * XREFs of sub_1C0034F64 @ 0x1C0034F64
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001AE80 @ 0x1C001AE80 (sub_1C001AE80.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 *     sub_1C0036048 @ 0x1C0036048 (sub_1C0036048.c)
 *     sub_1C003AA2C @ 0x1C003AA2C (sub_1C003AA2C.c)
 */

void __fastcall sub_1C0034F64(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r11d
  KIRQL v10; // r8
  __int64 v11; // rax
  int v12; // r10d
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r10d
  __int64 v16; // rax
  __int64 v17; // rbx
  _DWORD *v18; // rax
  KIRQL v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = 0;
  sub_1C000F050(a1);
  v6 = sub_1C001AE80(a1, a2, 11, &v19, 0);
  sub_1C000FD80(a1, 512, 825323568, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v8 == 1 || v8 == 2 || v8 == 6 )
  {
    sub_1C000FD80(a1, v9, 825323569, v7, *(unsigned __int16 *)(a2 + 4));
    v14 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v15;
    *(_DWORD *)(v14 + a2 + 1384) = v15;
  }
  else
  {
    if ( v8 != 7 && v8 != 11 )
    {
      sub_1C000FD80(a1, v9, 825323608, v7, *(unsigned __int16 *)(a2 + 4));
      v10 = v19;
      v11 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v12;
      *(_DWORD *)(v11 + a2 + 1384) = v12;
      sub_1C0034EEC(a1, a2, v10);
      return;
    }
    sub_1C000FD80(a1, v9, 825323570, v7, *(unsigned __int16 *)(a2 + 4));
    sub_1C0036048(a1, a2);
    v13 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(32 * v13 + a2 + 1384) = 1;
  }
  sub_1C0034EEC(a1, a2, v19);
  v16 = sub_1C0016B5C(a1, *(_WORD *)(a2 + 4), 0LL, 0x7250444Fu);
  v17 = v16;
  if ( v16 )
  {
    if ( (sub_1C0011220(v16)[355] & 0x4000000) != 0 )
    {
      v18 = sub_1C0011220(v17);
      KeSetEvent((PRKEVENT)(v18 + 730), 0, 0);
    }
    sub_1C00171A0(a1, v17, 0LL, 0x7250444Fu);
    sub_1C003AA2C(a1, v17, 24LL, a3);
  }
}
