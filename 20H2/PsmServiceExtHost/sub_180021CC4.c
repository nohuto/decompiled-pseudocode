/*
 * XREFs of sub_180021CC4 @ 0x180021CC4
 * Callers:
 *     sub_18001F8F0 @ 0x18001F8F0 (sub_18001F8F0.c)
 * Callees:
 *     sub_180034F2C @ 0x180034F2C (sub_180034F2C.c)
 *     sub_180071664 @ 0x180071664 (sub_180071664.c)
 *     sub_180071A28 @ 0x180071A28 (sub_180071A28.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 */

__int64 __fastcall sub_180021CC4(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbp
  __int64 result; // rax
  int v7; // esi
  __int64 v8; // rbx
  _BYTE v9[16]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C8h]
  _BYTE v11[48]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v12; // [rsp+B0h] [rbp-58h]

  if ( a2 > a1[147] && a2 < a3 )
  {
    v5 = a1[7];
    result = sub_180034F2C(v5, a1[6] + 400LL, v11, v9);
    v7 = v12 - v10;
    v8 = a3 - a2 + 1;
    if ( v12 - v10 < v8 )
    {
      sub_180071A28(v5, 0, v5 + 144, 67, (__int64)sub_1800714F0, 2LL);
      result = sub_180071664(v5, (int)v5 + 144, 0, (int)v8 - v7, 0, 2);
      if ( *(_DWORD *)(v5 + 184) )
        return sub_180071C14((int)v5 + 144, 2, 8, 0, 0LL);
    }
  }
  return result;
}
