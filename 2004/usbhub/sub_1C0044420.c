/*
 * XREFs of sub_1C0044420 @ 0x1C0044420
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C0015EB4 @ 0x1C0015EB4 (sub_1C0015EB4.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C0031404 @ 0x1C0031404 (sub_1C0031404.c)
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 *     sub_1C003A450 @ 0x1C003A450 (sub_1C003A450.c)
 *     sub_1C003CAB8 @ 0x1C003CAB8 (sub_1C003CAB8.c)
 *     sub_1C00438A0 @ 0x1C00438A0 (sub_1C00438A0.c)
 *     sub_1C0043DE0 @ 0x1C0043DE0 (sub_1C0043DE0.c)
 *     sub_1C00446D4 @ 0x1C00446D4 (sub_1C00446D4.c)
 *     sub_1C0059DA0 @ 0x1C0059DA0 (sub_1C0059DA0.c)
 */

__int64 __fastcall sub_1C0044420(ULONG_PTR a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  int v8; // ebp
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, 2001949776, a1, a2);
  if ( a2 == 2 )
  {
    sub_1C00438A0(0LL, v4, *(struct _LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
    return sub_1C00446D4(a1, 2LL);
  }
  else
  {
    if ( a2 == 3 )
    {
      v8 = sub_1C0015EB4(*(_QWORD *)(a1 + 8), &v10);
      if ( v8 >= 0 )
        sub_1C0012810(*(struct _DEVICE_OBJECT **)(a1 + 8), 6u, a1);
      sub_1C00438A0(0LL, v7, *(struct _LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
      v6 = 4;
      if ( v8 >= 0 )
        sub_1C003A450(*(_QWORD *)(a1 + 8), a1);
    }
    else if ( a2 == 4 )
    {
      v6 = 5;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 8);
      if ( a2 != 5 )
        sub_1C002DC78(v5, a1);
      sub_1C003CAB8(v5);
      sub_1C0012810(*(struct _DEVICE_OBJECT **)(a1 + 8), 6u, a1);
      sub_1C0059DA0(*(_QWORD *)(a1 + 8), a1);
      sub_1C0031404(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 4);
      sub_1C003A450(*(_QWORD *)(a1 + 8), a1);
      v6 = 7;
    }
    sub_1C0043DE0(*(_QWORD *)(a1 + 8), v6, a2);
    sub_1C00317D8(*(_QWORD *)(a1 + 8), a1);
    return 0LL;
  }
}
