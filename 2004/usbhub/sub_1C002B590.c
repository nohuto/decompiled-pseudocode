/*
 * XREFs of sub_1C002B590 @ 0x1C002B590
 * Callers:
 *     sub_1C002BCB8 @ 0x1C002BCB8 (sub_1C002BCB8.c)
 *     sub_1C002BE50 @ 0x1C002BE50 (sub_1C002BE50.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C002B590(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4, int a5, char a6)
{
  bool v10; // cf
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+78h] [rbp+10h] BYREF
  __int16 v15; // [rsp+79h] [rbp+11h]
  char v16; // [rsp+7Bh] [rbp+13h]
  __int16 v17; // [rsp+7Ch] [rbp+14h]
  __int16 v18; // [rsp+7Eh] [rbp+16h]
  int v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0;
  sub_1C000F050(a1);
  v10 = a6 != 0;
  a6 = -a6;
  v15 = 6;
  v16 = a4;
  v17 = 0;
  v14 = v10 ? -96 : 0x80;
  v18 = *a2;
  v11 = sub_1C000A740(a1, (__int64)&v14, a3, a2, v13, &v19);
  if ( (v11 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v11) )
    sub_1C004A608(a1, 0, 16, a3, *a2, v11, v19, (__int64)aHubC, 3814, 0);
  return v11;
}
