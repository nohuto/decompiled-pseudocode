/*
 * XREFs of sub_18010C07C @ 0x18010C07C
 * Callers:
 *     sub_18010C668 @ 0x18010C668 (sub_18010C668.c)
 * Callees:
 *     memcmp @ 0x180074433 (memcmp.c)
 *     sub_1800E3598 @ 0x1800E3598 (sub_1800E3598.c)
 *     sub_18010BF08 @ 0x18010BF08 (sub_18010BF08.c)
 *     sub_18010C39C @ 0x18010C39C (sub_18010C39C.c)
 */

__int64 *__fastcall sub_18010C07C(__int64 *a1, __int64 *a2, __int64 a3, __int128 *a4, __int64 a5)
{
  _QWORD *v9; // r15
  __int64 v10; // rcx
  int v11; // r8d
  __int64 *result; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  int v20; // [rsp+20h] [rbp-58h]
  __int128 Buf2; // [rsp+30h] [rbp-48h] BYREF
  __int128 Buf1; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+80h] [rbp+8h] BYREF

  v9 = (_QWORD *)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      Buf2 = *(_OWORD *)(a3 + 32);
      Buf1 = *a4;
      if ( memcmp(&Buf1, &Buf2, 0x10uLL) < 0 )
      {
        sub_18010BF08(a1, a2, 1, (_QWORD *)a3, v20, a5);
        return a2;
      }
      goto LABEL_31;
    }
    if ( (_QWORD *)a3 == v9 )
    {
      v13 = v9[2];
      Buf1 = *a4;
      Buf2 = *(_OWORD *)(v13 + 32);
      if ( memcmp(&Buf2, &Buf1, 0x10uLL) < 0 )
      {
        sub_18010BF08(a1, a2, 0, (_QWORD *)v13, v20, a5);
        return a2;
      }
      goto LABEL_31;
    }
    Buf1 = *(_OWORD *)(a3 + 32);
    Buf2 = *a4;
    if ( memcmp(&Buf2, &Buf1, 0x10uLL) >= 0 )
      goto LABEL_24;
    v14 = a3;
    if ( *(_BYTE *)(a3 + 25) )
    {
      v14 = *(_QWORD *)(a3 + 16);
    }
    else
    {
      v15 = *(_QWORD *)a3;
      if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
      {
        v16 = *(_QWORD *)(a3 + 8);
        if ( !*(_BYTE *)(v16 + 25) )
        {
          v17 = a3;
          do
          {
            v18 = v16;
            if ( v17 != *(_QWORD *)v16 )
              break;
            v14 = v16;
            v16 = *(_QWORD *)(v16 + 8);
            v17 = v18;
          }
          while ( !*(_BYTE *)(v16 + 25) );
        }
        if ( !*(_BYTE *)(v14 + 25) )
          v14 = v16;
      }
      else
      {
        do
        {
          v14 = v15;
          v15 = *(_QWORD *)(v15 + 16);
        }
        while ( !*(_BYTE *)(v15 + 25) );
      }
    }
    Buf1 = *a4;
    Buf2 = *(_OWORD *)(v14 + 32);
    if ( memcmp(&Buf2, &Buf1, 0x10uLL) >= 0 )
    {
LABEL_24:
      Buf1 = *a4;
      Buf2 = *(_OWORD *)(a3 + 32);
      if ( memcmp(&Buf2, &Buf1, 0x10uLL) >= 0
        || (v23 = a3, sub_1800E3598(&v23), v19 = (_QWORD *)v23, (_QWORD *)v23 != v9)
        && (Buf1 = *(_OWORD *)(v23 + 32), Buf2 = *a4, memcmp(&Buf2, &Buf1, 0x10uLL) >= 0) )
      {
LABEL_31:
        *a2 = *(_QWORD *)sub_18010C39C((_DWORD)a1, (unsigned int)&Buf1, v11, (_DWORD)a4, a5);
        return a2;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
        sub_18010BF08(a1, a2, 0, (_QWORD *)a3, v20, a5);
      else
        sub_18010BF08(a1, a2, 1, v19, v20, a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)(v14 + 16) + 25LL) )
        sub_18010BF08(a1, a2, 0, (_QWORD *)v14, v20, a5);
      else
        sub_18010BF08(a1, a2, 1, (_QWORD *)a3, v20, a5);
      return a2;
    }
  }
  else
  {
    try
    {
      sub_18010BF08(a1, a2, 1, v9, v20, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_18010E48C(v10, a5);
      throw;
    }
  }
  return result;
}
