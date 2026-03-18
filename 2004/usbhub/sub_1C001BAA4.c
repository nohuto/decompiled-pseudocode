/*
 * XREFs of sub_1C001BAA4 @ 0x1C001BAA4
 * Callers:
 *     sub_1C001B9C0 @ 0x1C001B9C0 (sub_1C001B9C0.c)
 *     sub_1C0031080 @ 0x1C0031080 (sub_1C0031080.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

void __fastcall sub_1C001BAA4(__int64 a1)
{
  _DWORD *v2; // rax
  __int64 v3; // r11
  int v4; // r10d

  v2 = sub_1C000F050(a1);
  _InterlockedExchangeAdd(v2 + 685, 0xFFFFFFFF);
  sub_1C000FD80(a1, 4, 1212764717, a1, (int)v2[685]);
  if ( v4 == 1 )
    KeSetEvent((PRKEVENT)(v3 + 2744), 0, 0);
}
