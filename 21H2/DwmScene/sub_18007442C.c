/*
 * XREFs of sub_18007442C @ 0x18007442C
 * Callers:
 *     sub_18007636C @ 0x18007636C (sub_18007636C.c)
 * Callees:
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_180037974 @ 0x180037974 (sub_180037974.c)
 *     sub_180075050 @ 0x180075050 (sub_180075050.c)
 *     __std_type_info_compare @ 0x180123988 (__std_type_info_compare.c)
 */

_QWORD *__fastcall sub_18007442C(_QWORD *a1, _QWORD *a2, __int64 *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 *v9; // rcx
  _QWORD *result; // rax
  __int64 *v11; // rdi
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rcx
  __int64 *v16; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-40h]
  _QWORD *v18; // [rsp+40h] [rbp-38h] BYREF

  v18 = a1;
  v17 = a5;
  v9 = (__int64 *)*a1;
  if ( a1[1] )
  {
    if ( a3 == (__int64 *)*v9 )
    {
      if ( (int)_std_type_info_compare(*a4 + 8LL, a3[4] + 8) < 0 )
      {
        sub_180037974(a1, a2, 1, a3, (int)a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( a3 == v9 )
    {
      if ( (int)_std_type_info_compare(*(_QWORD *)(v9[2] + 32) + 8LL, *a4 + 8LL) < 0 )
      {
        sub_180037974(a1, a2, 0, *(_QWORD **)(*a1 + 16LL), (int)a4, a5);
        return a2;
      }
      goto LABEL_29;
    }
    if ( (int)_std_type_info_compare(*a4 + 8LL, a3[4] + 8) >= 0
      || (v16 = a3, sub_180027CD0(&v16), v11 = v16, (int)_std_type_info_compare(v16[4] + 8, *a4 + 8LL) >= 0) )
    {
      if ( (int)_std_type_info_compare(a3[4] + 8, *a4 + 8LL) >= 0 )
        goto LABEL_29;
      v12 = a3[2];
      if ( *(_BYTE *)(v12 + 25) )
      {
        v12 = a3[1];
        if ( !*(_BYTE *)(v12 + 25) )
        {
          v13 = a3;
          do
          {
            v14 = (__int64 *)v12;
            if ( v13 != *(__int64 **)(v12 + 16) )
              break;
            v12 = *(_QWORD *)(v12 + 8);
            v13 = v14;
          }
          while ( !*(_BYTE *)(v12 + 25) );
        }
      }
      else
      {
        v15 = *(__int64 **)v12;
        if ( !*(_BYTE *)(*(_QWORD *)v12 + 25LL) )
        {
          do
          {
            v12 = (__int64)v15;
            v15 = (__int64 *)*v15;
          }
          while ( !*((_BYTE *)v15 + 25) );
        }
      }
      if ( v12 != *a1 && (int)_std_type_info_compare(*a4 + 8LL, *(_QWORD *)(v12 + 32) + 8LL) >= 0 )
      {
LABEL_29:
        *a2 = *(_QWORD *)sub_180075050((_DWORD)a1, (unsigned int)&v18, 0, (_DWORD)a4, (__int64)a5);
        return a2;
      }
      if ( *(_BYTE *)(a3[2] + 25) )
        sub_180037974(a1, a2, 0, a3, (int)a4, a5);
      else
        sub_180037974(a1, a2, 1, (_QWORD *)v12, (int)a4, a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(v11[2] + 25) )
        sub_180037974(a1, a2, 0, v11, (int)a4, a5);
      else
        sub_180037974(a1, a2, 1, a3, (int)a4, a5);
      return a2;
    }
  }
  else
  {
    try
    {
      sub_180037974(a1, a2, 1, v9, (int)a4, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_18003DF14((__int64)v18, (__int64)v17);
      throw;
    }
  }
  return result;
}
