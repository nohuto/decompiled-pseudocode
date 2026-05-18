/*
 * XREFs of sub_180074074 @ 0x180074074
 * Callers:
 *     sub_18007624C @ 0x18007624C (sub_18007624C.c)
 * Callees:
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_180072F08 @ 0x180072F08 (sub_180072F08.c)
 *     sub_180074DC4 @ 0x180074DC4 (sub_180074DC4.c)
 */

_QWORD *__fastcall sub_180074074(__int64 **a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 *v9; // rdi
  _QWORD *result; // rax
  _QWORD *v11; // r9
  unsigned __int64 v12; // r13
  bool v13; // cf
  __int64 v14; // r9
  char v15; // dl
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 i; // rcx
  __int64 *v19; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-50h]
  __int64 **v21; // [rsp+40h] [rbp-48h] BYREF

  v21 = a1;
  v20 = a5;
  v9 = *a1;
  if ( a1[1] )
  {
    if ( a3 == (__int64 *)*v9 )
    {
      if ( *(_QWORD *)(a4 + 8) < (unsigned __int64)a3[5] )
      {
        sub_180072F08(a1, a2, 1, a3, a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    if ( a3 == v9 )
    {
      v11 = (_QWORD *)v9[2];
      if ( v11[5] < *(_QWORD *)(a4 + 8) )
      {
        sub_180072F08(a1, a2, 0, v11, a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    v12 = *(_QWORD *)(a4 + 8);
    v13 = a3[5] < v12;
    if ( a3[5] > v12 )
    {
      v19 = a3;
      sub_180027CD0(&v19);
      if ( v19[5] < v12 )
      {
        if ( *(_BYTE *)(v19[2] + 25) )
          sub_180072F08(a1, a2, 0, v19, a4, a5);
        else
          sub_180072F08(a1, a2, 1, a3, a4, a5);
        return a2;
      }
      v13 = a3[5] < v12;
    }
    if ( !v13 )
      goto LABEL_30;
    v14 = a3[2];
    v15 = *(_BYTE *)(v14 + 25);
    if ( v15 )
    {
      v14 = a3[1];
      if ( !*(_BYTE *)(v14 + 25) )
      {
        v16 = a3;
        do
        {
          v17 = (__int64 *)v14;
          if ( v16 != *(__int64 **)(v14 + 16) )
            break;
          v14 = *(_QWORD *)(v14 + 8);
          v16 = v17;
        }
        while ( !*(_BYTE *)(v14 + 25) );
      }
    }
    else
    {
      for ( i = *(_QWORD *)v14; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
        v14 = i;
    }
    if ( (__int64 *)v14 != v9 && v12 >= *(_QWORD *)(v14 + 40) )
    {
LABEL_30:
      *a2 = *(_QWORD *)sub_180074DC4((_DWORD)a1, (unsigned int)&v21, 0, a4, (__int64)a5);
      return a2;
    }
    if ( v15 )
      sub_180072F08(a1, a2, 0, a3, a4, a5);
    else
      sub_180072F08(a1, a2, 1, (_QWORD *)v14, a4, a5);
    return a2;
  }
  else
  {
    try
    {
      sub_180072F08(a1, a2, 1, v9, a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_180080E44(v21, v20);
      throw;
    }
  }
  return result;
}
