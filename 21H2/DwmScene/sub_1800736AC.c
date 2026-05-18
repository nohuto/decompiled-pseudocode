/*
 * XREFs of sub_1800736AC @ 0x1800736AC
 * Callers:
 *     sub_1800762E8 @ 0x1800762E8 (sub_1800762E8.c)
 * Callees:
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_180037974 @ 0x180037974 (sub_180037974.c)
 *     sub_180074A5C @ 0x180074A5C (sub_180074A5C.c)
 */

_QWORD *__fastcall sub_1800736AC(_QWORD *a1, _QWORD *a2, __int64 *a3, int *a4, __int64 *a5)
{
  __int64 **v9; // rdi
  __int64 *v11; // r9
  int v12; // r13d
  bool v13; // cc
  __int64 **v14; // r9
  char v15; // dl
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 *i; // rcx
  __int64 *v19[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v20; // [rsp+40h] [rbp-38h] BYREF

  v20 = a1;
  v19[1] = a5;
  v9 = (__int64 **)*a1;
  if ( !a1[1] )
  {
    sub_180037974(a1, a2, 1, v9, (int)a4, a5);
    return a2;
  }
  if ( a3 == *v9 )
  {
    if ( *a4 < *((_DWORD *)a3 + 8) )
    {
      sub_180037974(a1, a2, 1, a3, (int)a4, a5);
      return a2;
    }
    goto LABEL_31;
  }
  if ( a3 == (__int64 *)v9 )
  {
    v11 = v9[2];
    if ( *((_DWORD *)v11 + 8) < *a4 )
    {
      sub_180037974(a1, a2, 0, v11, (int)a4, a5);
      return a2;
    }
    goto LABEL_31;
  }
  v12 = *a4;
  v13 = *((_DWORD *)a3 + 8) < *a4;
  if ( *((_DWORD *)a3 + 8) > *a4 )
  {
    v19[0] = a3;
    sub_180027CD0(v19);
    if ( *((_DWORD *)v19[0] + 8) < v12 )
    {
      if ( *(_BYTE *)(v19[0][2] + 25) )
        sub_180037974(a1, a2, 0, v19[0], (int)a4, a5);
      else
        sub_180037974(a1, a2, 1, a3, (int)a4, a5);
      return a2;
    }
    v13 = *((_DWORD *)a3 + 8) < v12;
  }
  if ( !v13 )
    goto LABEL_31;
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
LABEL_31:
    *a2 = *(_QWORD *)sub_180074A5C((_DWORD)a1, (unsigned int)&v20, 0, (_DWORD)a4, (__int64)a5);
    return a2;
  }
  if ( v15 )
    sub_180037974(a1, a2, 0, a3, (int)a4, a5);
  else
    sub_180037974(a1, a2, 1, v14, (int)a4, a5);
  return a2;
}
