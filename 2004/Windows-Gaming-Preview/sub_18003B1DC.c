/*
 * XREFs of sub_18003B1DC @ 0x18003B1DC
 * Callers:
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_1800388C4 @ 0x1800388C4 (sub_1800388C4.c)
 * Callees:
 *     sub_18003B3E4 @ 0x18003B3E4 (sub_18003B3E4.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     memcmp @ 0x180045C77 (memcmp.c)
 */

__int64 __fastcall sub_18003B1DC(__int64 a1, __int64 a2, __int64 a3, const void *a4, __int64 a5)
{
  const void *v5; // r10
  int v7; // r12d
  __int64 v8; // r14
  _QWORD *v9; // r15
  _QWORD *v10; // rsi
  __int64 *v11; // rbx
  bool i; // r13
  int v13; // eax
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // [rsp+60h] [rbp+8h] BYREF
  const void *v24; // [rsp+78h] [rbp+20h]

  v24 = a4;
  v5 = a4;
  v7 = a1;
  v8 = a5;
  v9 = *(_QWORD **)a1;
  v10 = *(_QWORD **)a1;
  v11 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  for ( i = 1; !*((_BYTE *)v11 + 25); v5 = v24 )
  {
    v10 = v11;
    v13 = memcmp(v5, v11 + 4, 0x10uLL);
    i = v13 < 0;
    if ( v13 >= 0 )
      v11 = (__int64 *)v11[2];
    else
      v11 = (__int64 *)*v11;
  }
  try
  {
    v14 = v10;
    v15 = v10;
    if ( i )
    {
      if ( v10 == (_QWORD *)*v9 )
      {
        *(_QWORD *)a2 = *(_QWORD *)sub_18003B3E4(v7, (unsigned int)&v23, 1, (_DWORD)v10);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v10 + 25) )
      {
        v14 = (_QWORD *)v10[2];
      }
      else
      {
        v18 = *v10;
        if ( *(_BYTE *)(*v10 + 25LL) )
        {
          v19 = v10[1];
          if ( !*(_BYTE *)(v19 + 25) )
          {
            v20 = v10;
            do
            {
              v15 = v20;
              if ( v20 != *(_QWORD **)v19 )
                break;
              v14 = (_QWORD *)v19;
              v19 = *(_QWORD *)(v19 + 8);
              v20 = v14;
              v15 = v14;
            }
            while ( !*(_BYTE *)(v19 + 25) );
          }
          if ( !*((_BYTE *)v14 + 25) )
          {
            v14 = (_QWORD *)v19;
            v15 = (_QWORD *)v19;
          }
          goto LABEL_21;
        }
        do
        {
          v14 = (_QWORD *)v18;
          v18 = *(_QWORD *)(v18 + 16);
        }
        while ( !*(_BYTE *)(v18 + 25) );
      }
      v15 = v14;
    }
LABEL_21:
    if ( memcmp(v15 + 4, v5, 0x10uLL) >= 0 )
    {
      v22 = *(_QWORD *)(v8 + 48);
      if ( v22 )
        j_j__o_free(v22, v21);
      j_j__o_free(v8, 56LL);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)sub_18003B3E4(v7, (unsigned int)&v23, i, (_DWORD)v10);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    sub_18003B3B4(v16, a5);
    throw;
  }
  return result;
}
