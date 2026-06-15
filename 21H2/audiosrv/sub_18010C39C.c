/*
 * XREFs of sub_18010C39C @ 0x18010C39C
 * Callers:
 *     sub_18010C07C @ 0x18010C07C (sub_18010C07C.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 *     sub_18010BF08 @ 0x18010BF08 (sub_18010BF08.c)
 */

__int64 __fastcall sub_18010C39C(__int64 *a1, __int64 a2, __int64 a3, _OWORD *a4, __int64 a5)
{
  __int64 v7; // r14
  _QWORD *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbx
  char v11; // r15
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // [rsp+20h] [rbp-58h]
  __int128 Buf2; // [rsp+30h] [rbp-48h] BYREF
  __int128 Buf1; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF
  _OWORD *v23; // [rsp+98h] [rbp+20h]

  v23 = a4;
  v7 = a5;
  v8 = (_QWORD *)*a1;
  v9 = *a1;
  v10 = *(_QWORD *)(*a1 + 8);
  v11 = 1;
  while ( !*(_BYTE *)(v10 + 25) )
  {
    v9 = v10;
    Buf2 = *(_OWORD *)(v10 + 32);
    Buf1 = *a4;
    v12 = memcmp(&Buf1, &Buf2, 0x10uLL);
    if ( v12 >= 0 )
    {
      v11 = 0;
      v10 = *(_QWORD *)(v10 + 16);
    }
    else
    {
      v11 = 1;
      v10 = *(_QWORD *)v10;
    }
    a4 = v23;
  }
  try
  {
    v13 = v9;
    if ( v11 )
    {
      if ( v9 == *v8 )
      {
        *(_QWORD *)a2 = *sub_18010BF08(a1, &v22, 1, (_QWORD *)v9, v19, v7);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v9 + 25) )
      {
        v13 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        v16 = *(_QWORD *)v9;
        if ( *(_BYTE *)(*(_QWORD *)v9 + 25LL) )
        {
          v17 = *(_QWORD *)(v9 + 8);
          if ( !*(_BYTE *)(v17 + 25) )
          {
            v18 = v9;
            do
            {
              if ( v18 != *(_QWORD *)v17 )
                break;
              v13 = v17;
              v17 = *(_QWORD *)(v17 + 8);
              v18 = v13;
            }
            while ( !*(_BYTE *)(v17 + 25) );
          }
          if ( !*(_BYTE *)(v13 + 25) )
            v13 = v17;
        }
        else
        {
          do
          {
            v13 = v16;
            v16 = *(_QWORD *)(v16 + 16);
          }
          while ( !*(_BYTE *)(v16 + 25) );
        }
      }
    }
    Buf1 = *a4;
    Buf2 = *(_OWORD *)(v13 + 32);
    if ( memcmp(&Buf2, &Buf1, 0x10uLL) >= 0 )
    {
      sub_18000F708((__int64 *)(v7 + 48));
      sub_1800472E0(v7, 0x48uLL);
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *sub_18010BF08(a1, &v22, v11, (_QWORD *)v9, v19, v7);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    sub_18010E48C(v14, a5);
    throw;
  }
  return result;
}
