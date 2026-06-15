/*
 * XREFs of sub_1800E2FE0 @ 0x1800E2FE0
 * Callers:
 *     sub_180032170 @ 0x180032170 (sub_180032170.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800E2E68 @ 0x1800E2E68 (sub_1800E2E68.c)
 */

__int64 __fastcall sub_1800E2FE0(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 v8; // r9
  __int64 v9; // rax
  char v10; // r10
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 8);
  v10 = 1;
  if ( !*(_BYTE *)(v9 + 25) )
  {
    a3 = (unsigned int)*a4;
    do
    {
      v8 = v9;
      if ( (unsigned int)a3 >= *(_DWORD *)(v9 + 28) )
      {
        v10 = 0;
        v9 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        v10 = 1;
        v9 = *(_QWORD *)v9;
      }
    }
    while ( !*(_BYTE *)(v9 + 25) );
  }
  try
  {
    v11 = v8;
    if ( v10 )
    {
      if ( v8 == *(_QWORD *)*a1 )
      {
        LOBYTE(a3) = 1;
        *(_QWORD *)a2 = *sub_1800E2E68(a1, &v17, a3, (__int64 *)v8, v16, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v8 + 25) )
      {
        v11 = *(_QWORD *)(v8 + 16);
      }
      else
      {
        v13 = *(_QWORD *)v8;
        if ( *(_BYTE *)(*(_QWORD *)v8 + 25LL) )
        {
          v14 = *(_QWORD *)(v8 + 8);
          if ( !*(_BYTE *)(v14 + 25) )
          {
            v15 = v8;
            do
            {
              if ( v15 != *(_QWORD *)v14 )
                break;
              v11 = v14;
              v14 = *(_QWORD *)(v14 + 8);
              v15 = v11;
            }
            while ( !*(_BYTE *)(v14 + 25) );
          }
          if ( !*(_BYTE *)(v11 + 25) )
            v11 = v14;
        }
        else
        {
          do
          {
            v11 = v13;
            v13 = *(_QWORD *)(v13 + 16);
          }
          while ( !*(_BYTE *)(v13 + 25) );
        }
      }
    }
    if ( *(_DWORD *)(v11 + 28) >= *a4 )
    {
      sub_1800472E0(a5, 0x28uLL);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      LOBYTE(a3) = v10;
      *(_QWORD *)a2 = *sub_1800E2E68(a1, &v17, a3, (__int64 *)v8, v16, a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    sub_1800472E0(a5, 0x28uLL);
    throw;
  }
  return result;
}
