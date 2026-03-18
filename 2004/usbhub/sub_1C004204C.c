/*
 * XREFs of sub_1C004204C @ 0x1C004204C
 * Callers:
 *     sub_1C0044590 @ 0x1C0044590 (sub_1C0044590.c)
 * Callees:
 *     sub_1C00038F0 @ 0x1C00038F0 (sub_1C00038F0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C0031404 @ 0x1C0031404 (sub_1C0031404.c)
 *     sub_1C0031714 @ 0x1C0031714 (sub_1C0031714.c)
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 *     sub_1C003A450 @ 0x1C003A450 (sub_1C003A450.c)
 *     sub_1C003C45C @ 0x1C003C45C (sub_1C003C45C.c)
 *     sub_1C003CAB8 @ 0x1C003CAB8 (sub_1C003CAB8.c)
 *     sub_1C0059DA0 @ 0x1C0059DA0 (sub_1C0059DA0.c)
 */

void __fastcall sub_1C004204C(__int64 a1, int a2)
{
  _DWORD *v4; // rsi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // r9
  int v8; // eax
  int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // rcx
  int Timeout; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-20h]

  v4 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, 1114850114, 0LL, 0LL);
  sub_1C0011260(*(_QWORD *)(a1 + 8), *((_QWORD *)v4 + 346));
  if ( (unsigned int)sub_1C003C45C(*(_QWORD *)(a1 + 8), 0LL, 0LL) == -1073741536 )
  {
    v5 = sub_1C000F050(*(_QWORD *)(a1 + 8));
    v4[640] |= 0x400u;
    v6 = v5;
    KeSetEvent((PRKEVENT)(v4 + 644), 0, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v6 + 390, 0x20u);
  }
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, 1684357954, 0LL, 0LL);
  v8 = sub_1C00038F0(*(_QWORD *)(a1 + 8), v4 + 644, 5000, 1667394391, (unsigned int)v7 & Timeout, v7 & v13);
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, 1667379249, v8, 5000LL);
  if ( v9 == 258 )
  {
    sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, 1667379250, 0LL, 5000LL);
    v11 = *(_QWORD *)(a1 + 8);
    if ( (v4[640] & 0x400) != 0 )
    {
      sub_1C000FD80(v11, 2, 1667379252, v10, 5000LL);
      sub_1C002DC78(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8));
    }
    sub_1C000FD80(v11, 2, 1667379251, v10, 5000LL);
    sub_1C00317D8(*(_QWORD *)(a1 + 8), a1);
    KeWaitForSingleObject(v4 + 644, Executive, 0, 0, 0LL);
    sub_1C0031714(*(_QWORD *)(a1 + 8), a1, 12, 1330933353, 1);
    if ( a2 == 5 )
    {
      sub_1C003CAB8(*(_QWORD *)(a1 + 8));
      sub_1C0012810(*(struct _DEVICE_OBJECT **)(a1 + 8), 6u, a1);
      sub_1C0059DA0(*(_QWORD *)(a1 + 8), a1);
      sub_1C0031404(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 5);
      sub_1C003A450(*(_QWORD *)(a1 + 8), a1);
    }
  }
}
