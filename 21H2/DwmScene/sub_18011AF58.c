/*
 * XREFs of sub_18011AF58 @ 0x18011AF58
 * Callers:
 *     sub_18011AEBC @ 0x18011AEBC (sub_18011AEBC.c)
 *     sub_18011AF58 @ 0x18011AF58 (sub_18011AF58.c)
 * Callees:
 *     sub_18011AD54 @ 0x18011AD54 (sub_18011AD54.c)
 *     sub_18011AF58 @ 0x18011AF58 (sub_18011AF58.c)
 */

__int64 __fastcall sub_18011AF58(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rsi
  _DWORD *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v13; // rbx
  __int64 v14; // rax

  v8 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v9 = sub_18011AD54((__int64)a1, *a1, a2 + 32);
    *((_QWORD *)v9 + 1) = a3;
    *((_BYTE *)v9 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v8 + 25) )
      v8 = (__int64)v9;
    LOBYTE(v10) = a4;
    try
    {
      *(_QWORD *)v9 = sub_18011AF58(a1, *(_QWORD *)a2, v9, v10);
      LOBYTE(v11) = a4;
      *((_QWORD *)v9 + 2) = sub_18011AF58(a1, *(_QWORD *)(a2 + 16), v9, v11);
    }
    catch ( ... )
    {
      v13 = sub_180010B74((__int64)a1);
      v14 = sub_180010B74((__int64)a1);
      sub_18006E8C4(v14, v13, (__int64 *)v8);
      throw;
    }
  }
  return v8;
}
