/*
 * XREFs of sub_18011F04C @ 0x18011F04C
 * Callers:
 *     sub_18011FC60 @ 0x18011FC60 (sub_18011FC60.c)
 *     sub_18011FD28 @ 0x18011FD28 (sub_18011FD28.c)
 * Callees:
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_18008F6B0 @ 0x18008F6B0 (sub_18008F6B0.c)
 *     sub_18011EBD8 @ 0x18011EBD8 (sub_18011EBD8.c)
 *     sub_18011F3D0 @ 0x18011F3D0 (sub_18011F3D0.c)
 */

_QWORD *__fastcall sub_18011F04C(_QWORD *a1, _QWORD *a2, char *a3, char *a4, _QWORD *a5)
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
      if ( (int)sub_18008F6B0(a4, (__int64)(a3 + 32)) < 0 )
      {
        sub_18011EBD8(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( a3 == (char *)v9 )
    {
      v11 = v9[2];
      if ( (int)sub_18008F6B0((char *)v11 + 32, (__int64)a4) < 0 )
      {
        sub_18011EBD8(a1, a2, 0, v11, (int)a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( (int)sub_18008F6B0(a4, (__int64)(a3 + 32)) >= 0
      || (v18 = a3, sub_180027CD0((__int64 **)&v18), v12 = v18, (int)sub_18008F6B0(v18 + 32, (__int64)a4) >= 0) )
    {
      if ( (int)sub_18008F6B0(a3 + 32, (__int64)a4) >= 0 )
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
      if ( v13 != v9 && (int)sub_18008F6B0(a4, (__int64)(v13 + 4)) >= 0 )
      {
LABEL_29:
        *a2 = *(_QWORD *)sub_18011F3D0((_DWORD)a1, (unsigned int)&v20, 0, (_DWORD)a4, (__int64)a5);
        return a2;
      }
      if ( v17 )
        sub_18011EBD8(a1, a2, 0, a3, (int)a4, a5);
      else
        sub_18011EBD8(a1, a2, 1, v13, (int)a4, a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(*((_QWORD *)v12 + 2) + 25LL) )
        sub_18011EBD8(a1, a2, 0, v12, (int)a4, a5);
      else
        sub_18011EBD8(a1, a2, 1, a3, (int)a4, a5);
      return a2;
    }
  }
  else
  {
    try
    {
      sub_18011EBD8(a1, a2, 1, v9, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_1801210B4(v20, v19);
      throw;
    }
  }
  return result;
}
