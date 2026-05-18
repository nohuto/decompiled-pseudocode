/*
 * XREFs of sub_18008A90C @ 0x18008A90C
 * Callers:
 *     sub_18008AECC @ 0x18008AECC (sub_18008AECC.c)
 * Callees:
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_18008A680 @ 0x18008A680 (sub_18008A680.c)
 *     sub_18008AB40 @ 0x18008AB40 (sub_18008AB40.c)
 *     sub_18008F6B0 @ 0x18008F6B0 (sub_18008F6B0.c)
 */

_QWORD *__fastcall sub_18008A90C(__int64 **a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 *v9; // rdi
  _QWORD *result; // rax
  _QWORD *v11; // rbx
  __int64 *v12; // rsi
  __int64 v13; // rsi
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 i; // rcx
  char v17; // [rsp+30h] [rbp-68h]
  __int64 *v18; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v19; // [rsp+40h] [rbp-58h]
  __int64 **v20; // [rsp+48h] [rbp-50h] BYREF

  v20 = a1;
  v19 = a5;
  v9 = *a1;
  if ( a1[1] )
  {
    if ( a3 == (__int64 *)*v9 )
    {
      if ( (int)sub_18008F6B0(a4, a3 + 4) < 0 )
      {
        sub_18008A680(a1, a2, 1, a3, a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( a3 == v9 )
    {
      v11 = (_QWORD *)v9[2];
      if ( (int)sub_18008F6B0(v11 + 4, a4) < 0 )
      {
        sub_18008A680(a1, a2, 0, v11, a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( (int)sub_18008F6B0(a4, a3 + 4) >= 0
      || (v18 = a3, sub_180027CD0(&v18), v12 = v18, (int)sub_18008F6B0(v18 + 4, a4) >= 0) )
    {
      if ( (int)sub_18008F6B0(a3 + 4, a4) >= 0 )
        goto LABEL_29;
      v13 = a3[2];
      v17 = *(_BYTE *)(v13 + 25);
      if ( v17 )
      {
        v13 = a3[1];
        if ( !*(_BYTE *)(v13 + 25) )
        {
          v14 = a3;
          do
          {
            v15 = (__int64 *)v13;
            if ( v14 != *(__int64 **)(v13 + 16) )
              break;
            v13 = *(_QWORD *)(v13 + 8);
            v14 = v15;
          }
          while ( !*(_BYTE *)(v13 + 25) );
        }
      }
      else
      {
        for ( i = *(_QWORD *)v13; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
          v13 = i;
      }
      if ( (__int64 *)v13 != v9 && (int)sub_18008F6B0(a4, v13 + 32) >= 0 )
      {
LABEL_29:
        *a2 = *(_QWORD *)sub_18008AB40((_DWORD)a1, (unsigned int)&v20, 0, a4, (__int64)a5);
        return a2;
      }
      if ( v17 )
        sub_18008A680(a1, a2, 0, a3, a4, a5);
      else
        sub_18008A680(a1, a2, 1, (_QWORD *)v13, a4, a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(v12[2] + 25) )
        sub_18008A680(a1, a2, 0, v12, a4, a5);
      else
        sub_18008A680(a1, a2, 1, a3, a4, a5);
      return a2;
    }
  }
  else
  {
    try
    {
      sub_18008A680(a1, a2, 1, v9, a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_18008F378(v20, v19);
      throw;
    }
  }
  return result;
}
