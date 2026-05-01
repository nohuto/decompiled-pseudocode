/*
 * XREFs of sub_18007D30C @ 0x18007D30C
 * Callers:
 *     sub_18001BCA0 @ 0x18001BCA0 (sub_18001BCA0.c)
 *     sub_18007E180 @ 0x18007E180 (sub_18007E180.c)
 * Callees:
 *     sub_180004934 @ 0x180004934 (sub_180004934.c)
 *     sub_180007F10 @ 0x180007F10 (sub_180007F10.c)
 */

__int64 __fastcall sub_18007D30C(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ecx
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)sub_180004934(a1, 28LL, a3) )
  {
    v5 = sub_180007F10(*(_QWORD *)(a1 + 1112), a2, (__int64 *)&v7);
    if ( v5 >= 0 )
      return *(_QWORD *)(a1 + 936) < v7 ? 0xC0EC0005 : 0;
  }
  else
  {
    return (unsigned int)-1058275323;
  }
  return (unsigned int)v5;
}
