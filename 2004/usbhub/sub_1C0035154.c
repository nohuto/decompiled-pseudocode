/*
 * XREFs of sub_1C0035154 @ 0x1C0035154
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001AE80 @ 0x1C001AE80 (sub_1C001AE80.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 */

_DWORD *__fastcall sub_1C0035154(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  int v15; // [rsp+28h] [rbp-30h]
  KIRQL v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0;
  sub_1C000F050(a1);
  *a4 = 0;
  sub_1C000FD80(a1, 512, 825585712, a2, *(unsigned __int16 *)(a2 + 4));
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v15 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E55C((__int64)DeviceObject->DeviceExtension, v8, v9, 0x2Cu, (__int64)&unk_1C0062098, v15, a3);
  }
  v10 = sub_1C001AE80(a1, a2, 20, &v16, 0);
  v11 = v10;
  if ( v10 < 5 || v10 > 6 && (v10 <= 10 || v10 > 13 && (unsigned int)(v10 - 16) > 1) )
  {
    v13 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v11;
    *(_DWORD *)(32 * v13 + a2 + 1384) = v11;
    *a4 = 0;
  }
  else
  {
    *a4 = 1;
    v12 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v11;
    *(_DWORD *)(v12 + a2 + 1384) = v11;
  }
  sub_1C0034EEC(a1, a2, v16);
  return a4;
}
