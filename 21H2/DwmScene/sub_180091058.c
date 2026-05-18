/*
 * XREFs of sub_180091058 @ 0x180091058
 * Callers:
 *     sub_180091404 @ 0x180091404 (sub_180091404.c)
 * Callees:
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_180067388 @ 0x180067388 (sub_180067388.c)
 *     sub_180091248 @ 0x180091248 (sub_180091248.c)
 */

_QWORD *__fastcall sub_180091058(_QWORD *a1, _QWORD *a2, __int64 *a3, unsigned __int16 *a4, _QWORD *a5)
{
  __int64 **v9; // rdi
  _QWORD *result; // rax
  __int64 *v11; // r9
  unsigned __int16 v12; // r13
  bool v13; // cf
  __int64 **v14; // r9
  char v15; // dl
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 *i; // rcx
  __int64 *v19; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-40h]
  _QWORD *v21; // [rsp+40h] [rbp-38h] BYREF

  v21 = a1;
  v20 = a5;
  v9 = (__int64 **)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      if ( *a4 < *((_WORD *)a3 + 14) )
      {
        sub_180067388(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    if ( a3 == (__int64 *)v9 )
    {
      v11 = v9[2];
      if ( *((_WORD *)v11 + 14) < *a4 )
      {
        sub_180067388(a1, a2, 0, v11, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    v12 = *a4;
    v13 = *((_WORD *)a3 + 14) < *a4;
    if ( *((_WORD *)a3 + 14) > *a4 )
    {
      v19 = a3;
      sub_180027CD0(&v19);
      if ( *((_WORD *)v19 + 14) < v12 )
      {
        if ( *(_BYTE *)(v19[2] + 25) )
          sub_180067388(a1, a2, 0, v19, (int)a4, a5);
        else
          sub_180067388(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      v13 = *((_WORD *)a3 + 14) < v12;
    }
    if ( !v13 )
      goto LABEL_30;
    v14 = (__int64 **)a3[2];
    v15 = *((_BYTE *)v14 + 25);
    if ( v15 )
    {
      v14 = (__int64 **)a3[1];
      if ( !*((_BYTE *)v14 + 25) )
      {
        v16 = a3;
        do
        {
          v17 = (__int64 *)v14;
          if ( v16 != v14[2] )
            break;
          v14 = (__int64 **)v14[1];
          v16 = v17;
        }
        while ( !*((_BYTE *)v14 + 25) );
      }
    }
    else
    {
      for ( i = *v14; !*((_BYTE *)i + 25); i = (__int64 *)*i )
        v14 = (__int64 **)i;
    }
    if ( v14 != v9 && v12 >= *((_WORD *)v14 + 14) )
    {
LABEL_30:
      *a2 = *(_QWORD *)sub_180091248((_DWORD)a1, (unsigned int)&v21, 0, (_DWORD)a4, (__int64)a5);
      return a2;
    }
    if ( v15 )
      sub_180067388(a1, a2, 0, a3, (int)a4, a5);
    else
      sub_180067388(a1, a2, 1, v14, (int)a4, a5);
    return a2;
  }
  else
  {
    try
    {
      sub_180067388(a1, a2, 1, v9, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_180068230((__int64)v21, (__int64)v20);
      throw;
    }
  }
  return result;
}
