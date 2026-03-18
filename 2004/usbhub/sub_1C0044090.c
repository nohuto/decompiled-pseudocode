/*
 * XREFs of sub_1C0044090 @ 0x1C0044090
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 *     sub_1C00430F0 @ 0x1C00430F0 (sub_1C00430F0.c)
 *     sub_1C00438A0 @ 0x1C00438A0 (sub_1C00438A0.c)
 *     sub_1C0043DE0 @ 0x1C0043DE0 (sub_1C0043DE0.c)
 *     sub_1C00446D4 @ 0x1C00446D4 (sub_1C00446D4.c)
 *     sub_1C0059E9C @ 0x1C0059E9C (sub_1C0059E9C.c)
 *     sub_1C0059FC0 @ 0x1C0059FC0 (sub_1C0059FC0.c)
 */

__int64 __fastcall sub_1C0044090(ULONG_PTR a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rsi
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // edi
  int v8; // edi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi

  v3 = a2;
  v4 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, 2001883988, a1, 1LL);
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, v5, v3, 2LL);
  v7 = v3 - 2;
  if ( !v7 )
    return sub_1C00446D4(a1, 2LL);
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( v8 != 1 )
      sub_1C002DC78(v9, a1);
    sub_1C0059FC0(v9, a1);
    sub_1C0059E9C(*(_QWORD *)(a1 + 8), (unsigned int)v4[820]);
    v4[640] &= ~0x200u;
    KeResetEvent((PRKEVENT)(v4 + 650));
    sub_1C0043DE0(*(_QWORD *)(a1 + 8), 5, 4);
    v10 = sub_1C00430F0(a1, 2);
    v12 = v10;
    if ( (v10 & 0xC0000000) == 0xC0000000 )
    {
      sub_1C00438A0(0LL, v11, *(struct _LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
      sub_1C0043DE0(*(_QWORD *)(a1 + 8), 4, 7);
    }
    sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, 2001883988, v12, 3LL);
    sub_1C00317D8(*(_QWORD *)(a1 + 8), a1);
    return (unsigned int)v12;
  }
  else
  {
    sub_1C00438A0(0LL, v6, *(struct _LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
    sub_1C0043DE0(*(_QWORD *)(a1 + 8), 4, 3);
    sub_1C00317D8(*(_QWORD *)(a1 + 8), a1);
    return 0LL;
  }
}
