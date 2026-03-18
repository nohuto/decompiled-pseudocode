/*
 * XREFs of sub_1C002F8C0 @ 0x1C002F8C0
 * Callers:
 *     sub_1C002F6C0 @ 0x1C002F6C0 (sub_1C002F6C0.c)
 *     sub_1C004A2B0 @ 0x1C004A2B0 (sub_1C004A2B0.c)
 * Callees:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001853C @ 0x1C001853C (sub_1C001853C.c)
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002D7DC @ 0x1C002D7DC (sub_1C002D7DC.c)
 *     sub_1C002EC68 @ 0x1C002EC68 (sub_1C002EC68.c)
 *     sub_1C002FE20 @ 0x1C002FE20 (sub_1C002FE20.c)
 *     sub_1C0033E18 @ 0x1C0033E18 (sub_1C0033E18.c)
 *     sub_1C00341E8 @ 0x1C00341E8 (sub_1C00341E8.c)
 *     sub_1C00344AC @ 0x1C00344AC (sub_1C00344AC.c)
 *     sub_1C0034AF8 @ 0x1C0034AF8 (sub_1C0034AF8.c)
 */

__int64 __fastcall sub_1C002F8C0(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v6; // rsi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // r10d
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r10
  int v15; // r11d
  __int64 v16; // r10
  int v17; // r11d
  int v18; // r11d
  int v20; // [rsp+78h] [rbp+10h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF

  v20 = 0;
  v6 = a2;
  sub_1C000F050(a1);
  v8 = sub_1C0016CA0(a1, v6);
  sub_1C000FD80(a1, 0x4000, 1870033495, a3, v6);
  sub_1C001853C(a1, 0x1F4u);
  sub_1C000FD80(a1, 0x4000, 1870016848, a3, (unsigned __int16)v6);
  v9 = sub_1C0016CA0(a1, v6);
  if ( v9 )
    sub_1C002EC68(a1, v9, 3, a3);
  sub_1C0033E18(a1, a3, (unsigned __int16)v6);
  v10 = (int)sub_1C002D7DC(a1, v6);
  sub_1C000FD80(a1, 0x4000, 1870017104, v10, (unsigned __int16)v6);
  if ( v11 < 0 )
  {
    if ( !sub_1C001CEB4(v11) )
    {
      sub_1C000FD80(a1, v18, 1870017569, a3, v6);
      sub_1C001A550(a1, a3, 3);
    }
  }
  else
  {
    sub_1C001853C(a1, HIDWORD(stru_1C006B480.Dpc.DpcListEntry.Next));
    sub_1C00344AC(a1, a3, (unsigned __int16)v6);
    sub_1C000FD80(a1, 0x4000, 1870025299, v10, (unsigned __int16)v6);
    v12 = sub_1C000A080(a1, v6, (__int64)&v20, &v21);
    if ( !sub_1C001CEB4(v12) )
    {
      sub_1C000FD80(a1, 16, 1870017616, (unsigned __int16)v20, HIWORD(v20));
      sub_1C000FD80(a1, v15, 1870017582, v14, (unsigned __int16)v6);
      if ( (int)v16 >= 0 && (v20 & 1) != 0 && (v20 & 0x10000) == 0 )
      {
        sub_1C000FD80(a1, v17, 1870017872, (unsigned __int16)v6, v16);
        sub_1C0034AF8(a1, (unsigned __int16)v6, a3, 0LL);
      }
      *(_DWORD *)(v8 + 2404) = 0;
      sub_1C000FD80(a1, 0x4000, 1870017381, a3, (unsigned __int16)v6);
      sub_1C00341E8(a1, a3, (unsigned __int16)v6);
    }
  }
  LOBYTE(v13) = a4;
  return sub_1C002FE20(a1, v8, v13);
}
