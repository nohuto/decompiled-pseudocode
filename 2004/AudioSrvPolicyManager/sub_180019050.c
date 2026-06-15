/*
 * XREFs of sub_180019050 @ 0x180019050
 * Callers:
 *     sub_1800133CC @ 0x1800133CC (sub_1800133CC.c)
 * Callees:
 *     sub_180017C9C @ 0x180017C9C (sub_180017C9C.c)
 *     sub_18001934C @ 0x18001934C (sub_18001934C.c)
 *     sub_1800195E0 @ 0x1800195E0 (sub_1800195E0.c)
 */

_QWORD *__fastcall sub_180019050(_QWORD *a1, _QWORD *a2, _QWORD *a3, char *a4, __int64 a5)
{
  _QWORD *v6; // rbx
  int v8; // r14d
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  int v11; // r8d
  _QWORD *result; // rax
  int v13; // r11d
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *i; // r11
  _QWORD *j; // rax
  int v18; // r8d
  __int64 v19; // r11
  __int64 m; // rcx
  __int64 v21; // rax
  __int64 k; // r11
  char v23; // r12
  char v24; // [rsp+30h] [rbp-28h] BYREF

  v6 = a3;
  v8 = (int)a1;
  v9 = (_QWORD *)*a1;
  if ( a1[1] )
  {
    if ( a3 == (_QWORD *)*v9 )
    {
      if ( (unsigned __int8)sub_180017C9C((__int64)a1, a4, (__int64)(a3 + 4)) )
      {
        LOBYTE(v11) = 1;
        sub_18001934C(v8, (_DWORD)a2, v11, (_DWORD)v6);
        return a2;
      }
      goto LABEL_42;
    }
    if ( a3 == v9 )
    {
      if ( (unsigned __int8)sub_180017C9C((__int64)a1, (char *)(v9[2] + 32LL), (__int64)a4) )
      {
        sub_18001934C(v8, (_DWORD)a2, 0, v13);
        return a2;
      }
      goto LABEL_42;
    }
    if ( !(unsigned __int8)sub_180017C9C((__int64)a1, a4, (__int64)(a3 + 4)) )
      goto LABEL_51;
    v15 = v6;
    if ( *((_BYTE *)v6 + 25) )
    {
      i = (_QWORD *)v6[2];
    }
    else
    {
      i = (_QWORD *)*v6;
      if ( *(_BYTE *)(*v6 + 25LL) )
      {
        for ( i = (_QWORD *)v6[1]; !*((_BYTE *)i + 25) && v15 == (_QWORD *)*i; i = (_QWORD *)i[1] )
          v15 = i;
        if ( *((_BYTE *)v15 + 25) )
          i = v15;
      }
      else
      {
        for ( j = (_QWORD *)i[2]; !*((_BYTE *)j + 25); j = (_QWORD *)j[2] )
          i = j;
      }
    }
    if ( (unsigned __int8)sub_180017C9C(v14, (char *)i + 32, (__int64)a4) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v19 + 16) + 25LL) )
      {
        sub_18001934C(v8, (_DWORD)a2, 0, v19);
      }
      else
      {
        LOBYTE(v18) = 1;
        sub_18001934C(v8, (_DWORD)a2, v18, (_DWORD)v6);
      }
      return a2;
    }
    else
    {
LABEL_51:
      if ( !(unsigned __int8)sub_180017C9C(v14, (char *)v6 + 32, (__int64)a4) )
        goto LABEL_42;
      v21 = (__int64)v6;
      k = v6[2];
      v23 = *(_BYTE *)(k + 25);
      if ( v23 )
      {
        for ( k = v6[1]; !*(_BYTE *)(k + 25) && v21 == *(_QWORD *)(k + 16); k = *(_QWORD *)(k + 8) )
          v21 = k;
      }
      else
      {
        for ( m = *(_QWORD *)k; !*(_BYTE *)(m + 25); m = *(_QWORD *)m )
          k = m;
      }
      if ( (_QWORD *)k != v9 && !(unsigned __int8)sub_180017C9C(m, a4, k + 32) )
      {
LABEL_42:
        *a2 = *(_QWORD *)sub_1800195E0(v8, (unsigned int)&v24, v11, (_DWORD)a4, a5);
        return a2;
      }
      if ( v23 )
      {
        sub_18001934C(v8, (_DWORD)a2, 0, (_DWORD)v6);
      }
      else
      {
        LOBYTE(v11) = 1;
        sub_18001934C(v8, (_DWORD)a2, v11, k);
      }
      return a2;
    }
  }
  else
  {
    try
    {
      LOBYTE(a3) = 1;
      sub_18001934C((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)v9);
      result = a2;
    }
    catch ( ... )
    {
      sub_180019300(v10, a5);
      throw;
    }
  }
  return result;
}
