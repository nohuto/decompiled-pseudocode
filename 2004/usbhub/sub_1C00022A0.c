/*
 * XREFs of sub_1C00022A0 @ 0x1C00022A0
 * Callers:
 *     sub_1C0003300 @ 0x1C0003300 (sub_1C0003300.c)
 * Callees:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016A98 @ 0x1C0016A98 (sub_1C0016A98.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C00022A0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 result; // rax
  int v6; // r9d
  unsigned __int16 i; // bx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+90h] [rbp+18h] BYREF
  int v14; // [rsp+98h] [rbp+20h] BYREF

  v14 = 0;
  v13 = 0;
  v4 = sub_1C000F050(a1);
  result = sub_1C000FD80(a1, 2048, 1114862963, 0, 0LL);
  if ( *(_DWORD *)(v4 + 4216) != v6 )
  {
    for ( i = 1; ; ++i )
    {
      result = sub_1C000F050(a1);
      if ( i > *(unsigned __int8 *)(result + 2938) )
        break;
      v8 = sub_1C000A080(a1, i, &v13, &v14);
      if ( v8 < 0 )
      {
        if ( !(unsigned __int8)sub_1C001CEB4((unsigned int)v8) )
        {
          LOBYTE(v12) = 0;
          sub_1C004A608(a1, i, 78, 0, 0, v11, v14, (__int64)aBusmC, 1198, v12);
          *(_DWORD *)(v4 + 4216) = 2;
        }
      }
      else if ( (v13 & 7) == 3 )
      {
        v9 = sub_1C0016B5C(a1, i, 0LL, 1180976179LL);
        v10 = v9;
        if ( !v9 || !*(_DWORD *)(sub_1C0011220(v9) + 2800) )
          sub_1C0016A98(a1, a2, i);
        if ( v10 )
          sub_1C00171A0(a1, v10, 0LL, 1180976179LL);
      }
    }
  }
  return result;
}
