/*
 * XREFs of sub_1800276A0 @ 0x1800276A0
 * Callers:
 *     sub_180027E34 @ 0x180027E34 (sub_180027E34.c)
 * Callees:
 *     sub_180022400 @ 0x180022400 (sub_180022400.c)
 *     sub_180027188 @ 0x180027188 (sub_180027188.c)
 *     sub_180027A70 @ 0x180027A70 (sub_180027A70.c)
 */

_QWORD *__fastcall sub_1800276A0(_QWORD *a1, _QWORD *a2, __int64 *a3, unsigned int *a4, _QWORD *a5)
{
  __int64 **v9; // rdi
  _QWORD *result; // rax
  __int64 *v11; // r9
  unsigned int v12; // r13d
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
      if ( *a4 < *((_DWORD *)a3 + 8) )
      {
        sub_180027188(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    if ( a3 == (__int64 *)v9 )
    {
      v11 = v9[2];
      if ( *((_DWORD *)v11 + 8) < *a4 )
      {
        sub_180027188(a1, a2, 0, v11, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    v12 = *a4;
    v13 = *((_DWORD *)a3 + 8) < *a4;
    if ( *((_DWORD *)a3 + 8) > *a4 )
    {
      v19 = a3;
      sub_180022400(&v19);
      if ( *((_DWORD *)v19 + 8) < v12 )
      {
        if ( *(_BYTE *)(v19[2] + 25) )
          sub_180027188(a1, a2, 0, v19, (int)a4, a5);
        else
          sub_180027188(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      v13 = *((_DWORD *)a3 + 8) < v12;
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
    if ( v14 != v9 && v12 >= *((_DWORD *)v14 + 8) )
    {
LABEL_30:
      *a2 = *(_QWORD *)sub_180027A70((_DWORD)a1, (unsigned int)&v21, 0, (_DWORD)a4, (__int64)a5);
      return a2;
    }
    if ( v15 )
      sub_180027188(a1, a2, 0, a3, (int)a4, a5);
    else
      sub_180027188(a1, a2, 1, v14, (int)a4, a5);
    return a2;
  }
  else
  {
    try
    {
      sub_180027188(a1, a2, 1, v9, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_18002B780(v21, v20);
      throw;
    }
  }
  return result;
}
