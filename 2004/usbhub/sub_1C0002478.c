/*
 * XREFs of sub_1C0002478 @ 0x1C0002478
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C0002580 @ 0x1C0002580 (sub_1C0002580.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001AE80 @ 0x1C001AE80 (sub_1C001AE80.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 */

void __fastcall sub_1C0002478(__int64 a1, __int64 a2, char a3)
{
  int v6; // edx
  int v7; // r8d
  int v8; // eax
  KIRQL v9; // dl
  __int64 v10; // rcx
  KIRQL NewIrql; // [rsp+58h] [rbp+10h] BYREF

  NewIrql = 0;
  sub_1C000F050(a1);
  sub_1C000FD80(a1, 512, 825782320, a2, *(unsigned __int16 *)(a2 + 4));
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E55C(DeviceObject->DeviceExtension, v6, v7, 47, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4), a3);
  sub_1C001AE80(a1, a2, 18, (unsigned int)&NewIrql, 0);
  sub_1C0002580(a1, a2);
  sub_1C000FD80(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v8 = *(_DWORD *)(a2 + 12);
  v9 = NewIrql;
  v10 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v10 + a2 + 1384) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
}
