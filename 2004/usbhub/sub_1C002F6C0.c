/*
 * XREFs of sub_1C002F6C0 @ 0x1C002F6C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0001AE8 @ 0x1C0001AE8 (sub_1C0001AE8.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 *     sub_1C002F8C0 @ 0x1C002F8C0 (sub_1C002F8C0.c)
 *     sub_1C002FE20 @ 0x1C002FE20 (sub_1C002FE20.c)
 *     sub_1C002FED0 @ 0x1C002FED0 (sub_1C002FED0.c)
 */

void __fastcall sub_1C002F6C0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9

  sub_1C000F050(a1);
  v6 = sub_1C0016CA0(a1, a2);
  if ( (int)sub_1C002FED0(a1, 8LL, 0LL, a2) < 0 || (int)sub_1C0001AE8(a1, a3, 1466000239) < 0 )
  {
    LOBYTE(v7) = 1;
    sub_1C002FE20(a1, v6, v7);
  }
  else
  {
    LOBYTE(v8) = 1;
    sub_1C002F8C0(a1, a2, a3, v8);
    sub_1C001B88C(a1, a3);
  }
}
