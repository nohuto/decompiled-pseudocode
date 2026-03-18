/*
 * XREFs of sub_1C0019404 @ 0x1C0019404
 * Callers:
 *     sub_1C00109A0 @ 0x1C00109A0 (sub_1C00109A0.c)
 * Callees:
 *     sub_1C0017A30 @ 0x1C0017A30 (sub_1C0017A30.c)
 *     sub_1C0018750 @ 0x1C0018750 (sub_1C0018750.c)
 *     sub_1C0019484 @ 0x1C0019484 (sub_1C0019484.c)
 */

__int64 __fastcall sub_1C0019404(__int64 a1, int a2, int a3, IRP *a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned int v8; // ebx

  v6 = sub_1C0019484(a1, a2, a3, 0, (__int64)a4, 1, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = sub_1C0017A30(a1, (int)sub_1C00173C0, v6, a4);
    if ( (v8 & 0xC0000000) == 0xC0000000 )
      sub_1C0018750(a1, v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
