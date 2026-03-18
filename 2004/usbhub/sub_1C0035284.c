/*
 * XREFs of sub_1C0035284 @ 0x1C0035284
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C0002580 @ 0x1C0002580 (sub_1C0002580.c)
 *     sub_1C00038F0 @ 0x1C00038F0 (sub_1C00038F0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001AE80 @ 0x1C001AE80 (sub_1C001AE80.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C0033860 @ 0x1C0033860 (sub_1C0033860.c)
 *     sub_1C0033FC4 @ 0x1C0033FC4 (sub_1C0033FC4.c)
 *     sub_1C0034DE4 @ 0x1C0034DE4 (sub_1C0034DE4.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 */

void __fastcall sub_1C0035284(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // r9
  int v11; // r10d
  int v12; // r8d
  __int64 v13; // rax
  KIRQL v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // [rsp+28h] [rbp-30h]
  KIRQL v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = 0;
  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v19 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E55C((__int64)DeviceObject->DeviceExtension, v6, v7, 0x23u, (__int64)&unk_1C0062098, v19, a3);
  }
  v8 = sub_1C001AE80(a1, a2, 22, &v20, 0);
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 140));
  v9 = v8;
  sub_1C000FD80(a1, 512, 842166320, v8, *(unsigned __int16 *)(a2 + 4));
  if ( v11 == 1 || v11 == 6 || v11 == 15 )
  {
    sub_1C000FD80(a1, 512, 842166321, v10, *(unsigned __int16 *)(a2 + 4));
    v15 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 20;
    *(_DWORD *)(v15 + a2 + 1384) = 20;
    sub_1C0002580(a1, a2, v16, v17);
    sub_1C0034EEC(a1, a2, v20);
    sub_1C0033860(v18, a2);
    KeWaitForSingleObject((PVOID)(a2 + 2416), Executive, 0, 0, 0LL);
  }
  else if ( (unsigned int)(v11 - 16) > 1 )
  {
    v13 = *(unsigned int *)(a2 + 2400);
    v14 = v20;
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(32 * v13 + a2 + 1384) = 19;
    sub_1C0034EEC(a1, a2, v14);
  }
  else
  {
    sub_1C0034DE4(a1, a2, 2LL, 20);
    sub_1C0034EEC(a1, a2, v20);
    sub_1C000FD80(a1, 512, 842166322, v9, *(unsigned __int16 *)(a2 + 4));
    sub_1C00038F0(a1, (void *)(a2 + 472), 660000, v12, 7u, a2);
    sub_1C0033FC4(a1, a2, a3);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 140));
}
