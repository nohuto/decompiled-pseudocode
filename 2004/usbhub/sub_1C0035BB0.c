/*
 * XREFs of sub_1C0035BB0 @ 0x1C0035BB0
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C0002580 @ 0x1C0002580 (sub_1C0002580.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001AE80 @ 0x1C001AE80 (sub_1C001AE80.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C00340A0 @ 0x1C00340A0 (sub_1C00340A0.c)
 *     sub_1C0034728 @ 0x1C0034728 (sub_1C0034728.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 *     sub_1C0039C2C @ 0x1C0039C2C (sub_1C0039C2C.c)
 */

void __fastcall sub_1C0035BB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  KIRQL v12; // r8
  __int64 v13; // rax
  int v14; // r10d
  __int64 v15; // rax
  KIRQL v16; // r8
  KIRQL v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = 0;
  sub_1C000F050(a1);
  v6 = (int)sub_1C001AE80(a1, a2, 8, &v17, 0);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E55C(
      (__int64)DeviceObject->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v7,
      0xDu,
      (__int64)&unk_1C0062098,
      *(unsigned __int16 *)(a2 + 4),
      a2);
  sub_1C000FD80(a1, 512, 1597534256, v6, *(unsigned __int16 *)(a2 + 4));
  if ( (int)v6 <= 11 )
  {
    if ( (_DWORD)v6 == 11 || (_DWORD)v6 == 1 )
      goto LABEL_22;
    if ( (int)v6 > 1 )
    {
      if ( (int)v6 > 4 )
      {
        if ( (_DWORD)v6 == 5 )
          goto LABEL_12;
        if ( (_DWORD)v6 != 6 )
        {
          if ( (_DWORD)v6 == 7 )
          {
            sub_1C000FD80(a1, 512, 1597534257, v8, *(unsigned __int16 *)(a2 + 4));
            v12 = v17;
            v13 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 400) = 0;
            *(_DWORD *)(a2 + 12) = v14;
            *(_DWORD *)(v13 + a2 + 1384) = v14;
            sub_1C0034EEC(a1, a2, v12);
            v11 = 20LL;
            goto LABEL_13;
          }
LABEL_12:
          sub_1C000FD80(a1, 512, 1597534261, v8, *(unsigned __int16 *)(a2 + 4));
          sub_1C0002580(a1, a2, v9, v10);
          sub_1C0034EEC(a1, a2, v17);
          v11 = 23LL;
LABEL_13:
          sub_1C0039C2C(a1, v11, a3);
          return;
        }
LABEL_22:
        sub_1C000FD80(a1, 512, 1597534258, v8, *(unsigned __int16 *)(a2 + 4));
        sub_1C0034EEC(a1, a2, v17);
        v11 = 21LL;
        goto LABEL_13;
      }
      goto LABEL_23;
    }
LABEL_21:
    v15 = *(unsigned int *)(a2 + 2400);
    v16 = v17;
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(32 * v15 + a2 + 1384) = 19;
    sub_1C0034EEC(a1, a2, v16);
    return;
  }
  if ( (int)v6 <= 13 )
    goto LABEL_12;
  if ( (_DWORD)v6 != 14 )
  {
    if ( (_DWORD)v6 == 15 )
      goto LABEL_22;
    if ( (int)v6 <= 17 )
      goto LABEL_12;
    if ( (_DWORD)v6 == 18 || (_DWORD)v6 == 20 )
      goto LABEL_22;
    goto LABEL_21;
  }
LABEL_23:
  sub_1C000FD80(a1, 512, 1597534259, v8, *(unsigned __int16 *)(a2 + 4));
  sub_1C0034EEC(a1, a2, v17);
  sub_1C00340A0(a1, *(_WORD *)(a2 + 4), a3);
  sub_1C000FD80(a1, 512, 1597534260, a3, *(unsigned __int16 *)(a2 + 4));
  sub_1C0039C2C(a1, 22LL, a3);
  sub_1C0034728(a1, a2, a3);
}
