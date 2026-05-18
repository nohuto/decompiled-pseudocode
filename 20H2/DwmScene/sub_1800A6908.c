/*
 * XREFs of sub_1800A6908 @ 0x1800A6908
 * Callers:
 *     sub_1800A6F0C @ 0x1800A6F0C (sub_1800A6F0C.c)
 * Callees:
 *     sub_180022400 @ 0x180022400 (sub_180022400.c)
 *     sub_1800A5D24 @ 0x1800A5D24 (sub_1800A5D24.c)
 *     sub_1800A667C @ 0x1800A667C (sub_1800A667C.c)
 *     sub_1800A6B2C @ 0x1800A6B2C (sub_1800A6B2C.c)
 */

_QWORD *__fastcall sub_1800A6908(_QWORD *a1, _QWORD *a2, __int64 *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 **v9; // rdi
  _QWORD *result; // rax
  __int64 *v11; // rbx
  __int64 *v12; // rsi
  __int64 **v13; // rsi
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 *i; // rcx
  char v17; // [rsp+30h] [rbp-68h]
  __int64 *v18; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v19; // [rsp+40h] [rbp-58h]
  _QWORD *v20; // [rsp+48h] [rbp-50h] BYREF

  v20 = a1;
  v19 = a5;
  v9 = (__int64 **)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      if ( sub_1800A5D24(a4, (__int64)(a3 + 4)) )
      {
        sub_1800A667C(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( a3 == (__int64 *)v9 )
    {
      v11 = v9[2];
      if ( sub_1800A5D24((_DWORD *)v11 + 8, (__int64)a4) )
      {
        sub_1800A667C(a1, a2, 0, v11, (int)a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( sub_1800A5D24(a4, (__int64)(a3 + 4))
      && (v18 = a3, sub_180022400(&v18), v12 = v18, sub_1800A5D24((_DWORD *)v18 + 8, (__int64)a4)) )
    {
      if ( *(_BYTE *)(v12[2] + 25) )
        sub_1800A667C(a1, a2, 0, v12, (int)a4, a5);
      else
        sub_1800A667C(a1, a2, 1, a3, (int)a4, a5);
      return a2;
    }
    else
    {
      if ( !sub_1800A5D24((_DWORD *)a3 + 8, (__int64)a4) )
        goto LABEL_29;
      v13 = (__int64 **)a3[2];
      v17 = *((_BYTE *)v13 + 25);
      if ( v17 )
      {
        v13 = (__int64 **)a3[1];
        if ( !*((_BYTE *)v13 + 25) )
        {
          v14 = a3;
          do
          {
            v15 = (__int64 *)v13;
            if ( v14 != v13[2] )
              break;
            v13 = (__int64 **)v13[1];
            v14 = v15;
          }
          while ( !*((_BYTE *)v13 + 25) );
        }
      }
      else
      {
        for ( i = *v13; !*((_BYTE *)i + 25); i = (__int64 *)*i )
          v13 = (__int64 **)i;
      }
      if ( v13 != v9 && !sub_1800A5D24(a4, (__int64)(v13 + 4)) )
      {
LABEL_29:
        *a2 = *(_QWORD *)sub_1800A6B2C((_DWORD)a1, (unsigned int)&v20, 0, (_DWORD)a4, (__int64)a5);
        return a2;
      }
      if ( v17 )
        sub_1800A667C(a1, a2, 0, a3, (int)a4, a5);
      else
        sub_1800A667C(a1, a2, 1, v13, (int)a4, a5);
      return a2;
    }
  }
  else
  {
    try
    {
      sub_1800A667C(a1, a2, 1, v9, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_1800AE0A4(v20, v19);
      throw;
    }
  }
  return result;
}
