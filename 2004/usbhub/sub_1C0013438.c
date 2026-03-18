/*
 * XREFs of sub_1C0013438 @ 0x1C0013438
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001AE80 @ 0x1C001AE80 (sub_1C001AE80.c)
 *     sub_1C0034CDC @ 0x1C0034CDC (sub_1C0034CDC.c)
 *     sub_1C0034DE4 @ 0x1C0034DE4 (sub_1C0034DE4.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 */

void __fastcall sub_1C0013438(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // r9
  int v7; // r10d
  int v8; // r11d
  __int64 v9; // rax
  int v10; // r10d
  __int64 v11; // rcx
  KIRQL v12; // dl
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r10d
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // r11d
  __int64 v22; // rax
  int v23; // r10d
  __int64 NewIrql; // [rsp+50h] [rbp+18h] BYREF

  NewIrql = a3;
  LOBYTE(NewIrql) = 0;
  sub_1C000F050(a1);
  v5 = sub_1C001AE80(a1, a2, 12, (unsigned int)&NewIrql, 0);
  sub_1C000FD80(a1, 512, 825389104, v5, *(unsigned __int16 *)(a2 + 4));
  if ( v7 > 10 )
  {
    if ( v7 <= 13 )
      goto LABEL_21;
    if ( v7 == 14 )
      goto LABEL_6;
    if ( v7 <= 17 )
    {
LABEL_21:
      sub_1C000FD80(a1, v8, 825389107, v6, *(unsigned __int16 *)(a2 + 4));
      v22 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v23;
      *(_DWORD *)(v22 + a2 + 1384) = v23;
      if ( *(_DWORD *)(a2 + 400) == 5 )
        sub_1C000FD80(a1, v21, 825389161, v20, *(unsigned __int16 *)(a2 + 4));
      goto LABEL_23;
    }
    if ( v7 != 18 && v7 != 20 )
    {
LABEL_20:
      sub_1C000FD80(a1, v8, 825389144, v6, *(unsigned __int16 *)(a2 + 4));
      v15 = 19LL;
      v19 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v19 + a2 + 1384) = 19;
      goto LABEL_23;
    }
LABEL_19:
    sub_1C000FD80(a1, v8, 825389110, v6, *(unsigned __int16 *)(a2 + 4));
    v17 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v18;
    *(_DWORD *)(v17 + a2 + 1384) = v18;
    goto LABEL_23;
  }
  if ( v7 == 10 )
    goto LABEL_13;
  if ( v7 == 1 )
    goto LABEL_19;
  if ( v7 <= 1 )
    goto LABEL_20;
  if ( v7 <= 4 )
  {
LABEL_6:
    sub_1C000FD80(a1, v8, 825389105, v6, *(unsigned __int16 *)(a2 + 4));
    v9 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v10;
    *(_DWORD *)(v9 + a2 + 1384) = v10;
    sub_1C000FD80(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v11 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    v12 = NewIrql;
    *(_DWORD *)(32 * v11 + a2 + 1384) = *(_DWORD *)(a2 + 12);
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v12);
    return;
  }
  if ( v7 <= 6 )
    goto LABEL_21;
  if ( v7 == 7 )
  {
    sub_1C000FD80(a1, v8, 825389106, v6, *(unsigned __int16 *)(a2 + 4));
    v14 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 2;
    *(_DWORD *)(v14 + a2 + 1384) = 2;
    *(_DWORD *)(a2 + 400) = 0;
    goto LABEL_12;
  }
  if ( v7 == 8 )
  {
LABEL_13:
    sub_1C000FD80(a1, v8, 825389108, v6, *(unsigned __int16 *)(a2 + 4));
    v16 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 10;
    *(_DWORD *)(v16 + a2 + 1384) = 10;
    goto LABEL_23;
  }
  sub_1C000FD80(a1, v8, 825389109, v6, *(unsigned __int16 *)(a2 + 4));
  sub_1C0034CDC(a1, a2);
  v13 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = 4;
  *(_DWORD *)(v13 + a2 + 1384) = 4;
LABEL_12:
  sub_1C0034DE4(a1, a2, 2LL);
  KeResetEvent((PRKEVENT)(a2 + 472));
LABEL_23:
  LOBYTE(v15) = NewIrql;
  sub_1C0034EEC(a1, a2, v15, 0LL);
}
