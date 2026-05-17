/*
 * XREFs of _wcstoxq @ 0x4B2F7C71
 * Callers:
 *     __wcstoi64 @ 0x4B2F7C20 (__wcstoi64.c)
 *     __wcstoui64 @ 0x4B2F7C50 (__wcstoui64.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 *     __aulldvrm @ 0x4B2F6720 (__aulldvrm.c)
 *     __iswctype_l @ 0x4B2F86D6 (__iswctype_l.c)
 *     __wchartodigit @ 0x4B2FCED1 (__wchartodigit.c)
 *     __errno @ 0x4B33D420 (__errno.c)
 */

int __cdecl wcstoxq(int a1, wint_t *a2, wint_t **a3, int a4, int a5, int *a6)
{
  __int16 v6; // bx
  wint_t *v7; // esi
  wint_t v8; // ax
  int v9; // eax
  int v10; // eax
  wint_t v11; // ax
  unsigned __int16 v12; // bx
  unsigned __int64 v13; // kr00_8
  unsigned int v14; // edx
  unsigned int v15; // eax
  int v16; // ebx
  wint_t **v17; // ecx
  wint_t *v18; // esi
  int result; // eax
  int v20; // edx
  int v21; // ebx
  int v22; // eax
  bool v23; // cf
  int *v24; // eax
  int v25; // [esp-10h] [ebp-3Ch]
  __int64 v26; // [esp+0h] [ebp-2Ch]
  unsigned __int64 v27; // [esp+8h] [ebp-24h]
  unsigned __int16 v28; // [esp+1Ch] [ebp-10h]
  unsigned int v29; // [esp+1Ch] [ebp-10h]
  int v30; // [esp+20h] [ebp-Ch]
  __int64 v31; // [esp+24h] [ebp-8h]

  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (a4 < 2 || a4 > 36) )
  {
    _invalid_parameter();
    return 0;
  }
  v6 = *a2;
  v7 = a2 + 1;
  v28 = *a2;
  v31 = 0LL;
  if ( _iswctype_l(*a2, 8u, 0) )
  {
    do
    {
      do
        v8 = *v7++;
      while ( v8 == v6 );
      v6 = v8;
    }
    while ( _iswctype_l(v8, 8u, 0) );
    v28 = v6;
  }
  v9 = a5;
  if ( v6 == 45 )
  {
    v9 = a5 | 2;
  }
  else if ( v6 != 43 )
  {
    goto LABEL_15;
  }
  v6 = *v7++;
  v28 = v6;
LABEL_15:
  v30 = v9;
  v10 = a4;
  if ( a4 )
    goto LABEL_23;
  if ( !_wchartodigit(v6) )
  {
    if ( *v7 != 120 && *v7 != 88 )
    {
      v25 = 8;
      goto LABEL_18;
    }
    v10 = 16;
    a4 = 16;
LABEL_23:
    if ( v10 == 16 )
    {
      if ( !_wchartodigit(v6) && (*v7 == 120 || *v7 == 88) )
      {
        v11 = v7[1];
        v7 += 2;
        v28 = v11;
      }
      v10 = a4;
    }
    goto LABEL_29;
  }
  v25 = 10;
LABEL_18:
  v10 = v25;
  a4 = v25;
LABEL_29:
  v26 = v10;
  v12 = v28;
  v27 = 0xFFFFFFFFFFFFFFFFuLL % v10;
  v13 = 0xFFFFFFFFFFFFFFFFuLL / v10;
  while ( 1 )
  {
    v14 = _wchartodigit(v12);
    v29 = v14;
    if ( v14 != -1 )
      goto LABEL_43;
    if ( (v12 < 0x41u || v12 > 0x5Au) && (unsigned __int16)(v12 - 97) > 0x19u )
      break;
    v20 = v12;
    if ( (unsigned __int16)(v12 - 97) <= 0x19u )
      v20 = v12 - 32;
    v14 = v20 - 55;
    v29 = v14;
LABEL_43:
    LOBYTE(v16) = v30;
    v15 = v31;
    if ( v14 >= a4 )
      goto LABEL_35;
    v21 = v30 | 8;
    v30 |= 8u;
    if ( __PAIR64__(v31, HIDWORD(v31)) < v13 )
    {
      v29 = v14;
LABEL_50:
      v22 = (v29 + v26 * __PAIR64__(v31, HIDWORD(v31))) >> 32;
      HIDWORD(v31) = v29 + v26 * HIDWORD(v31);
      LODWORD(v31) = v22;
      goto LABEL_51;
    }
    if ( v31 == __PAIR64__(v13, HIDWORD(v13)) && v14 <= v27 )
      goto LABEL_50;
    v17 = a3;
    v16 = v21 | 4;
    v30 = v16;
    if ( !a3 )
      goto LABEL_36;
LABEL_51:
    v12 = *v7++;
  }
  v15 = v31;
  LOBYTE(v16) = v30;
LABEL_35:
  v17 = a3;
LABEL_36:
  v18 = v7 - 1;
  if ( (v16 & 8) == 0 )
  {
    if ( v17 )
      v18 = a2;
    result = 0;
    goto LABEL_70;
  }
  if ( (v16 & 4) == 0 )
  {
    if ( (v16 & 1) != 0 )
      goto LABEL_69;
    if ( (v16 & 2) != 0 )
    {
      v23 = v15 < 0x80000000;
      if ( v15 <= 0x80000000 )
      {
        result = HIDWORD(v31);
        if ( v23 || !HIDWORD(v31) )
          goto LABEL_70;
      }
      goto LABEL_62;
    }
    if ( v15 < 0x7FFFFFFF )
    {
LABEL_69:
      result = HIDWORD(v31);
      goto LABEL_70;
    }
    if ( v15 <= 0x7FFFFFFF )
    {
      result = HIDWORD(v31);
      goto LABEL_70;
    }
  }
LABEL_62:
  v24 = a6;
  if ( !a6 )
    v24 = _errno();
  *v24 = 34;
  if ( (v16 & 1) != 0 )
  {
    result = -1;
  }
  else if ( (v16 & 2) != 0 )
  {
    result = 0;
  }
  else
  {
    result = -1;
  }
LABEL_70:
  if ( a3 )
    *a3 = v18;
  if ( (v16 & 2) != 0 )
    return -result;
  return result;
}
