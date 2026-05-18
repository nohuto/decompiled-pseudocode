/*
 * XREFs of sub_18007CF50 @ 0x18007CF50
 * Callers:
 *     sub_18007CEB4 @ 0x18007CEB4 (sub_18007CEB4.c)
 *     sub_18007CF50 @ 0x18007CF50 (sub_18007CF50.c)
 * Callees:
 *     sub_18006C840 @ 0x18006C840 (sub_18006C840.c)
 *     sub_18007CF50 @ 0x18007CF50 (sub_18007CF50.c)
 */

__int64 __fastcall sub_18007CF50(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v13; // rbx
  __int64 v14; // rax

  v8 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v9 = sub_18006C840((__int64)a1, *a1, a2 + 32);
    v9[1] = a3;
    *((_BYTE *)v9 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v8 + 25) )
      v8 = (__int64)v9;
    LOBYTE(v10) = a4;
    try
    {
      *v9 = sub_18007CF50(a1, *(_QWORD *)a2, v9, v10);
      LOBYTE(v11) = a4;
      v9[2] = sub_18007CF50(a1, *(_QWORD *)(a2 + 16), v9, v11);
    }
    catch ( ... )
    {
      v13 = sub_180010A94((__int64)a1);
      v14 = sub_180010A94((__int64)a1);
      sub_18006D11C(v14, v13, (__int64 *)v8);
      throw;
    }
  }
  return v8;
}
