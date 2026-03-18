/*
 * XREFs of sub_1C001BEB8 @ 0x1C001BEB8
 * Callers:
 *     sub_1C001BDDC @ 0x1C001BDDC (sub_1C001BDDC.c)
 * Callees:
 *     sub_1C00015A0 @ 0x1C00015A0 (sub_1C00015A0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001BFA0 @ 0x1C001BFA0 (sub_1C001BFA0.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C001BEB8(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  int v8; // eax
  _DWORD *v10; // rax
  unsigned int v11; // r10d
  int v12; // r10d
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v5 = a3;
  v14 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 46, (__int64)&unk_1C0062100, *(_WORD *)(a4 + 4));
  sub_1C000FD80(a1, 1024, 1936937549, a4, v5);
  sub_1C000F050(a1);
  if ( (v5 & 0x1A) == 0x18 && a5 )
  {
    v10 = sub_1C0011220(a5);
    v10[355] |= 0x2000u;
  }
  if ( (v5 & 2) == 0 || (v5 & 0x10) == 0 )
    goto LABEL_10;
  v8 = sub_1C001BFA0(a1, a4, &v14);
  v13 = *(unsigned __int16 *)(a4 + 4);
  if ( v8 < 0 )
  {
    sub_1C000FD80(a1, 16, 1347568944, v8, v13);
    if ( !(unsigned __int8)sub_1C001CEB4(v11) )
      sub_1C004A608(a1, *(unsigned __int16 *)(a4 + 4), 47, 0, 0, v12, v14, (__int64)aBusfuncC, 3115, 0);
LABEL_10:
    sub_1C00015A0(a1, a4);
    return 0LL;
  }
  sub_1C000FD80(a1, 16, 2004111955, 0LL, v13);
  return 0LL;
}
