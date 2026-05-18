/*
 * XREFs of sub_180070B8C @ 0x180070B8C
 * Callers:
 *     sub_18001727C @ 0x18001727C (sub_18001727C.c)
 *     sub_18002395C @ 0x18002395C (sub_18002395C.c)
 *     sub_180023BA4 @ 0x180023BA4 (sub_180023BA4.c)
 *     sub_180023DEC @ 0x180023DEC (sub_180023DEC.c)
 *     sub_180024034 @ 0x180024034 (sub_180024034.c)
 *     sub_18002427C @ 0x18002427C (sub_18002427C.c)
 *     sub_18007016C @ 0x18007016C (sub_18007016C.c)
 * Callees:
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_18007B1D8 @ 0x18007B1D8 (sub_18007B1D8.c)
 */

__int64 __fastcall sub_180070B8C(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = sub_18007B1D8(*(_QWORD *)(a1 + 3984));
  sub_180066E84(v3, a2);
  return a2;
}
