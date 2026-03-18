/*
 * XREFs of sub_1C0042430 @ 0x1C0042430
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FE00 @ 0x1C000FE00 (sub_1C000FE00.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0011C40 @ 0x1C0011C40 (sub_1C0011C40.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C0037200 @ 0x1C0037200 (sub_1C0037200.c)
 */

__int64 __fastcall sub_1C0042430(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  int v7; // eax
  __int64 v8; // rax

  v6 = sub_1C0011220(a3);
  KeWaitForSingleObject(v6 + 724, Executive, 0, 0, 0LL);
  if ( sub_1C0011220(a3)[280] == 100 )
  {
    v7 = v6[355];
    if ( (v7 & 0x18000000) != 0 )
    {
      if ( (v7 & 0x10000000) != 0 )
        sub_1C0011C40(
          a1,
          (__int64)(v6 + 426),
          10000,
          *((unsigned __int16 *)v6 + 714),
          *((_QWORD *)v6 + 105),
          0x77464E44u);
    }
    else
    {
      v6[355] = v7 | 0x8000000;
      v8 = sub_1C0016CA0(a1, a2);
      sub_1C0037200(a1, v8);
      sub_1C000FE00(a1, a2, 1, 0);
    }
  }
  KeSetEvent((PRKEVENT)(v6 + 724), 0, 0);
  sub_1C00171A0(a1, a3, 0LL, 0x444E4654u);
  return 0LL;
}
