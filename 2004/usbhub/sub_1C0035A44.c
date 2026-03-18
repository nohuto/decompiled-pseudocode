/*
 * XREFs of sub_1C0035A44 @ 0x1C0035A44
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
 */

void __fastcall sub_1C0035A44(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // [rsp+28h] [rbp-20h]
  KIRQL v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0;
  sub_1C000F050(a1);
  sub_1C000FD80(a1, 512, 825782320, a2, *(unsigned __int16 *)(a2 + 4));
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v13 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E55C((__int64)DeviceObject->DeviceExtension, v6, v7, 0x30u, (__int64)&unk_1C0062098, v13, a3);
  }
  v8 = sub_1C001AE80(a1, a2, 13, &v14, 0);
  if ( v8 == 1 || v8 == 6 )
  {
    sub_1C000FD80(a1, 512, 825782321, v8, *(unsigned __int16 *)(a2 + 4));
    sub_1C0002580(a1, a2, v10, v11);
    v12 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(a2 + 12) = 2;
    *(_DWORD *)(v12 + a2 + 1384) = 2;
    sub_1C0034DE4(a1, a2, 2LL, 10);
    KeResetEvent((PRKEVENT)(a2 + 472));
  }
  else
  {
    v9 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v8;
    *(_DWORD *)(v9 + a2 + 1384) = v8;
  }
  sub_1C0034EEC(a1, a2, v14);
}
