/*
 * XREFs of sub_180110B28 @ 0x180110B28
 * Callers:
 *     sub_180110E94 @ 0x180110E94 (sub_180110E94.c)
 * Callees:
 *     sub_1800E3598 @ 0x1800E3598 (sub_1800E3598.c)
 *     sub_1801109B4 @ 0x1801109B4 (sub_1801109B4.c)
 *     sub_180110D38 @ 0x180110D38 (sub_180110D38.c)
 */

__int64 *__fastcall sub_180110B28(__int64 *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 a5)
{
  __int64 *v6; // r9
  __int64 *v8; // r11
  __int64 **v9; // rdi
  __int64 v10; // rcx
  __int64 *result; // rax
  __int64 *v12; // r9
  __int64 v13; // rsi
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 *v16; // rcx
  __int64 *v17; // rdx
  _QWORD *v18; // r9
  int v19; // [rsp+20h] [rbp-28h]
  char v20; // [rsp+30h] [rbp-18h] BYREF
  __int64 **v21; // [rsp+50h] [rbp+8h] BYREF

  v6 = a3;
  v8 = a1;
  v9 = (__int64 **)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      if ( *a4 < a3[4] )
      {
        sub_1801109B4(a1, a2, 1, a3, v19, a5);
        return a2;
      }
      goto LABEL_31;
    }
    if ( a3 == (__int64 *)v9 )
    {
      v12 = v9[2];
      if ( v12[4] < *a4 )
      {
        sub_1801109B4(a1, a2, 0, v12, v19, a5);
        return a2;
      }
      goto LABEL_31;
    }
    v13 = *a4;
    if ( *a4 >= a3[4] )
      goto LABEL_26;
    v14 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v14 = (__int64 *)a3[2];
    }
    else
    {
      v15 = (__int64 *)*a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        v16 = (__int64 *)a3[1];
        if ( !*((_BYTE *)v16 + 25) )
        {
          v17 = a3;
          do
          {
            LODWORD(a3) = (_DWORD)v16;
            if ( v17 != (__int64 *)*v16 )
              break;
            v14 = v16;
            v16 = (__int64 *)v16[1];
            v17 = v14;
          }
          while ( !*((_BYTE *)v16 + 25) );
        }
        if ( !*((_BYTE *)v14 + 25) )
          v14 = v16;
      }
      else
      {
        do
        {
          v14 = v15;
          v15 = (__int64 *)v15[2];
        }
        while ( !*((_BYTE *)v15 + 25) );
      }
    }
    if ( v14[4] >= v13 )
    {
LABEL_26:
      if ( v6[4] >= v13 || (v21 = (__int64 **)v6, sub_1800E3598((__int64 *)&v21), v21 != v9) && v13 >= (__int64)v21[4] )
      {
LABEL_31:
        *a2 = *(_QWORD *)sub_180110D38((_DWORD)v8, (unsigned int)&v20, (_DWORD)a3, (_DWORD)a4, a5);
        return a2;
      }
      if ( *(_BYTE *)(v18[2] + 25LL) )
        sub_1801109B4(v8, a2, 0, v18, v19, a5);
      else
        sub_1801109B4(v8, a2, 1, v21, v19, a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(v14[2] + 25) )
        sub_1801109B4(v8, a2, 0, v14, v19, a5);
      else
        sub_1801109B4(v8, a2, 1, v6, v19, a5);
      return a2;
    }
  }
  else
  {
    try
    {
      sub_1801109B4(a1, a2, 1, v9, v19, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_180113C08(v10, a5);
      throw;
    }
  }
  return result;
}
