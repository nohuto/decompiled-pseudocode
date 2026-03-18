/*
 * XREFs of sub_1C0035848 @ 0x1C0035848
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C0002580 @ 0x1C0002580 (sub_1C0002580.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001AE80 @ 0x1C001AE80 (sub_1C001AE80.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 *     sub_1C0036048 @ 0x1C0036048 (sub_1C0036048.c)
 */

void __fastcall sub_1C0035848(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  LOBYTE(v13) = 0;
  sub_1C000F050(a1);
  v5 = (int)sub_1C001AE80(a1, a2, 14, (KIRQL *)&v13, 0);
  sub_1C000FD80(a1, 512, 825520176, v5, *(unsigned __int16 *)(a2 + 4));
  sub_1C000FD80(a1, 512, 825520177, v6, *(unsigned __int16 *)(a2 + 4));
  if ( (_DWORD)v5 == 1 )
  {
    sub_1C000FD80(a1, 512, 825520178, *(unsigned int *)(a2 + 400), *(unsigned __int16 *)(a2 + 4));
    if ( *(_DWORD *)(a2 + 400) != 5 )
    {
      sub_1C000FD80(a1, 512, 825520179, 0LL, *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 1;
      sub_1C0002580(a1, a2, v10, v11);
      sub_1C0036048(a1, a2);
    }
    sub_1C000FD80(a1, 512, 825520180, 0LL, *(unsigned __int16 *)(a2 + 4));
    v12 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(v12 + a2 + 1384) = 1;
  }
  else
  {
    if ( (int)v5 > 2 && ((int)v5 <= 4 || (_DWORD)v5 == 14) )
    {
      if ( *(_BYTE *)(a2 + 2840) )
      {
        *(_BYTE *)(a2 + 2838) = 1;
        sub_1C0036048(a1, a2);
      }
      sub_1C000FD80(a1, 512, 825520181, v5, *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 0;
    }
    else
    {
      sub_1C000FD80(a1, 512, 825520182, *(unsigned int *)(a2 + 400), *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 1;
      sub_1C0002580(a1, a2, v8, v9);
      sub_1C0036048(a1, a2);
    }
    v7 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v5;
    *(_DWORD *)(v7 + a2 + 1384) = v5;
  }
  sub_1C0034EEC(a1, a2, v13);
}
