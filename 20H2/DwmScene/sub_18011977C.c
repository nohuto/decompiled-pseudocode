/*
 * XREFs of sub_18011977C @ 0x18011977C
 * Callers:
 *     sub_18011A390 @ 0x18011A390 (sub_18011A390.c)
 *     sub_18011A458 @ 0x18011A458 (sub_18011A458.c)
 * Callees:
 *     sub_180022400 @ 0x180022400 (sub_180022400.c)
 *     sub_180089DE0 @ 0x180089DE0 (sub_180089DE0.c)
 *     sub_180119308 @ 0x180119308 (sub_180119308.c)
 *     sub_180119B00 @ 0x180119B00 (sub_180119B00.c)
 */

_QWORD *__fastcall sub_18011977C(_QWORD *a1, _QWORD *a2, char *a3, char *a4, _QWORD *a5)
{
  __int64 **v9; // rdi
  _QWORD *result; // rax
  __int64 *v11; // rbx
  char *v12; // rsi
  __int64 **v13; // rsi
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 *i; // rcx
  char v17; // [rsp+30h] [rbp-68h]
  char *v18; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v19; // [rsp+40h] [rbp-58h]
  _QWORD *v20; // [rsp+48h] [rbp-50h] BYREF

  v20 = a1;
  v19 = a5;
  v9 = (__int64 **)*a1;
  if ( a1[1] )
  {
    if ( a3 == (char *)*v9 )
    {
      if ( (int)sub_180089DE0(a4, (__int64)(a3 + 32)) < 0 )
      {
        sub_180119308(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( a3 == (char *)v9 )
    {
      v11 = v9[2];
      if ( (int)sub_180089DE0((char *)v11 + 32, (__int64)a4) < 0 )
      {
        sub_180119308(a1, a2, 0, v11, (int)a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( (int)sub_180089DE0(a4, (__int64)(a3 + 32)) >= 0
      || (v18 = a3, sub_180022400((__int64 **)&v18), v12 = v18, (int)sub_180089DE0(v18 + 32, (__int64)a4) >= 0) )
    {
      if ( (int)sub_180089DE0(a3 + 32, (__int64)a4) >= 0 )
        goto LABEL_29;
      v13 = (__int64 **)*((_QWORD *)a3 + 2);
      v17 = *((_BYTE *)v13 + 25);
      if ( v17 )
      {
        v13 = (__int64 **)*((_QWORD *)a3 + 1);
        if ( !*((_BYTE *)v13 + 25) )
        {
          v14 = (__int64 *)a3;
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
      if ( v13 != v9 && (int)sub_180089DE0(a4, (__int64)(v13 + 4)) >= 0 )
      {
LABEL_29:
        *a2 = *(_QWORD *)sub_180119B00((_DWORD)a1, (unsigned int)&v20, 0, (_DWORD)a4, (__int64)a5);
        return a2;
      }
      if ( v17 )
        sub_180119308(a1, a2, 0, a3, (int)a4, a5);
      else
        sub_180119308(a1, a2, 1, v13, (int)a4, a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(*((_QWORD *)v12 + 2) + 25LL) )
        sub_180119308(a1, a2, 0, v12, (int)a4, a5);
      else
        sub_180119308(a1, a2, 1, a3, (int)a4, a5);
      return a2;
    }
  }
  else
  {
    try
    {
      sub_180119308(a1, a2, 1, v9, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_18011B7E4(v20, v19);
      throw;
    }
  }
  return result;
}
