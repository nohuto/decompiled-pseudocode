/*
 * XREFs of sub_18009D690 @ 0x18009D690
 * Callers:
 *     sub_18009E580 @ 0x18009E580 (sub_18009E580.c)
 * Callees:
 *     sub_180022400 @ 0x180022400 (sub_180022400.c)
 *     sub_1800320A4 @ 0x1800320A4 (sub_1800320A4.c)
 *     sub_18009DCE0 @ 0x18009DCE0 (sub_18009DCE0.c)
 */

_QWORD *__fastcall sub_18009D690(__int64 **a1, _QWORD *a2, __int64 *a3, unsigned __int64 *a4, _QWORD *a5)
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
  __int64 *v19; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-40h]
  __int64 **v21; // [rsp+40h] [rbp-38h] BYREF

  v21 = a1;
  v20 = a5;
  v9 = *a1;
  if ( a1[1] )
  {
    if ( a3 == (__int64 *)*v9 )
    {
      if ( *a4 < a3[4] )
      {
        sub_1800320A4(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    if ( a3 == v9 )
    {
      v11 = (_QWORD *)v9[2];
      if ( v11[4] < *a4 )
      {
        sub_1800320A4(a1, a2, 0, v11, (int)a4, a5);
        return a2;
      }
      goto LABEL_30;
    }
    v12 = *a4;
    v13 = a3[4] < *a4;
    if ( a3[4] > *a4 )
    {
      v19 = a3;
      sub_180022400(&v19);
      if ( v19[4] < v12 )
      {
        if ( *(_BYTE *)(v19[2] + 25) )
          sub_1800320A4(a1, a2, 0, v19, (int)a4, a5);
        else
          sub_1800320A4(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      v13 = a3[4] < v12;
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
    if ( (__int64 *)v14 != v9 && v12 >= *(_QWORD *)(v14 + 32) )
    {
LABEL_30:
      *a2 = *(_QWORD *)sub_18009DCE0((_DWORD)a1, (unsigned int)&v21, 0, (_DWORD)a4, (__int64)a5);
      return a2;
    }
    if ( v15 )
      sub_1800320A4(a1, a2, 0, a3, (int)a4, a5);
    else
      sub_1800320A4(a1, a2, 1, (_QWORD *)v14, (int)a4, a5);
    return a2;
  }
  else
  {
    try
    {
      sub_1800320A4(a1, a2, 1, v9, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_180038644((__int64)v21, (__int64)v20);
      throw;
    }
  }
  return result;
}
