/*
 * XREFs of sub_18002AF64 @ 0x18002AF64
 * Callers:
 *     sub_18001BE70 @ 0x18001BE70 (sub_18001BE70.c)
 *     sub_18002A7A0 @ 0x18002A7A0 (sub_18002A7A0.c)
 *     sub_18005841C @ 0x18005841C (sub_18005841C.c)
 *     sub_1800D6A04 @ 0x1800D6A04 (sub_1800D6A04.c)
 * Callees:
 *     sub_180011960 @ 0x180011960 (sub_180011960.c)
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 *     sub_18002AEF8 @ 0x18002AEF8 (sub_18002AEF8.c)
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002AF64(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  result = sub_18002AEF8(&v5);
  if ( (int)result >= 0 )
  {
    v6 = 0LL;
    result = sub_180011960(v5, a1, (__int64)&v6);
    v4 = v6;
    if ( !(_DWORD)result )
    {
      LOBYTE(v3) = 1;
      result = sub_18002C2A0(v6, 2LL, v3);
    }
    if ( v4 )
      result = sub_18002B930(v4);
  }
  if ( v5 )
    return sub_18002AD80(v5);
  return result;
}
