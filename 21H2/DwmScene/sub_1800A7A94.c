/*
 * XREFs of sub_1800A7A94 @ 0x1800A7A94
 * Callers:
 *     sub_1800A7964 @ 0x1800A7964 (sub_1800A7964.c)
 *     sub_1800A7A94 @ 0x1800A7A94 (sub_1800A7A94.c)
 * Callees:
 *     sub_1800A7850 @ 0x1800A7850 (sub_1800A7850.c)
 *     sub_1800A7A94 @ 0x1800A7A94 (sub_1800A7A94.c)
 */

__int64 __fastcall sub_1800A7A94(__int64 *a1, __int64 a2, __int64 a3, char a4)
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
    v9 = sub_1800A7850((__int64)a1, *a1, (_QWORD *)(a2 + 32));
    v9[1] = a3;
    *((_BYTE *)v9 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v8 + 25) )
      v8 = (__int64)v9;
    LOBYTE(v10) = a4;
    try
    {
      *v9 = sub_1800A7A94(a1, *(_QWORD *)a2, v9, v10);
      LOBYTE(v11) = a4;
      v9[2] = sub_1800A7A94(a1, *(_QWORD *)(a2 + 16), v9, v11);
    }
    catch ( ... )
    {
      v13 = sub_180010B74((__int64)a1);
      v14 = sub_180010B74((__int64)a1);
      sub_1800A7C10(v14, v13, v8);
      throw;
    }
  }
  return v8;
}
