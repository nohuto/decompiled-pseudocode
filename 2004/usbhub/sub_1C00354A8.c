/*
 * XREFs of sub_1C00354A8 @ 0x1C00354A8
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C0002580 @ 0x1C0002580 (sub_1C0002580.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001AE80 @ 0x1C001AE80 (sub_1C001AE80.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C0034DE4 @ 0x1C0034DE4 (sub_1C0034DE4.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 *     sub_1C0036048 @ 0x1C0036048 (sub_1C0036048.c)
 */

void __fastcall sub_1C00354A8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r9
  int v10; // r10d
  int v11; // r11d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+28h] [rbp-20h]
  KIRQL v19; // [rsp+58h] [rbp+10h] BYREF

  v19 = 0;
  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v18 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E55C((__int64)DeviceObject->DeviceExtension, v6, v7, 0x22u, (__int64)&unk_1C0062098, v18, a3);
  }
  v8 = sub_1C001AE80(a1, a2, 17, &v19, 0);
  sub_1C000FD80(a1, 512, 825716784, v8, *(unsigned __int16 *)(a2 + 4));
  if ( v10 > 10 )
  {
    if ( v10 == 11 )
      goto LABEL_21;
    if ( v10 <= 14 )
      goto LABEL_19;
    if ( v10 <= 17 )
      goto LABEL_18;
    if ( v10 == 18 )
      goto LABEL_21;
    if ( v10 == 20 )
    {
LABEL_18:
      sub_1C000FD80(a1, v11, 825716788, v9, *(unsigned __int16 *)(a2 + 4));
      goto LABEL_22;
    }
LABEL_20:
    v14 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(v14 + a2 + 1384) = 19;
    goto LABEL_22;
  }
  if ( v10 == 10 )
    goto LABEL_19;
  if ( v10 <= 0 )
    goto LABEL_20;
  if ( v10 <= 2 )
    goto LABEL_21;
  if ( v10 == 3 )
    goto LABEL_19;
  if ( v10 > 5 )
  {
    if ( v10 > 7 )
    {
      if ( v10 != 8 )
        goto LABEL_12;
LABEL_19:
      sub_1C000FD80(a1, v11, 825716785, v9, *(unsigned __int16 *)(a2 + 4));
      v13 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 17;
      *(_DWORD *)(v13 + a2 + 1384) = 17;
      goto LABEL_22;
    }
LABEL_21:
    sub_1C000FD80(a1, v11, 825716786, v9, *(unsigned __int16 *)(a2 + 4));
    sub_1C0034DE4(a1, a2, 2LL, 30);
    v15 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 15;
    *(_DWORD *)(32 * v15 + a2 + 1384) = 15;
    sub_1C0002580(a1, a2, v16, v17);
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    sub_1C0036048(a1, a2);
    goto LABEL_22;
  }
LABEL_12:
  sub_1C000FD80(a1, v11, 825716787, v9, *(unsigned __int16 *)(a2 + 4));
  v12 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = 16;
  *(_DWORD *)(v12 + a2 + 1384) = 16;
LABEL_22:
  sub_1C0034EEC(a1, a2, v19);
}
